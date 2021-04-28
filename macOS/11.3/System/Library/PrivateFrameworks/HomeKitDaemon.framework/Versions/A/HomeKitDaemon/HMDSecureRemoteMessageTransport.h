/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMDSecureRemoteSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageTransportDelegate.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, HMDRemoteDeviceMonitor, NSMutableSet, HMDRemoteMessageNotifications, NSMutableDictionary, HMDHomeManager, NSString;

@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDSecureRemoteSessionDelegate, HMFLogging, HMFMessageTransportDelegate, HMFDumpState> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _transports;
	HMDRemoteDeviceMonitor* _deviceMonitor;
	NSMutableSet* _secureRemoteSessions;
	HMDRemoteMessageNotifications* _sessionNotifications;
	NSMutableDictionary* _currentHomeConfigurations;
	HMDHomeManager* _homeManager;

}

@property (nonatomic,readonly) NSMutableSet * secureRemoteSessions;                             //@synthesize secureRemoteSessions=_secureRemoteSessions - In the implementation block
@property (nonatomic,retain) HMDRemoteMessageNotifications * sessionNotifications;              //@synthesize sessionNotifications=_sessionNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentHomeConfigurations;                   //@synthesize currentHomeConfigurations=_currentHomeConfigurations - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                               //@synthesize homeManager=_homeManager - In the implementation block
@property (copy,readonly) NSArray * transports;                                                 //@synthesize transports=_transports - In the implementation block
@property (readonly) HMDRemoteDeviceMonitor * deviceMonitor;                                    //@synthesize deviceMonitor=_deviceMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
+(id)defaultTransport;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)start;
-(void)reset;
-(id)shortDescription;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleNotificationMessage:(id)arg1 ;
-(NSArray *)transports;
-(id)descriptionWithPointer:(char)arg1 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(HMDHomeManager *)homeManager;
-(id)dumpState;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(HMDRemoteDeviceMonitor *)deviceMonitor;
-(void)configureWithHomeManager:(id)arg1 ;
-(void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(id)accountRegistry;
-(void)secureRemoteSession:(id)arg1 receivedRequestToSendMessage:(id)arg2 ;
-(void)secureRemoteSession:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)pingDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateHome:(id)arg1 configurationVersion:(long long)arg2 ;
-(void)removeHome:(id)arg1 ;
-(id)prepareAnswerForRequestedCapabilities:(id)arg1 ;
-(id)initWithTransports:(id)arg1 ;
-(NSMutableSet *)secureRemoteSessions;
-(void)_handleNotificationResponseForMessage:(id)arg1 responsePayload:(id)arg2 responseError:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)_preferredTransportForMessage:(id)arg1 ;
-(void)_electDeviceForAccountDestination:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendSecureMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handlePingMessage:(id)arg1 ;
-(void)_handleSecureMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3 ;
-(void)_handleElectDeviceForIDSSession:(id)arg1 ;
-(NSMutableDictionary *)currentHomeConfigurations;
-(void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)_haveAllCapabilities:(id)arg1 ;
-(void)_pingDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendPingToDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(HMDRemoteMessageNotifications *)sessionNotifications;
-(id)_secureRemoteSessionForDevice:(id)arg1 ;
-(id)_openSecureSessionToDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateDeviceInformationFromMessage:(id)arg1 ;
-(char)_handleReceivedMessage:(id)arg1 transport:(id)arg2 ;
-(void)openSecureSessionToDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSessionNotifications:(HMDRemoteMessageNotifications *)arg1 ;
-(void)setCurrentHomeConfigurations:(NSMutableDictionary *)arg1 ;
@end

