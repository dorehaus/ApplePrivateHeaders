/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/Versions/A/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AWDHistogram : NSObject {

	unsigned* histogram;
	unsigned* buckets;
	float* floatBuckets;
	unsigned size;

}
-(void)dealloc;
-(id)array;
-(void)reset;
-(void)addValue:(unsigned)arg1 ;
-(void)print;
-(void)addValue:(unsigned)arg1 withIncrements:(unsigned)arg2 ;
-(id)initWithBuckets:(unsigned*)arg1 size:(unsigned)arg2 ;
-(id)initWithFloatBuckets:(float*)arg1 size:(unsigned)arg2 ;
-(void)addFloatValue:(float)arg1 ;
-(void)reduceFrequencyByFactor:(unsigned)arg1 ;
-(id)newArray;
@end
