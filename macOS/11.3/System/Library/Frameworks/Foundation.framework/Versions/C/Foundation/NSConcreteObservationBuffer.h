/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationBuffer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableArray;

@interface NSConcreteObservationBuffer : NSObservationBuffer {

	NSObject*<OS_dispatch_queue> _inputQueue;
	NSOperationQueue* _outputQueue;
	long long _policy;
	int _state;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _dequeue;
	unsigned long long _maxCount;
	/*^block*/id _bufferFullHandler;
	char _memoryPressureSensitive;
	char _automaticallyEmitsObjects;

}
-(void)dealloc;
-(void)_receiveBox:(id)arg1 ;
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(void)_alreadyOnQueueEmitObject;
-(void)_alreadyOnQueueEmitAllObjects;
-(void)_mergeChanges;
-(/*^block*/id)bufferFullHandler;
-(void)emitObject;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(/*^block*/id)arg1 ;
-(char)automaticallyEmitsObjects;
-(void)setAutomaticallyEmitsObjects:(char)arg1 ;
-(char)isMemoryPressureSensitive;
-(void)setMemoryPressureSensitive:(char)arg1 ;
@end

