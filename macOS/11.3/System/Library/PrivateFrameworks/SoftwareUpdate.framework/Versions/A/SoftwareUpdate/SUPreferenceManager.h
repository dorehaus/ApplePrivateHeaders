/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSString, NSDate, NSNumber;

@interface SUPreferenceManager : NSObject {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                                          //@synthesize connection=_connection - In the implementation block
@property (readonly) NSString * catalogURL; 
@property (readonly) NSDate * lastScanSuccessfulDate; 
@property (readonly) NSDate * lastFullScanSuccessfulDate; 
@property (readonly) NSDate * lastCatalogChangedDate; 
@property (readonly) NSNumber * recommendedUpdatesAvailable; 
@property (readonly) char automaticallyCheckForUpdates; 
@property (readonly) char downloadUpdatesInBackground; 
@property (readonly) char automaticallyInstallConfigDataAndSecurityUpdates; 
@property (readonly) char automaticallyInstallRestartRequiredUpdates; 
@property (readonly) char automaticallyInstallMacOSUpdates; 
@property (readonly) char specialTestMode; 
@property (readonly) char allowAnyCatalogCertificate; 
@property (readonly) char disableSeedUI; 
@property (readonly) char onlyConsiderStagedUpdates; 
@property (readonly) NSString * baseSystemDiskImageOverridePath; 
@property (readonly) long long lastScanResultCode; 
@property (readonly) char isLastScanResultSuccess; 
@property (readonly) char allowSameOrOlderMajorOSVersion; 
@property (readonly) NSString * bridgeVersionOverride; 
@property (readonly) char ignoreMinimumBridgeVersionCheck; 
@property (readonly) NSString * customPersonalizationSigningServerURLString; 
+(id)defaultManager;
-(id)_preferenceObjectForKey:(id)arg1 withError:(id*)arg2 ;
-(char)_setPreferenceObject:(id)arg1 forKey:(id)arg2 withError:(id*)arg3 ;
-(char)_setIASUCatalogURLWithValue:(id)arg1 withError:(id*)arg2 ;
-(id)_dataForNVRAMKey:(id)arg1 withError:(id*)arg2 ;
-(id)_preferenceObjectForKey:(id)arg1 requiringClass:(Class)arg2 ;
-(char)_migratePreferencesWithError:(id*)arg1 ;
-(long long)lastScanResultCode;
-(char)_setPreferenceObject:(id)arg1 requiringObjectClass:(Class)arg2 forKey:(id)arg3 ;
-(char)_setIASUCatalogURLWithValue:(id)arg1 ;
-(id)_newResumedConnection;
-(NSDate *)lastFullScanSuccessfulDate;
-(NSNumber *)recommendedUpdatesAvailable;
-(char)migratePreferencesIfNecessary;
-(char)downloadUpdatesInBackground;
-(char)automaticallyInstallRestartRequiredUpdates;
-(char)specialTestMode;
-(char)allowAnyCatalogCertificate;
-(char)disableSeedUI;
-(NSString *)baseSystemDiskImageOverridePath;
-(NSString *)customPersonalizationSigningServerURLString;
-(char)setIASUCatalogURLWithValue:(id)arg1 ;
-(char)isProdFused;
-(char)setAutomaticallyInstallRestartRequiredUpdates:(char)arg1 ;
-(char)setSpecialTestMode:(char)arg1 ;
-(char)setAllowAnyCatalogCertificate:(char)arg1 ;
-(char)setDisableSeedUI:(char)arg1 ;
-(char)setOnlyConsiderStagedUpdatesForPredicateAndConfigDataUpdates:(char)arg1 ;
-(char)setBaseSystemDiskImageOverridePath:(NSString *)arg1 ;
-(char)enableRecommendedSettings;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)_dataForNVRAMKey:(id)arg1 ;
-(char)automaticallyCheckForUpdates;
-(char)setAutomaticallyCheckForUpdates:(char)arg1 ;
-(char)automaticallyInstallConfigDataAndSecurityUpdates;
-(char)setAutomaticallyInstallConfigDataAndSecurityUpdates:(char)arg1 ;
-(char)setCatalogURL:(NSString *)arg1 ;
-(NSString *)catalogURL;
-(NSDate *)lastScanSuccessfulDate;
-(NSDate *)lastCatalogChangedDate;
-(char)setLastSuccessfulScanDate:(id)arg1 ;
-(char)setLastRecommendedMajorOSBundleIdentifier:(id)arg1 ;
-(char)allowSameOrOlderMajorOSVersion;
-(char)setCatalogToProductionAndNotify;
-(char)onlyConsiderStagedUpdates;
-(char)isLastScanResultSuccess;
-(char)setDownloadUpdatesInBackground:(char)arg1 ;
-(char)setAutomaticallyInstallMacOSUpdates:(char)arg1 ;
-(NSString *)bridgeVersionOverride;
-(char)ignoreMinimumBridgeVersionCheck;
-(void)_reconnectIfNecessary;
-(char)automaticallyInstallMacOSUpdates;
@end

