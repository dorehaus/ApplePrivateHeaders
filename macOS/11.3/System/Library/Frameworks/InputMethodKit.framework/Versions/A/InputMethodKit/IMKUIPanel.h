/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <AppKit/NSPanel.h>

@class NSView, NSVisualEffectView;

@interface IMKUIPanel : NSPanel {

	NSView* _accessibilityHitTestView;
	NSView* _clipView;
	NSVisualEffectView* _effectView;

}

@property (nonatomic,retain) NSView * clipView;                                     //@synthesize clipView=_clipView - In the implementation block
@property (nonatomic,retain) NSVisualEffectView * effectView;                       //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic,__weak) NSView * accessibilityHitTestView;              //@synthesize accessibilityHitTestView=_accessibilityHitTestView - In the implementation block
-(void)setWindowFrame:(CGRect)arg1 animation:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 flipped:(char)arg5 ;
-(void)animateWindowFrameForExtension:(CGRect)arg1 ;
-(void)updateClipViewWithFrame:(CGRect)arg1 ;
-(void)logViewsWithNumberOfTabs:(unsigned long long)arg1 view:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 flipped:(char)arg2 ;
-(id)initWithUpdateLayerUsingFrame:(CGRect)arg1 ;
-(void)logViewHierarchy;
-(NSView *)accessibilityHitTestView;
-(void)setAccessibilityHitTestView:(NSView *)arg1 ;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(id)accessibilitySubroleAttribute;
-(id)accessibilityTitle;
-(NSView *)clipView;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 animate:(char)arg3 ;
-(NSVisualEffectView *)effectView;
-(void)setEffectView:(NSVisualEffectView *)arg1 ;
-(void)setClipView:(NSView *)arg1 ;
@end

