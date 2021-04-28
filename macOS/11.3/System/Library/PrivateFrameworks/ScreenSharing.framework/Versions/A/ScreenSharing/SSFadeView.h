/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <AppKit/NSView.h>

@protocol SSFadeViewDelegate;
@class NSObject, NSTimer, SSNotificationOverlayViewController;

@interface SSFadeView : NSView {

	float currentAlpha;
	char wantsSpinner;
	float maxAlpha;
	NSObject*<SSFadeViewDelegate> delegate;
	NSTimer* _animationTimer;
	SSNotificationOverlayViewController* _overlayNotificationViewController;

}

@property (retain) NSTimer * animationTimer;                                                             //@synthesize animationTimer=_animationTimer - In the implementation block
@property (retain) SSNotificationOverlayViewController * overlayNotificationViewController;              //@synthesize overlayNotificationViewController=_overlayNotificationViewController - In the implementation block
@property (assign) NSObject*<SSFadeViewDelegate> delegate; 
@property (assign) char wantsSpinner; 
@property (assign) float maxAlpha; 
-(void)dealloc;
-(NSObject*<SSFadeViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<SSFadeViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(float)maxAlpha;
-(void)setOverlayNotificationViewController:(SSNotificationOverlayViewController *)arg1 ;
-(SSNotificationOverlayViewController *)overlayNotificationViewController;
-(void)addStaticViewWithMessage:(id)arg1 image:(id)arg2 ;
-(void)setWantsSpinner:(char)arg1 ;
-(void)setMaxAlpha:(float)arg1 ;
-(void)viewDidBecomeOverlay;
-(void)viewWillResignOverlay:(char)arg1 ;
-(void)updateFrameAndRedraw;
-(void)animateFadeIn:(id)arg1 ;
-(void)animateFadeOut:(id)arg1 ;
-(void)addSpinnerView;
-(void)addOverlayBoxWithMessage:(id)arg1 ;
-(char)wantsSpinner;
@end

