/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableDictionary;

@interface PPXPCServerPipelinedBatchQueryManager : NSObject {

	long long _pipelineDepth;
	unsigned long long _pipelinedCallTimeoutNsec;
	NSObject*<OS_dispatch_semaphore> _concurrentRequestSem;
	NSMutableDictionary* _queryReplyThrottleSemaphores;
	AB _isInterrupted;

}
-(void)unblockPendingQueries;
-(id)initWithPipelineDepth:(long long)arg1 pipelinedCallTimeoutNsec:(unsigned long long)arg2 maxConcurrentRequestsPerConnection:(unsigned long long)arg3 ;
-(void)_unblockQueryReplyThrottleSemaphore:(id)arg1 ;
-(void)runConcurrentlyWithRequestThrottle:(/*^block*/id)arg1 ;
-(void)sendBatchedResultForQueryWithName:(id)arg1 queryId:(unsigned long long)arg2 batchGenerator:(/*^block*/id)arg3 sendError:(/*^block*/id)arg4 sendBatch:(/*^block*/id)arg5 ;
@end

