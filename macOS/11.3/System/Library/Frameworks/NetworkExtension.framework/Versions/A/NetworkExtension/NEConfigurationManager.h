/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString, NSObject, NSDictionary, NSMutableDictionary, NSKeyedUnarchiver, NEHelper, NSData, NSUUID;

@interface NEConfigurationManager : NSObject {

	NSString* _description;
	SCD_Struct_NE9* _authorization;
	char _hasReadPermission;
	char _isVPNPublicAPI;
	char _isVPNPrivateAPI;
	char _isNEHelper;
	char _isSynchronous;
	char _hasVPNAPIEntitlement;
	int _changedNotifyToken;
	NSString* _pluginType;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _outerQueue;
	NSDictionary* _currentIndex;
	NSObject*<OS_dispatch_queue> _changedQueue;
	/*^block*/id _changedHandler;
	NSMutableDictionary* _loadedIndex;
	NSMutableDictionary* _loadedConfigurations;
	NSKeyedUnarchiver* _decoder;
	long long _generation;
	NEHelper* _helper;
	NSData* _SCPreferencesSignature;
	NSUUID* _userUUID;
	long long _configurationChangeSource;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outerQueue;                         //@synthesize outerQueue=_outerQueue - In the implementation block
@property (assign) int changedNotifyToken;                                                    //@synthesize changedNotifyToken=_changedNotifyToken - In the implementation block
@property (retain) NSDictionary * currentIndex;                                               //@synthesize currentIndex=_currentIndex - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> changedQueue;                                 //@synthesize changedQueue=_changedQueue - In the implementation block
@property (copy) id changedHandler;                                                           //@synthesize changedHandler=_changedHandler - In the implementation block
@property (retain) NSMutableDictionary * loadedIndex;                                         //@synthesize loadedIndex=_loadedIndex - In the implementation block
@property (retain) NSMutableDictionary * loadedConfigurations;                                //@synthesize loadedConfigurations=_loadedConfigurations - In the implementation block
@property (retain) NSKeyedUnarchiver * decoder;                                               //@synthesize decoder=_decoder - In the implementation block
@property (assign) long long generation;                                                      //@synthesize generation=_generation - In the implementation block
@property (retain) NEHelper * helper;                                                         //@synthesize helper=_helper - In the implementation block
@property (setter=CPreferencesSignature,retain) NSData * SCPreferencesSignature;              //@synthesize SCPreferencesSignature=_SCPreferencesSignature - In the implementation block
@property (assign) char hasReadPermission;                                                    //@synthesize hasReadPermission=_hasReadPermission - In the implementation block
@property (assign) char isVPNPublicAPI;                                                       //@synthesize isVPNPublicAPI=_isVPNPublicAPI - In the implementation block
@property (assign) char isVPNPrivateAPI;                                                      //@synthesize isVPNPrivateAPI=_isVPNPrivateAPI - In the implementation block
@property (assign) char isNEHelper;                                                           //@synthesize isNEHelper=_isNEHelper - In the implementation block
@property (assign,nonatomic) char isSynchronous;                                              //@synthesize isSynchronous=_isSynchronous - In the implementation block
@property (assign) char hasVPNAPIEntitlement;                                                 //@synthesize hasVPNAPIEntitlement=_hasVPNAPIEntitlement - In the implementation block
@property (readonly) NSUUID * userUUID;                                                       //@synthesize userUUID=_userUUID - In the implementation block
@property (copy) id incomingMessageHandler; 
@property (assign) long long configurationChangeSource;                                       //@synthesize configurationChangeSource=_configurationChangeSource - In the implementation block
@property (readonly) NSString * pluginType;                                                   //@synthesize pluginType=_pluginType - In the implementation block
+(void)updateFlags:(unsigned long long*)arg1 withConfiguration:(id)arg2 ;
+(char)configurationIsEnabled:(id)arg1 ;
+(long long)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2 sameTypeCount:(unsigned long long*)arg3 ;
+(void)disableConfiguration:(id)arg1 onDemandOnly:(char)arg2 ;
+(id)sharedManager;
+(id)sharedManagerForAllUsers;
-(id)initWithPluginType:(id)arg1 ;
-(id)initWithUserUUID:(id)arg1 ;
-(int)changedNotifyToken;
-(void)setIncomingMessageHandler:(id)arg1 ;
-(id)incomingMessageHandler;
-(long long)configurationChangeSource;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)loadedConfigurations;
-(void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2 onlyIfChanged:(char)arg3 ;
-(void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)readIndexFromDiskWithError:(id*)arg1 ;
-(char)hasReadPermission;
-(id)filterIndexWithFilter:(id)arg1 ;
-(NSMutableDictionary *)loadedIndex;
-(void)clearLoadedConfigurationsWithIDs:(id)arg1 ;
-(id)decodeConfigurationWithIdentifier:(id)arg1 ;
-(void)didLoadConfiguration:(id)arg1 ;
-(char)isVPNPublicAPI;
-(char)isNEHelper;
-(id)errorWithCode:(long long)arg1 specifics:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)changedQueue;
-(id)copyChangedConfigurationIDs:(id)arg1 ;
-(void)getCurrentIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setChangedNotifyToken:(int)arg1 ;
-(void)setLoadedIndex:(NSMutableDictionary *)arg1 ;
-(void)setLoadedConfigurations:(NSMutableDictionary *)arg1 ;
-(void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2 ;
-(char)configurationHasChanged:(id)arg1 ;
-(void)setHasReadPermission:(char)arg1 ;
-(void)setSCPreferencesSignature:(NSData *)arg1 ;
-(char)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2 ;
-(id)makeMutableCopyOfIndex:(id)arg1 ;
-(char)isSystemConfiguration:(id)arg1 ;
-(NSData *)SCPreferencesSignature;
-(NSObject*<OS_dispatch_queue>)outerQueue;
-(id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(SCPreferencesRef)arg2 currentSignature:(id)arg3 userUUID:(id)arg4 notifyNow:(char)arg5 isUpgrade:(char)arg6 ;
-(id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(SCPreferencesRef)arg2 ;
-(void)updateSCPreferencesSignatureOnDisk;
-(void)executeCallbackOnQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)getConfigurationUserUUID:(id)arg1 ;
-(void)setChangedQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initForAllUsers;
-(id)initSynchronous;
-(void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(SCPreferencesRef)arg4 ;
-(void)handleApplicationsRemoved:(id)arg1 completionQueue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)triggerLocalAuthenticationForConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)repopulateNetworkPrivacyConfigurationResetAll:(char)arg1 ;
-(void)fetchClientListenerWithBundleID:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchUpgradeInfoForPluginType:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadLegacyPluginConfigurationsWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)upgradeLegacyPluginConfigurations:(id)arg1 withUpgradeInfo:(id)arg2 completionQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setOuterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsVPNPublicAPI:(char)arg1 ;
-(char)isVPNPrivateAPI;
-(void)setIsVPNPrivateAPI:(char)arg1 ;
-(void)setIsNEHelper:(char)arg1 ;
-(char)hasVPNAPIEntitlement;
-(void)setHasVPNAPIEntitlement:(char)arg1 ;
-(void)setConfigurationChangeSource:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(long long)generation;
-(NSObject*<OS_dispatch_queue>)queue;
-(char)isSynchronous;
-(NSKeyedUnarchiver *)decoder;
-(NEHelper *)helper;
-(void)registerForChangeNotifications;
-(void)setGeneration:(long long)arg1 ;
-(id)changedHandler;
-(void)setChangedHandler:(id)arg1 ;
-(void)setHelper:(NEHelper *)arg1 ;
-(void)executeBlock:(/*^block*/id)arg1 ;
-(void)notifyChanges;
-(void)setIsSynchronous:(char)arg1 ;
-(NSDictionary *)currentIndex;
-(void)setCurrentIndex:(NSDictionary *)arg1 ;
-(void)setAuthorization:(AuthorizationOpaqueRefRef)arg1 ;
-(NSUUID *)userUUID;
-(char)reloadFromDisk;
-(void)postChangeNotification;
-(void)setChangedQueue:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDecoder:(NSKeyedUnarchiver *)arg1 ;
-(NSString *)pluginType;
-(void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadConfigurationAndUserWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)showLocalNetworkAlertForApp:(id)arg1 withCompletionQueue:(id)arg2 query:(id)arg3 hasEntitlement:(char)arg4 handler:(/*^block*/id)arg5 ;
-(void)postGeneration;
-(void)handleFileRemovedWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addAppToKeychainACLsForConfiguration:(id)arg1 ;
-(void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 isUpgrade:(char)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)showLocalNetworkAlertForApp:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)syncConfigurationsWithSC:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getCurrentUserUUIDForConfigurationID:(id)arg1 fromIndex:(id)arg2 ;
@end

