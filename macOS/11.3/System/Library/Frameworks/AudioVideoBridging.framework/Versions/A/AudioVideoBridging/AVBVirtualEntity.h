/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSClockClient.h>
#import <libobjc.A.dylib/AVBMSRPListenerClient.h>
#import <libobjc.A.dylib/AVBMSRPTalkerClient.h>
#import <libobjc.A.dylib/AVB17221EntityPublisher.h>
#import <libobjc.A.dylib/AVBInterfaceDelegate.h>
#import <libobjc.A.dylib/AVB17221ACMPClient.h>
#import <libobjc.A.dylib/AVB17221AECPClient.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, IOKNotificationPort, AVB17221AEMEntity, AVBInterface, AVBMACAddress, AVB17221Entity, NSDictionary, NSString;

@interface AVBVirtualEntity : NSObject <TSClockClient, AVBMSRPListenerClient, AVBMSRPTalkerClient, AVB17221EntityPublisher, AVBInterfaceDelegate, AVB17221ACMPClient, AVB17221AECPClient> {

	char _addedTimeSyncReference;
	NSMutableDictionary* _inputStreams;
	NSMutableDictionary* _outputStreams;
	NSMutableDictionary* _unsolicitedNotificationControllers;
	NSObject*<OS_dispatch_queue> _unsolicitedQueue;
	unsigned short _unsolicitedSequenceID;
	NSObject*<OS_dispatch_queue> _notificationsQueue;
	IOKNotificationPort* _notificationPort;
	NSObject*<OS_dispatch_queue> _publishingQueue;
	NSObject*<OS_dispatch_queue> _streamQueue;
	NSObject*<OS_dispatch_queue> _persistentQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _aecpQueue;
	NSObject*<OS_dispatch_queue> _acmpQueue;
	NSObject*<OS_dispatch_queue> _streamStopQueue;
	char _published;
	char _acquired;
	char _persistentlyAcquired;
	char _locked;
	AVB17221AEMEntity* _entityModel;
	AVBInterface* _interface;
	unsigned long long _acquiredControllerEntityID;
	AVBMACAddress* _acquiredControllerMACAddress;
	unsigned long long _lockedControllerEntityID;
	AVB17221Entity* _publishedEntity;

}

@property (nonatomic,copy) AVB17221AEMEntity * entityModel;                                        //@synthesize entityModel=_entityModel - In the implementation block
@property (assign,nonatomic,__weak) AVBInterface * interface;                                      //@synthesize interface=_interface - In the implementation block
@property (nonatomic,copy) AVB17221Entity * publishedEntity;                                       //@synthesize publishedEntity=_publishedEntity - In the implementation block
@property (assign,getter=isPublished,nonatomic) char published;                                    //@synthesize published=_published - In the implementation block
@property (assign,getter=isAcquired,nonatomic) char acquired;                                      //@synthesize acquired=_acquired - In the implementation block
@property (assign,nonatomic) unsigned long long acquiredControllerEntityID;                        //@synthesize acquiredControllerEntityID=_acquiredControllerEntityID - In the implementation block
@property (nonatomic,copy) AVBMACAddress * acquiredControllerMACAddress;                           //@synthesize acquiredControllerMACAddress=_acquiredControllerMACAddress - In the implementation block
@property (assign,getter=isPersistentlyAcquired,nonatomic) char persistentlyAcquired;              //@synthesize persistentlyAcquired=_persistentlyAcquired - In the implementation block
@property (assign,getter=isLocked,nonatomic) char locked;                                          //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) unsigned long long lockedControllerEntityID;                          //@synthesize lockedControllerEntityID=_lockedControllerEntityID - In the implementation block
@property (nonatomic,readonly) NSDictionary * debugInfoDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(AVBInterface *)interface;
-(char)isAcquired;
-(void)setInterface:(AVBInterface *)arg1 ;
-(char)isPublished;
-(void)setPublished:(char)arg1 ;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1 ;
-(unsigned char)startStream:(id)arg1 ;
-(unsigned char)stopStream:(id)arg1 ;
-(char)ACMPDidReceiveCommand:(id)arg1 onInterface:(id)arg2 ;
-(char)ACMPDidReceiveResponse:(id)arg1 onInterface:(id)arg2 ;
-(char)AECPDidReceiveResponse:(id)arg1 onInterface:(id)arg2 ;
-(char)AECPDidReceiveCommand:(id)arg1 onInterface:(id)arg2 ;
-(AVB17221AEMEntity *)entityModel;
-(void)setAcquiredControllerEntityID:(unsigned long long)arg1 ;
-(unsigned char)setAssociationID:(unsigned long long)arg1 ;
-(void)didAddEntityDiscovery:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddAECP:(id)arg1 onInterface:(id)arg2 ;
-(void)setEntityModel:(AVB17221AEMEntity *)arg1 ;
-(void)setAcquired:(char)arg1 ;
-(unsigned long long)acquiredControllerEntityID;
-(void)didAddMSRPDomain:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddMSRPListener:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddMSRPTalker:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddACMP:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddMAAP:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddLinkLayerPort:(id)arg1 onInterface:(id)arg2 ;
-(void)didAddInterfaceStreamingManager:(id)arg1 onInterface:(id)arg2 ;
-(void)didUpdateProperites:(unsigned long long)arg1 ;
-(NSDictionary *)debugInfoDictionary;
-(void)didRegisterListenerStreamID:(unsigned long long)arg1 event:(unsigned char)arg2 onInterface:(id)arg3 ;
-(void)didDeregisterListenerStreamID:(unsigned long long)arg1 onInterface:(id)arg2 ;
-(void)didRegisterTalkerAttribute:(id)arg1 onMSRPTalker:(id)arg2 ;
-(void)didDeregisterTalkerStreamID:(unsigned long long)arg1 onMSRPTalker:(id)arg2 ;
-(AVB17221Entity *)publishedEntity;
-(unsigned long long)lockedControllerEntityID;
-(void)setAcquiredControllerMACAddress:(AVBMACAddress *)arg1 ;
-(char)_ACMPDidReceiveCommand:(id)arg1 onInterface:(id)arg2 ;
-(char)allowCommandsFromController:(unsigned long long)arg1 ;
-(id)outputStreamForUniqueID:(unsigned short)arg1 ;
-(char)hasOutputStreamForUniqueID:(unsigned short)arg1 ;
-(char)hasInputStreamForUniqueID:(unsigned short)arg1 ;
-(id)inputStreamForUniqueID:(unsigned short)arg1 ;
-(char)_ACMPDidReceiveResponse:(id)arg1 onInterface:(id)arg2 ;
-(AVBMACAddress *)acquiredControllerMACAddress;
-(void)sendInProgressResponse:(id)arg1 ifNotSent:(id)arg2 onInterface:(id)arg3 ;
-(void)scheduleInProgressResponse:(id)arg1 ifNotSent:(id)arg2 onInterface:(id)arg3 ;
-(void)setPersistentlyAcquired:(char)arg1 ;
-(char)isPersistentlyAcquired;
-(void)setLockedControllerEntityID:(unsigned long long)arg1 ;
-(unsigned char)setConfigurationTo:(unsigned short)arg1 ;
-(unsigned char)setStream:(id)arg1 toFormat:(id)arg2 ;
-(unsigned char)setVideoCluster:(id)arg1 formatSpecific:(id)arg2 aspectRatio:(id)arg3 colorSpace:(unsigned short)arg4 andSize:(id)arg5 ;
-(unsigned char)setObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 ;
-(unsigned char)setAudioUnit:(id)arg1 samplingRate:(id)arg2 ;
-(unsigned char)setVideoCluster:(id)arg1 samplingRate:(id)arg2 ;
-(unsigned char)setSensorCluster:(id)arg1 samplingRate:(id)arg2 ;
-(unsigned char)setClockDomain:(id)arg1 toClockSourceIndex:(unsigned short)arg2 ;
-(unsigned char)setControl:(id)arg1 values:(id)arg2 ;
-(unsigned char)updateControlValues:(id)arg1 ;
-(void)sendUnsolicitedResponse:(id)arg1 isCommandResponse:(char)arg2 ;
-(unsigned char)getEntityCounters:(unsigned*)arg1 withValidFlags:(unsigned*)arg2 ;
-(unsigned char)getAVBInterface:(id)arg1 counters:(unsigned*)arg2 withValidFlags:(unsigned*)arg3 ;
-(unsigned char)getClockSource:(id)arg1 counters:(unsigned*)arg2 withValidFlags:(unsigned*)arg3 ;
-(unsigned char)getStream:(id)arg1 counters:(unsigned*)arg2 withValidFlags:(unsigned*)arg3 ;
-(unsigned char)startOperation:(unsigned short)arg1 forObjectOfType:(unsigned short)arg2 withIndex:(unsigned short)arg3 operationID:(unsigned short*)arg4 ;
-(char)_AECPDidReceiveCommand:(id)arg1 onInterface:(id)arg2 ;
-(id)handleAcquireEntityCommand:(id)arg1 onInterface:(id)arg2 ;
-(id)handleLockEntityCommand:(id)arg1 ;
-(id)handleEntityAvailableCommand:(id)arg1 ;
-(id)handleUnsupportedCommand:(id)arg1 ;
-(id)handleReadDescriptorCommand:(id)arg1 ;
-(id)handleWriteDescriptorCommand:(id)arg1 ;
-(id)handleSetConfigurationCommand:(id)arg1 onInterface:(id)arg2 ;
-(id)handleGetConfigurationCommand:(id)arg1 ;
-(id)handleSetStreamFormatCommand:(id)arg1 onInterface:(id)arg2 ;
-(id)handleGetStreamFormatCommand:(id)arg1 ;
-(id)handleSetVideoFormatCommand:(id)arg1 ;
-(id)handleGetVideoFormatCommand:(id)arg1 ;
-(id)handleSetSensorFormatCommand:(id)arg1 ;
-(id)handleGetSensorFormatCommand:(id)arg1 ;
-(id)handleSetStreamInfoCommand:(id)arg1 ;
-(id)handleGetStreamInfoCommand:(id)arg1 ;
-(id)handleSetNameCommand:(id)arg1 ;
-(id)handleGetNameCommand:(id)arg1 ;
-(id)handleSetAssociationIDCommand:(id)arg1 ;
-(id)handleGetAssociationIDCommand:(id)arg1 ;
-(id)handleSetSamplingRateCommand:(id)arg1 ;
-(id)handleGetSamplingRateCommand:(id)arg1 ;
-(id)handleSetClockSourceCommand:(id)arg1 ;
-(id)handleGetClockSourceCommand:(id)arg1 ;
-(id)handleSetControlCommand:(id)arg1 onInterface:(id)arg2 ;
-(id)handleGetControlCommand:(id)arg1 ;
-(id)handleIncrementControlCommand:(id)arg1 ;
-(id)handleDecrementControlCommand:(id)arg1 ;
-(id)handleSetSignalSelectorCommand:(id)arg1 ;
-(id)handleGetSignalSelectorCommand:(id)arg1 ;
-(id)handleSetMixerCommand:(id)arg1 ;
-(id)handleGetMixerCommand:(id)arg1 ;
-(id)handleSetMatrixCommand:(id)arg1 ;
-(id)handleGetMatrixCommand:(id)arg1 ;
-(id)handleStartStreamingCommand:(id)arg1 ;
-(id)handleStopStreamingCommand:(id)arg1 onInterface:(id)arg2 ;
-(id)handleRegisterUnsolicitedNotificationCommand:(id)arg1 ;
-(id)handleDeregisterUnsolicitedNotfiicationCommand:(id)arg1 ;
-(id)handleGetAVBInfoCommand:(id)arg1 ;
-(id)handleGetASPathCommand:(id)arg1 ;
-(id)handleGetCountersCommand:(id)arg1 ;
-(id)handleRebootCommand:(id)arg1 ;
-(id)handleGetAudioMapCommand:(id)arg1 ;
-(id)handleAddAudioMappingCommand:(id)arg1 ;
-(id)handleRemoveAudioMappingCommand:(id)arg1 ;
-(id)handleGetVideoMapCommand:(id)arg1 ;
-(id)handleAddVideoMappingCommand:(id)arg1 ;
-(id)handleRemoveVideoMappingCommand:(id)arg1 ;
-(id)handleGetSensorMapCommand:(id)arg1 ;
-(id)handleAddSensorMappingCommand:(id)arg1 ;
-(id)handleRemoveSensorMappingCommand:(id)arg1 ;
-(id)handleStartOperationCommand:(id)arg1 onInterface:(id)arg2 ;
-(id)handleAbortOperationCommand:(id)arg1 ;
-(id)handleAuthenticateAddKeyCommand:(id)arg1 ;
-(id)handleAuthenticateDeleteKeyCommand:(id)arg1 ;
-(id)handleAuthenticateGetKeyListCommand:(id)arg1 ;
-(id)handleAuthenticateGetKeyCommand:(id)arg1 ;
-(id)handleAuthenticateAddKeyToChainCommand:(id)arg1 ;
-(id)handleAuthenticateDeleteKeyFromChainCommand:(id)arg1 ;
-(id)handleAuthenticateGetKeychainListCommand:(id)arg1 ;
-(id)handleAuthenticateGetIdentityCommand:(id)arg1 ;
-(id)handleAuthenticateAddTokenCommand:(id)arg1 ;
-(id)handleAuthenticateDeleteTokenCommand:(id)arg1 ;
-(id)handleAuthenticateCommand:(id)arg1 ;
-(id)handleDeauthenticateCommand:(id)arg1 ;
-(id)handleEnableTransportSecurityCommand:(id)arg1 ;
-(id)handleDisableTransportSecurityCommand:(id)arg1 ;
-(id)handleEnableStreamEncryptionCommand:(id)arg1 ;
-(id)handleDisableStreamEncryptionCommand:(id)arg1 ;
-(id)handleSetMemoryObjectLengthCommand:(id)arg1 ;
-(id)handleGetMemoryObjectLengthCommand:(id)arg1 ;
-(id)handleSetStreamBackupCommand:(id)arg1 ;
-(id)handleGetStreamBackupCommand:(id)arg1 ;
-(char)supportsAddressAccessTLV:(id)arg1 ;
-(unsigned char)processAddressAccessTLV:(id)arg1 responseTLV:(id*)arg2 ;
-(char)_AECPDidReceiveResponse:(id)arg1 onInterface:(id)arg2 ;
-(id)createInputStreamForUniqueID:(unsigned short)arg1 ;
-(id)createOutputStreamForUniqueID:(unsigned short)arg1 ;
-(void)unpublishEntity;
-(id)initWithEntityModel:(id)arg1 onInterface:(id)arg2 ;
-(char)publishEntity;
-(char)localAcquireEntityWithControllerEntityID:(unsigned long long)arg1 andMACAddress:(id)arg2 ;
-(void)removeInputStreamForUniqueID:(unsigned short)arg1 ;
-(void)removeOutputStreamForUniqueID:(unsigned short)arg1 ;
-(void)requestSetAudioUnit:(unsigned short)arg1 toSamplingRate:(id)arg2 ;
-(void)requestSetVideoCluster:(unsigned short)arg1 toFrameRate:(id)arg2 ;
-(void)requestSetClockDomain:(unsigned short)arg1 toClockSource:(unsigned short)arg2 ;
-(void)requestSetObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 ;
-(void)requestChangeConfigurationTo:(unsigned short)arg1 ;
-(void)notifySetObjectOfType:(unsigned short)arg1 withIndex:(unsigned short)arg2 inConfiguration:(unsigned short)arg3 toName:(id)arg4 atIndex:(unsigned short)arg5 ;
-(void)notifySetControl:(id)arg1 withValueData:(id)arg2 ;
-(void)setPublishedEntity:(AVB17221Entity *)arg1 ;
@end

