/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol AVTimeControlling;
@class AVTimer;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {

	id<AVTimeControlling> _playerController;
	double _interval;
	double _resolution;
	double _currentTime;
	AVTimer* _timer;
	double _minTime;
	double _maxTime;

}

@property (assign) double targetTime; 
@property (assign) double targetTimeWithinEndTimes; 
@property (readonly) double remainingTargetTimeWithinEndTimes; 
@property (assign) double currentTimeWithinEndTimes; 
@property (readonly) double remainingTime; 
@property (readonly) double remainingTimeWithinEndTimes; 
@property (readonly) double seekableTimeRangeDuration; 
@property (getter=isCurrentTimeAtEndOfSeekableTimeRanges,readonly) char currentTimeAtEndOfSeekableTimeRanges; 
@property (assign) double minTime;                                                                                         //@synthesize minTime=_minTime - In the implementation block
@property (assign) double maxTime;                                                                                         //@synthesize maxTime=_maxTime - In the implementation block
@property (retain) id<AVTimeControlling> playerController; 
@property (assign) double interval; 
@property (assign) double resolution; 
@property (assign) double currentTime; 
+(void)initialize;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(char)automaticallyNotifiesObserversOfCurrentTime;
+(id)keyPathsForValuesAffectingTargetTime;
+(id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTime;
+(id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingSeekableTimeRangeDuration;
+(id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(double)remainingTime;
-(double)resolution;
-(void)setResolution:(double)arg1 ;
-(void)setPlayerController:(id<AVTimeControlling>)arg1 ;
-(double)minTime;
-(double)maxTime;
-(double)currentTimeWithinEndTimes;
-(void)setCurrentTimeWithinEndTimes:(double)arg1 ;
-(id<AVTimeControlling>)playerController;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(double)seekableTimeRangeDuration;
-(double)targetTime;
-(void)setTargetTime:(double)arg1 ;
-(double)targetTimeWithinEndTimes;
-(void)setTargetTimeWithinEndTimes:(double)arg1 ;
-(double)remainingTargetTimeWithinEndTimes;
-(double)remainingTimeWithinEndTimes;
-(char)isCurrentTimeAtEndOfSeekableTimeRanges;
@end
