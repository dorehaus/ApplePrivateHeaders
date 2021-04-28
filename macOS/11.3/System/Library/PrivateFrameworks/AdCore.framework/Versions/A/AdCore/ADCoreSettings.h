/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@class NSURL, NSString, ACAccount;

@interface ADCoreSettings : ADSingleton {

	char _educationModeEnabled;
	char _internationalRoaming;
	char _hasDeterminedRoamingStatus;
	int _connectionType;
	float _timezone;
	int _runState;
	NSURL* _defaultServerURL;
	NSURL* _defaultConfigurationServerURL;
	double _jingleTimeoutInterval;
	double _adServerTimeoutInterval;
	double _NSURLConnectionTimeout;
	double _NSURLTransactionTimeout;
	NSString* _osVersionAndBuild;
	NSString* _deviceModel;
	NSString* _bundleIdentifier;
	NSString* _storefrontLocalizationLanguage;
	NSString* _homeCarrierMCC;
	NSString* _homeCarrierMNC;
	NSString* _iTunesStorefront;

}

@property (nonatomic,retain) NSURL * defaultServerURL;                               //@synthesize defaultServerURL=_defaultServerURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultConfigurationServerURL;                  //@synthesize defaultConfigurationServerURL=_defaultConfigurationServerURL - In the implementation block
@property (assign,nonatomic) int segmentRetrievalInterval; 
@property (assign,nonatomic) int maxSegmentSendInterval; 
@property (assign,nonatomic) double jingleTimeoutInterval;                           //@synthesize jingleTimeoutInterval=_jingleTimeoutInterval - In the implementation block
@property (assign,nonatomic) double adServerTimeoutInterval;                         //@synthesize adServerTimeoutInterval=_adServerTimeoutInterval - In the implementation block
@property (assign,nonatomic) double NSURLConnectionTimeout;                          //@synthesize NSURLConnectionTimeout=_NSURLConnectionTimeout - In the implementation block
@property (assign,nonatomic) double NSURLTransactionTimeout;                         //@synthesize NSURLTransactionTimeout=_NSURLTransactionTimeout - In the implementation block
@property (nonatomic,retain) NSString * osVersionAndBuild;                           //@synthesize osVersionAndBuild=_osVersionAndBuild - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                                 //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) int connectionType;                                     //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) float timezone;                                         //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) NSString * localeIdentifier; 
@property (nonatomic,retain) NSString * storefrontLocalizationLanguage;              //@synthesize storefrontLocalizationLanguage=_storefrontLocalizationLanguage - In the implementation block
@property (nonatomic,readonly) char isManagedAppleID; 
@property (nonatomic,readonly) char isManagediTunesAccount; 
@property (nonatomic,readonly) char isManagediCloudAccount; 
@property (assign,nonatomic) char isPersonalizedAdsEnabled; 
@property (nonatomic,readonly) char educationModeEnabled;                            //@synthesize educationModeEnabled=_educationModeEnabled - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMCC;                                //@synthesize homeCarrierMCC=_homeCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMNC;                                //@synthesize homeCarrierMNC=_homeCarrierMNC - In the implementation block
@property (assign,nonatomic) char internationalRoaming;                              //@synthesize internationalRoaming=_internationalRoaming - In the implementation block
@property (assign,nonatomic) char hasDeterminedRoamingStatus;                        //@synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus - In the implementation block
@property (assign,nonatomic) int runState;                                           //@synthesize runState=_runState - In the implementation block
@property (nonatomic,retain) NSString * iTunesStorefront;                            //@synthesize iTunesStorefront=_iTunesStorefront - In the implementation block
@property (nonatomic,readonly) ACAccount * iTunesStoreAccount; 
@property (nonatomic,readonly) NSString * iTunesAccountDSID; 
@property (nonatomic,readonly) NSString * customJinglePayload; 
@property (nonatomic,readonly) ACAccount * iCloudAccount; 
@property (nonatomic,readonly) NSString * iCloudAccountIdentifier; 
@property (nonatomic,readonly) NSString * iCloudDSID; 
@property (readonly) char unitTesting; 
+(id)sharedInstance;
+(char)educationModeEnabled;
-(id)init;
-(NSString *)localeIdentifier;
-(NSString *)bundleIdentifier;
-(int)connectionType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)deviceDescription;
-(char)unitTesting;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(float)timezone;
-(ACAccount *)iCloudAccount;
-(void)setConnectionType:(int)arg1 ;
-(void)setTimezone:(float)arg1 ;
-(NSString *)iTunesAccountDSID;
-(NSString *)iCloudAccountIdentifier;
-(void)expire;
-(char)isManagedAppleID;
-(NSString *)iCloudDSID;
-(NSURL *)defaultServerURL;
-(char)isPersonalizedAdsEnabled;
-(ACAccount *)iTunesStoreAccount;
-(double)jingleTimeoutInterval;
-(int)segmentRetrievalInterval;
-(NSString *)iTunesStorefront;
-(void)reloadStorefront:(/*^block*/id)arg1 ;
-(NSURL *)defaultConfigurationServerURL;
-(void)setIsPersonalizedAdsEnabled:(char)arg1 ;
-(char)educationModeEnabled;
-(void)setIdentifierForAdvertisingAllowed:(char)arg1 ;
-(int)maxSegmentSendInterval;
-(NSString *)customJinglePayload;
-(NSString *)osVersionAndBuild;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(void)setSegmentRetrievalInterval:(int)arg1 ;
-(void)setMaxSegmentSendInterval:(int)arg1 ;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(double)NSURLConnectionTimeout;
-(double)NSURLTransactionTimeout;
-(double)adServerTimeoutInterval;
-(char)isManagediTunesAccount;
-(char)isManagediCloudAccount;
-(int)deviceRunStateForBundleIdentifier:(id)arg1 ;
-(void)setITunesStorefront:(NSString *)arg1 ;
-(char)isRestrictedByScreenTime;
-(char)isAccountRestricted;
-(void)gatherTelephonyData;
-(void)setHomeCarrierMNC:(NSString *)arg1 ;
-(void)setHomeCarrierMCC:(NSString *)arg1 ;
-(void)setHasDeterminedRoamingStatus:(char)arg1 ;
-(NSString *)homeCarrierMNC;
-(NSString *)homeCarrierMCC;
-(void)setStorefrontLocalizationLanguage:(NSString *)arg1 ;
-(char)purpleBuddyWillRun;
-(void)setDefaultServerURL:(NSURL *)arg1 ;
-(void)setDefaultConfigurationServerURL:(NSURL *)arg1 ;
-(void)setJingleTimeoutInterval:(double)arg1 ;
-(void)setAdServerTimeoutInterval:(double)arg1 ;
-(void)setNSURLConnectionTimeout:(double)arg1 ;
-(void)setNSURLTransactionTimeout:(double)arg1 ;
-(NSString *)storefrontLocalizationLanguage;
-(char)internationalRoaming;
-(void)setInternationalRoaming:(char)arg1 ;
-(char)hasDeterminedRoamingStatus;
@end

