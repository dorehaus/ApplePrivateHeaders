/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFTimer, NSSet, NSMutableSet, NSString;

@interface HMDHomeAssistantOperation : HMFObject <HMFTimerDelegate> {

	char _completionHandlerCalled;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFTimer* _accessoryConnectivityWaitTimer;
	NSSet* _accessoriesToOperateOn;
	NSMutableSet* _reachableAccessoriesToOperateOn;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeAssistantOperationWithActionSet:(id)arg1 queue:(id)arg2 ;
+(id)homeAssistantOperationWithWriteRequests:(id)arg1 queue:(id)arg2 ;
+(id)homeAssistantOperationWithReadRequests:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)handleAccessoryIsReachable:(id)arg1 ;
@end

