/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WBSCloudHistoryPushAgent.h>

@protocol WBSCloudHistoryPushAgent <NSObject>
@required
-(void)clearAcknowledgedPushNotifications;
-(void)acknowledgePendingPushNotifications;
-(void)getPushNotifications:(/*^block*/id)arg1;
-(void)queryMemoryFootprint:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSXPCListener, APSConnection, NSObject, NSString;

@interface WBSCloudHistoryPushAgent : NSObject <NSXPCListenerDelegate, WBSCloudHistoryPushAgent> {

	NSXPCListener* _xpcListener;
	APSConnection* _pushConnection;
	NSObject*<OS_dispatch_queue> _pushNotificationStateQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(id)_userDefaults;
-(id)_pushTopic;
-(void)clearAcknowledgedPushNotifications;
-(void)acknowledgePendingPushNotifications;
-(void)getPushNotifications:(/*^block*/id)arg1 ;
-(void)_setHasUnacknowledgedPushNotifications:(char)arg1 ;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(char)_hasUnacknowledgedPushNotifications;
-(char)_hasAcknowledgedPushNotifications;
-(void)_setHasAcknowlegedPushNotifications:(char)arg1 ;
@end

