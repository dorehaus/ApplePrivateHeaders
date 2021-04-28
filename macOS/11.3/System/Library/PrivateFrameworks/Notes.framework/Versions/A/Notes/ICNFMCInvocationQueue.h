/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class NSPort, NSOperationQueue;

@interface ICNFMCInvocationQueue : NSOperationQueue {

	id _runLoopCancelPortOnceLock;
	NSPort* _runLoopCancelPort;
	NSOperationQueue* _secondaryQueue;

}

@property (nonatomic,readonly) NSOperationQueue * secondaryQueue;              //@synthesize secondaryQueue=_secondaryQueue - In the implementation block
+(char)didCancelAllMonitoredItems;
+(void)cancelAllMonitoredItems;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)operations;
-(unsigned long long)operationCount;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 ;
-(void)runInvocationOnQueueSynchronously:(id)arg1 ;
-(void)addInvocation:(id)arg1 ;
-(id)initWithSecondaryQueue:(char)arg1 ;
-(NSOperationQueue *)secondaryQueue;
-(id)_newOperationWithInvocation:(id)arg1 ;
@end

