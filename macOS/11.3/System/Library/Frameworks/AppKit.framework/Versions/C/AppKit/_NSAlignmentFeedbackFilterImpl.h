/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSAlignmentFeedbackFilter, NSTimer;

@interface _NSAlignmentFeedbackFilterImpl : NSObject {

	NSAlignmentFeedbackFilter* _filter;
	long long _flags;
	id _velocityFilter;
	double _currentTimestamp;
	double _lastMovementTimestamp;
	CGPoint _currentLocation;
	unsigned long long _currentModifierFlags;
	NSTimer* _periodicUpdateTimer;
	double _lastAcceptVelocityTime;
	double _snapDistance;

}
+(unsigned long long)inputEventMask;
-(void)dealloc;
-(void)_reset;
-(void)updateWithEvent:(id)arg1 ;
-(void)_clearPeriodicTimer;
-(void)_updateDragOnLocation:(CGPoint)arg1 timestamp:(double)arg2 modifierFlags:(unsigned long long)arg3 recognizer:(id)arg4 ;
-(void)updateWithPanRecognizer:(id)arg1 ;
-(char)_modifierFlagsAllowAlignment;
-(char)_isHorizontalVelocityAlignable;
-(char)_isVerticalVelocityAlignable;
-(void)_schedulePeriodicUpdateWithRecognizer:(id)arg1 ;
-(void)_requestPeriodicUpdate;
-(void)_setSnapDistance:(double)arg1 ;
-(/*^block*/id)_actuationBlock;
-(id)initWithFilter:(id)arg1 ;
-(void)_setActuationBlock:(/*^block*/id)arg1 coalesce:(char)arg2 ;
-(id)alignmentFeedbackTokenForMovementInView:(id)arg1 previousPoint:(CGPoint)arg2 alignedPoint:(CGPoint)arg3 defaultPoint:(CGPoint)arg4 ;
-(id)alignmentFeedbackTokenForHorizontalMovementInView:(id)arg1 previousX:(double)arg2 alignedX:(double)arg3 defaultX:(double)arg4 ;
-(id)alignmentFeedbackTokenForVerticalMovementInView:(id)arg1 previousY:(double)arg2 alignedY:(double)arg3 defaultY:(double)arg4 ;
-(void)performFeedback:(id)arg1 performanceTime:(unsigned long long)arg2 ;
@end

