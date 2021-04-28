/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/Versions/A/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class PETAggregateStateStorage;

@interface PETAggregateState : NSObject {

	PETAggregateStateStorage* _storage;
	SCD_Struct_PE8 _rng;

}
+(unsigned char)hashForString:(id)arg1 ;
-(id)description;
-(id)init;
-(void)reset;
-(id)initWithPath:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)initInMemory;
-(void)incrementCounterBy:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 ;
-(void)updateCounterTo:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 ;
-(void)updateDistributionWithValue:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 maxSampleSize:(unsigned short)arg4 ;
-(void)incrementCounterBy:(double)arg1 forKey:(id)arg2 ;
-(void)updateCounterTo:(double)arg1 forKey:(id)arg2 ;
-(void)updateDistributionWithValue:(double)arg1 forKey:(id)arg2 maxSampleSize:(unsigned short)arg3 ;
-(void)enumerateCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(void)enumerateAndResetCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(char)checkIntegrity;
@end

