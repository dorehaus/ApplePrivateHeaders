/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCStackQueue;

@interface SCRCThread : NSObject {

	SCRCStackQueue* _queue;
	SCRCStackQueue* _waitingQueue;
	id _queueLock;
	CFRunLoopSourceRef _source;
	CFRunLoopRef _runLoop;
	char _isInvalid;
	char _isRegistered;
	char _isTimerSet;
	char _shouldStop;
	char _isWaitingForStoppingThread;
	id __key;
	double _lastStartTime;

}

@property (setter=_setKey:,nonatomic,retain) id _key;                                     //@synthesize _key=__key - In the implementation block
@property (assign,setter=_setLastStartTime:,nonatomic) double lastStartTime;              //@synthesize lastStartTime=_lastStartTime - In the implementation block
+(void)initialize;
+(id)activity;
+(long long)defaultThreadPriority;
+(long long)activeThreadCount;
+(void)setDefaultThreadPriority:(long long)arg1 ;
+(double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned)arg5 count:(unsigned)arg6 firstObject:(id)arg7 moreObjects:(_va_list_tag*)arg8 ;
+(double)lastStartTimeForKey:(id)arg1 ;
+(void)invalidateForKey:(id)arg1 ;
+(void)postStopNotification;
+(id)currentThreadTaskCache;
+(char)_addThreadToRegisteredThreads:(id)arg1 withThreadKey:(id)arg2 ;
+(char)_removeThreadFromRegisteredThreads:(id)arg1 withThreadKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)_key;
-(void)setName:(id)arg1 ;
-(void)_setKey:(id)arg1 ;
-(char)isInvalid;
-(char)_shouldStop;
-(void)_processQueue;
-(void)setIsInvalid:(char)arg1 ;
-(double)lastStartTime;
-(void)_assignThreadPriority;
-(double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned)arg3 objects:(id)arg4 ;
-(id)_initWithKey:(id)arg1 task:(id)arg2 ;
-(void)_setIsWaitingForStoppingThread:(char)arg1 ;
-(void)_enqueueTask:(id)arg1 cancelMask:(unsigned)arg2 lastStartTime:(double*)arg3 ;
-(void)_runThread:(id)arg1 ;
-(void)_threadDidStop;
-(double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(_va_list_tag*)arg6 ;
-(void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned)arg2 lastStartTime:(double*)arg3 ;
-(void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned)arg2 lastStartTime:(double*)arg3 ;
-(void)_processQueueFromTimer;
-(char)_debug_currentlyRunningOnThisThread;
-(double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 objects:(id)arg5 ;
-(char)_isWaitingForStoppingThread;
-(void)_setLastStartTime:(double)arg1 ;
@end

