/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIServiceConnection.h>
#import <libobjc.A.dylib/RWIServiceConnectionDelegate.h>

@class RWIServiceLockdownConnection, NSString;

@interface RWIServiceDeviceConnection : RWIServiceConnection <RWIServiceConnectionDelegate> {

	RWIServiceLockdownConnection* _connectionToRelay;
	RWIServiceLockdownConnection* _connectionToNotificationProxy;
	long long _reconnectToRelayAttemptCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)device;
-(void)sendMessage:(id)arg1 ;
-(char)isConnected;
-(id)loggingIdentifier;
-(void)_closeConnection:(id)arg1 ;
-(void)closeInternal;
-(id)initWithDevice:(id)arg1 delegate:(id)arg2 ;
-(void)serviceConnectionDidClose:(id)arg1 ;
-(void)serviceConnectionEstablished:(id)arg1 ;
-(void)mobileDeviceAdded:(id)arg1 ;
-(void)mobileDeviceRemoved:(id)arg1 ;
-(void)wirelessWasDisabled;
-(void)webInspectorServiceEnabled;
-(void)webInspectorServiceDisabled;
-(void)_startServicesOnBestConnection;
-(id)activeLockdownConnections;
-(id)_bestAvailableMobileDeviceConnection;
-(id)_bestAvailableMobileDeviceConnectionIgnoringFailedConnection:(id)arg1 ;
-(void)_startServicesOnConnection:(id)arg1 ;
-(void)_fallbackToNextMobileDeviceConnectionForLockdownConnection:(id)arg1 ;
-(void)_startConnectionToNotificationProxy:(id)arg1 ;
-(void)_startConnectionToRelay:(id)arg1 ;
-(char)_ownsConnection:(id)arg1 ;
@end

