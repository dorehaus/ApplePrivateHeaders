/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSMenuItem.h>

@protocol QLPreviewMenuItemDelegate;
@class QLAnimationWindowEffect, QLPreviewBubble;

@interface QLPreviewMenuItem : NSMenuItem {

	long long _previewStyle;
	QLAnimationWindowEffect* _animationWindowEffect;
	id<QLPreviewMenuItemDelegate> _delegate;
	QLPreviewBubble* _previewBubble;
	char _previewPanelIsSetUp;
	unsigned long long _deepClickPhase;

}

@property (assign) unsigned long long deepClickPhase;                   //@synthesize deepClickPhase=_deepClickPhase - In the implementation block
@property (assign) id<QLPreviewMenuItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long previewStyle;                              //@synthesize previewStyle=_previewStyle - In the implementation block
-(void)_openPreview;
-(void)_setUpForAnimationFromPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_completeOpenAnimation;
-(unsigned long long)deepClickPhase;
-(void)_invokePreviewPanelOpenAnimation:(id)arg1 ;
-(long long)previewStyle;
-(void)setDeepClickPhase:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id<QLPreviewMenuItemDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<QLPreviewMenuItemDelegate>)arg1 ;
-(void)_beginPredeepAnimationAgainstPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_doPredeepAnimationWithProgress:(double)arg1 ;
-(void)_cancelPredeepAnimation;
-(void)_completeDeepAnimation;
-(void)_releaseDeepAnimation;
-(char)_wantsDeepAnimationCallbacks;
-(void)setPreviewStyle:(long long)arg1 ;
@end

