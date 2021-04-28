/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/Versions/A/ClassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKitUI/ClassKitUI-Structs.h>
#import <AppKit/NSWindow.h>

@class NSView, NSImageView, NSTextField;

@interface CLSNotificationBannerWindow : NSWindow {

	NSView* _iconContainerView;
	NSImageView* _iconView;
	NSTextField* _label;

}

@property (assign,nonatomic,__weak) NSView * contentView; 
@property (assign,nonatomic,__weak) NSView * iconContainerView;              //@synthesize iconContainerView=_iconContainerView - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * iconView;                  //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * label;                     //@synthesize label=_label - In the implementation block
+(id)queue;
+(id)bundle;
+(id)semaphore;
+(id)notificationBannerWithTitle:(id)arg1 message:(id)arg2 ;
-(NSTextField *)label;
-(void)setLabel:(NSTextField *)arg1 ;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(void)sendEvent:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(id)icon;
-(NSImageView *)iconView;
-(void)setIconView:(NSImageView *)arg1 ;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showForDuration:(double)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSView *)iconContainerView;
-(void)setIconContainerView:(NSView *)arg1 ;
@end
