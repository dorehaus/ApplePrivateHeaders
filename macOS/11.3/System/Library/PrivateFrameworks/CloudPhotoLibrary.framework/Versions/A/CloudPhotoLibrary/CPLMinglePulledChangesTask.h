/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CPLScopeFilter;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSString* _clientCacheIdentifier;
	char _hasPreparedForMingling;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	char _didNotifySchedulerPullQueueIsFullOnce;
	char _needsToNotifySchedulerPullQueueIsFull;
	CPLScopeFilter* _scopeFilter;

}

@property (nonatomic,retain) CPLScopeFilter * scopeFilter;              //@synthesize scopeFilter=_scopeFilter - In the implementation block
+(char)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(char*)arg3 error:(id*)arg4 ;
-(void)cancel;
-(void)launch;
-(id)taskIdentifier;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(void)_reallyNotifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFullNowIfNecessary;
-(char)_checkContinueMinglingInTransaction:(id)arg1 ;
-(void)_taskDidFinishWithError:(id)arg1 ;
-(void)_processNextBatch;
-(void)_launch;
-(void)taskDidFinishWithError:(id)arg1 ;
-(CPLScopeFilter *)scopeFilter;
-(void)setScopeFilter:(CPLScopeFilter *)arg1 ;
@end
