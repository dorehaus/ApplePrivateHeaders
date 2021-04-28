/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceImpl.h>

@protocol AVOutputDeviceImplSupport, FigRoutingContextFactory;
@class NSString, NSData, NSArray, NSNumber, NSDictionary, AVWeakReference;

@interface AVFigEndpointOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {

	id<AVOutputDeviceImplSupport> _implSupportEventListener;
	AVWeakReference* _weakObserver;
	OpaqueFigEndpointRef _figEndpoint;
	OpaqueFigVolumeControllerStateRef _volumeController;
	id<FigRoutingContextFactory> _routingContextFactory;
	char _useRouteConfigUpdatedNotification;

}

@property (__weak) id<AVOutputDeviceImplSupport> implEventListener;                                                    //@synthesize implSupportEventListener=_implSupportEventListener - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * ID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) long long deviceSubType; 
@property (nonatomic,readonly) long long clusterType; 
@property (nonatomic,readonly) long long configuredClusterSize; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSData * identifyingMACAddress; 
@property (nonatomic,readonly) NSArray * clusteredDeviceDescriptions; 
@property (nonatomic,readonly) char isClusterLeader; 
@property (nonatomic,readonly) NSString * clusterID; 
@property (nonatomic,readonly) NSNumber * batteryLevel; 
@property (nonatomic,readonly) NSNumber * caseBatteryLevel; 
@property (nonatomic,readonly) NSNumber * leftBatteryLevel; 
@property (nonatomic,readonly) NSNumber * rightBatteryLevel; 
@property (nonatomic,readonly) NSNumber * supportsDataOverACLProtocol; 
@property (nonatomic,readonly) NSNumber * isInEar; 
@property (nonatomic,readonly) NSDictionary * airPlayProperties; 
@property (getter=isInUseByPairedDevice,nonatomic,readonly) char inUseByPairedDevice; 
@property (nonatomic,copy,readonly) NSArray * connectedPairedDevices; 
@property (nonatomic,readonly) unsigned long long deviceFeatures; 
@property (nonatomic,readonly) char requiresAuthorization; 
@property (nonatomic,readonly) char automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) char onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) char canAccessRemoteAssets; 
@property (nonatomic,readonly) char canAccessAppleMusic; 
@property (nonatomic,readonly) char canAccessiCloudMusicLibrary; 
@property (nonatomic,readonly) char supportsBufferedAirPlay; 
@property (readonly) float volume; 
@property (readonly) char canSetVolume; 
@property (readonly) long long volumeControlType; 
@property (nonatomic,readonly) char canBeGrouped; 
@property (nonatomic,copy,readonly) NSString * groupID; 
@property (nonatomic,copy,readonly) NSString * proposedGroupID; 
@property (nonatomic,readonly) char canBeGroupLeader; 
@property (nonatomic,readonly) char isGroupLeader; 
@property (nonatomic,readonly) char participatesInGroupPlayback; 
@property (nonatomic,readonly) char groupContainsGroupLeader; 
@property (nonatomic,readonly) NSString * logicalDeviceID; 
@property (nonatomic,readonly) char isLogicalDeviceLeader; 
@property (nonatomic,readonly) char canCommunicateWithAllLogicalDeviceMembers; 
@property (nonatomic,readonly) char canRelayCommunicationChannel; 
@property (nonatomic,readonly) char canPlayEncryptedProgressiveDownloadAssets; 
@property (nonatomic,readonly) char canFetchMediaDataFromSender; 
@property (nonatomic,readonly) char presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; 
@property (nonatomic,readonly) char supportsBluetoothSharing; 
@property (nonatomic,readonly) long long HAPConformance; 
@property (nonatomic,readonly) char supportsHeadTrackedSpatialAudio; 
@property (getter=isHeadTrackedSpatialAudioActive,nonatomic,readonly) char headTrackedSpatialAudioActive; 
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes; 
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)name;
-(float)volume;
-(long long)deviceType;
-(void)setVolume:(float)arg1 ;
-(NSString *)serialNumber;
-(NSString *)groupID;
-(NSString *)firmwareVersion;
-(NSString *)manufacturer;
-(NSString *)ID;
-(long long)clusterType;
-(long long)volumeControlType;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 volumeController:(OpaqueFigVolumeControllerStateRef)arg2 routingContextFactory:(id)arg3 useRouteConfigUpdatedNotification:(char)arg4 ;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
-(char)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(id<AVOutputDeviceImplSupport>)implEventListener;
-(char)canSetVolume;
-(void)setSecondDisplayEnabled:(char)arg1 ;
-(void)setSecondDisplayMode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2 ;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setImplEventListener:(id<AVOutputDeviceImplSupport>)arg1 ;
-(long long)deviceSubType;
-(long long)configuredClusterSize;
-(NSString *)modelID;
-(NSData *)identifyingMACAddress;
-(NSArray *)clusteredDeviceDescriptions;
-(char)isClusterLeader;
-(NSString *)clusterID;
-(NSNumber *)batteryLevel;
-(NSNumber *)caseBatteryLevel;
-(NSNumber *)leftBatteryLevel;
-(NSNumber *)rightBatteryLevel;
-(NSNumber *)supportsDataOverACLProtocol;
-(NSNumber *)isInEar;
-(NSDictionary *)airPlayProperties;
-(char)isInUseByPairedDevice;
-(NSArray *)connectedPairedDevices;
-(unsigned long long)deviceFeatures;
-(char)requiresAuthorization;
-(char)onlyAllowsConnectionsFromPeersInHomeGroup;
-(char)canAccessRemoteAssets;
-(char)canAccessAppleMusic;
-(char)canAccessiCloudMusicLibrary;
-(char)supportsBufferedAirPlay;
-(char)canBeGrouped;
-(NSString *)proposedGroupID;
-(char)canBeGroupLeader;
-(char)isGroupLeader;
-(char)participatesInGroupPlayback;
-(char)groupContainsGroupLeader;
-(NSString *)logicalDeviceID;
-(char)isLogicalDeviceLeader;
-(char)canCommunicateWithAllLogicalDeviceMembers;
-(char)canRelayCommunicationChannel;
-(char)canPlayEncryptedProgressiveDownloadAssets;
-(char)canFetchMediaDataFromSender;
-(char)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(char)supportsBluetoothSharing;
-(long long)HAPConformance;
-(char)supportsHeadTrackedSpatialAudio;
-(char)isHeadTrackedSpatialAudioActive;
-(NSArray *)availableBluetoothListeningModes;
-(NSString *)currentBluetoothListeningMode;
-(void)setCurrentBluetoothListeningMode:(NSString *)arg1 ;
-(void)_volumeDidChangeForEndpointWithID:(CFStringRef)arg1 ;
-(void)_canSetEndpointVolumeDidChangeForEndpointWithID:(CFStringRef)arg1 ;
@end

