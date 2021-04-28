/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreJapaneseEngine.framework/Versions/A/CoreJapaneseEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class JIMPeriodicTaskManager, NSString, NSOperation, NSOperationQueue, NSTimer;

@interface JIMPeriodicTask : NSObject {

	char _lastOperationUnFinished;
	JIMPeriodicTaskManager* _manager;
	NSString* _operationClassName;
	/*^block*/id _operationCompletionBlock;
	/*^block*/id _executionBlock;
	NSOperation* _executingOperation;
	NSOperationQueue* _workingQueue;
	NSString* _name;
	double _idleInterval;
	double _retryInterval;
	NSTimer* _timer;

}

@property (__weak) JIMPeriodicTaskManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (copy) NSString * operationClassName;                   //@synthesize operationClassName=_operationClassName - In the implementation block
@property (copy) id operationCompletionBlock;                     //@synthesize operationCompletionBlock=_operationCompletionBlock - In the implementation block
@property (copy) id executionBlock;                               //@synthesize executionBlock=_executionBlock - In the implementation block
@property (__weak) NSOperation * executingOperation;              //@synthesize executingOperation=_executingOperation - In the implementation block
@property (__weak) NSOperationQueue * workingQueue;               //@synthesize workingQueue=_workingQueue - In the implementation block
@property (copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign) double idleInterval;                           //@synthesize idleInterval=_idleInterval - In the implementation block
@property (assign) double retryInterval;                          //@synthesize retryInterval=_retryInterval - In the implementation block
@property (assign) char lastOperationUnFinished;                  //@synthesize lastOperationUnFinished=_lastOperationUnFinished - In the implementation block
@property (retain) NSTimer * timer;                               //@synthesize timer=_timer - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(JIMPeriodicTaskManager *)manager;
-(void)setManager:(JIMPeriodicTaskManager *)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)setWorkingQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)workingQueue;
-(void)_timerFired:(id)arg1 ;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(NSString *)operationClassName;
-(id)operationCompletionBlock;
-(void)setOperationCompletionBlock:(id)arg1 ;
-(char)lastOperationUnFinished;
-(void)setLastOperationUnFinished:(char)arg1 ;
-(void)setOperationClassName:(NSString *)arg1 ;
-(void)setExecutionBlock:(id)arg1 ;
-(void)setIdleInterval:(double)arg1 ;
-(double)idleInterval;
-(void)rescheduleWithInterval:(double)arg1 ;
-(NSOperation *)executingOperation;
-(id)executionBlock;
-(void)setExecutingOperation:(NSOperation *)arg1 ;
@end

