/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSMetricsDataSource.h>

@class NSMutableDictionary;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource> {

	NSMutableDictionary* _batches;

}

@property (retain) NSMutableDictionary * batches;              //@synthesize batches=_batches - In the implementation block
+(id)batchesFromEvents:(id)arg1 ;
-(void)cancel;
-(id)initWithEvents:(id)arg1 ;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)skipEvents:(id)arg1 error:(id*)arg2 ;
-(char)removeEvents:(id)arg1 error:(id*)arg2 ;
-(char)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)batches;
-(void)setBatches:(NSMutableDictionary *)arg1 ;
@end

