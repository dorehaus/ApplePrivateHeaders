/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/Versions/A/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOConfiguration, SOConfigurationVersion, NSMutableArray;

@interface SOConfigurationHost : NSObject {

	SOConfiguration* _configuration;
	SOConfigurationVersion* _configurationVersion;
	NSMutableArray* _removedProfiles;

}

@property (nonatomic,readonly) long long configVersion; 
+(id)defaultManager;
+(id)_loadProfilesFromDict:(id)arg1 ;
+(id)_loadProfilesFromURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_checkNewVersion;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
-(long long)configVersion;
-(id)realms;
-(id)configurationForClientWithError:(id*)arg1 ;
-(char)saveConfigurationData:(id)arg1 error:(id*)arg2 ;
-(void)_loadConfigForFirstTime;
-(char)_saveConfigToFile:(id)arg1 error:(id*)arg2 ;
-(id)_checkAssociatedDomainForProfiles:(id)arg1 ;
-(void)_reloadConfigWithReason:(long long)arg1 ;
-(char)_isConfigFileAvailable;
-(void)_startKeyBagObserverForReloadingConfiguration;
-(void)_extensionsLoaded:(id)arg1 ;
-(id)_stringWithReason:(long long)arg1 ;
-(id)_configurationFileForCurrentUser;
-(id)_defaultConfigurationFile;
-(id)_checkExtensionsExistenceForProfiles:(id)arg1 ;
-(void)_configurationLoadedWithReason:(long long)arg1 ;
-(id)_configurationPathForCurrentUser;
-(char)_initDataVaultIfNeededWithError:(id*)arg1 ;
-(id)_defaultConfigurationPath;
-(id)removedProfileForExtensionBundleIdentifier:(id)arg1 ;
-(id)profilesWithExtensionBundleIdentifier:(id)arg1 ;
@end

