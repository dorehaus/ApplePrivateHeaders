/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue, BWGraphStatusDelegate;
@class NSMutableArray, NSMutableDictionary, NSArray, NSObject, BWMemoryPool, NSString;

@interface BWGraph : NSObject {

	NSMutableArray* _nodes;
	NSMutableArray* _sourceNodes;
	NSMutableArray* _sinkNodes;
	NSMutableArray* _connections;
	NSMutableArray* _outputsWithSharedPools;
	NSMutableDictionary* _outputsWithSharedPoolsForAttachedMedia;
	NSMutableArray* _nodesToPrepareConcurrently;
	NSArray* _nodesToPrepareAfterGraphStart;
	NSMutableArray* _deferredPreparePrioritySinks;
	char _deferredNodePrepareCancelled;
	char _resumesConnectionsAsNodesArePrepared;
	NSMutableArray* _deferredStartSourceNodes;
	char _haveStartedOrCancelledDeferredSourceNodes;
	char _running;
	char _beingConfigured;
	long long _inflightConfigurationID;
	NSObject*<OS_dispatch_group> _sourceNodesStartGroup;
	NSObject*<OS_dispatch_group> _nonDeferredSourceNodesStartGroup;
	NSObject*<OS_dispatch_queue> _sourceStartQueue;
	NSObject*<OS_dispatch_group> _startGroup;
	NSObject*<OS_dispatch_group> _commitGroup;
	char _supportsLiveReconfiguration;
	int _errorStatus;
	id<BWGraphStatusDelegate> _statusDelegate;
	char _classicRetainedBufferCount;
	BWMemoryPool* _memoryPool;
	NSString* _applicationID;
	int _clientPID;
	NSString* _modeDescription;
	NSString* _sourceDescription;
	int _graphStateTransitionTimeoutSeconds;
	unsigned _configurationQueuePriority;

}

@property (assign) int errorStatus;                                                  //@synthesize errorStatus=_errorStatus - In the implementation block
@property (nonatomic,readonly) char deferredNodePrepareEnabled; 
@property (assign,nonatomic) char resumesConnectionsAsNodesArePrepared;              //@synthesize resumesConnectionsAsNodesArePrepared=_resumesConnectionsAsNodesArePrepared - In the implementation block
@property (nonatomic,readonly) char supportsLiveReconfiguration; 
@property (assign,nonatomic) id<BWGraphStatusDelegate> statusDelegate;               //@synthesize statusDelegate=_statusDelegate - In the implementation block
@property (nonatomic,retain) BWMemoryPool * memoryPool;                              //@synthesize memoryPool=_memoryPool - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)init;
-(char)stop:(id*)arg1 ;
-(void)beginConfiguration;
-(void)setApplicationID:(id)arg1 ;
-(void)setErrorStatus:(int)arg1 ;
-(int)errorStatus;
-(id)applicationID;
-(char)start:(id*)arg1 ;
-(id)dotString;
-(BWMemoryPool *)memoryPool;
-(int)clientPID;
-(void)setClientPID:(int)arg1 ;
-(char)addNode:(id)arg1 error:(id*)arg2 ;
-(char)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3 ;
-(id)initWithConfigurationQueuePriority:(unsigned)arg1 ;
-(char)supportsLiveReconfiguration;
-(void)setMemoryPool:(BWMemoryPool *)arg1 ;
-(void)_resumeInputConnectionsForNodes:(id)arg1 eventsOnly:(char)arg2 ;
-(void)_getNodesToPrepareSeriallyBeforeGraphStart:(id*)arg1 concurrentlyBeforeGraphStart:(id*)arg2 afterGraphStart:(id*)arg3 ;
-(void)_suspendInputConnectionsForNodes:(id)arg1 ;
-(id<BWGraphStatusDelegate>)statusDelegate;
-(id)_newDispatchGroupForSinksToTransitionToState:(int)arg1 ;
-(void)_waitForStartOrCommitToComplete;
-(void)_logActiveNodesAfterGraphStopTimeout;
-(void)_logActiveSinkNodesAfterGraphStopTimeout;
-(void)_timedOutWaitingForOperationToCompleteWithDescription:(id)arg1 ;
-(char)_resolveFormats:(id*)arg1 ;
-(char)_resolveRetainedBufferCounts:(id*)arg1 ;
-(char)_prepareNodesWithConfigurationChanges:(id*)arg1 ;
-(void)_makeParentConfigurationChangesLive;
-(id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1 ;
-(void)startDeferredNodePrepareIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startDeferredSourceNodesIfNeeded;
-(void)_waitForSourceNodesToStart;
-(id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)arg1 ;
-(void)_resolveVideoRetainedBufferCountsForOutput:(id)arg1 forAttachedMediaKey:(id)arg2 outputsWithSharedPools:(id)arg3 ;
-(id)_nodesInSubgraphOfSinkNode:(id)arg1 ;
-(id)_depthFirstEnumeratorWithVertexOrdering:(int)arg1 ;
-(void)enableConcurrentPrepareForNode:(id)arg1 ;
-(void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)arg1 ;
-(char)deferredNodePrepareEnabled;
-(void)cancelDeferredNodePrepare;
-(void)enableDeferredStartForSourceNode:(id)arg1 ;
-(void)cancelDeferredSourceNodeStart;
-(void)notifyWhenNonDeferredSourceNodesHaveStarted:(/*^block*/id)arg1 ;
-(void)waitForNonDeferredSourceNodesToStart;
-(char)commitConfigurationWithID:(long long)arg1 error:(id*)arg2 ;
-(void)waitForStartOrCommitToComplete;
-(id)modeDescription;
-(void)setModeDescription:(id)arg1 ;
-(id)sourceDescription;
-(void)setSourceDescription:(id)arg1 ;
-(id)_sourceNodes;
-(id)_sinkNodes;
-(id)_breadthFirstEnumerator;
-(id)_reverseBreadthFirstEnumerator;
-(void)_writeDotStringToFile;
-(void)setStatusDelegate:(id<BWGraphStatusDelegate>)arg1 ;
-(char)resumesConnectionsAsNodesArePrepared;
-(void)setResumesConnectionsAsNodesArePrepared:(char)arg1 ;
@end

