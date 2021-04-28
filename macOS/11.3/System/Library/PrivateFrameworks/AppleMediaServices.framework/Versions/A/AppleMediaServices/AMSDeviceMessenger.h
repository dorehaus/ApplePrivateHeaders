/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSDeviceMessengerClientInterface.h>

@protocol AMSDeviceMessengerServiceInterface, OS_dispatch_queue;
@class AMSDaemonConnection, NSObject, NSMutableArray, NSString;

@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface> {

	id<AMSDeviceMessengerServiceInterface> _proxyObject;
	AMSDaemonConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _updateHandlers;

}

@property (retain) AMSDaemonConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableArray * updateHandlers;                 //@synthesize updateHandlers=_updateHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AMSDaemonConnection *)connection;
-(void)setConnection:(AMSDaemonConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)updateHandlers;
-(void)setUpdateHandlers:(NSMutableArray *)arg1 ;
-(void)deviceMessengerDidReceiveMessage:(id)arg1 ;
-(void)deviceMessengerDidReceiveReply:(id)arg1 ;
-(void)deviceMessengerDidClearMessage:(id)arg1 ;
-(void)deviceMessengerDidUpdateDevices;
-(void)_sendDelegateUpdateForMessage:(id)arg1 ;
-(void)addUpdateHandlerForType:(long long)arg1 filter:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)sendDialog:(id)arg1 account:(id)arg2 ;
-(id)_getProxyObject;
-(id)_identifierFromDialogRequest:(id)arg1 ;
@end
