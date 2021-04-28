/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_source;
@class ICNFIMAPClientDoneOperation, ICNFIMAPClientSelectOperation, ICNFIMAPClientSuspendOperation, NSRecursiveLock, NSObject, ICNFIMAPGateway, NSString, ICNFMCActivityMonitor;

@interface ICNFIMAPClientOperationQueue : NSOperationQueue {

	ICNFIMAPClientDoneOperation* _doneOperation;
	ICNFIMAPClientSelectOperation* _selectOperation;
	ICNFIMAPClientSuspendOperation* _suspendOperation;
	NSRecursiveLock* _activityMonitorLock;
	NSObject*<OS_dispatch_source> _activityFinishTimer;
	char _activityMonitorIsActive;
	NSRecursiveLock* _addOperationLock;
	ICNFIMAPGateway* _gateway;
	NSString* _activityName;
	ICNFMCActivityMonitor* _activityMonitor;

}

@property (nonatomic,readonly) char isIdle; 
@property (retain) ICNFIMAPClientDoneOperation * doneOperation; 
@property (retain) ICNFIMAPClientSelectOperation * selectOperation; 
@property (nonatomic,copy,readonly) NSString * selectedMailboxName; 
@property (retain) ICNFIMAPClientSuspendOperation * suspendOperation; 
@property (nonatomic,retain) NSRecursiveLock * addOperationLock;                   //@synthesize addOperationLock=_addOperationLock - In the implementation block
@property (copy) NSString * activityName;                                          //@synthesize activityName=_activityName - In the implementation block
@property (readonly) ICNFMCActivityMonitor * activityMonitor;                      //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (retain) ICNFIMAPGateway * gateway;                                      //@synthesize gateway=_gateway - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(ICNFMCActivityMonitor *)activityMonitor;
-(char)isIdle;
-(ICNFIMAPGateway *)gateway;
-(void)setGateway:(ICNFIMAPGateway *)arg1 ;
-(void)activityDidFinish:(id)arg1 ;
-(NSString *)selectedMailboxName;
-(void)setAddOperationLock:(NSRecursiveLock *)arg1 ;
-(NSString *)activityName;
-(void)_clearActivityFinishTimer;
-(void)_postDelayedActivityFinished;
-(ICNFIMAPClientSelectOperation *)selectOperation;
-(void)changeSelectDependenciesTo:(id)arg1 ;
-(ICNFIMAPClientDoneOperation *)doneOperation;
-(void)setDoneOperation:(ICNFIMAPClientDoneOperation *)arg1 ;
-(ICNFIMAPClientSuspendOperation *)suspendOperation;
-(void)setSuspendOperation:(ICNFIMAPClientSuspendOperation *)arg1 ;
-(void)setSelectOperation:(ICNFIMAPClientSelectOperation *)arg1 ;
-(char)addClientOperation:(id)arg1 outUpdatedOperation:(id*)arg2 ;
-(void)_setupDependeciesOnDone;
-(char)waitUntilOperationIsFinished:(id)arg1 ;
-(void)activityDidStart:(id)arg1 ;
-(id)newSelectOperationForResumingIfNeeded;
-(void)setDoneToReady;
-(char)refreshDoneWithGateway:(id)arg1 operation:(id)arg2 ;
-(void)clearDoneWithOperation:(id)arg1 ;
-(char)shouldAllowIdleToExecute:(id)arg1 ;
-(char)setupDependenciesOnSuspendCreatingIfNeeded;
-(void)suspendIfNeededAndClear:(char)arg1 ;
-(void)finishIdling;
-(void)refreshIdle;
-(NSRecursiveLock *)addOperationLock;
-(void)setActivityName:(NSString *)arg1 ;
@end
