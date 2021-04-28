/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaAccessory.h>
#import <libobjc.A.dylib/HMDAccessorySettingsControllerDataSource.h>
#import <libobjc.A.dylib/HMDAccessorySettingsControllerDelegate.h>
#import <libobjc.A.dylib/HMDMediaDestinationControllerDataSource.h>
#import <libobjc.A.dylib/HMDMediaDestinationControllerDelegate.h>
#import <libobjc.A.dylib/HMDMediaDestinationManagerDataSource.h>
#import <libobjc.A.dylib/HMDMediaDestinationManagerDelegate.h>
#import <libobjc.A.dylib/HMDDeviceControllerDelegate.h>
#import <libobjc.A.dylib/HMDAppleMediaAccessoryMetricsDispatcherDataSource.h>
#import <libobjc.A.dylib/HMDAppleMediaAccessorySleepWakeStateControllerDataSource.h>
#import <libobjc.A.dylib/HMDAccessoryUserManagement.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDAppleMediaAccessoryModelDataSource;
@class HMDBackingStore, HMFActivity, HMDDevice, HMDDeviceController, HMMediaDestination, HMMediaDestinationControllerData, HMFPairingIdentity, HMDRemoteLoginHandler, HMDAccessorySymptomHandler, HMFSoftwareVersion, HMFWiFiNetworkInfo, HMDTargetControlManager, NSUUID, NSNumber, HMDAccessorySettingsController, NSArray, HMDMediaDestinationManager, HMDMediaDestinationController, HMDAppleMediaAccessoryMetricsDispatcher, HMDAppleMediaAccessorySleepWakeStateController, HMFWiFiManager, NSNotificationCenter, NSString;

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate, HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate, HMDDeviceControllerDelegate, HMDAppleMediaAccessoryMetricsDispatcherDataSource, HMDAppleMediaAccessorySleepWakeStateControllerDataSource, HMDAccessoryUserManagement, HMFLogging> {

	HMDDevice* _device;
	HMDDeviceController* _deviceController;
	HMMediaDestination* _committedAudioDestination;
	HMMediaDestinationControllerData* _committedAudioDestinationControllerData;
	char _deviceReachable;
	char _fixedPairingIdentityInCloud;
	HMFPairingIdentity* _pairingIdentity;
	HMDRemoteLoginHandler* _remoteLoginHandler;
	HMDAccessorySymptomHandler* _symptomsHandler;
	HMFSoftwareVersion* _softwareVersion;
	HMFWiFiNetworkInfo* _wifiNetworkInfo;
	HMFWiFiNetworkInfo* _lastStagedWifiNetworkInfo;
	HMDTargetControlManager* _targetControlManager;
	unsigned long long _supportedStereoPairVersions;
	NSUUID* _preferredMediaUserUUID;
	NSNumber* _preferredMediaUserSelectionTypeNumber;
	HMDAccessorySettingsController* _settingsController;
	NSArray* _supportedMultiUserLanguageCodes;
	HMDMediaDestinationManager* _audioDestinationManager;
	HMDMediaDestinationController* _audioDestinationController;
	long long _fallbackMediaUserType;
	HMFPairingIdentity* _lastCreatedPairingIdentity;
	id<HMDAppleMediaAccessoryModelDataSource> _modelDataSource;
	/*^block*/id _deviceMediaRouteIdentifierFactory;
	HMDAppleMediaAccessoryMetricsDispatcher* _metricsDispatcher;
	HMDAppleMediaAccessorySleepWakeStateController* _sleepWakeStateController;
	HMFWiFiManager* _wifiManager;
	NSNotificationCenter* _notificationCenter;
	/*^block*/id _settingsConnectionFactory;

}

@property (nonatomic,retain) HMDTargetControlManager * targetControlManager;                               //@synthesize targetControlManager=_targetControlManager - In the implementation block
@property (assign,nonatomic) char fixedPairingIdentityInCloud;                                             //@synthesize fixedPairingIdentityInCloud=_fixedPairingIdentityInCloud - In the implementation block
@property (nonatomic,retain) HMFPairingIdentity * lastCreatedPairingIdentity;                              //@synthesize lastCreatedPairingIdentity=_lastCreatedPairingIdentity - In the implementation block
@property (retain) NSArray * supportedMultiUserLanguageCodes;                                              //@synthesize supportedMultiUserLanguageCodes=_supportedMultiUserLanguageCodes - In the implementation block
@property (assign) unsigned long long supportedStereoPairVersions;                                         //@synthesize supportedStereoPairVersions=_supportedStereoPairVersions - In the implementation block
@property (readonly) id<HMDAppleMediaAccessoryModelDataSource> modelDataSource;                            //@synthesize modelDataSource=_modelDataSource - In the implementation block
@property (copy,readonly) id deviceMediaRouteIdentifierFactory;                                            //@synthesize deviceMediaRouteIdentifierFactory=_deviceMediaRouteIdentifierFactory - In the implementation block
@property (copy) NSUUID * preferredMediaUserUUID;                                                          //@synthesize preferredMediaUserUUID=_preferredMediaUserUUID - In the implementation block
@property (copy) NSNumber * preferredMediaUserSelectionTypeNumber;                                         //@synthesize preferredMediaUserSelectionTypeNumber=_preferredMediaUserSelectionTypeNumber - In the implementation block
@property (retain) HMDMediaDestinationController * audioDestinationController;                             //@synthesize audioDestinationController=_audioDestinationController - In the implementation block
@property (retain) HMDMediaDestinationManager * audioDestinationManager;                                   //@synthesize audioDestinationManager=_audioDestinationManager - In the implementation block
@property (retain) HMFWiFiNetworkInfo * lastStagedWifiNetworkInfo;                                         //@synthesize lastStagedWifiNetworkInfo=_lastStagedWifiNetworkInfo - In the implementation block
@property (retain) HMDAppleMediaAccessoryMetricsDispatcher * metricsDispatcher;                            //@synthesize metricsDispatcher=_metricsDispatcher - In the implementation block
@property (retain) HMDAppleMediaAccessorySleepWakeStateController * sleepWakeStateController;              //@synthesize sleepWakeStateController=_sleepWakeStateController - In the implementation block
@property (retain) HMFWiFiManager * wifiManager;                                                           //@synthesize wifiManager=_wifiManager - In the implementation block
@property (retain) NSNotificationCenter * notificationCenter;                                              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (retain) HMDAccessorySettingsController * settingsController;                                    //@synthesize settingsController=_settingsController - In the implementation block
@property (copy) id settingsConnectionFactory;                                                             //@synthesize settingsConnectionFactory=_settingsConnectionFactory - In the implementation block
@property (readonly) HMDDevice * device; 
@property (copy,readonly) HMFPairingIdentity * pairingIdentity;                                            //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (readonly) HMDRemoteLoginHandler * remoteLoginHandler;                                           //@synthesize remoteLoginHandler=_remoteLoginHandler - In the implementation block
@property (readonly) HMDAccessorySymptomHandler * symptomsHandler;                                         //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (assign,getter=isDeviceReachable,nonatomic) char deviceReachable;                                //@synthesize deviceReachable=_deviceReachable - In the implementation block
@property (readonly) HMFSoftwareVersion * softwareVersion;                                                 //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (readonly) HMFWiFiNetworkInfo * wifiNetworkInfo;                                                 //@synthesize wifiNetworkInfo=_wifiNetworkInfo - In the implementation block
@property (readonly) HMMediaDestination * audioDestination; 
@property (readonly) HMMediaDestinationControllerData * audioDestinationControllerData; 
@property (nonatomic,readonly) long long fallbackMediaUserType;                                            //@synthesize fallbackMediaUserType=_fallbackMediaUserType - In the implementation block
@property (readonly) HMDBackingStore * backingStore; 
@property (retain) HMFActivity * setupActivity; 
@property (assign) double setupStartTimestamp; 
@property (assign) double homepodSetupLatency; 
@property (assign) double homepodSettingsCreationTimestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char supportsUserManagement; 
+(char)supportsSecureCoding;
+(id)logCategory;
+(char)hasMessageReceiverChildren;
+(char)shouldAcceptMessage:(id)arg1 home:(id)arg2 privilege:(unsigned long long)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDDevice *)device;
-(NSNotificationCenter *)notificationCenter;
-(HMDBackingStore *)backingStore;
-(HMFWiFiManager *)wifiManager;
-(void)setWifiManager:(HMFWiFiManager *)arg1 ;
-(char)supportsMultiUser;
-(HMMediaDestination *)audioDestination;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(HMFSoftwareVersion *)softwareVersion;
-(id)dumpState;
-(HMDAccessorySymptomHandler *)symptomsHandler;
-(void)_registerForMessages;
-(unsigned long long)supportedStereoPairVersions;
-(void)setSupportedStereoPairVersions:(unsigned long long)arg1 ;
-(char)supportsTargetControl;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isCurrentAccessory;
-(HMDRemoteLoginHandler *)remoteLoginHandler;
-(long long)reachableTransports;
-(HMFWiFiNetworkInfo *)wifiNetworkInfo;
-(char)supportsCompanionInitiatedRestart;
-(char)supportsMusicAlarm;
-(HMDMediaDestinationController *)audioDestinationController;
-(char)supportsAnnounce;
-(char)supportsDoorbellChime;
-(char)supportsThirdPartyMusic;
-(char)supportsPreferredMediaUser;
-(NSUUID *)preferredMediaUserUUID;
-(void)setPreferredMediaUserUUID:(NSUUID *)arg1 ;
-(void)setSoftwareVersion:(HMFSoftwareVersion *)arg1 ;
-(void)setWifiNetworkInfo:(HMFWiFiNetworkInfo *)arg1 ;
-(void)setAudioDestinationController:(HMDMediaDestinationController *)arg1 ;
-(HMDAccessorySettingsController *)settingsController;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(id)deviceMonitor;
-(id)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(id)targetAccessoryForMediaDestinationManager:(id)arg1 ;
-(char)isDeviceReachable;
-(void)runTransactionWithModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(char)arg4 ;
-(void)configureAudioDestinationController;
-(id)runtimeState;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(HMDMediaDestinationManager *)audioDestinationManager;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(void)addAdvertisement:(id)arg1 ;
-(void)autoConfigureTargetControllers;
-(void)setRemotelyReachable:(char)arg1 ;
-(char)supportsUserManagement;
-(double)homepodSettingsCreationTimestamp;
-(double)homepodSetupLatency;
-(void)removeAdvertisement:(id)arg1 ;
-(id)messageSendPolicy;
-(long long)fallbackMediaUserType;
-(void)migrateWithCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HMDAppleMediaAccessoryMetricsDispatcher *)metricsDispatcher;
-(void)setHomepodSetupLatency:(double)arg1 ;
-(void)setHomepodSettingsCreationTimestamp:(double)arg1 ;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)assistantObject;
-(id)modelsToMakeSettingsForController:(id)arg1 parentUUID:(id)arg2 ;
-(HMFActivity *)setupActivity;
-(double)setupStartTimestamp;
-(void)setSetupStartTimestamp:(double)arg1 ;
-(id)modelsToMigrateSettingsForController:(id)arg1 ;
-(id)remoteMessageDestinationForAccessorySettingsController:(id)arg1 target:(id)arg2 ;
-(void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2 ;
-(char)isMultiUserEnabledForAccessorySettingsController:(id)arg1 ;
-(id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)arg1 ;
-(id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)arg1 ;
-(id)currentRoomForAppleMediaAccessoryMetricsDispatcher:(id)arg1 ;
-(char)isRemotelyReachable;
-(char)isTriggeredOnControllerDeviceForMediaDestinationControllerMetricsEventDispatcher:(id)arg1 ;
-(id)currentUserForMediaDestinationControllerMetricsEventDispatcher:(id)arg1 ;
-(id)currentDestinationTypeForMediaDestinationControllerMetricsEventDispatcher:(id)arg1 ;
-(long long)mediaDestinationControllerMetricsEventDispatcher:(id)arg1 destinationTypeForDestinationWithIdentifier:(id)arg2 ;
-(void)_handleUpdatedName:(id)arg1 ;
-(char)supportsSoftwareUpdate;
-(char)_shouldFilterAccessoryProfile:(id)arg1 ;
-(void)_applySoftwareUpdateModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_allowSoftwareUpdateChangeFromSource:(unsigned long long)arg1 ;
-(void)populateModelObject:(id)arg1 version:(long long)arg2 ;
-(char)requiresHomeAppForManagement;
-(char)supportsMediaContentProfile;
-(char)supportsPersonalRequests;
-(id)dumpSimpleState;
-(void)handleDeviceIsReachable:(id)arg1 ;
-(void)handleDeviceIsNotReachable:(id)arg1 ;
-(void)handleRoomChanged:(id)arg1 ;
-(void)handleRoomNameChanged:(id)arg1 ;
-(void)runTransactionWithModels:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createMediaProfile;
-(void)handleCurrentDeviceUpdated:(id)arg1 ;
-(id)mediaDestinationManager:(id)arg1 destinationControllerWithIdentifier:(id)arg2 ;
-(id)rootDestinationManagerForMediaDestinationManager:(id)arg1 ;
-(void)mediaDestinationManagerDidExpireStagedValues:(id)arg1 ;
-(HMDTargetControlManager *)targetControlManager;
-(void)setTargetControlManager:(HMDTargetControlManager *)arg1 ;
-(void)_fetchAvailableUpdate:(id)arg1 ;
-(void)_startUpdate:(id)arg1 ;
-(void)handleDeleteSiriHistoryRequest:(id)arg1 ;
-(void)handleUpdatePreferredMediaUser:(id)arg1 ;
-(void)_handleTriggerPairingIdentityUpdateNotification:(id)arg1 ;
-(void)setSettingsController:(HMDAccessorySettingsController *)arg1 ;
-(void)configureAudioDestinationManager;
-(id)deviceMediaRouteIdentifierFactory;
-(char)shouldUpdateWithDevice:(id)arg1 ;
-(void)updateWithDevice:(id)arg1 ;
-(void)createPairingIdentity;
-(void)_fixCloudKeyIfNeeded;
-(void)_updateSupportedStereoPairVersions:(unsigned long long)arg1 ;
-(void)_updateSoftwareVersion:(id)arg1 ;
-(void)handleCurrentNetworkChangedNotification:(id)arg1 ;
-(void)updateWiFiNetworkInfo;
-(void)_fetchMultiUserLanguages;
-(void)handleHomeUserRemovedNotification:(id)arg1 ;
-(void)startMonitoringReachability;
-(HMDAppleMediaAccessorySleepWakeStateController *)sleepWakeStateController;
-(void)registerForPublishingNotifications;
-(id)committedAudioDestinationControllerData;
-(void)createAudioDestinationController;
-(void)removeAudioDestinationController;
-(id)committedAudioDestination;
-(void)createAudioDestination;
-(void)setAudioDestinationManager:(HMDMediaDestinationManager *)arg1 ;
-(void)removeAudioDestination;
-(void)setSupportedMultiUserLanguageCodes:(NSArray *)arg1 ;
-(char)fixedPairingIdentityInCloud;
-(void)updateRechabilityFromDevicePublishingState;
-(void)handleDeviceIsPublishingChangedNotification:(id)arg1 ;
-(void)notifyClientsOfUpdatedAccessoryControllableValue:(char)arg1 ;
-(void)setDeviceReachable:(char)arg1 ;
-(void)notifyFrameworkOfUpdatedPairingIdentity;
-(void)setLastCreatedPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(HMFPairingIdentity *)lastCreatedPairingIdentity;
-(void)_relayRequestMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)settingsConnectionFactory;
-(NSNumber *)preferredMediaUserSelectionTypeNumber;
-(HMFWiFiNetworkInfo *)lastStagedWifiNetworkInfo;
-(void)setLastStagedWifiNetworkInfo:(HMFWiFiNetworkInfo *)arg1 ;
-(id)remoteMessageDestination;
-(void)migrateAudioDestinationControllerWithCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)migrateAudioDestinationWithCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<HMDAppleMediaAccessoryModelDataSource>)modelDataSource;
-(void)handleUpdatedMediaDestinationControllerModel:(id)arg1 message:(id)arg2 ;
-(void)handleUpdatedMediaDestinationModel:(id)arg1 message:(id)arg2 ;
-(void)handleRemovedMediaDestinationModel:(id)arg1 message:(id)arg2 ;
-(void)handleRemovedMediaDestinationControllerModel:(id)arg1 message:(id)arg2 ;
-(void)unsetAudioDestination;
-(void)unsetAudioDestinationControllerData;
-(HMMediaDestinationControllerData *)audioDestinationControllerData;
-(void)setSetupActivity:(HMFActivity *)arg1 ;
-(NSArray *)supportedMultiUserLanguageCodes;
-(void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2 model:(id)arg3 ;
-(id)targetAccessoryForMediaDestinationController:(id)arg1 ;
-(id)mediaDestinationController:(id)arg1 destinationManagerWithIdentifier:(id)arg2 ;
-(id)mediaDestinationController:(id)arg1 destinationWithParentIdentifier:(id)arg2 ;
-(id)mediaDestinationController:(id)arg1 rootDestinationWithDecendantIdentifier:(id)arg2 ;
-(id)availableDestinationIdentifiersForMediaDestinationController:(id)arg1 ;
-(void)mediaDestinationControllerDidExpireStagedValues:(id)arg1 ;
-(void)deviceController:(id)arg1 didUpdateDevice:(id)arg2 ;
-(id)deviceForAppleMediaAccessorySleepWakeStateController:(id)arg1 ;
-(id)currentDeviceProductInfoForAppleMediaAccessorySleepWakeStateController:(id)arg1 ;
-(id)initWithDeviceController:(id)arg1 deviceIdentifierFactory:(/*^block*/id)arg2 ;
-(char)supportsSettings;
-(void)setPreferredMediaUserSelectionTypeNumber:(NSNumber *)arg1 ;
-(void)setFixedPairingIdentityInCloud:(char)arg1 ;
-(void)setMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1 ;
-(void)setSleepWakeStateController:(HMDAppleMediaAccessorySleepWakeStateController *)arg1 ;
-(void)setSettingsConnectionFactory:(id)arg1 ;
@end

