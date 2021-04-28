/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSAnimation.h>

@class CASpringAnimation, CAMediaTimingFunction;

@interface NSSpringAnimation : NSAnimation {

	CASpringAnimation* _animation;

}

@property (assign) double mass; 
@property (assign) double stiffness; 
@property (assign) double damping; 
@property (assign) double velocity; 
@property (retain) CAMediaTimingFunction * timingFunction; 
-(void)dealloc;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2 ;
-(void)startAnimation;
-(float)currentValue;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)velocity;
-(CAMediaTimingFunction *)timingFunction;
-(double)stiffness;
-(id)initWithDuration:(double)arg1 ;
-(double)durationForEpsilon:(double)arg1 ;
-(void)setVelocity:(double)arg1 ;
-(double)mass;
-(double)damping;
@end

