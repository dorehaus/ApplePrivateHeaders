/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/WebInspector-Structs.h>
#import <WebInspector/RWIServiceConnection.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSObject, NSMutableData, NSTimer, RWIMobileDeviceConnection, RWIDevice, NSString;

@interface RWIServiceLockdownConnection : RWIServiceConnection {

	NSObject*<OS_dispatch_queue> _lockdownQueue;
	NSObject*<OS_dispatch_source> _lockdownSource;
	NSObject*<OS_dispatch_semaphore> _lockdownSemaphore;
	NSMutableData* _incomingData;
	AMDServiceConnectionRef _serviceConnection;
	NSTimer* _startServiceRetryTimer;
	char _disconnectRequested;
	char _hasReceivedAtLeastOneMessage;
	RWIMobileDeviceConnection* _mobileDeviceConnection;

}

@property (readonly) RWIDevice * device; 
@property (readonly) RWIMobileDeviceConnection * mobileDeviceConnection;              //@synthesize mobileDeviceConnection=_mobileDeviceConnection - In the implementation block
@property (readonly) AMDServiceConnectionRef serviceConnection;                       //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (readonly) NSString * serviceName; 
+(id)connectionToNotificationProxyWithDevice:(id)arg1 mobileDeviceConnection:(id)arg2 delegate:(id)arg3 ;
+(id)connectionToRelayWithDevice:(id)arg1 mobileDeviceConnection:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(RWIDevice *)device;
-(NSString *)serviceName;
-(void)sendMessage:(id)arg1 ;
-(char)isConnected;
-(AMDServiceConnectionRef)serviceConnection;
-(void)_disconnect;
-(id)loggingIdentifier;
-(void)closeInternal;
-(void)_processIncomingBytes:(const char*)arg1 length:(long long)arg2 ;
-(id)initWithDevice:(id)arg1 mobileDeviceConnection:(id)arg2 delegate:(id)arg3 ;
-(void)startServiceWithName:(id)arg1 retryPolicy:(long long)arg2 setupBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startReadingFromLockdown;
-(void)stopReadingFromLockdown;
-(RWIMobileDeviceConnection *)mobileDeviceConnection;
-(void)deviceQueue_startServiceWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_teardownConnectionToService;
-(void)readFromLockdownSocket;
@end
