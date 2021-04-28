/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, IDSDevice, MRDeviceInfo, NSMutableDictionary, NSObject, NSString;

@interface MRIDSConnectivityManager : NSObject <IDSServiceDelegate> {

	IDSService* _service;
	IDSDevice* _device;
	MRDeviceInfo* _deviceInfo;
	NSMutableDictionary* _messageHandlers;
	NSMutableDictionary* _destinationMessageHandlers;
	char _initialStateLoaded;
	NSObject*<OS_dispatch_queue> _idsQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,retain) IDSDevice * device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) MRDeviceInfo * deviceInfo; 
@property (nonatomic,readonly) char isConnected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(id)name;
-(IDSDevice *)device;
-(char)isConnected;
-(MRDeviceInfo *)deviceInfo;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)setDevice:(IDSDevice *)arg1 ;
-(void)setMessageHandler:(/*^block*/id)arg1 forType:(long long)arg2 destination:(id)arg3 ;
-(void)removeMessageHandlerForType:(long long)arg1 destination:(id)arg2 ;
-(char)sendMessasge:(id)arg1 type:(long long)arg2 destination:(id)arg3 session:(id)arg4 options:(id)arg5 ;
-(void)handleResetConnectionRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_maybeDeviceConnectionStatusChanged;
-(id)deviceDebugName;
-(void)resetConnection;
-(void)setMessageHandler:(/*^block*/id)arg1 forType:(long long)arg2 ;
-(void)removeMessageHandlerForType:(long long)arg1 ;
@end

