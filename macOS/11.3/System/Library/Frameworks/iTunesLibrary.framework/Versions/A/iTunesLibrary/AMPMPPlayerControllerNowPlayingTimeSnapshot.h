/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/iTunesLibrary.framework/Versions/A/iTunesLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AMPMPPlayerControllerNowPlayingTimeSnapshot : NSObject <NSSecureCoding> {

	double _elapsedTime;
	double _duration;
	double _timestamp;
	char _live;
	float _rate;
	double _timeStamp;
	long long _state;

}

@property (getter=isLive,nonatomic,readonly) char live;              //@synthesize live=_live - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double timeStamp;                     //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float rate;                           //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) long long state;                      //@synthesize state=_state - In the implementation block
+(char)supportsSecureCoding;
+(id)liveSnapshotWithRate:(float)arg1 state:(long long)arg2 ;
+(id)snapshotWithElapsedTime:(double)arg1 duration:(double)arg2 rate:(float)arg3 atTimestamp:(double)arg4 state:(long long)arg5 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)_init;
-(double)duration;
-(double)currentTime;
-(float)rate;
-(double)timeStamp;
-(char)isLive;
@end

