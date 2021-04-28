/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDCameraStreamControlManagerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraStreamControlMessageHandlerDataSource;
@class HMDCameraStreamManagerSession, HMDService, HMDPhoneCallObserver, HMDCameraResidentMessageHandler, NSObject, HMDHAPAccessory, NSUUID, HMDCameraSupportedConfigurationCache, HMDCameraStreamSnapshotHandler, HMFNetMonitor, HMFMessageDispatcher, HMDDynamicActivityAttributionPublisher, HMDDeviceCapabilities, NSString;

@interface HMDCameraStreamControlMessageHandler : HMFObject <HMFTimerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging> {

	HMDCameraStreamManagerSession* _streamSession;
	HMDService* _streamManagementService;
	HMDPhoneCallObserver* _phoneCallObserver;
	HMDCameraResidentMessageHandler* _residentMessageHandler;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	NSUUID* _uniqueIdentifier;
	NSUUID* _profileUniqueIdentifier;
	HMDCameraSupportedConfigurationCache* _supportedConfigCache;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	HMFNetMonitor* _networkMonitor;
	HMFMessageDispatcher* _messageDispatcher;
	HMDDynamicActivityAttributionPublisher* _dynamicActivityAttributionPublisher;
	id<HMDCameraStreamControlMessageHandlerDataSource> _dataSource;
	HMDDeviceCapabilities* _deviceCapabilities;

}

@property (readonly) HMDPhoneCallObserver * phoneCallObserver;                                                  //@synthesize phoneCallObserver=_phoneCallObserver - In the implementation block
@property (readonly) HMDCameraResidentMessageHandler * residentMessageHandler;                                  //@synthesize residentMessageHandler=_residentMessageHandler - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                                        //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSUUID * uniqueIdentifier;                                                                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) NSUUID * profileUniqueIdentifier;                                                          //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (retain) HMDCameraStreamManagerSession * streamSession;                                               //@synthesize streamSession=_streamSession - In the implementation block
@property (readonly) HMDCameraSupportedConfigurationCache * supportedConfigCache;                               //@synthesize supportedConfigCache=_supportedConfigCache - In the implementation block
@property (readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;                                    //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (readonly) HMFNetMonitor * networkMonitor;                                                            //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (retain) HMFMessageDispatcher * messageDispatcher;                                                    //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) HMDDynamicActivityAttributionPublisher * dynamicActivityAttributionPublisher;              //@synthesize dynamicActivityAttributionPublisher=_dynamicActivityAttributionPublisher - In the implementation block
@property (readonly) id<HMDCameraStreamControlMessageHandlerDataSource> dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMDDeviceCapabilities * deviceCapabilities;                                                //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
@property (getter=isStreamingSessionInProgress,readonly) char streamingSessionInProgress; 
@property (readonly) HMDService * streamManagementService;                                                      //@synthesize streamManagementService=_streamManagementService - In the implementation block
@property (copy,readonly) NSString * streamSessionID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)uniqueIdentifier;
-(id<HMDCameraStreamControlMessageHandlerDataSource>)dataSource;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)handleMessage:(id)arg1 ;
-(HMDHAPAccessory *)accessory;
-(HMDDeviceCapabilities *)deviceCapabilities;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(NSUUID *)profileUniqueIdentifier;
-(NSString *)streamSessionID;
-(HMFNetMonitor *)networkMonitor;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)configureWithMessageDispatcher:(id)arg1 ;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(void)setStreamSession:(HMDCameraStreamManagerSession *)arg1 ;
-(HMDCameraStreamManagerSession *)streamSession;
-(HMDCameraResidentMessageHandler *)residentMessageHandler;
-(void)handleAccessoryDisconnected:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 streamSnapshotHandler:(id)arg2 accessory:(id)arg3 streamManagementService:(id)arg4 profileUniqueIdentifier:(id)arg5 networkMonitor:(id)arg6 residentMessageHandler:(id)arg7 phoneCallObserver:(id)arg8 deviceCapabilities:(id)arg9 dataSource:(id)arg10 ;
-(HMDService *)streamManagementService;
-(void)handleProcessStateChange:(id)arg1 ;
-(void)handleActivePhoneCallEstablishedNotification:(id)arg1 ;
-(void)handleCameraSettingsDidChangeNotification:(id)arg1 ;
-(void)_stopStreamWithError:(id)arg1 ;
-(void)_handleStopMessage:(id)arg1 ;
-(char)_isStopMessage:(id)arg1 ;
-(char)_isSetAudioStreamSettingMessage:(id)arg1 ;
-(void)_handleSetAudioState:(id)arg1 ;
-(char)_isSetAudioVolumeMessage:(id)arg1 ;
-(void)_handleSetAudioVolume:(id)arg1 ;
-(char)_isRemoteSetupMessage:(id)arg1 ;
-(void)_handleRemoteSetupMessage:(id)arg1 ;
-(char)_isNegotiateMessage:(id)arg1 ;
-(void)_handleNegotiateMessage:(id)arg1 ;
-(char)_isStartMessage:(id)arg1 ;
-(void)_handleStartMessage:(id)arg1 ;
-(char)_isReconfigureMessage:(id)arg1 ;
-(void)_handleReconfigureMessage:(id)arg1 ;
-(char)_shouldHandleNegotiateMessage:(id)arg1 accessoryReachable:(char)arg2 ;
-(HMDCameraSupportedConfigurationCache *)supportedConfigCache;
-(HMDPhoneCallObserver *)phoneCallObserver;
-(HMDDynamicActivityAttributionPublisher *)dynamicActivityAttributionPublisher;
-(void)setAudioVolume:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_resetStreamSession:(id)arg1 ;
-(void)_sendStreamStoppedNotification:(id)arg1 ;
-(char)_shouldStopStreamSessionForProcessInfo:(id)arg1 ;
-(void)streamControlManagerDidNegotiateStream:(id)arg1 selectedParameters:(id)arg2 ;
-(void)streamControlManagerDidSetupRemoteConnection:(id)arg1 ;
-(void)streamControlManagerDidStartStream:(id)arg1 slotIdentifier:(id)arg2 ;
-(void)streamControlManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4 ;
-(void)streamControlManagerDidReconfigureStream:(id)arg1 ;
-(void)streamControlManagerDidStopStreamForSessionID:(id)arg1 error:(id)arg2 ;
-(void)streamControlManager:(id)arg1 didFail:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 streamSnapshotHandler:(id)arg2 accessory:(id)arg3 streamManagementService:(id)arg4 profileUniqueIdentifier:(id)arg5 networkMonitor:(id)arg6 ;
-(char)isStreamingSessionInProgress;
@end

