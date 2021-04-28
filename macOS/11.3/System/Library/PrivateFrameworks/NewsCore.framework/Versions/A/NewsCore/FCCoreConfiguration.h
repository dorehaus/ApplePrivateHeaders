/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FCNotificationsConfiguration, NSArray, NSDictionary, FCTopStoriesConfiguration, NSString, FCForYouGroupsConfiguration, FCVideoGroupsConfig, NSNumber, FCPaidBundleConfiguration;


@protocol FCCoreConfiguration <NSObject,NFCopying>
@property (nonatomic,readonly) long long appConfigRefreshRate; 
@property (nonatomic,readonly) long long trendingTopicsRefreshRate; 
@property (getter=isOrderFeedEndpointEnabled,nonatomic,readonly) char orderFeedEndpointEnabled; 
@property (nonatomic,readonly) FCNotificationsConfiguration * notificationsConfig; 
@property (nonatomic,readonly) long long notificationEnabledChannelsRefreshFrequency; 
@property (nonatomic,readonly) long long savedArticlesCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesOpenedCutoffTime; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountWiFi; 
@property (nonatomic,readonly) long long savedArticlesMaximumCountCellular; 
@property (nonatomic,readonly) long long subscriptionsGlobalMeteredCount; 
@property (nonatomic,readonly) NSArray * presubscribedFeedIDs; 
@property (nonatomic,readonly) char useSecureConnectionForAssets; 
@property (getter=isPrivateDataEncryptionAllowed,nonatomic,readonly) char privateDataEncryptionAllowed; 
@property (getter=isPrivateDataEncryptionMigrationDesired,nonatomic,readonly) char privateDataEncryptionMigrationDesired; 
@property (nonatomic,readonly) char privateDataEncryptionMigrationRequiresAllDevicesRunningTigris; 
@property (getter=isPrivateDataMigrationCleanupEnabled,nonatomic,readonly) char privateDataMigrationCleanupEnabled; 
@property (nonatomic,readonly) NSDictionary * endpointConfigsByEnvironment; 
@property (nonatomic,readonly) FCTopStoriesConfiguration * topStoriesConfig; 
@property (nonatomic,readonly) NSString * breakingNewsChannelID; 
@property (nonatomic,readonly) NSString * briefingsTagID; 
@property (nonatomic,readonly) NSString * trendingTagID; 
@property (nonatomic,readonly) NSString * featuredStoriesTagID; 
@property (nonatomic,readonly) NSString * savedStoriesTagID; 
@property (nonatomic,readonly) NSString * myMagazinesTagID; 
@property (nonatomic,readonly) NSString * editorialChannelID; 
@property (nonatomic,readonly) NSString * editorialGemsSectionID; 
@property (nonatomic,readonly) long long articleRapidUpdatesTimeout; 
@property (nonatomic,readonly) NSArray * hiddenFeedIDs; 
@property (nonatomic,readonly) FCForYouGroupsConfiguration * forYouGroupsConfiguration; 
@property (nonatomic,readonly) long long minimumDurationBetweenForYouGroupsWeekday; 
@property (nonatomic,readonly) long long minimumDurationBetweenForYouGroupsWeekend; 
@property (nonatomic,readonly) long long minimumDurationBetweenTrendingGroupsWeekday; 
@property (nonatomic,readonly) long long minimumDurationBetweenTrendingGroupsWeekend; 
@property (nonatomic,readonly) long long expiredPaidSubscriptionGroupCutoffTime; 
@property (nonatomic,readonly) long long maximumNumberOfExpiredPaidSubscriptionGroups; 
@property (nonatomic,readonly) long long maximumTimesHeadlineInPaidSubscriptionGroup; 
@property (nonatomic,readonly) long long maximumPaidSubscriptionGroupSizeiPad; 
@property (nonatomic,readonly) long long maximumPaidSubscriptionGroupSizeiPhone; 
@property (nonatomic,readonly) char diversifyOptionalTopStories; 
@property (nonatomic,readonly) long long optionalTopStoriesRefreshRate; 
@property (nonatomic,readonly) double minimumTrendingUnseenRatio; 
@property (nonatomic,copy,readonly) FCVideoGroupsConfig * forYouVideoGroupsConfig; 
@property (nonatomic,readonly) double endOfArticleMinPaidHeadlineRatio; 
@property (nonatomic,readonly) long long endOfArticleMaxInaccessiblePaidArticleCount; 
@property (nonatomic,readonly) long long minimumDistanceBetweenImageOnTopTiles; 
@property (nonatomic,readonly) NSString * forYouRecordConfigID; 
@property (nonatomic,readonly) NSString * experimentalizableFieldPostfix; 
@property (nonatomic,readonly) NSNumber * currentTreatment; 
@property (nonatomic,readonly) long long expirePinnedArticlesAfter; 
@property (nonatomic,readonly) NSString * engagementCohortsExpField; 
@property (nonatomic,readonly) NSString * conversionCohortsExpField; 
@property (nonatomic,readonly) char shouldShowAlternateHeadlines; 
@property (nonatomic,readonly) long long singleTopicFeedMinFeedItemsPerRequest; 
@property (nonatomic,readonly) long long singleChannelFeedMinFeedItemsPerRequest; 
@property (nonatomic,readonly) long long maxRetriesForDroppedFeeds; 
@property (nonatomic,readonly) double delayBeforeRetryingDroppedFeeds; 
@property (nonatomic,readonly) NSDictionary * channelUpsellConfigsByChannelID; 
@property (nonatomic,readonly) long long dailyChannelUpsellsCountLimit; 
@property (nonatomic,readonly) FCPaidBundleConfiguration * paidBundleConfig; 
@property (nonatomic,readonly) NSString * magazinesConfigRecordID; 
@property (nonatomic,readonly) long long entitlementsCacheRecoveryAttemptDurationInSeconds; 
@property (nonatomic,readonly) NSString * spotlightChannelID; 
@property (nonatomic,readonly) double feedLineHeightMultiplier; 
@property (nonatomic,readonly) NSArray * aLaCartePaidSubscriptionGroupWhitelistedChannelIDs; 
@property (nonatomic,readonly) NSString * todayFeedKnobs; 
@property (nonatomic,readonly) NSString * audioConfigRecordID; 
@property (nonatomic,readonly) NSString * freeEvergreenArticleListID; 
@property (nonatomic,readonly) NSString * paidEvergreenArticleListID; 
@property (nonatomic,readonly) long long forYouMaxDailyEvergreenArticlesForFreeUsers; 
@property (nonatomic,readonly) long long forYouMaxDailyEvergreenArticlesForPaidUsers; 
@property (nonatomic,readonly) char usePersonalizationVectorAlt; 
@property (nonatomic,readonly) char recordBothPersonalizationVectors; 
@property (nonatomic,readonly) long long widgetForYouBackgroundMinimumUpdateInterval; 
@property (nonatomic,readonly) char enableCacheFallbackForArticleRecirculation; 
@property (nonatomic,readonly) char privateDataShouldSecureSubscriptions; 
@property (getter=isPrivateDataEncryptionRequired,nonatomic,readonly) char privateDataEncryptionRequired; 
@property (nonatomic,readonly) long long maximumRetryAfterForCK; 
@property (nonatomic,readonly) char todayFeedEnabled; 
@property (nonatomic,readonly) char tagFeedEnabled; 
@property (nonatomic,readonly) char searchFeedEnabled; 
@property (nonatomic,readonly) char newNotificationHandlingEnabled; 
@property (nonatomic,readonly) char newPersonalizationEnabled; 
@property (nonatomic,readonly) char xavierEnabled; 
@property (nonatomic,readonly) char checkForPaywallConfigChangesEnabled; 
@property (nonatomic,readonly) char adInstrumentationEnabled; 
@property (nonatomic,readonly) char adImpressionTrackingEnabled; 
@property (nonatomic,readonly) long long widgetSystemReloadInterval; 
@property (nonatomic,readonly) long long widgetSystemReloadJitterMax; 
@property (nonatomic,readonly) long long widgetSystemHoneymoonDuration; 
@property (nonatomic,readonly) long long widgetSystemReloadIntervalHoneymoon; 
@property (nonatomic,readonly) long long widgetSystemReloadJitterMaxHoneymoon; 
@property (nonatomic,readonly) NSArray * permanentChannelIDs; 
@property (nonatomic,readonly) NSString * forYouPremiumRecordConfigID; 
@property (nonatomic,readonly) char premiumTodayFeedEnabled; 
@property (nonatomic,readonly) unsigned long long premiumTodayFeedDebugSetting; 
@optional
-(long long)widgetSystemReloadInterval;
-(long long)widgetSystemReloadJitterMax;
-(FCPaidBundleConfiguration *)paidBundleConfig;
-(NSString *)spotlightChannelID;
-(long long)widgetSystemHoneymoonDuration;
-(long long)widgetSystemReloadIntervalHoneymoon;
-(long long)widgetSystemReloadJitterMaxHoneymoon;
-(char)todayFeedEnabled;
-(char)newPersonalizationEnabled;
-(id)appAnalyticsEndpointUrlForEnvironment:(unsigned long long)arg1;
-(id)paidALaCartePaywallConfigForChannelID:(id)arg1;
-(id)todayConfigWithIdentifier:(id)arg1 queueConfigs:(id)arg2 backgroundColorLight:(id)arg3 backgroundColorDark:(id)arg4 audioIndicatorColor:(id)arg5;
-(NSString *)engagementCohortsExpField;
-(NSString *)conversionCohortsExpField;
-(char)shouldShowAlternateHeadlines;
-(long long)singleTopicFeedMinFeedItemsPerRequest;
-(long long)singleChannelFeedMinFeedItemsPerRequest;
-(long long)maxRetriesForDroppedFeeds;
-(double)delayBeforeRetryingDroppedFeeds;
-(NSDictionary *)channelUpsellConfigsByChannelID;
-(long long)dailyChannelUpsellsCountLimit;
-(NSString *)magazinesConfigRecordID;
-(long long)entitlementsCacheRecoveryAttemptDurationInSeconds;
-(double)feedLineHeightMultiplier;
-(NSArray *)aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
-(NSString *)todayFeedKnobs;
-(NSString *)audioConfigRecordID;
-(NSString *)freeEvergreenArticleListID;
-(NSString *)paidEvergreenArticleListID;
-(long long)forYouMaxDailyEvergreenArticlesForFreeUsers;
-(long long)forYouMaxDailyEvergreenArticlesForPaidUsers;
-(char)usePersonalizationVectorAlt;
-(char)recordBothPersonalizationVectors;
-(long long)widgetForYouBackgroundMinimumUpdateInterval;
-(char)enableCacheFallbackForArticleRecirculation;
-(char)privateDataShouldSecureSubscriptions;
-(char)isPrivateDataEncryptionRequired;
-(long long)maximumRetryAfterForCK;
-(char)tagFeedEnabled;
-(char)searchFeedEnabled;
-(char)newNotificationHandlingEnabled;
-(char)xavierEnabled;
-(char)checkForPaywallConfigChangesEnabled;
-(char)adInstrumentationEnabled;
-(char)adImpressionTrackingEnabled;
-(NSArray *)permanentChannelIDs;
-(NSString *)forYouPremiumRecordConfigID;
-(char)premiumTodayFeedEnabled;
-(unsigned long long)premiumTodayFeedDebugSetting;

@required
-(long long)appConfigRefreshRate;
-(long long)notificationEnabledChannelsRefreshFrequency;
-(long long)savedArticlesMaximumCountCellular;
-(long long)savedArticlesCutoffTime;
-(long long)savedArticlesOpenedCutoffTime;
-(long long)expiredPaidSubscriptionGroupCutoffTime;
-(char)diversifyOptionalTopStories;
-(long long)expirePinnedArticlesAfter;
-(long long)trendingTopicsRefreshRate;
-(long long)minimumDistanceBetweenImageOnTopTiles;
-(long long)articleRapidUpdatesTimeout;
-(long long)subscriptionsGlobalMeteredCount;
-(double)endOfArticleMinPaidHeadlineRatio;
-(id)personalizationTreatment;
-(NSString *)experimentalizableFieldPostfix;
-(char)useSecureConnectionForAssets;
-(double)minimumTrendingUnseenRatio;
-(long long)minimumDurationBetweenForYouGroupsWeekday;
-(long long)minimumDurationBetweenForYouGroupsWeekend;
-(long long)minimumDurationBetweenTrendingGroupsWeekday;
-(long long)minimumDurationBetweenTrendingGroupsWeekend;
-(FCVideoGroupsConfig *)forYouVideoGroupsConfig;
-(long long)optionalTopStoriesRefreshRate;
-(FCTopStoriesConfiguration *)topStoriesConfig;
-(NSString *)briefingsTagID;
-(NSString *)trendingTagID;
-(NSString *)featuredStoriesTagID;
-(NSString *)savedStoriesTagID;
-(NSString *)myMagazinesTagID;
-(NSArray *)presubscribedFeedIDs;
-(NSString *)editorialChannelID;
-(NSString *)editorialGemsSectionID;
-(NSDictionary *)endpointConfigsByEnvironment;
-(id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
-(char)isOrderFeedEndpointEnabled;
-(FCNotificationsConfiguration *)notificationsConfig;
-(long long)savedArticlesMaximumCountWiFi;
-(char)isPrivateDataEncryptionAllowed;
-(char)isPrivateDataEncryptionMigrationDesired;
-(char)privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
-(char)isPrivateDataMigrationCleanupEnabled;
-(NSString *)breakingNewsChannelID;
-(NSArray *)hiddenFeedIDs;
-(FCForYouGroupsConfiguration *)forYouGroupsConfiguration;
-(long long)maximumNumberOfExpiredPaidSubscriptionGroups;
-(long long)maximumTimesHeadlineInPaidSubscriptionGroup;
-(long long)maximumPaidSubscriptionGroupSizeiPad;
-(long long)maximumPaidSubscriptionGroupSizeiPhone;
-(long long)endOfArticleMaxInaccessiblePaidArticleCount;
-(NSString *)forYouRecordConfigID;
-(NSNumber *)currentTreatment;

@end

