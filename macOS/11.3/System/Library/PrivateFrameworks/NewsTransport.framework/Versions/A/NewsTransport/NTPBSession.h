/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface NTPBSession : PBCodable <NSCopying> {

	SCD_Struct_NT10* _userSegmentationSegmentSetIds;
	SCD_Struct_NT20* _userSegmentationTreatmentIds;
	long long _appBuild;
	long long _appConfigTreatmentId;
	long long _lastAppOpenDate;
	long long _testBucket;
	long long _userStartDate;
	int _ageBracket;
	float _ageBracketConfidenceLevel;
	NSString* _amsCampaignId;
	NSString* _amsPurchaseId;
	NSString* _appBuildNumber;
	NSData* _appProcessLifetimeId;
	NSString* _appVersion;
	NSString* _browserLanguage;
	NSString* _campaignId;
	int _campaignType;
	NSString* _carrier;
	int _cellularRadioAccessTechnology;
	NSString* _clientName;
	NSString* _clientVersion;
	NSString* _countryCode;
	NSString* _deviceModel;
	NSString* _devicePlatform;
	int _ethnicity;
	float _ethnicityConfidenceLevel;
	int _gender;
	float _genderConfidenceLevel;
	int _incomeBracket;
	float _incomeBracketConfidenceLevel;
	NSString* _languageCode;
	int _newsWidgetModeGroup;
	NSString* _newsWidgetModeGroupId;
	NSString* _notwUserId;
	NSString* _originatingCampaignId;
	NSString* _originatingCampaignType;
	NSString* _originatingCreativeId;
	int _osInstallVariant;
	NSString* _osVersion;
	int _paywallConfigType;
	NSString* _personalizationPortraitVariantName;
	NSString* _previousAppVersion;
	NSString* _previousOsVersion;
	NSString* _productType;
	int _reachabilityStatus;
	NSMutableArray* _regionIds;
	NSData* _sessionId;
	NSData* _sessionIdWatch;
	int _textSize;
	NSString* _userId;
	NSString* _userStorefrontId;
	int _utcOffset;
	NSString* _watchSessionId;
	int _widgetDisplayMode;
	int _widgetDisplayModeSessionEnd;
	int _widgetModeType;
	NSData* _widgetSessionId;
	NSString* _widgetUserId;
	char _iosSettingsNotificationsBadgeAppIconEnabled;
	char _iosSettingsNotificationsEnabled;
	char _iosSettingsNotificationsShowAsBannersEnabled;
	char _iosSettingsNotificationsShowInHistoryEnabled;
	char _iosSettingsNotificationsShowOnLockScreenEnabled;
	char _iosSettingsNotificationsSoundEnabled;
	char _isDiagnosticsUsageEnabled;
	char _isNewUser;
	char _isPaidSubscriber;
	char _isPaidSubscriberFromAppStore;
	char _isPaidSubscriberFromNews;
	char _isPaidSubscriberFromThirdParty;
	char _isStoreDemoModeEnabled;
	char _locationPermissionGranted;
	char _notificationsEnabled;
	char _privateDataEncrypted;
	char _privateDataSyncOn;
	char _progressivePersonalizationAllowed;
	char _runningObsolete;
	char _signedIntoITunes;
	char _signedIntoIcloud;
	char _upgradedFromObsolete;
	SCD_Struct_NT21 _has;

}

@property (nonatomic,readonly) char hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                               //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) char hasDevicePlatform; 
@property (nonatomic,retain) NSString * devicePlatform;                                            //@synthesize devicePlatform=_devicePlatform - In the implementation block
@property (nonatomic,readonly) char hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                                                 //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) char hasAppVersion; 
@property (nonatomic,retain) NSString * appVersion;                                                //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) char hasAppBuild; 
@property (assign,nonatomic) long long appBuild;                                                   //@synthesize appBuild=_appBuild - In the implementation block
@property (assign,nonatomic) char hasUtcOffset; 
@property (assign,nonatomic) int utcOffset;                                                        //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) char hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                                              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) char hasCarrier; 
@property (nonatomic,retain) NSString * carrier;                                                   //@synthesize carrier=_carrier - In the implementation block
@property (assign,nonatomic) char hasReachabilityStatus; 
@property (assign,nonatomic) int reachabilityStatus;                                               //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (assign,nonatomic) char hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                                    //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (assign,nonatomic) char hasTextSize; 
@property (assign,nonatomic) int textSize;                                                         //@synthesize textSize=_textSize - In the implementation block
@property (nonatomic,readonly) char hasSessionId; 
@property (nonatomic,retain) NSData * sessionId;                                                   //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) char hasUserId; 
@property (nonatomic,retain) NSString * userId;                                                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) char hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                                          //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (assign,nonatomic) char hasIsNewUser; 
@property (assign,nonatomic) char isNewUser;                                                       //@synthesize isNewUser=_isNewUser - In the implementation block
@property (assign,nonatomic) char hasUserStartDate; 
@property (assign,nonatomic) long long userStartDate;                                              //@synthesize userStartDate=_userStartDate - In the implementation block
@property (assign,nonatomic) char hasLastAppOpenDate; 
@property (assign,nonatomic) long long lastAppOpenDate;                                            //@synthesize lastAppOpenDate=_lastAppOpenDate - In the implementation block
@property (assign,nonatomic) char hasRunningObsolete; 
@property (assign,nonatomic) char runningObsolete;                                                 //@synthesize runningObsolete=_runningObsolete - In the implementation block
@property (assign,nonatomic) char hasUpgradedFromObsolete; 
@property (assign,nonatomic) char upgradedFromObsolete;                                            //@synthesize upgradedFromObsolete=_upgradedFromObsolete - In the implementation block
@property (nonatomic,readonly) char hasPreviousAppVersion; 
@property (nonatomic,retain) NSString * previousAppVersion;                                        //@synthesize previousAppVersion=_previousAppVersion - In the implementation block
@property (nonatomic,readonly) char hasPreviousOsVersion; 
@property (nonatomic,retain) NSString * previousOsVersion;                                         //@synthesize previousOsVersion=_previousOsVersion - In the implementation block
@property (assign,nonatomic) char hasSignedIntoIcloud; 
@property (assign,nonatomic) char signedIntoIcloud;                                                //@synthesize signedIntoIcloud=_signedIntoIcloud - In the implementation block
@property (assign,nonatomic) char hasOsInstallVariant; 
@property (assign,nonatomic) int osInstallVariant;                                                 //@synthesize osInstallVariant=_osInstallVariant - In the implementation block
@property (nonatomic,readonly) char hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                                //@synthesize campaignId=_campaignId - In the implementation block
@property (assign,nonatomic) char hasCampaignType; 
@property (assign,nonatomic) int campaignType;                                                     //@synthesize campaignType=_campaignType - In the implementation block
@property (assign,nonatomic) char hasPrivateDataSyncOn; 
@property (assign,nonatomic) char privateDataSyncOn;                                               //@synthesize privateDataSyncOn=_privateDataSyncOn - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriber; 
@property (assign,nonatomic) char isPaidSubscriber;                                                //@synthesize isPaidSubscriber=_isPaidSubscriber - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriberFromNews; 
@property (assign,nonatomic) char isPaidSubscriberFromNews;                                        //@synthesize isPaidSubscriberFromNews=_isPaidSubscriberFromNews - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriberFromAppStore; 
@property (assign,nonatomic) char isPaidSubscriberFromAppStore;                                    //@synthesize isPaidSubscriberFromAppStore=_isPaidSubscriberFromAppStore - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriberFromThirdParty; 
@property (assign,nonatomic) char isPaidSubscriberFromThirdParty;                                  //@synthesize isPaidSubscriberFromThirdParty=_isPaidSubscriberFromThirdParty - In the implementation block
@property (assign,nonatomic) char hasNotificationsEnabled; 
@property (assign,nonatomic) char notificationsEnabled;                                            //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,readonly) char hasOriginatingCampaignId; 
@property (nonatomic,retain) NSString * originatingCampaignId;                                     //@synthesize originatingCampaignId=_originatingCampaignId - In the implementation block
@property (nonatomic,readonly) char hasOriginatingCampaignType; 
@property (nonatomic,retain) NSString * originatingCampaignType;                                   //@synthesize originatingCampaignType=_originatingCampaignType - In the implementation block
@property (nonatomic,readonly) char hasOriginatingCreativeId; 
@property (nonatomic,retain) NSString * originatingCreativeId;                                     //@synthesize originatingCreativeId=_originatingCreativeId - In the implementation block
@property (assign,nonatomic) char hasIosSettingsNotificationsEnabled; 
@property (assign,nonatomic) char iosSettingsNotificationsEnabled;                                 //@synthesize iosSettingsNotificationsEnabled=_iosSettingsNotificationsEnabled - In the implementation block
@property (assign,nonatomic) char hasWidgetModeType; 
@property (assign,nonatomic) int widgetModeType;                                                   //@synthesize widgetModeType=_widgetModeType - In the implementation block
@property (assign,nonatomic) char hasLocationPermissionGranted; 
@property (assign,nonatomic) char locationPermissionGranted;                                       //@synthesize locationPermissionGranted=_locationPermissionGranted - In the implementation block
@property (assign,nonatomic) char hasNewsWidgetModeGroup; 
@property (assign,nonatomic) int newsWidgetModeGroup;                                              //@synthesize newsWidgetModeGroup=_newsWidgetModeGroup - In the implementation block
@property (nonatomic,readonly) char hasNewsWidgetModeGroupId; 
@property (nonatomic,retain) NSString * newsWidgetModeGroupId;                                     //@synthesize newsWidgetModeGroupId=_newsWidgetModeGroupId - In the implementation block
@property (assign,nonatomic) char hasAgeBracket; 
@property (assign,nonatomic) int ageBracket;                                                       //@synthesize ageBracket=_ageBracket - In the implementation block
@property (assign,nonatomic) char hasAgeBracketConfidenceLevel; 
@property (assign,nonatomic) float ageBracketConfidenceLevel;                                      //@synthesize ageBracketConfidenceLevel=_ageBracketConfidenceLevel - In the implementation block
@property (assign,nonatomic) char hasGender; 
@property (assign,nonatomic) int gender;                                                           //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) char hasGenderConfidenceLevel; 
@property (assign,nonatomic) float genderConfidenceLevel;                                          //@synthesize genderConfidenceLevel=_genderConfidenceLevel - In the implementation block
@property (assign,nonatomic) char hasIncomeBracket; 
@property (assign,nonatomic) int incomeBracket;                                                    //@synthesize incomeBracket=_incomeBracket - In the implementation block
@property (assign,nonatomic) char hasIncomeBracketConfidenceLevel; 
@property (assign,nonatomic) float incomeBracketConfidenceLevel;                                   //@synthesize incomeBracketConfidenceLevel=_incomeBracketConfidenceLevel - In the implementation block
@property (assign,nonatomic) char hasEthnicity; 
@property (assign,nonatomic) int ethnicity;                                                        //@synthesize ethnicity=_ethnicity - In the implementation block
@property (assign,nonatomic) char hasEthnicityConfidenceLevel; 
@property (assign,nonatomic) float ethnicityConfidenceLevel;                                       //@synthesize ethnicityConfidenceLevel=_ethnicityConfidenceLevel - In the implementation block
@property (assign,nonatomic) char hasAppConfigTreatmentId; 
@property (assign,nonatomic) long long appConfigTreatmentId;                                       //@synthesize appConfigTreatmentId=_appConfigTreatmentId - In the implementation block
@property (nonatomic,readonly) char hasClientName; 
@property (nonatomic,retain) NSString * clientName;                                                //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) char hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                                             //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,readonly) char hasBrowserLanguage; 
@property (nonatomic,retain) NSString * browserLanguage;                                           //@synthesize browserLanguage=_browserLanguage - In the implementation block
@property (nonatomic,readonly) char hasNotwUserId; 
@property (nonatomic,retain) NSString * notwUserId;                                                //@synthesize notwUserId=_notwUserId - In the implementation block
@property (assign,nonatomic) char hasPrivateDataEncrypted; 
@property (assign,nonatomic) char privateDataEncrypted;                                            //@synthesize privateDataEncrypted=_privateDataEncrypted - In the implementation block
@property (assign,nonatomic) char hasProgressivePersonalizationAllowed; 
@property (assign,nonatomic) char progressivePersonalizationAllowed;                               //@synthesize progressivePersonalizationAllowed=_progressivePersonalizationAllowed - In the implementation block
@property (nonatomic,readonly) char hasWatchSessionId; 
@property (nonatomic,retain) NSString * watchSessionId;                                            //@synthesize watchSessionId=_watchSessionId - In the implementation block
@property (nonatomic,readonly) char hasSessionIdWatch; 
@property (nonatomic,retain) NSData * sessionIdWatch;                                              //@synthesize sessionIdWatch=_sessionIdWatch - In the implementation block
@property (nonatomic,readonly) char hasWidgetSessionId; 
@property (nonatomic,retain) NSData * widgetSessionId;                                             //@synthesize widgetSessionId=_widgetSessionId - In the implementation block
@property (assign,nonatomic) char hasWidgetDisplayMode; 
@property (assign,nonatomic) int widgetDisplayMode;                                                //@synthesize widgetDisplayMode=_widgetDisplayMode - In the implementation block
@property (nonatomic,readonly) char hasPersonalizationPortraitVariantName; 
@property (nonatomic,retain) NSString * personalizationPortraitVariantName;                        //@synthesize personalizationPortraitVariantName=_personalizationPortraitVariantName - In the implementation block
@property (nonatomic,readonly) char hasAppProcessLifetimeId; 
@property (nonatomic,retain) NSData * appProcessLifetimeId;                                        //@synthesize appProcessLifetimeId=_appProcessLifetimeId - In the implementation block
@property (assign,nonatomic) char hasTestBucket; 
@property (assign,nonatomic) long long testBucket;                                                 //@synthesize testBucket=_testBucket - In the implementation block
@property (nonatomic,readonly) char hasWidgetUserId; 
@property (nonatomic,retain) NSString * widgetUserId;                                              //@synthesize widgetUserId=_widgetUserId - In the implementation block
@property (nonatomic,readonly) char hasProductType; 
@property (nonatomic,retain) NSString * productType;                                               //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) unsigned long long userSegmentationTreatmentIdsCount; 
@property (nonatomic,readonly) long long* userSegmentationTreatmentIds; 
@property (nonatomic,readonly) unsigned long long userSegmentationSegmentSetIdsCount; 
@property (nonatomic,readonly) int* userSegmentationSegmentSetIds; 
@property (assign,nonatomic) char hasIosSettingsNotificationsSoundEnabled; 
@property (assign,nonatomic) char iosSettingsNotificationsSoundEnabled;                            //@synthesize iosSettingsNotificationsSoundEnabled=_iosSettingsNotificationsSoundEnabled - In the implementation block
@property (assign,nonatomic) char hasIosSettingsNotificationsBadgeAppIconEnabled; 
@property (assign,nonatomic) char iosSettingsNotificationsBadgeAppIconEnabled;                     //@synthesize iosSettingsNotificationsBadgeAppIconEnabled=_iosSettingsNotificationsBadgeAppIconEnabled - In the implementation block
@property (assign,nonatomic) char hasIosSettingsNotificationsShowOnLockScreenEnabled; 
@property (assign,nonatomic) char iosSettingsNotificationsShowOnLockScreenEnabled;                 //@synthesize iosSettingsNotificationsShowOnLockScreenEnabled=_iosSettingsNotificationsShowOnLockScreenEnabled - In the implementation block
@property (assign,nonatomic) char hasIosSettingsNotificationsShowInHistoryEnabled; 
@property (assign,nonatomic) char iosSettingsNotificationsShowInHistoryEnabled;                    //@synthesize iosSettingsNotificationsShowInHistoryEnabled=_iosSettingsNotificationsShowInHistoryEnabled - In the implementation block
@property (assign,nonatomic) char hasIosSettingsNotificationsShowAsBannersEnabled; 
@property (assign,nonatomic) char iosSettingsNotificationsShowAsBannersEnabled;                    //@synthesize iosSettingsNotificationsShowAsBannersEnabled=_iosSettingsNotificationsShowAsBannersEnabled - In the implementation block
@property (assign,nonatomic) char hasWidgetDisplayModeSessionEnd; 
@property (assign,nonatomic) int widgetDisplayModeSessionEnd;                                      //@synthesize widgetDisplayModeSessionEnd=_widgetDisplayModeSessionEnd - In the implementation block
@property (assign,nonatomic) char hasSignedIntoITunes; 
@property (assign,nonatomic) char signedIntoITunes;                                                //@synthesize signedIntoITunes=_signedIntoITunes - In the implementation block
@property (assign,nonatomic) char hasIsStoreDemoModeEnabled; 
@property (assign,nonatomic) char isStoreDemoModeEnabled;                                          //@synthesize isStoreDemoModeEnabled=_isStoreDemoModeEnabled - In the implementation block
@property (assign,nonatomic) char hasIsDiagnosticsUsageEnabled; 
@property (assign,nonatomic) char isDiagnosticsUsageEnabled;                                       //@synthesize isDiagnosticsUsageEnabled=_isDiagnosticsUsageEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionIds;                                           //@synthesize regionIds=_regionIds - In the implementation block
@property (nonatomic,readonly) char hasAppBuildNumber; 
@property (nonatomic,retain) NSString * appBuildNumber;                                            //@synthesize appBuildNumber=_appBuildNumber - In the implementation block
@property (nonatomic,readonly) char hasAmsPurchaseId; 
@property (nonatomic,retain) NSString * amsPurchaseId;                                             //@synthesize amsPurchaseId=_amsPurchaseId - In the implementation block
@property (nonatomic,readonly) char hasAmsCampaignId; 
@property (nonatomic,retain) NSString * amsCampaignId;                                             //@synthesize amsCampaignId=_amsCampaignId - In the implementation block
@property (assign,nonatomic) char hasPaywallConfigType; 
@property (assign,nonatomic) int paywallConfigType;                                                //@synthesize paywallConfigType=_paywallConfigType - In the implementation block
+(Class)regionIdsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)languageCode;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(void)setSessionId:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)sessionId;
-(NSString *)clientName;
-(NSString *)productType;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setCountryCode:(NSString *)arg1 ;
-(char)hasSessionId;
-(char)hasCountryCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(char)hasLanguageCode;
-(void)setOsVersion:(NSString *)arg1 ;
-(char)hasOsVersion;
-(void)setNotificationsEnabled:(char)arg1 ;
-(char)notificationsEnabled;
-(void)setHasNotificationsEnabled:(char)arg1 ;
-(char)hasNotificationsEnabled;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(char)hasDeviceModel;
-(NSString *)clientVersion;
-(void)setClientName:(NSString *)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(char)hasProductType;
-(void)setClientVersion:(NSString *)arg1 ;
-(NSString *)devicePlatform;
-(int)textSize;
-(void)setTextSize:(int)arg1 ;
-(char)hasAppVersion;
-(NSString *)carrier;
-(void)setCarrier:(NSString *)arg1 ;
-(char)hasClientName;
-(char)hasUserId;
-(NSString *)campaignId;
-(void)setCampaignId:(NSString *)arg1 ;
-(int)utcOffset;
-(void)setCampaignType:(int)arg1 ;
-(char)hasCampaignId;
-(char)hasCampaignType;
-(int)campaignType;
-(void)setWidgetUserId:(NSString *)arg1 ;
-(char)hasWidgetUserId;
-(int)widgetDisplayMode;
-(void)setWidgetDisplayMode:(int)arg1 ;
-(void)setHasWidgetDisplayMode:(char)arg1 ;
-(char)hasWidgetDisplayMode;
-(id)widgetDisplayModeAsString:(int)arg1 ;
-(int)StringAsWidgetDisplayMode:(id)arg1 ;
-(NSString *)widgetUserId;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(char)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(void)setHasCellularRadioAccessTechnology:(char)arg1 ;
-(char)hasCellularRadioAccessTechnology;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(void)addRegionIds:(id)arg1 ;
-(void)setDevicePlatform:(NSString *)arg1 ;
-(void)setPreviousAppVersion:(NSString *)arg1 ;
-(void)setPreviousOsVersion:(NSString *)arg1 ;
-(void)setOriginatingCampaignId:(NSString *)arg1 ;
-(void)setOriginatingCampaignType:(NSString *)arg1 ;
-(void)setOriginatingCreativeId:(NSString *)arg1 ;
-(void)setNewsWidgetModeGroupId:(NSString *)arg1 ;
-(void)setBrowserLanguage:(NSString *)arg1 ;
-(void)setNotwUserId:(NSString *)arg1 ;
-(void)setWatchSessionId:(NSString *)arg1 ;
-(void)setSessionIdWatch:(NSData *)arg1 ;
-(void)setWidgetSessionId:(NSData *)arg1 ;
-(void)setPersonalizationPortraitVariantName:(NSString *)arg1 ;
-(void)setAppProcessLifetimeId:(NSData *)arg1 ;
-(unsigned long long)userSegmentationTreatmentIdsCount;
-(long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)arg1 ;
-(void)addUserSegmentationTreatmentIds:(long long)arg1 ;
-(unsigned long long)userSegmentationSegmentSetIdsCount;
-(int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)arg1 ;
-(void)addUserSegmentationSegmentSetIds:(int)arg1 ;
-(void)setAppBuildNumber:(NSString *)arg1 ;
-(void)setAmsPurchaseId:(NSString *)arg1 ;
-(void)setAmsCampaignId:(NSString *)arg1 ;
-(char)hasDevicePlatform;
-(void)setAppBuild:(long long)arg1 ;
-(void)setHasAppBuild:(char)arg1 ;
-(char)hasAppBuild;
-(void)setUtcOffset:(int)arg1 ;
-(void)setHasUtcOffset:(char)arg1 ;
-(char)hasUtcOffset;
-(char)hasCarrier;
-(int)reachabilityStatus;
-(void)setReachabilityStatus:(int)arg1 ;
-(void)setHasReachabilityStatus:(char)arg1 ;
-(char)hasReachabilityStatus;
-(id)reachabilityStatusAsString:(int)arg1 ;
-(int)StringAsReachabilityStatus:(id)arg1 ;
-(void)setHasTextSize:(char)arg1 ;
-(char)hasTextSize;
-(void)setIsNewUser:(char)arg1 ;
-(void)setHasIsNewUser:(char)arg1 ;
-(char)hasIsNewUser;
-(void)setUserStartDate:(long long)arg1 ;
-(void)setHasUserStartDate:(char)arg1 ;
-(char)hasUserStartDate;
-(void)setLastAppOpenDate:(long long)arg1 ;
-(void)setHasLastAppOpenDate:(char)arg1 ;
-(char)hasLastAppOpenDate;
-(void)setRunningObsolete:(char)arg1 ;
-(void)setHasRunningObsolete:(char)arg1 ;
-(char)hasRunningObsolete;
-(void)setUpgradedFromObsolete:(char)arg1 ;
-(void)setHasUpgradedFromObsolete:(char)arg1 ;
-(char)hasUpgradedFromObsolete;
-(char)hasPreviousAppVersion;
-(char)hasPreviousOsVersion;
-(void)setSignedIntoIcloud:(char)arg1 ;
-(void)setHasSignedIntoIcloud:(char)arg1 ;
-(char)hasSignedIntoIcloud;
-(int)osInstallVariant;
-(void)setOsInstallVariant:(int)arg1 ;
-(void)setHasOsInstallVariant:(char)arg1 ;
-(char)hasOsInstallVariant;
-(id)osInstallVariantAsString:(int)arg1 ;
-(int)StringAsOsInstallVariant:(id)arg1 ;
-(void)setHasCampaignType:(char)arg1 ;
-(id)campaignTypeAsString:(int)arg1 ;
-(int)StringAsCampaignType:(id)arg1 ;
-(void)setPrivateDataSyncOn:(char)arg1 ;
-(void)setHasPrivateDataSyncOn:(char)arg1 ;
-(char)hasPrivateDataSyncOn;
-(void)setIsPaidSubscriber:(char)arg1 ;
-(void)setHasIsPaidSubscriber:(char)arg1 ;
-(char)hasIsPaidSubscriber;
-(void)setIsPaidSubscriberFromNews:(char)arg1 ;
-(void)setHasIsPaidSubscriberFromNews:(char)arg1 ;
-(char)hasIsPaidSubscriberFromNews;
-(void)setIsPaidSubscriberFromAppStore:(char)arg1 ;
-(void)setHasIsPaidSubscriberFromAppStore:(char)arg1 ;
-(char)hasIsPaidSubscriberFromAppStore;
-(void)setIsPaidSubscriberFromThirdParty:(char)arg1 ;
-(void)setHasIsPaidSubscriberFromThirdParty:(char)arg1 ;
-(char)hasIsPaidSubscriberFromThirdParty;
-(char)hasOriginatingCampaignId;
-(char)hasOriginatingCampaignType;
-(char)hasOriginatingCreativeId;
-(void)setIosSettingsNotificationsEnabled:(char)arg1 ;
-(void)setHasIosSettingsNotificationsEnabled:(char)arg1 ;
-(char)hasIosSettingsNotificationsEnabled;
-(int)widgetModeType;
-(void)setWidgetModeType:(int)arg1 ;
-(void)setHasWidgetModeType:(char)arg1 ;
-(char)hasWidgetModeType;
-(id)widgetModeTypeAsString:(int)arg1 ;
-(int)StringAsWidgetModeType:(id)arg1 ;
-(void)setLocationPermissionGranted:(char)arg1 ;
-(void)setHasLocationPermissionGranted:(char)arg1 ;
-(char)hasLocationPermissionGranted;
-(int)newsWidgetModeGroup;
-(void)setNewsWidgetModeGroup:(int)arg1 ;
-(void)setHasNewsWidgetModeGroup:(char)arg1 ;
-(char)hasNewsWidgetModeGroup;
-(id)newsWidgetModeGroupAsString:(int)arg1 ;
-(int)StringAsNewsWidgetModeGroup:(id)arg1 ;
-(char)hasNewsWidgetModeGroupId;
-(void)setAgeBracket:(int)arg1 ;
-(void)setHasAgeBracket:(char)arg1 ;
-(char)hasAgeBracket;
-(void)setAgeBracketConfidenceLevel:(float)arg1 ;
-(void)setHasAgeBracketConfidenceLevel:(char)arg1 ;
-(char)hasAgeBracketConfidenceLevel;
-(void)setHasGender:(char)arg1 ;
-(char)hasGender;
-(void)setGenderConfidenceLevel:(float)arg1 ;
-(void)setHasGenderConfidenceLevel:(char)arg1 ;
-(char)hasGenderConfidenceLevel;
-(void)setIncomeBracket:(int)arg1 ;
-(void)setHasIncomeBracket:(char)arg1 ;
-(char)hasIncomeBracket;
-(void)setIncomeBracketConfidenceLevel:(float)arg1 ;
-(void)setHasIncomeBracketConfidenceLevel:(char)arg1 ;
-(char)hasIncomeBracketConfidenceLevel;
-(void)setEthnicity:(int)arg1 ;
-(void)setHasEthnicity:(char)arg1 ;
-(char)hasEthnicity;
-(void)setEthnicityConfidenceLevel:(float)arg1 ;
-(void)setHasEthnicityConfidenceLevel:(char)arg1 ;
-(char)hasEthnicityConfidenceLevel;
-(void)setAppConfigTreatmentId:(long long)arg1 ;
-(void)setHasAppConfigTreatmentId:(char)arg1 ;
-(char)hasAppConfigTreatmentId;
-(char)hasClientVersion;
-(char)hasBrowserLanguage;
-(char)hasNotwUserId;
-(void)setPrivateDataEncrypted:(char)arg1 ;
-(void)setHasPrivateDataEncrypted:(char)arg1 ;
-(char)hasPrivateDataEncrypted;
-(void)setProgressivePersonalizationAllowed:(char)arg1 ;
-(void)setHasProgressivePersonalizationAllowed:(char)arg1 ;
-(char)hasProgressivePersonalizationAllowed;
-(char)hasWatchSessionId;
-(char)hasSessionIdWatch;
-(char)hasWidgetSessionId;
-(char)hasPersonalizationPortraitVariantName;
-(char)hasAppProcessLifetimeId;
-(void)setTestBucket:(long long)arg1 ;
-(void)setHasTestBucket:(char)arg1 ;
-(char)hasTestBucket;
-(long long*)userSegmentationTreatmentIds;
-(void)clearUserSegmentationTreatmentIds;
-(void)setUserSegmentationTreatmentIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(int*)userSegmentationSegmentSetIds;
-(void)clearUserSegmentationSegmentSetIds;
-(void)setUserSegmentationSegmentSetIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setIosSettingsNotificationsSoundEnabled:(char)arg1 ;
-(void)setHasIosSettingsNotificationsSoundEnabled:(char)arg1 ;
-(char)hasIosSettingsNotificationsSoundEnabled;
-(void)setIosSettingsNotificationsBadgeAppIconEnabled:(char)arg1 ;
-(void)setHasIosSettingsNotificationsBadgeAppIconEnabled:(char)arg1 ;
-(char)hasIosSettingsNotificationsBadgeAppIconEnabled;
-(void)setIosSettingsNotificationsShowOnLockScreenEnabled:(char)arg1 ;
-(void)setHasIosSettingsNotificationsShowOnLockScreenEnabled:(char)arg1 ;
-(char)hasIosSettingsNotificationsShowOnLockScreenEnabled;
-(void)setIosSettingsNotificationsShowInHistoryEnabled:(char)arg1 ;
-(void)setHasIosSettingsNotificationsShowInHistoryEnabled:(char)arg1 ;
-(char)hasIosSettingsNotificationsShowInHistoryEnabled;
-(void)setIosSettingsNotificationsShowAsBannersEnabled:(char)arg1 ;
-(void)setHasIosSettingsNotificationsShowAsBannersEnabled:(char)arg1 ;
-(char)hasIosSettingsNotificationsShowAsBannersEnabled;
-(int)widgetDisplayModeSessionEnd;
-(void)setWidgetDisplayModeSessionEnd:(int)arg1 ;
-(void)setHasWidgetDisplayModeSessionEnd:(char)arg1 ;
-(char)hasWidgetDisplayModeSessionEnd;
-(id)widgetDisplayModeSessionEndAsString:(int)arg1 ;
-(int)StringAsWidgetDisplayModeSessionEnd:(id)arg1 ;
-(void)setSignedIntoITunes:(char)arg1 ;
-(void)setHasSignedIntoITunes:(char)arg1 ;
-(char)hasSignedIntoITunes;
-(void)setIsStoreDemoModeEnabled:(char)arg1 ;
-(void)setHasIsStoreDemoModeEnabled:(char)arg1 ;
-(char)hasIsStoreDemoModeEnabled;
-(void)setIsDiagnosticsUsageEnabled:(char)arg1 ;
-(void)setHasIsDiagnosticsUsageEnabled:(char)arg1 ;
-(char)hasIsDiagnosticsUsageEnabled;
-(void)clearRegionIds;
-(unsigned long long)regionIdsCount;
-(id)regionIdsAtIndex:(unsigned long long)arg1 ;
-(char)hasAppBuildNumber;
-(char)hasAmsPurchaseId;
-(char)hasAmsCampaignId;
-(int)paywallConfigType;
-(void)setPaywallConfigType:(int)arg1 ;
-(void)setHasPaywallConfigType:(char)arg1 ;
-(char)hasPaywallConfigType;
-(id)paywallConfigTypeAsString:(int)arg1 ;
-(int)StringAsPaywallConfigType:(id)arg1 ;
-(long long)appBuild;
-(char)isNewUser;
-(long long)userStartDate;
-(long long)lastAppOpenDate;
-(char)runningObsolete;
-(char)upgradedFromObsolete;
-(NSString *)previousAppVersion;
-(NSString *)previousOsVersion;
-(char)signedIntoIcloud;
-(char)privateDataSyncOn;
-(char)isPaidSubscriber;
-(char)isPaidSubscriberFromNews;
-(char)isPaidSubscriberFromAppStore;
-(char)isPaidSubscriberFromThirdParty;
-(NSString *)originatingCampaignId;
-(NSString *)originatingCampaignType;
-(NSString *)originatingCreativeId;
-(char)iosSettingsNotificationsEnabled;
-(char)locationPermissionGranted;
-(NSString *)newsWidgetModeGroupId;
-(int)ageBracket;
-(float)ageBracketConfidenceLevel;
-(float)genderConfidenceLevel;
-(int)incomeBracket;
-(float)incomeBracketConfidenceLevel;
-(int)ethnicity;
-(float)ethnicityConfidenceLevel;
-(long long)appConfigTreatmentId;
-(NSString *)browserLanguage;
-(NSString *)notwUserId;
-(char)privateDataEncrypted;
-(char)progressivePersonalizationAllowed;
-(NSString *)watchSessionId;
-(NSData *)sessionIdWatch;
-(NSData *)widgetSessionId;
-(NSString *)personalizationPortraitVariantName;
-(NSData *)appProcessLifetimeId;
-(long long)testBucket;
-(char)iosSettingsNotificationsSoundEnabled;
-(char)iosSettingsNotificationsBadgeAppIconEnabled;
-(char)iosSettingsNotificationsShowOnLockScreenEnabled;
-(char)iosSettingsNotificationsShowInHistoryEnabled;
-(char)iosSettingsNotificationsShowAsBannersEnabled;
-(char)signedIntoITunes;
-(char)isStoreDemoModeEnabled;
-(char)isDiagnosticsUsageEnabled;
-(NSMutableArray *)regionIds;
-(void)setRegionIds:(NSMutableArray *)arg1 ;
-(NSString *)appBuildNumber;
-(NSString *)amsPurchaseId;
-(NSString *)amsCampaignId;
@end
