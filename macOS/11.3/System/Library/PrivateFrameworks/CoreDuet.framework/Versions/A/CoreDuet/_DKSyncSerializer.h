/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSOperation;

@interface _DKSyncSerializer : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _underlyingQueue;
	NSOperation* _previousOperation;

}
+(void)addOperation:(id)arg1 ;
+(void)addOperations:(id)arg1 waitUntilFinished:(char)arg2 ;
+(void)addOperationWithBlock:(/*^block*/id)arg1 ;
+(id)operationQueue;
+(id)underlyingQueue;
+(void)performAsyncBlock:(/*^block*/id)arg1 ;
+(void)performSyncBlock:(/*^block*/id)arg1 ;
+(void)performAfter:(double)arg1 block:(/*^block*/id)arg2 ;
+(void)addDependentOperation:(id)arg1 ;
+(void)addDependentOperationWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
@end

