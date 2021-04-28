/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ButtonPlus.h>

@protocol RolloverTrackingButtonDelegate;
@class NSTrackingArea;

@interface RolloverTrackingButton : ButtonPlus {

	NSTrackingArea* _trackingArea;
	id _flagsChangedEventMonitor;
	char _mouseOver;
	char _trackingRectUpdatePending;
	char _usesRolloverAppearanceInInactiveWindow;
	char _usesRolloverAppearanceOnMouseDown;
	char _usesRolloverAppearanceWhenFirstResponder;
	char _redrawOnMouseEnteredAndExited;
	char _useRolloverAppearanceNow;
	char _trackingMouseDown;
	id<RolloverTrackingButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RolloverTrackingButtonDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char usesRolloverAppearanceInInactiveWindow;                      //@synthesize usesRolloverAppearanceInInactiveWindow=_usesRolloverAppearanceInInactiveWindow - In the implementation block
@property (assign,nonatomic) char usesRolloverAppearanceOnMouseDown;                           //@synthesize usesRolloverAppearanceOnMouseDown=_usesRolloverAppearanceOnMouseDown - In the implementation block
@property (assign,nonatomic) char usesRolloverAppearanceWhenFirstResponder;                    //@synthesize usesRolloverAppearanceWhenFirstResponder=_usesRolloverAppearanceWhenFirstResponder - In the implementation block
@property (assign,nonatomic) char redrawOnMouseEnteredAndExited;                               //@synthesize redrawOnMouseEnteredAndExited=_redrawOnMouseEnteredAndExited - In the implementation block
@property (assign,nonatomic) char useRolloverAppearanceNow;                                    //@synthesize useRolloverAppearanceNow=_useRolloverAppearanceNow - In the implementation block
@property (getter=isTrackingMouseDown,nonatomic,readonly) char trackingMouseDown;              //@synthesize trackingMouseDown=_trackingMouseDown - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<RolloverTrackingButtonDelegate>)delegate;
-(void)setDelegate:(id<RolloverTrackingButtonDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)canBecomeKeyView;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)_finishInitialization;
-(void)updateMouseIsOver;
-(char)isTrackingMouseDown;
-(void)updateMouseIsOver:(int)arg1 ;
-(void)didBecomeActiveFirstResponder;
-(void)didResignActiveFirstResponder;
-(void)setRedrawOnMouseEnteredAndExited:(char)arg1 ;
-(char)shouldUseRolloverAppearance;
-(void)setUseRolloverAppearanceNow:(char)arg1 ;
-(char)usesRolloverAppearanceWhenFirstResponder;
-(void)setUsesRolloverAppearanceWhenFirstResponder:(char)arg1 ;
-(char)redrawOnMouseEnteredAndExited;
-(char)useRolloverAppearanceNow;
-(char)mouseIsOver;
-(void)_removeFlagsChangedEventMonitorIfNecessary;
-(void)_addFlagsChangedEventMonitorIfNecessary;
-(void)mouseEnteredOrExited:(char)arg1 ;
-(char)usesRolloverAppearanceInInactiveWindow;
-(void)setUsesRolloverAppearanceInInactiveWindow:(char)arg1 ;
-(char)usesRolloverAppearanceOnMouseDown;
-(void)setUsesRolloverAppearanceOnMouseDown:(char)arg1 ;
@end

