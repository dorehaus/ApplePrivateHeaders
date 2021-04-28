/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFBlockControlCanceling.h>
#import <libobjc.A.dylib/PFBlockControlQueueing.h>
#import <libobjc.A.dylib/PFBlockControlDirectExecution.h>

@protocol OS_dispatch_group;
@class PFDispatchQueue, NSObject, NSString;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution> {

	PFDispatchQueue* _queue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_group> _workGroup;
	AQ _status;
	char _executeOnDealloc;

}

@property (assign) char executeOnDealloc;                           //@synthesize executeOnDealloc=_executeOnDealloc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(char)enqueue;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(char)dequeue;
-(char)cancelBlock;
-(char)executeBlock;
-(void)invoke:(unsigned long long)arg1 ;
-(void)notifyOnQueue:(id)arg1 whenFinished:(/*^block*/id)arg2 ;
-(void)waitForBlock;
-(char)blockHasStarted;
-(char)blockHasFinished;
-(char)blockWasCanceled;
-(char)enqueueWithDelay:(unsigned long long)arg1 ;
-(char)groupNotify:(id)arg1 ;
-(char)tryCancelBlock;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_execute;
-(unsigned long long)_shouldEnqueue;
-(char)executeOnDealloc;
-(void)setExecuteOnDealloc:(char)arg1 ;
@end
