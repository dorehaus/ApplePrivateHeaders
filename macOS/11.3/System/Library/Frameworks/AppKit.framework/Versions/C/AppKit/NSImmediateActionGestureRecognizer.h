/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSGestureRecognizer.h>

@class NSEvent, NSForceClickMonitor;

@interface NSImmediateActionGestureRecognizer : NSGestureRecognizer {

	long long _flags;
	CGPoint _location;
	CGPoint _startLocation;
	long long _style;
	NSEvent* _startEvent;
	NSForceClickMonitor* _forceClickMonitor;
	id _animationController;

}
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)_delegate;
-(long long)style;
-(void)reset;
-(void)setStyle:(long long)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressureChangeWithEvent:(id)arg1 ;
-(id)_desiredPressureBehavior;
-(char)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
-(char)shouldBeArchived;
-(void)otherMouseDown:(id)arg1 ;
-(double)animationProgress;
-(void)quickLookWithEvent:(id)arg1 ;
-(void)setAnimationController:(id)arg1 ;
-(id)animationController;
-(unsigned long long)_acceptedEventMask;
-(char)_delegateShouldAttemptToRecognizeWithEvent:(id)arg1 ;
-(id)_forceClickMonitor;
-(id)_startEvent;
-(void)_didSendActions;
-(char)_shouldSendActionWhenPossibleConcurrentlyWithRecognizer:(id)arg1 ;
-(char)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
@end

