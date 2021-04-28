/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsCollectorQueue : NSObject {

	OpaqueFigThreadRef _thread;
	char _isThreadRunning;
	char _shouldBlockWhenFull;
	SCD_Struct_VC153 _messageQueue[300];
	int _firstMessageIndex;
	int _nextMessageIndex;
	int _maxQueueSize;
	int _almostFullQueueSize;
	/*^block*/id _messageHandler;
	opaque_pthread_mutex_t _queueMutex;
	opaque_pthread_cond_t _queueNotFullCondition;
	opaque_pthread_cond_t _queueNotEmptyCondition;
	opaque_pthread_mutex_t _waitMutex;
	opaque_pthread_cond_t _waitCondition;
	char _shouldProcessMessageOnExternalThread;
	char _shouldProcessMessageImmediately;
	unsigned _queueProcessWaitTimeMs;

}

@property (readonly) char isThreadRunning;              //@synthesize isThreadRunning=_isThreadRunning - In the implementation block
@property (copy) id messageHandler;                     //@synthesize messageHandler=_messageHandler - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(char)enqueue:(SCD_Struct_AV33)arg1 ;
-(void)setMessageHandler:(id)arg1 ;
-(int)queueSize;
-(id)messageHandler;
-(void)processMessage:(SCD_Struct_AV33)arg1 ;
-(char)isThreadRunning;
-(id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(char)arg2 queueWaitTimeMs:(unsigned)arg3 useExternalThread:(char)arg4 ;
-(void)drainAndProcessAllStatistics;
-(char)addStatisticsMessage:(SCD_Struct_AV33)arg1 ;
-(void)stopThread;
-(char)dequeue:(SCD_Struct_AV33*)arg1 ;
-(char)isQueueFull;
-(void)cancelWait;
-(void)waitBeforeProcessingQueue;
@end

