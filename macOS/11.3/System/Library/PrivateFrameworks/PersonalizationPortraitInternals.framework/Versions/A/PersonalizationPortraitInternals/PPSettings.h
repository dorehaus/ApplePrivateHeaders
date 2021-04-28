/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSUserDefaults, _PASLock, NSObject, PPKVOObserver;

@interface PPSettings : NSObject {

	NSUserDefaults* _portraitDefaults;
	NSUserDefaults* _canLearnFromAppDefaults;
	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _initializationComplete;
	PPKVOObserver* _canLearnFromAppKVOObserver;
	PPKVOObserver* _weightKVOObserver;
	PPKVOObserver* _abGroupKVObserver;
	PPKVOObserver* _queryPlanLoggingKVOObserver;

}

@property (assign,getter=isAppConnectionsLocationsEnabled,nonatomic) char appConnectionsLocationsEnabled; 
+(void)initialize;
+(id)sharedInstance;
+(void)disableBundleIdentifier:(id)arg1 ;
+(void)clearTestSettings;
+(id)cloudSyncDisabledFirstPartyBundleIds;
+(char)isVoiceAssistantEnabled;
+(char)isCloudSyncEnabled;
-(id)init;
-(id)userDefaults;
-(void)_refreshDisabledBundleIds;
-(void)_disableBundleIdentifier:(id)arg1 ;
-(void)_clearTestSettings;
-(char)bundleIdentifierIsEnabledForDonation:(id)arg1 ;
-(char)isAppConnectionsLocationsEnabled;
-(void)setAppConnectionsLocationsEnabled:(char)arg1 ;
-(void)_updateAppConnectionsSettings;
-(void)setEntitiesBackfilledTimestamp:(id)arg1 ;
-(void)setEntitiesMappingTrieSha256:(id)arg1 ;
-(char)showLocationsFoundInApps;
-(int)registerDisabledBundleIdentifierChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1 ;
-(void)_invokeChangeHandlersAsync;
-(void)_handleCloudStorageDeletedByUser;
-(id)_donationDisabledBundleIds;
-(id)_cloudKitDisabledBundleIds;
-(void)registerCloudKitDisabledBundleIdRewriteHandler;
-(void)registerDisabledBundleIdPurgeHandler;
-(void)rewriteSyncStateForDisabledBundleIdsAsync;
-(void)_purgeRecordsForDisabledBundleIdsAsync;
-(void)_triggerDelayedOperationWithCoalescingToken:(A*)arg1 operation:(int)arg2 :(/*^block*/id)arg3 ;
-(void)_triggerDelayedBundleIdPurge;
-(void)triggerDelayedCloudSyncRewrite;
-(void)refreshCloudKitDisabledBundleIdsAsync;
-(void)_refreshCloudKitDisabledBundleIds;
-(double)weightMultiplier;
-(id)entitiesBackfilledTimestamp;
-(id)entitiesMappingPreviousTrieSha256;
-(char)bundleIdentifierIsEnabledForCloudKit:(id)arg1 ;
-(id)abGroupOverride;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 ;
-(void)clearAssetMetadataRefreshIntervalSeconds;
-(double)assetMetadataRefreshIntervalSeconds;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 ;
-(id)trialPathOverrides;
-(char)trialUseDefaultFiles;
-(void)setTrialUseDefaultFiles:(char)arg1 ;
-(id)trialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 ;
-(void)setTrialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 path:(id)arg3 ;
-(id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 ;
-(void)setQueryPlanLoggingEnabled:(char)arg1 ;
-(char)queryPlanLoggingEnabled;
-(void)_updateQueryPlanLogging;
-(int)registerQueryPlanLoggingChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg1 ;
-(char)isAuthorizedToLogLocation;
@end

