/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/Versions/A/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RecapPerformanceTesting/RecapPerformanceTesting-Structs.h>
#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/RPTComposer.h>

@protocol RCPEventStreamComposer;
@class RPTInteractionOptions, NSString, RCPEventSenderProperties;

@interface RPTDefaultPointerAndFingerInteroppingComposer : NSProxy <RPTComposer> {

	char __usePointer;
	RPTInteractionOptions* _interactionOptions;
	id<RCPEventStreamComposer> _forwardingTarget;
	CGPoint __currentlySetAbsolutePosition;

}

@property (nonatomic,readonly) char _usePointer;                                                //@synthesize _usePointer=__usePointer - In the implementation block
@property (nonatomic,retain,readonly) id<RCPEventStreamComposer> forwardingTarget;              //@synthesize forwardingTarget=_forwardingTarget - In the implementation block
@property (assign,nonatomic) CGPoint _currentlySetAbsolutePosition;                             //@synthesize _currentlySetAbsolutePosition=__currentlySetAbsolutePosition - In the implementation block
@property (nonatomic,readonly) RPTInteractionOptions * interactionOptions;                      //@synthesize interactionOptions=_interactionOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long touchFrequency; 
@property (nonatomic,readonly) double defaultPressure; 
@property (nonatomic,readonly) double defaultRadius; 
@property (nonatomic,retain) RCPEventSenderProperties * senderProperties; 
+(id)composerWrapping:(id)arg1 withInteractionOptions:(id)arg2 ;
-(char)conformsToProtocol:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)pointerMoveToPointIfApplicable:(CGPoint)arg1 ;
-(void)pointerOrFingerTapDown:(CGPoint)arg1 ;
-(void)pointerOrFingerMoveToPoint:(CGPoint)arg1 duration:(double)arg2 ;
-(void)pointerOrFingerTapUp:(CGPoint)arg1 ;
-(RPTInteractionOptions *)interactionOptions;
-(void)pointerOrFingerScrollAt:(CGPoint)arg1 byDelta:(CGVector)arg2 duration:(double)arg3 ;
-(id)initFromWrapping:(id)arg1 interactionOptions:(id)arg2 ;
-(void)_pointerOrFingerScrollAt:(CGPoint)arg1 byDelta:(CGVector)arg2 duration:(double)arg3 touchDownAndLift:(char)arg4 ;
-(void)pointerMoveToPoint:(CGPoint)arg1 duration:(double)arg2 ;
-(void)pointerMoveDelta:(CGPoint)arg1 duration:(double)arg2 frequency:(long long)arg3 ;
-(void)pointerOrFingerDragWithStartPoint:(CGPoint)arg1 mask:(unsigned long long)arg2 endPoint:(CGPoint)arg3 mask:(unsigned long long)arg4 duration:(double)arg5 ;
-(void)pointerOrFingerTap:(CGPoint)arg1 ;
-(void)pointerOrFingerDoubleTap:(CGPoint)arg1 ;
-(void)overrideInteractionOptions:(id)arg1 withEventActionsBlock:(/*^block*/id)arg2 ;
-(CGPoint)_currentlySetAbsolutePosition;
-(void)set_currentlySetAbsolutePosition:(CGPoint)arg1 ;
-(char)_usePointer;
-(id<RCPEventStreamComposer>)forwardingTarget;
@end

