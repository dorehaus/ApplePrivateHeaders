/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface PKSpringAnimationFactory : NSObject {

	double _duration;
	char _needsDurationUpdate;
	double _mass;
	double _stiffness;
	double _damping;
	double _velocity;
	CAMediaTimingFunction* _timing;

}

@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double mass;                                 //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                            //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                              //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double velocity;                             //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timing;              //@synthesize timing=_timing - In the implementation block
+(double)defaultDuration;
+(id)springAnimationWithKeyPath:(id)arg1 ;
+(id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2 ;
+(id)defaultTimingFunction;
-(void)dealloc;
-(id)init;
-(double)duration;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)velocity;
-(double)stiffness;
-(void)setVelocity:(double)arg1 ;
-(double)mass;
-(double)damping;
-(CAMediaTimingFunction *)timing;
-(void)setTiming:(CAMediaTimingFunction *)arg1 ;
-(id)springAnimationWithKeyPath:(id)arg1 ;
-(id)initWithVelocity:(double)arg1 ;
-(id)initWithVelocity:(double)arg1 timing:(id)arg2 ;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5 ;
-(id)_springAnimationWithKeyPath:(id)arg1 ;
-(void)_updateDurationIfNecessary;
-(id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 ;
-(id)_timingFunctionForAnimation;
@end

