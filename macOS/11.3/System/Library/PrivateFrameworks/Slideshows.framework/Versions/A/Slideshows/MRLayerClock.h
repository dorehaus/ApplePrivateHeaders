/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCPlugTiming.h>

@interface MRLayerClock : NSObject <MCPlugTiming> {

	double _internalTimeOffset;
	double _externalTimeForPauseInversion;
	unsigned long long _flags;
	double _externalTime;
	double _phaseInDuration;
	double _loopDuration;
	double _phaseOutDuration;
	double _numberOfLoops;
	double _containerTime;
	double _containerDuration;
	long long _currentLoopIndex;

}

@property (assign,nonatomic) double externalTime;                       //@synthesize externalTime=_externalTime - In the implementation block
@property (assign,nonatomic) double fullDuration; 
@property (assign,nonatomic) double containerTime;                      //@synthesize containerTime=_containerTime - In the implementation block
@property (nonatomic,readonly) double containerDuration;                //@synthesize containerDuration=_containerDuration - In the implementation block
@property (nonatomic,readonly) long long currentLoopIndex;              //@synthesize currentLoopIndex=_currentLoopIndex - In the implementation block
@property (readonly) char _isPaused; 
@property (nonatomic,readonly) char isPaused; 
@property (nonatomic,readonly) char jumpedBackInTime; 
@property (nonatomic,readonly) char isInPhaseIn; 
@property (nonatomic,readonly) char isInPhaseOut; 
@property (assign,nonatomic) char parentIsPaused; 
@property (readonly) char selfIsPaused; 
@property (assign,nonatomic) double phaseInDuration;                    //@synthesize phaseInDuration=_phaseInDuration - In the implementation block
@property (assign,nonatomic) double loopDuration;                       //@synthesize loopDuration=_loopDuration - In the implementation block
@property (assign,nonatomic) double phaseOutDuration;                   //@synthesize phaseOutDuration=_phaseOutDuration - In the implementation block
@property (assign,nonatomic) double numberOfLoops;                      //@synthesize numberOfLoops=_numberOfLoops - In the implementation block
-(char)_isPaused;
-(char)isPaused;
-(void)deactivate;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)fullDuration;
-(double)numberOfLoops;
-(double)loopDuration;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setLoopDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)setFullDuration:(double)arg1 ;
-(double)externalTime;
-(id)initWithPlug:(id)arg1 ;
-(void)reactivateWithPlug:(id)arg1 ;
-(long long)currentLoopIndex;
-(char)isInPhaseOut;
-(void)syncToPlug:(id)arg1 ;
-(void)updateForExternalTime:(double)arg1 ;
-(void)setParentIsPaused:(char)arg1 ;
-(double)containerTime;
-(char)jumpedBackInTime;
-(void)pauseOnNextUpdate;
-(void)resumeOnNextUpdate;
-(void)resumeAfter:(double)arg1 ;
-(void)setExternalTime:(double)arg1 ;
-(void)setContainerTime:(double)arg1 ;
-(char)selfIsPaused;
-(void)pauseAfter:(double)arg1 ;
-(char)parentIsPaused;
-(char)isInPhaseIn;
-(double)containerDuration;
@end
