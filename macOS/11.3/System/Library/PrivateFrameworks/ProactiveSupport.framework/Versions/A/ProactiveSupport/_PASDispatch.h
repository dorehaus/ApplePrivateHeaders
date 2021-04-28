/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/Versions/A/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PASDispatch : NSObject
+(unsigned long long)dispatchTimeWithSecondsFromNow:(double)arg1 ;
+(void)waitForSemaphore:(id)arg1 ;
+(unsigned char)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 ;
+(void)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 onAcquire:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)waitForGroup:(id)arg1 ;
+(unsigned char)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 ;
+(void)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 onGroupComplete:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)waitForBlock:(/*^block*/id)arg1 ;
+(unsigned char)waitForBlock:(/*^block*/id)arg1 timeoutSeconds:(double)arg2 ;
+(void)waitForBlock:(/*^block*/id)arg1 timeoutSeconds:(double)arg2 onBlockComplete:(/*^block*/id)arg3 onTimeout:(/*^block*/id)arg4 ;
+(void)runAsyncOnQueue:(id)arg1 afterDelaySeconds:(double)arg2 block:(/*^block*/id)arg3 ;
+(void)runSyncOnMainThreadWithBlock:(/*^block*/id)arg1 ;
+(id)autoreleasingSerialQueueWithLabel:(const char*)arg1 ;
+(id)autoreleasingSerialQueueWithLabel:(const char*)arg1 qosClass:(unsigned)arg2 ;
+(void)notifyGroup:(id)arg1 onQueue:(id)arg2 withTimeout:(double)arg3 block:(/*^block*/id)arg4 ;
@end

