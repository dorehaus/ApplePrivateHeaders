/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBProcessMonitorObserving.h>

@protocol RBProcessMonitoring, RBProcessMonitorObserverConnection, OS_dispatch_queue;
@class RBProcess, NSObject, RBProcessMap, NSMutableArray, NSSet, NSMutableDictionary, RBSProcessStateDescriptor, NSHashTable, NSString;

@interface RBProcessMonitorObserver : NSObject <RBProcessMonitorObserving> {

	id<RBProcessMonitoring> _monitor;
	RBProcess* _process;
	id<RBProcessMonitorObserverConnection> _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	unsigned _qos;
	RBProcessMap* _pendingProcessState;
	NSMutableArray* _pendingExitEvents;
	NSSet* _pendingPreventLaunchPredicates;
	NSMutableDictionary* _configurations;
	RBSProcessStateDescriptor* _stateDescriptor;
	NSHashTable* _matchedHandles;
	char _extantStateUpdate;
	char _extantEventUpdate;
	char _didClearState;
	double _lastSend;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)stateCaptureTitle;
-(id)initWithMonitor:(id)arg1 forProcess:(id)arg2 connection:(id)arg3 ;
-(void)didObserveProcessExit:(id)arg1 ;
-(void)didResolvePreventLaunchPredicates:(id)arg1 ;
-(void)processMonitor:(id)arg1 didChangeProcessStates:(id)arg2 ;
-(void)_lock_addConfigurationStatesToPending:(id)arg1 ;
-(void)_lock_rebuildConfiguration;
-(void)_lock_sendPendingStateUpdates;
-(void)_lock_clearPendingNonterminalStates;
-(void)_lock_checkForBadActorWithPendingStates:(id)arg1 ;
-(void)_lock_addAllConfiguredStatesToPending;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id)captureState;
-(void)removeConfigurationWithIdentifier:(unsigned long long)arg1 ;
-(void)addConfiguration:(id)arg1 ;
@end

