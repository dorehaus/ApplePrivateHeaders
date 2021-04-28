/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSuspendableScheduler.h>
#import <libobjc.A.dylib/EFAssertableScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface EFQueueScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) char prefersImmediateExecution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)resume;
-(id)initWithQueue:(id)arg1 ;
-(void)suspend;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1 ;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1 ;
-(id)performWithObject:(id)arg1 ;
-(char)prefersImmediateExecution;
-(void)assertIsExecuting:(char)arg1 ;
@end
