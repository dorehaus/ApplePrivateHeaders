/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/Versions/A/WirelessCoexManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface WRMClientInterface : NSObject {

	NSObject*<OS_xpc_object> mConnection;
	int mProcessId;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mNotificationBlock;

}
-(void)dealloc;
-(id)init;
-(void)registerClient:(int)arg1 queue:(id)arg2 notificationHandler:(/*^block*/id)arg3 ;
-(void)unregisterClient;
@end

