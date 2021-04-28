/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXHearingSupport.framework/Versions/A/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AXHAAccessQueue : NSObject {

	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	unsigned long long _specialBehaviors;

}

@property (nonatomic,copy) NSString * threadLocalStorageKey;                            //@synthesize threadLocalStorageKey=_threadLocalStorageKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (assign,nonatomic) unsigned long long specialBehaviors;                       //@synthesize specialBehaviors=_specialBehaviors - In the implementation block
@property (nonatomic,readonly) char behavesAsMainQueue; 
@property (nonatomic,readonly) char behavesWithoutErrorReporting; 
@property (nonatomic,copy,readonly) NSString * label; 
+(id)mainAccessQueue;
+(id)backgroundAccessQueue;
-(id)description;
-(id)init;
-(NSString *)label;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(char)arg3 ;
-(void)performSynchronousWritingBlock:(/*^block*/id)arg1 ;
-(char)canOnlyReadInCurrentExecutionThread;
-(void)performAsynchronousWritingBlock:(/*^block*/id)arg1 ;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(void)performAsynchronousReadingBlock:(/*^block*/id)arg1 ;
-(char)canWriteInCurrentExecutionThread;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(id)_initWithLabel:(id)arg1 appendUUIDToLabel:(char)arg2 specialBehaviors:(unsigned long long)arg3 ;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(char)arg2 ;
-(void)setSpecialBehaviors:(unsigned long long)arg1 ;
-(void)setThreadLocalStorageKey:(NSString *)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)behavesAsMainQueue;
-(unsigned long long)specialBehaviors;
-(void)_performBlock:(/*^block*/id)arg1 withDispatchFunction:(/*function pointer*/void*)arg2 synchronously:(char)arg3 accessQueueContext:(unsigned long long)arg4 ;
-(unsigned long long)_accessQueueContextInCurrentExecutionThread;
-(char)behavesWithoutErrorReporting;
-(NSString *)threadLocalStorageKey;
-(void)performSynchronousReadingBlock:(/*^block*/id)arg1 ;
-(char)canReadInCurrentExecutionThread;
@end

