/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateMacController.framework/Versions/A/SoftwareUpdateMacController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData, NSDictionary;

@interface SUMacControllerOverrides : NSObject <NSSecureCoding> {

	char _background;
	char _requiresPowerPluggedIn;
	char _restrictToIncremental;
	char _restrictToFull;
	char _allowSameVersion;
	char _checkAvailableSpace;
	char _usesSFRSoftwareUpdates;
	char _usesRosettaUpdates;
	char _requirePreparePackageRosettaUpdates;
	char _attemptPreparePackageRosettaUpdates;
	char _bridgeOSAllowTestMode;
	char _bridgeOSStagedUpdatesOnly;
	char _bridgeOSAllowAnyCatalogCertificate;
	char _bridgeOSIgnoreMinimumVersionCheck;
	char _enableEmbeddedOSInstall;
	char _enableBridgeOSInstall;
	char _enableOSPersonalization;
	char _userInitiated;
	char _skipVolumeSealing;
	char _cancelUpdateOnClientDisconnect;
	char _disableRootVolumeSealCheck;
	char _supervised;
	char _MDMUseDelayPeriod;
	long long _updateType;
	NSString* _softwareUpdateAssetType;
	NSString* _sfrSoftwareUpdateAssetType;
	NSString* _updateBrainAssetType;
	NSString* _documentationAssetType;
	NSString* _rosettaVersionOverride;
	NSNumber* _catalogDownloadTimeoutSecs;
	NSNumber* _softwareUpdateAssetDownloadTimeoutSecs;
	NSNumber* _sfrSoftwareUpdateAssetDownloadTimeoutSecs;
	NSString* _updateUUID;
	NSString* _updateMetricContext;
	NSString* _targetVolumeUUID;
	NSString* _personalizedManifestRootsPath;
	NSNumber* _localAuthenticationUserID;
	NSData* _localAuthenticationContext;
	NSData* _appleConnectSsoToken;
	NSString* _appleConnectDAWToken;
	NSString* _bridgeOSCatalogURL;
	NSString* _bridgeOSVersionOverride;
	NSString* _bridgeOSDownloadDirectory;
	NSString* _rosettaDownloadDirectory;
	NSNumber* _performPreflightEncryptedCheck;
	NSNumber* _performPreflightSnapshotCheck;
	NSString* _authenticationServiceID;
	NSString* _authenticationAppID;
	long long _qualityOfService;
	NSString* _requestedPMV;
	long long _delayPeriodSecs;
	NSString* _liveAssetServerAudienceUUID;
	NSDictionary* _additionalCatalogServerParams;
	NSDictionary* _additionalMSUUpdateOptions;
	NSDictionary* _additionalOverrides;
	NSString* _deviceClass;
	NSString* _prerequisiteBuildVersion;
	NSString* _prerequisiteProductVersion;
	NSString* _prerequisiteRestoreVersion;
	NSString* _targetRestoreVersion;
	NSString* _installedSFRBuildVersion;
	NSString* _installedSFRProductVersion;
	NSString* _installedSFRRestoreVersion;
	NSString* _installedSFRReleaseType;
	NSString* _hwModelStr;
	NSString* _productType;
	NSString* _releaseType;
	NSString* _updateBrainLocationOverride;

}

@property (nonatomic,retain) NSString * deviceClass;                                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteBuildVersion;                               //@synthesize prerequisiteBuildVersion=_prerequisiteBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteProductVersion;                             //@synthesize prerequisiteProductVersion=_prerequisiteProductVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteRestoreVersion;                             //@synthesize prerequisiteRestoreVersion=_prerequisiteRestoreVersion - In the implementation block
@property (nonatomic,retain) NSString * targetRestoreVersion;                                   //@synthesize targetRestoreVersion=_targetRestoreVersion - In the implementation block
@property (nonatomic,retain) NSString * installedSFRBuildVersion;                               //@synthesize installedSFRBuildVersion=_installedSFRBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * installedSFRProductVersion;                             //@synthesize installedSFRProductVersion=_installedSFRProductVersion - In the implementation block
@property (nonatomic,retain) NSString * installedSFRRestoreVersion;                             //@synthesize installedSFRRestoreVersion=_installedSFRRestoreVersion - In the implementation block
@property (nonatomic,retain) NSString * installedSFRReleaseType;                                //@synthesize installedSFRReleaseType=_installedSFRReleaseType - In the implementation block
@property (nonatomic,retain) NSString * hwModelStr;                                             //@synthesize hwModelStr=_hwModelStr - In the implementation block
@property (nonatomic,retain) NSString * productType;                                            //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                                            //@synthesize releaseType=_releaseType - In the implementation block
@property (nonatomic,retain) NSString * updateBrainLocationOverride;                            //@synthesize updateBrainLocationOverride=_updateBrainLocationOverride - In the implementation block
@property (assign,nonatomic) char background;                                                   //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) char requiresPowerPluggedIn;                                       //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) char restrictToIncremental;                                        //@synthesize restrictToIncremental=_restrictToIncremental - In the implementation block
@property (assign,nonatomic) char restrictToFull;                                               //@synthesize restrictToFull=_restrictToFull - In the implementation block
@property (assign,nonatomic) char allowSameVersion;                                             //@synthesize allowSameVersion=_allowSameVersion - In the implementation block
@property (assign,nonatomic) char checkAvailableSpace;                                          //@synthesize checkAvailableSpace=_checkAvailableSpace - In the implementation block
@property (assign,nonatomic) long long updateType;                                              //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,retain) NSString * softwareUpdateAssetType;                                //@synthesize softwareUpdateAssetType=_softwareUpdateAssetType - In the implementation block
@property (nonatomic,retain) NSString * sfrSoftwareUpdateAssetType;                             //@synthesize sfrSoftwareUpdateAssetType=_sfrSoftwareUpdateAssetType - In the implementation block
@property (nonatomic,retain) NSString * updateBrainAssetType;                                   //@synthesize updateBrainAssetType=_updateBrainAssetType - In the implementation block
@property (nonatomic,retain) NSString * documentationAssetType;                                 //@synthesize documentationAssetType=_documentationAssetType - In the implementation block
@property (assign,nonatomic) char usesSFRSoftwareUpdates;                                       //@synthesize usesSFRSoftwareUpdates=_usesSFRSoftwareUpdates - In the implementation block
@property (assign,nonatomic) char usesRosettaUpdates;                                           //@synthesize usesRosettaUpdates=_usesRosettaUpdates - In the implementation block
@property (assign,nonatomic) char requirePreparePackageRosettaUpdates;                          //@synthesize requirePreparePackageRosettaUpdates=_requirePreparePackageRosettaUpdates - In the implementation block
@property (assign,nonatomic) char attemptPreparePackageRosettaUpdates;                          //@synthesize attemptPreparePackageRosettaUpdates=_attemptPreparePackageRosettaUpdates - In the implementation block
@property (nonatomic,retain) NSString * rosettaVersionOverride;                                 //@synthesize rosettaVersionOverride=_rosettaVersionOverride - In the implementation block
@property (nonatomic,retain) NSNumber * catalogDownloadTimeoutSecs;                             //@synthesize catalogDownloadTimeoutSecs=_catalogDownloadTimeoutSecs - In the implementation block
@property (nonatomic,retain) NSNumber * softwareUpdateAssetDownloadTimeoutSecs;                 //@synthesize softwareUpdateAssetDownloadTimeoutSecs=_softwareUpdateAssetDownloadTimeoutSecs - In the implementation block
@property (nonatomic,retain) NSNumber * sfrSoftwareUpdateAssetDownloadTimeoutSecs;              //@synthesize sfrSoftwareUpdateAssetDownloadTimeoutSecs=_sfrSoftwareUpdateAssetDownloadTimeoutSecs - In the implementation block
@property (nonatomic,retain) NSString * updateUUID;                                             //@synthesize updateUUID=_updateUUID - In the implementation block
@property (nonatomic,retain) NSString * updateMetricContext;                                    //@synthesize updateMetricContext=_updateMetricContext - In the implementation block
@property (nonatomic,retain) NSString * targetVolumeUUID;                                       //@synthesize targetVolumeUUID=_targetVolumeUUID - In the implementation block
@property (nonatomic,retain) NSString * personalizedManifestRootsPath;                          //@synthesize personalizedManifestRootsPath=_personalizedManifestRootsPath - In the implementation block
@property (nonatomic,retain) NSNumber * localAuthenticationUserID;                              //@synthesize localAuthenticationUserID=_localAuthenticationUserID - In the implementation block
@property (nonatomic,retain) NSData * localAuthenticationContext;                               //@synthesize localAuthenticationContext=_localAuthenticationContext - In the implementation block
@property (nonatomic,retain) NSData * appleConnectSsoToken;                                     //@synthesize appleConnectSsoToken=_appleConnectSsoToken - In the implementation block
@property (nonatomic,retain) NSString * appleConnectDAWToken;                                   //@synthesize appleConnectDAWToken=_appleConnectDAWToken - In the implementation block
@property (assign,nonatomic) char bridgeOSAllowTestMode;                                        //@synthesize bridgeOSAllowTestMode=_bridgeOSAllowTestMode - In the implementation block
@property (assign,nonatomic) char bridgeOSStagedUpdatesOnly;                                    //@synthesize bridgeOSStagedUpdatesOnly=_bridgeOSStagedUpdatesOnly - In the implementation block
@property (assign,nonatomic) char bridgeOSAllowAnyCatalogCertificate;                           //@synthesize bridgeOSAllowAnyCatalogCertificate=_bridgeOSAllowAnyCatalogCertificate - In the implementation block
@property (assign,nonatomic) char bridgeOSIgnoreMinimumVersionCheck;                            //@synthesize bridgeOSIgnoreMinimumVersionCheck=_bridgeOSIgnoreMinimumVersionCheck - In the implementation block
@property (nonatomic,retain) NSString * bridgeOSCatalogURL;                                     //@synthesize bridgeOSCatalogURL=_bridgeOSCatalogURL - In the implementation block
@property (nonatomic,retain) NSString * bridgeOSVersionOverride;                                //@synthesize bridgeOSVersionOverride=_bridgeOSVersionOverride - In the implementation block
@property (nonatomic,retain) NSString * bridgeOSDownloadDirectory;                              //@synthesize bridgeOSDownloadDirectory=_bridgeOSDownloadDirectory - In the implementation block
@property (nonatomic,retain) NSString * rosettaDownloadDirectory;                               //@synthesize rosettaDownloadDirectory=_rosettaDownloadDirectory - In the implementation block
@property (assign,nonatomic) char enableEmbeddedOSInstall;                                      //@synthesize enableEmbeddedOSInstall=_enableEmbeddedOSInstall - In the implementation block
@property (assign,nonatomic) char enableBridgeOSInstall;                                        //@synthesize enableBridgeOSInstall=_enableBridgeOSInstall - In the implementation block
@property (assign,nonatomic) char enableOSPersonalization;                                      //@synthesize enableOSPersonalization=_enableOSPersonalization - In the implementation block
@property (nonatomic,retain) NSNumber * performPreflightEncryptedCheck;                         //@synthesize performPreflightEncryptedCheck=_performPreflightEncryptedCheck - In the implementation block
@property (nonatomic,retain) NSNumber * performPreflightSnapshotCheck;                          //@synthesize performPreflightSnapshotCheck=_performPreflightSnapshotCheck - In the implementation block
@property (nonatomic,retain) NSString * authenticationServiceID;                                //@synthesize authenticationServiceID=_authenticationServiceID - In the implementation block
@property (nonatomic,retain) NSString * authenticationAppID;                                    //@synthesize authenticationAppID=_authenticationAppID - In the implementation block
@property (assign,nonatomic) char userInitiated;                                                //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic) char skipVolumeSealing;                                            //@synthesize skipVolumeSealing=_skipVolumeSealing - In the implementation block
@property (assign,nonatomic) char cancelUpdateOnClientDisconnect;                               //@synthesize cancelUpdateOnClientDisconnect=_cancelUpdateOnClientDisconnect - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) char disableRootVolumeSealCheck;                                   //@synthesize disableRootVolumeSealCheck=_disableRootVolumeSealCheck - In the implementation block
@property (assign,nonatomic) char supervised;                                                   //@synthesize supervised=_supervised - In the implementation block
@property (nonatomic,retain) NSString * requestedPMV;                                           //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (assign,nonatomic) char MDMUseDelayPeriod;                                            //@synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod - In the implementation block
@property (assign,nonatomic) long long delayPeriodSecs;                                         //@synthesize delayPeriodSecs=_delayPeriodSecs - In the implementation block
@property (nonatomic,retain) NSString * liveAssetServerAudienceUUID;                            //@synthesize liveAssetServerAudienceUUID=_liveAssetServerAudienceUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalCatalogServerParams;                      //@synthesize additionalCatalogServerParams=_additionalCatalogServerParams - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalMSUUpdateOptions;                         //@synthesize additionalMSUUpdateOptions=_additionalMSUUpdateOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOverrides;                                //@synthesize additionalOverrides=_additionalOverrides - In the implementation block
+(id)nameForUpdateType:(long long)arg1 ;
+(id)stringForQoSType:(long long)arg1 ;
+(char)supportsSecureCoding;
-(NSString *)rosettaDownloadDirectory;
-(id)newPolicyForClientRequest:(id)arg1 ;
-(char)usesSFRSoftwareUpdates;
-(id)newSFRPolicyWithoutExtensionsWithClientRequest:(id)arg1 ;
-(NSString *)installedSFRRestoreVersion;
-(NSString *)rosettaVersionOverride;
-(char)usesRosettaUpdates;
-(char)isManagedSoftwareUpdate;
-(NSString *)updateBrainAssetType;
-(id)newMacUpdateBrainPolicyForMajorTargetBuild:(id)arg1 minorTargetBuild:(id)arg2 clientRequest:(id)arg3 managedUpdateBrainOSVersion:(id)arg4 ;
-(NSString *)sfrSoftwareUpdateAssetType;
-(char)requirePreparePackageRosettaUpdates;
-(char)attemptPreparePackageRosettaUpdates;
-(NSNumber *)catalogDownloadTimeoutSecs;
-(NSNumber *)softwareUpdateAssetDownloadTimeoutSecs;
-(NSNumber *)sfrSoftwareUpdateAssetDownloadTimeoutSecs;
-(char)cancelUpdateOnClientDisconnect;
-(char)disableRootVolumeSealCheck;
-(NSString *)liveAssetServerAudienceUUID;
-(NSData *)appleConnectSsoToken;
-(NSString *)appleConnectDAWToken;
-(NSString *)authenticationServiceID;
-(NSString *)authenticationAppID;
-(char)bridgeOSAllowTestMode;
-(char)bridgeOSStagedUpdatesOnly;
-(char)bridgeOSAllowAnyCatalogCertificate;
-(NSString *)bridgeOSCatalogURL;
-(NSString *)bridgeOSVersionOverride;
-(NSString *)installedSFRBuildVersion;
-(NSString *)installedSFRProductVersion;
-(NSString *)installedSFRReleaseType;
-(NSDictionary *)additionalCatalogServerParams;
-(NSDictionary *)additionalMSUUpdateOptions;
-(NSDictionary *)additionalOverrides;
-(void)_configurePolicy:(id)arg1 withClientRequest:(id)arg2 ;
-(void)setInstalledSFRReleaseType:(NSString *)arg1 ;
-(void)setAdditionalMSUUpdateOptions:(NSDictionary *)arg1 ;
-(void)setAppleConnectSsoToken:(NSData *)arg1 ;
-(void)adjustOverridesWithDescriptor:(id)arg1 ;
-(void)adjustOverridesForSSOToken;
-(void)adjustBackgroundPropertyOnPolicy:(id)arg1 ;
-(void)setSfrSoftwareUpdateAssetType:(NSString *)arg1 ;
-(void)setUpdateBrainAssetType:(NSString *)arg1 ;
-(void)setUsesSFRSoftwareUpdates:(char)arg1 ;
-(void)setUsesRosettaUpdates:(char)arg1 ;
-(void)setRequirePreparePackageRosettaUpdates:(char)arg1 ;
-(void)setAttemptPreparePackageRosettaUpdates:(char)arg1 ;
-(void)setRosettaVersionOverride:(NSString *)arg1 ;
-(void)setCatalogDownloadTimeoutSecs:(NSNumber *)arg1 ;
-(void)setSoftwareUpdateAssetDownloadTimeoutSecs:(NSNumber *)arg1 ;
-(void)setSfrSoftwareUpdateAssetDownloadTimeoutSecs:(NSNumber *)arg1 ;
-(void)setAppleConnectDAWToken:(NSString *)arg1 ;
-(void)setBridgeOSStagedUpdatesOnly:(char)arg1 ;
-(void)setRosettaDownloadDirectory:(NSString *)arg1 ;
-(void)setAuthenticationServiceID:(NSString *)arg1 ;
-(void)setAuthenticationAppID:(NSString *)arg1 ;
-(void)setCancelUpdateOnClientDisconnect:(char)arg1 ;
-(void)setDisableRootVolumeSealCheck:(char)arg1 ;
-(void)setLiveAssetServerAudienceUUID:(NSString *)arg1 ;
-(void)setAdditionalCatalogServerParams:(NSDictionary *)arg1 ;
-(void)setAdditionalOverrides:(NSDictionary *)arg1 ;
-(void)setInstalledSFRBuildVersion:(NSString *)arg1 ;
-(void)setInstalledSFRProductVersion:(NSString *)arg1 ;
-(void)setInstalledSFRRestoreVersion:(NSString *)arg1 ;
-(NSString *)softwareUpdateAssetType;
-(NSString *)documentationAssetType;
-(NSString *)requestedPMV;
-(char)restrictToIncremental;
-(char)restrictToFull;
-(void)setRestrictToIncremental:(char)arg1 ;
-(char)shouldScanForMajorUpdates;
-(char)shouldScanForMinorUpdates;
-(NSString *)hwModelStr;
-(void)setDocumentationAssetType:(NSString *)arg1 ;
-(void)setSoftwareUpdateAssetType:(NSString *)arg1 ;
-(char)MDMUseDelayPeriod;
-(long long)delayPeriodSecs;
-(char)checkAvailableSpace;
-(NSString *)prerequisiteRestoreVersion;
-(NSString *)targetVolumeUUID;
-(NSNumber *)performPreflightEncryptedCheck;
-(NSNumber *)performPreflightSnapshotCheck;
-(NSString *)personalizedManifestRootsPath;
-(NSNumber *)localAuthenticationUserID;
-(NSString *)updateBrainLocationOverride;
-(char)bridgeOSIgnoreMinimumVersionCheck;
-(NSString *)bridgeOSDownloadDirectory;
-(char)enableEmbeddedOSInstall;
-(char)enableBridgeOSInstall;
-(char)enableOSPersonalization;
-(char)skipVolumeSealing;
-(NSString *)updateMetricContext;
-(void)setPrerequisiteRestoreVersion:(NSString *)arg1 ;
-(void)setTargetRestoreVersion:(NSString *)arg1 ;
-(void)setTargetVolumeUUID:(NSString *)arg1 ;
-(void)setHwModelStr:(NSString *)arg1 ;
-(void)setCheckAvailableSpace:(char)arg1 ;
-(void)setPerformPreflightEncryptedCheck:(NSNumber *)arg1 ;
-(void)setPerformPreflightSnapshotCheck:(NSNumber *)arg1 ;
-(void)setPersonalizedManifestRootsPath:(NSString *)arg1 ;
-(void)setUpdateBrainLocationOverride:(NSString *)arg1 ;
-(void)setBridgeOSDownloadDirectory:(NSString *)arg1 ;
-(void)setSkipVolumeSealing:(char)arg1 ;
-(void)setUpdateMetricContext:(NSString *)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(NSString *)productType;
-(NSString *)deviceClass;
-(long long)updateType;
-(void)setDeviceClass:(NSString *)arg1 ;
-(id)overview;
-(void)setRequiresPowerPluggedIn:(char)arg1 ;
-(void)setUpdateType:(long long)arg1 ;
-(char)userInitiated;
-(char)background;
-(void)setUserInitiated:(char)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(void)setBackground:(char)arg1 ;
-(char)requiresPowerPluggedIn;
-(NSData *)localAuthenticationContext;
-(void)setLocalAuthenticationContext:(NSData *)arg1 ;
-(id)initWithDefaultOverrides;
-(void)setReleaseType:(NSString *)arg1 ;
-(void)setRestrictToFull:(char)arg1 ;
-(void)setAllowSameVersion:(char)arg1 ;
-(void)setBridgeOSVersionOverride:(NSString *)arg1 ;
-(void)setBridgeOSIgnoreMinimumVersionCheck:(char)arg1 ;
-(void)setBridgeOSAllowAnyCatalogCertificate:(char)arg1 ;
-(void)setBridgeOSAllowTestMode:(char)arg1 ;
-(void)setBridgeOSCatalogURL:(NSString *)arg1 ;
-(void)setEnableEmbeddedOSInstall:(char)arg1 ;
-(void)setEnableBridgeOSInstall:(char)arg1 ;
-(void)setEnableOSPersonalization:(char)arg1 ;
-(void)setSupervised:(char)arg1 ;
-(void)setMDMUseDelayPeriod:(char)arg1 ;
-(void)setDelayPeriodSecs:(long long)arg1 ;
-(void)setLocalAuthenticationUserID:(NSNumber *)arg1 ;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(char)supervised;
-(NSString *)releaseType;
-(NSString *)targetRestoreVersion;
-(void)setUpdateUUID:(NSString *)arg1 ;
-(NSString *)updateUUID;
-(void)setPrerequisiteBuildVersion:(NSString *)arg1 ;
-(void)setPrerequisiteProductVersion:(NSString *)arg1 ;
-(char)allowSameVersion;
-(NSString *)prerequisiteBuildVersion;
-(NSString *)prerequisiteProductVersion;
@end

