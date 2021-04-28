/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRITaskQueuing.h>
#import <libobjc.A.dylib/TRITaskQueueStateProviding.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class _PASLock, TRIServerContext, NSObject, TRIClient;

@interface TRITaskQueue : NSObject <TRITaskQueuing, TRITaskQueueStateProviding> {

	_PASLock* _lock;
	TRIServerContext* _serverContext;
	NSObject*<OS_dispatch_queue> _opQueue;
	NSObject*<OS_dispatch_group> _opGroup;
	NSObject*<OS_dispatch_queue> _asyncQueue;
	TRIClient* _client;

}
-(id)debugDescription;
-(id)init;
-(unsigned long long)count;
-(char)cancelTask:(id)arg1 ;
-(char)cancelTasksWithTag:(id)arg1 ;
-(char)addTask:(id)arg1 options:(id)arg2 ;
-(char)resumeWithXPCActivityDescriptor:(id)arg1 executeWhenSuspended:(/*^block*/id)arg2 ;
-(id)activeActivityGrantingCapability:(unsigned long long)arg1 ;
-(char)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_scheduleFutureActivitiesWithGuardedData:(id)arg1 ;
-(void)_partitionTaskGroup:(id)arg1 byRunnabilityGivenCapabilities:(unsigned long long)arg2 runnableAtDate:(id)arg3 topoSortedCurrentlyRunnable:(id*)arg4 blocked:(id*)arg5 allowOnlyRootTasksRunnable:(char)arg6 ;
-(void)_registerTaskQueueActivityForDate:(id)arg1 ;
-(void)_registerRetryActivityForDate:(id)arg1 ;
-(void)_startImmediateTasksIfNotAlreadyQueued:(id)arg1 guardedData:(id)arg2 didStartNewWork:(char*)arg3 ;
-(char)_cancelTaskWithId:(id)arg1 guardedData:(id)arg2 persistCancel:(char)arg3 ;
-(char)_removeTaskWithId:(id)arg1 guardedData:(id)arg2 persistRemove:(char)arg3 ;
-(char)_addTask:(id)arg1 options:(id)arg2 guardedData:(id)arg3 ;
-(void)_startRunnableTasksIfNecessaryWithGuardedData:(id)arg1 ;
-(id)_runTask:(id)arg1 ;
-(void)_finalizeTask:(id)arg1 withId:(id)arg2 runResult:(id)arg3 ;
-(void)_evaluateRunConditionsWithGuardedData:(id)arg1 shouldContinueWork:(char*)arg2 ;
-(id)_createOperationWithTask:(id)arg1 withId:(id)arg2 dependencies:(id)arg3 taskMap:(id)arg4 ;
-(char)finishXPCActivitiesWithGuardedData:(id)arg1 ;
-(id)_addTask:(id)arg1 options:(id)arg2 guardedData:(id)arg3 accumulatedNewTaskRecords:(id)arg4 ;
-(char)_isTaskWithId:(id)arg1 inTaskGroup:(id)arg2 runnableGivenCapabilities:(unsigned long long)arg3 atDate:(id)arg4 cachedRunnability:(id)arg5 visitedPath:(id)arg6 topoSortedRunnable:(id)arg7 allowOnlyRootTasksRunnable:(char)arg8 ;
-(char)_cancelDependenciesAndTaskWithId:(id)arg1 guardedData:(id)arg2 ;
-(id)_addTask:(id)arg1 withDependencies:(id)arg2 guardedData:(id)arg3 ;
-(char)_cancelTask:(id)arg1 guardedData:(id)arg2 ;
-(char)updateActivity:(id)arg1 withStartDate:(id)arg2 ;
-(char)cancelTasksWithTag:(id)arg1 excludingTasks:(id)arg2 ;
-(id)initWithServerContext:(id)arg1 operationQueue:(id)arg2 operationGroup:(id)arg3 asyncQueue:(id)arg4 ;
-(void)waitForAsyncQueue;
-(char)ifNotPresentAddTask:(id)arg1 ;
@end

