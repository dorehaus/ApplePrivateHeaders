/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, HMDService, NSDictionary, HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSupportedVideoConfiguration, HMDCameraRecordingSupportedAudioConfiguration, HMDCameraRecordingSelectedConfiguration, NSString, NSDate, NSArray, NSNumber;

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging> {

	char _configureCameraInProgress;
	char _canConfigureCameraForRecording;
	char _didTriggerABCForConfigure;
	id<HMDCameraRecordingSettingsControlDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	HMDService* _recordingService;
	NSDictionary* _recordingConfigurationOverrides;
	HMDCameraRecordingGeneralConfiguration* _supportedRecordingConfiguration;
	HMDCameraRecordingSupportedVideoConfiguration* _supportedVideoConfiguration;
	HMDCameraRecordingSupportedAudioConfiguration* _supportedAudioConfiguration;
	NSDictionary* _characteristicByType;
	HMDCameraRecordingSelectedConfiguration* _currentSelectedConfiguration;
	NSString* _clientIdentifier;
	NSDate* _configureStartDate;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                                     //@synthesize accessory=_accessory - In the implementation block
@property (readonly) HMDService * recordingService;                                                          //@synthesize recordingService=_recordingService - In the implementation block
@property (retain) NSDictionary * recordingConfigurationOverrides;                                           //@synthesize recordingConfigurationOverrides=_recordingConfigurationOverrides - In the implementation block
@property (retain) HMDCameraRecordingGeneralConfiguration * supportedRecordingConfiguration;                 //@synthesize supportedRecordingConfiguration=_supportedRecordingConfiguration - In the implementation block
@property (retain) HMDCameraRecordingSupportedVideoConfiguration * supportedVideoConfiguration;              //@synthesize supportedVideoConfiguration=_supportedVideoConfiguration - In the implementation block
@property (retain) HMDCameraRecordingSupportedAudioConfiguration * supportedAudioConfiguration;              //@synthesize supportedAudioConfiguration=_supportedAudioConfiguration - In the implementation block
@property (readonly) NSArray * videoConfigurationsByPreferenceOrder; 
@property (copy) NSDictionary * characteristicByType;                                                        //@synthesize characteristicByType=_characteristicByType - In the implementation block
@property (assign) char configureCameraInProgress;                                                           //@synthesize configureCameraInProgress=_configureCameraInProgress - In the implementation block
@property (assign) char canConfigureCameraForRecording;                                                      //@synthesize canConfigureCameraForRecording=_canConfigureCameraForRecording - In the implementation block
@property (retain) HMDCameraRecordingSelectedConfiguration * currentSelectedConfiguration;                   //@synthesize currentSelectedConfiguration=_currentSelectedConfiguration - In the implementation block
@property (copy,readonly) NSString * clientIdentifier;                                                       //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (retain) NSDate * configureStartDate;                                                              //@synthesize configureStartDate=_configureStartDate - In the implementation block
@property (assign) char didTriggerABCForConfigure;                                                           //@synthesize didTriggerABCForConfigure=_didTriggerABCForConfigure - In the implementation block
@property (copy,readonly) NSNumber * configuredBitRate; 
@property (copy,readonly) NSNumber * configuredIFrameInterval; 
@property (copy,readonly) NSNumber * configuredImageWidth; 
@property (copy,readonly) NSNumber * configuredImageHeight; 
@property (readonly) double configuredFragmentDuration; 
@property (readonly) double configuredPrebufferDuration; 
@property (getter=isCameraConfiguredForRecording,readonly) char cameraConfiguredForRecording; 
@property (__weak) id<HMDCameraRecordingSettingsControlDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(char)isSupportedH264Profile:(id)arg1 ;
+(char)isSupportedVideoCodec:(id)arg1 ;
+(id)videoCodecForCodecConfiguration:(id)arg1 ;
+(id)h264ProfileForCodecConfiguration:(id)arg1 ;
+(char)isSupportedAudioCodec:(id)arg1 ;
+(id)audioConfigurationsByPreferenceOrder;
+(id)audioCodecForCodecConfiguration:(id)arg1 ;
+(id)audioBitRateForCodecConfiguration:(id)arg1 ;
-(void)dealloc;
-(id<HMDCameraRecordingSettingsControlDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraRecordingSettingsControlDelegate>)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHAPAccessory *)accessory;
-(NSString *)clientIdentifier;
-(id)logIdentifier;
-(void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1 ;
-(void)handleAccessoryConnected:(id)arg1 ;
-(void)handleAccessoryDisconnected:(id)arg1 ;
-(HMDCameraRecordingSelectedConfiguration *)currentSelectedConfiguration;
-(void)handleCharacteristicsUpdated:(id)arg1 ;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)handleCameraProfileSettingsDidWriteToAccessory:(id)arg1 ;
-(void)updateCanConfigureCameraForRecording;
-(void)configureCameraRecordingSettings;
-(void)setRecordingConfigurationOverrides:(NSDictionary *)arg1 ;
-(NSDictionary *)recordingConfigurationOverrides;
-(NSDictionary *)characteristicByType;
-(void)reconfigureCameraRecordingSettingsWithReason:(id)arg1 ;
-(HMDCameraRecordingGeneralConfiguration *)supportedRecordingConfiguration;
-(id)_preferredVideoConfigurationOverride;
-(NSArray *)videoConfigurationsByPreferenceOrder;
-(HMDCameraRecordingSupportedVideoConfiguration *)supportedVideoConfiguration;
-(id)_preferredAudioConfigurationOverride;
-(HMDCameraRecordingSupportedAudioConfiguration *)supportedAudioConfiguration;
-(void)setCanConfigureCameraForRecording:(char)arg1 ;
-(void)setCurrentSelectedConfiguration:(HMDCameraRecordingSelectedConfiguration *)arg1 ;
-(HMDService *)recordingService;
-(void)setCharacteristicByType:(NSDictionary *)arg1 ;
-(char)didTriggerABCForConfigure;
-(NSDate *)configureStartDate;
-(void)setDidTriggerABCForConfigure:(char)arg1 ;
-(char)configureCameraInProgress;
-(void)triggerABCForConfigure;
-(void)setConfigureStartDate:(NSDate *)arg1 ;
-(void)_configureCameraRecordingSettings;
-(void)_readCameraRecordingSettings;
-(char)canConfigureCameraForRecording;
-(void)setConfigureCameraInProgress:(char)arg1 ;
-(void)_readSupportedCameraRecordingConfiguration;
-(void)_selectedConfigurationDidUpdateTo:(id)arg1 ;
-(void)_readSelectedCameraRecordingConfiguration;
-(void)_handleSelectedCameraRecordingConfigurationReadResponse:(id)arg1 ;
-(id)_parseSelectedRecordingConfiguration:(id)arg1 ;
-(void)_handleSupportedConfigurationCharacteristicsReadResponse:(id)arg1 ;
-(id)_parseSupportedRecordingConfiguration:(id)arg1 ;
-(void)setSupportedRecordingConfiguration:(HMDCameraRecordingGeneralConfiguration *)arg1 ;
-(id)_parseSupportedVideoConfiguration:(id)arg1 ;
-(void)setSupportedVideoConfiguration:(HMDCameraRecordingSupportedVideoConfiguration *)arg1 ;
-(id)_parseSupportedAudioConfiguration:(id)arg1 ;
-(void)setSupportedAudioConfiguration:(HMDCameraRecordingSupportedAudioConfiguration *)arg1 ;
-(id)_recordingGeneralConfiguration;
-(id)_recordingVideoConfiguration;
-(id)_recordingAudioConfiguration;
-(void)_setSelectedRecordingConfiguration:(id)arg1 ;
-(id)_parseResponse:(id)arg1 forCharacteristicType:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3 ;
-(NSNumber *)configuredBitRate;
-(NSNumber *)configuredIFrameInterval;
-(NSNumber *)configuredImageWidth;
-(NSNumber *)configuredImageHeight;
-(void)handleAccessoryIsNotConfiguredError;
-(char)isCameraConfiguredForRecording;
-(double)configuredFragmentDuration;
-(double)configuredPrebufferDuration;
@end

