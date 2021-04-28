/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFTimer.h>

@interface HMFExponentialBackoffTimer : HMFTimer {

	char _increasing;
	double _minimumTimeInterval;
	double _maximumTimeInterval;
	long long _exponentialFactor;

}

@property (getter=isIncreasing,nonatomic,readonly) char increasing;              //@synthesize increasing=_increasing - In the implementation block
@property (nonatomic,readonly) double minimumTimeInterval;                       //@synthesize minimumTimeInterval=_minimumTimeInterval - In the implementation block
@property (nonatomic,readonly) double maximumTimeInterval;                       //@synthesize maximumTimeInterval=_maximumTimeInterval - In the implementation block
@property (nonatomic,readonly) long long exponentialFactor;                      //@synthesize exponentialFactor=_exponentialFactor - In the implementation block
-(double)timeInterval;
-(void)reset;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(void)__fire;
-(id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4 ;
-(char)isIncreasing;
-(long long)exponentialFactor;
-(double)maximumTimeInterval;
-(double)minimumTimeInterval;
@end
