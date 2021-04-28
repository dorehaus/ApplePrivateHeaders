/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSError, NSString, NSMutableArray, NSObject, NSConditionLock;

@interface AMSObservable : NSObject {

	unsigned long long _behavior;
	NSError* _failureError;
	NSString* _logKey;
	NSMutableArray* _observers;
	NSMutableArray* _queuedResults;
	NSObject*<OS_dispatch_queue> _sendMessageQueue;
	NSConditionLock* _stateLock;

}

@property (readonly) unsigned long long behavior;                              //@synthesize behavior=_behavior - In the implementation block
@property (retain) NSError * failureError;                                     //@synthesize failureError=_failureError - In the implementation block
@property (retain) NSString * logKey;                                          //@synthesize logKey=_logKey - In the implementation block
@property (retain) NSMutableArray * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (retain) NSMutableArray * queuedResults;                             //@synthesize queuedResults=_queuedResults - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sendMessageQueue;              //@synthesize sendMessageQueue=_sendMessageQueue - In the implementation block
@property (retain) NSConditionLock * stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (getter=isCancelled,readonly) char cancelled; 
@property (getter=isComplete,readonly) char complete; 
-(id)init;
-(char)isComplete;
-(char)cancel;
-(char)isCancelled;
-(NSMutableArray *)observers;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(unsigned long long)behavior;
-(id)initWithObserver:(id)arg1 ;
-(void)subscribe:(id)arg1 ;
-(NSConditionLock *)stateLock;
-(char)_isComplete;
-(void)unsubscribe:(id)arg1 ;
-(char)sendResult:(id)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(char)sendFailure:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
-(char)sendCompletion;
-(id)initWithNotification:(id)arg1 object:(id)arg2 ;
-(id)initWithObserver:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)initWithObservers:(id)arg1 behavior:(unsigned long long)arg2 ;
-(NSError *)failureError;
-(NSObject*<OS_dispatch_queue>)sendMessageQueue;
-(void)setFailureError:(NSError *)arg1 ;
-(NSMutableArray *)queuedResults;
-(id)initWithObservers:(id)arg1 ;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1 ;
-(void)unsubscribeAll;
-(void)setQueuedResults:(NSMutableArray *)arg1 ;
-(void)setSendMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateLock:(NSConditionLock *)arg1 ;
@end

