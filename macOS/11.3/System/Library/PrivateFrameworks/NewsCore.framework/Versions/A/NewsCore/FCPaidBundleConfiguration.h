/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSArray, NSMutableDictionary, NFUnfairLock;

@interface FCPaidBundleConfiguration : NSObject <NSCopying> {

	NSDictionary* _configDict;
	NSString* _storefrontID;
	NSString* _localizedStorefrontID;
	NSArray* _defaultSupportedStoreFronts;
	NSMutableDictionary* _keyedPaywallConfigurationsByType;
	NSMutableDictionary* _keyedSubscriptionButtonConfigurationsByType;
	NSDictionary* _magazineGenresByGenre;
	NFUnfairLock* _lock;

}

@property (getter=isFreeBadgeEnabled,nonatomic,readonly) char freeBadgeEnabled; 
@property (getter=isPaidBadgeEnabled,nonatomic,readonly) char paidBadgeEnabled; 
@property (nonatomic,retain) NSDictionary * configDict;                                                                        //@synthesize configDict=_configDict - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontID;                                                                   //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedStorefrontID;                                                          //@synthesize localizedStorefrontID=_localizedStorefrontID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSupportedStoreFronts;                                                     //@synthesize defaultSupportedStoreFronts=_defaultSupportedStoreFronts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyedPaywallConfigurationsByType;                                           //@synthesize keyedPaywallConfigurationsByType=_keyedPaywallConfigurationsByType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyedSubscriptionButtonConfigurationsByType;                                //@synthesize keyedSubscriptionButtonConfigurationsByType=_keyedSubscriptionButtonConfigurationsByType - In the implementation block
@property (nonatomic,retain) NSDictionary * magazineGenresByGenre;                                                             //@synthesize magazineGenresByGenre=_magazineGenresByGenre - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                                                                            //@synthesize lock=_lock - In the implementation block
@property (getter=isPaidBundleVisible,nonatomic,readonly) char paidBundleVisible; 
@property (getter=isTemporaryAccessEnabled,nonatomic,readonly) char temporaryAccessEnabled; 
@property (getter=isSharingIssuesEnabled,nonatomic,readonly) char sharingIssuesEnabled; 
@property (getter=areMagazinesEnabled,nonatomic,readonly) char magazinesEnabled; 
@property (getter=isFamilySharingSetupEnabled,nonatomic,readonly) char familySharingSetupEnabled; 
@property (nonatomic,readonly) NSString * servicesBundleMetricsTopicName; 
@property (nonatomic,readonly) NSString * defaultLandingPageArticleID; 
@property (nonatomic,readonly) NSString * defaultServicesBundleLandingPageArticleID; 
@property (nonatomic,readonly) NSString * renewalLandingPageArticleID; 
@property (nonatomic,readonly) NSString * familySharingLandingPageArticleID; 
@property (nonatomic,readonly) NSString * endOfPurchaseFamilySharingSetupArticleID; 
@property (nonatomic,readonly) NSString * endOfPurchaseNoFamilySharingSetupArticleID; 
@property (nonatomic,readonly) NSString * endOfPurchaseServicesBundleFamilySharingSetupArticleID; 
@property (nonatomic,readonly) NSString * endOfPurchaseServicesBundleNoFamilySharingSetupArticleID; 
@property (nonatomic,readonly) NSArray * restorableBundlePurchaseIDs; 
@property (nonatomic,readonly) NSArray * offeredBundlePurchaseIDs; 
@property (nonatomic,readonly) long long newIssuesCheckLocalTime; 
@property (nonatomic,readonly) long long newIssuesNotificationDeliveryLocalTime; 
@property (nonatomic,readonly) NSString * featuredArticlesTagList; 
@property (nonatomic,readonly) long long featuredArticlesFetchLimit; 
@property (nonatomic,readonly) NSString * recommendableIssuesTagList; 
@property (nonatomic,readonly) NSString * vanityURLMappingResourceID; 
@property (nonatomic,readonly) long long vanityURLMappingRefreshRate; 
@property (nonatomic,readonly) NSDictionary * flexiblePaywallConfig; 
@property (nonatomic,readonly) unsigned long long paywallConfigsOfferType; 
@property (nonatomic,readonly) double maxPriceDeltaThreshold; 
@property (nonatomic,readonly) NSDictionary * paywallConfigurationsByType; 
@property (nonatomic,readonly) NSDictionary * servicesBundlePaywallConfigurationsByType; 
@property (nonatomic,readonly) NSDictionary * audioPaywallConfigurationsByType; 
@property (nonatomic,readonly) NSDictionary * audioServicesBundlePaywallConfigurationsByType; 
@property (nonatomic,readonly) NSString * paidFeedID; 
@property (nonatomic,readonly) long long forYouMaxDailyPaidArticlesForFreeUsers; 
@property (nonatomic,readonly) long long forYouMaxMagazineGroupsForFreeUsers; 
@property (nonatomic,readonly) long long forYouMaxMagazineGroupsForTrialUsers; 
@property (nonatomic,readonly) long long forYouMaxMagazineGroupsForPaidUsers; 
@property (nonatomic,readonly) long long bundleSubscriptionsGlobalMeteredCount; 
@property (nonatomic,readonly) unsigned long long articleHardPaywallType; 
@property (nonatomic,readonly) unsigned long long audioFeedPaywallSubtype; 
@property (nonatomic,readonly) unsigned long long magazineFeedPaywallSubtype; 
@property (getter=isFreeBadgeEnabledForNonSubscribers,nonatomic,readonly) char freeBadgeEnabledForNonSubscribers; 
@property (getter=isPaidBadgeEnabledForNonSubscribers,nonatomic,readonly) char paidBadgeEnabledForNonSubscribers; 
@property (getter=isFreeBadgeEnabledForSubscribers,nonatomic,readonly) char freeBadgeEnabledForSubscribers; 
@property (getter=isPaidBadgeEnabledForSubscribers,nonatomic,readonly) char paidBadgeEnabledForSubscribers; 
@property (nonatomic,readonly) NSString * freeBadgeTitle; 
@property (nonatomic,readonly) NSString * paidBadgeTitle; 
@property (nonatomic,readonly) NSDictionary * subscriptionButtonConfigurationsByType; 
@property (nonatomic,readonly) NSDictionary * servicesBundleSubscriptionButtonConfigurationsByType; 
@property (nonatomic,readonly) NSString * expirationAlertDescription; 
@property (nonatomic,readonly) long long feedAutoRefreshMinimumInterval; 
@property (nonatomic,readonly) long long normalStorageManualIssueDownloadTTL; 
@property (nonatomic,readonly) long long lowStorageManualIssueDownloadTTL; 
@property (nonatomic,readonly) long long criticalStorageManualIssueDownloadTTL; 
@property (nonatomic,readonly) long long normalStorageAutomaticIssueDownloadTTL; 
@property (nonatomic,readonly) long long lowStorageAutomaticIssueDownloadTTL; 
@property (nonatomic,readonly) long long criticalStorageAutomaticIssueDownloadTTL; 
@property (nonatomic,readonly) NSArray * groupWhitelistedTagIds; 
@property (nonatomic,readonly) long long entitlementsGracePeriodInSeconds; 
@property (getter=isCategoriesDownloadButtonEnabled,nonatomic,readonly) char categoriesDownloadButtonEnabled; 
@property (nonatomic,readonly) long long recentIssuesMaxAge; 
@property (nonatomic,readonly) long long minimumReadIssuesInMyMagazines; 
@property (nonatomic,readonly) long long minimumArticlesInANFIssueBeforeRead; 
@property (nonatomic,readonly) long long minimumPagesInPDFIssueBeforeRead; 
@property (nonatomic,readonly) long long minimumArticlesBeforeArticleSoftPaywall; 
@property (nonatomic,readonly) long long maximumArticlesWithSoftPaywallPerSession; 
@property (nonatomic,readonly) long long entitlementsCacheExpiredGracePeriodInSeconds; 
@property (nonatomic,readonly) long long minFollowedMagazinesToHideSuggestionsCompact; 
@property (nonatomic,readonly) long long minFollowedMagazinesToHideSuggestionsRegular; 
@property (nonatomic,readonly) unsigned long long appLaunchUpsellPaidVisibility; 
@property (nonatomic,readonly) NSString * appLaunchUpsellInstanceID; 
@property (nonatomic,readonly) NSString * appLaunchUpsellArticleID; 
@property (nonatomic,readonly) long long appLaunchUpsellRequiredAppLaunchCount; 
@property (nonatomic,readonly) long long appLaunchUpsellQuiescenceInterval; 
@property (nonatomic,readonly) long long appLaunchUpsellNewSessionBackgroundTimeInterval; 
@property (getter=isNarrativeAudioEnabled,nonatomic,readonly) char narrativeAudioEnabled; 
@property (nonatomic,readonly) long long audioSuggestionsMaxCount; 
@property (nonatomic,readonly) long long audioSuggestionsMaxAge; 
@property (nonatomic,readonly) long long audioSuggestionsRecycleAfterTime; 
@property (nonatomic,readonly) long long audioSuggestionsMaxIgnoreCount; 
@property (nonatomic,readonly) long long audioOfflineArticlesMaxCountNormalStorage; 
@property (nonatomic,readonly) long long audioOfflineArticlesMaxCountLowStorage; 
@property (nonatomic,readonly) long long audioOfflineArticlesMaxCountCriticalStorage; 
@property (nonatomic,readonly) NSString * audioUpsellArticleID; 
@property (nonatomic,readonly) long long audioUpsellMaxDisplayCount; 
@property (nonatomic,readonly) NSString * audioUpsellInstanceID; 
@property (nonatomic,readonly) long long audioRecentlyPlayedMaxCount; 
@property (nonatomic,readonly) long long audioFinishedAtTimeFromEnd; 
@property (nonatomic,readonly) NSString * audioDailyBriefingFeatureName; 
@property (nonatomic,readonly) long long audioRefreshTimeGMT; 
@property (nonatomic,readonly) char audioRefreshForceWakeEnabled; 
@property (nonatomic,readonly) long long audioRefreshForceWakeRandomizationWindow; 
@property (nonatomic,readonly) long long audioRewindToParagraphStartAfterTime; 
@property (nonatomic,readonly) long long audioCloseIdlePlayerAfterTime; 
@property (nonatomic,readonly) NSArray * audioFeedPaywallPositions; 
@property (nonatomic,readonly) NSArray * audioChannelPaywallOverrideAllowedTagIDs; 
@property (nonatomic,readonly) unsigned long long subscriptionLinkTargetType; 
@property (nonatomic,readonly) NSString * audioArticlesChannelId; 
+(id)defaultLandingPageByLocalizedStorefrontID;
+(id)defaultServicesBundleLandingPageByLocalizedStorefrontID;
+(id)defaultFamilySharingLandingPageByLocalizedStorefrontID;
+(id)defaultEndOfPurchaseFamilySharingSetupArticleIDByLocalizedStorefrontID;
+(id)defaultEndOfPurchaseNoFamilySharingSetupArticleIDByLocalizedStorefrontID;
+(id)renewalLandingPageByLocalizedStorefrontID;
+(id)defaultTagListIDByLocalizedStorefrontID;
+(id)defaultVanityURLMappingResourceIDByLocalizedStorefrontID;
+(id)defaultPaidFeedIDByLocalizedStorefrontID;
+(id)defaultConfigurationForStorefrontID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NFUnfairLock *)lock;
-(NSString *)storefrontID;
-(void)setConfigDict:(NSDictionary *)arg1 ;
-(NSDictionary *)configDict;
-(long long)recentIssuesMaxAge;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSArray *)restorableBundlePurchaseIDs;
-(NSString *)paidFeedID;
-(char)areMagazinesEnabled;
-(id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 localizedStorefrontID:(id)arg3 defaultSupportedStoreFronts:(id)arg4 ;
-(char)arePaywallConfigsEqualToOtherPaidBundleConfig:(id)arg1 ;
-(NSString *)recommendableIssuesTagList;
-(long long)audioSuggestionsMaxAge;
-(NSString *)featuredArticlesTagList;
-(NSArray *)offeredBundlePurchaseIDs;
-(NSString *)localizedStorefrontID;
-(unsigned long long)paywallConfigsOfferType;
-(id)paywallConfigurationsByTypeForKey:(id)arg1 ;
-(id)defaultPaywallConfigs;
-(id)defaultAudioPaywallConfigs;
-(id)subscriptionButtonConfigurationsByTypeForKey:(id)arg1 ;
-(id)defaultSubscriptionButtonConfigs;
-(id)defaultServicesBundleSubscriptionButtonConfigs;
-(NSDictionary *)audioPaywallConfigurationsByType;
-(NSDictionary *)paywallConfigurationsByType;
-(id)defaultMagazineGenres;
-(NSArray *)defaultSupportedStoreFronts;
-(NSString *)defaultLandingPageArticleID;
-(NSString *)defaultServicesBundleLandingPageArticleID;
-(id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 ;
-(NSDictionary *)flexiblePaywallConfig;
-(unsigned long long)subscriptionLinkTargetType;
-(double)maxPriceDeltaThreshold;
-(NSDictionary *)servicesBundlePaywallConfigurationsByType;
-(NSDictionary *)audioServicesBundlePaywallConfigurationsByType;
-(NSDictionary *)subscriptionButtonConfigurationsByType;
-(NSDictionary *)servicesBundleSubscriptionButtonConfigurationsByType;
-(unsigned long long)articleHardPaywallType;
-(unsigned long long)audioFeedPaywallSubtype;
-(unsigned long long)magazineFeedPaywallSubtype;
-(NSDictionary *)magazineGenresByGenre;
-(char)isPaidBundleVisible;
-(char)isTemporaryAccessEnabled;
-(char)isSharingIssuesEnabled;
-(char)isFamilySharingSetupEnabled;
-(NSString *)servicesBundleMetricsTopicName;
-(NSString *)familySharingLandingPageArticleID;
-(NSString *)endOfPurchaseFamilySharingSetupArticleID;
-(NSString *)endOfPurchaseNoFamilySharingSetupArticleID;
-(NSString *)endOfPurchaseServicesBundleFamilySharingSetupArticleID;
-(NSString *)endOfPurchaseServicesBundleNoFamilySharingSetupArticleID;
-(NSString *)renewalLandingPageArticleID;
-(long long)newIssuesCheckLocalTime;
-(long long)newIssuesNotificationDeliveryLocalTime;
-(long long)featuredArticlesFetchLimit;
-(NSString *)vanityURLMappingResourceID;
-(long long)vanityURLMappingRefreshRate;
-(NSString *)expirationAlertDescription;
-(long long)forYouMaxDailyPaidArticlesForFreeUsers;
-(long long)forYouMaxMagazineGroupsForFreeUsers;
-(long long)forYouMaxMagazineGroupsForTrialUsers;
-(long long)forYouMaxMagazineGroupsForPaidUsers;
-(long long)bundleSubscriptionsGlobalMeteredCount;
-(char)isFreeBadgeEnabledForNonSubscribers;
-(char)isPaidBadgeEnabledForNonSubscribers;
-(char)isFreeBadgeEnabledForSubscribers;
-(char)isPaidBadgeEnabledForSubscribers;
-(NSString *)freeBadgeTitle;
-(NSString *)paidBadgeTitle;
-(long long)feedAutoRefreshMinimumInterval;
-(long long)normalStorageManualIssueDownloadTTL;
-(long long)normalStorageAutomaticIssueDownloadTTL;
-(long long)lowStorageManualIssueDownloadTTL;
-(long long)lowStorageAutomaticIssueDownloadTTL;
-(long long)criticalStorageManualIssueDownloadTTL;
-(long long)criticalStorageAutomaticIssueDownloadTTL;
-(NSArray *)groupWhitelistedTagIds;
-(long long)entitlementsGracePeriodInSeconds;
-(long long)entitlementsCacheExpiredGracePeriodInSeconds;
-(char)isCategoriesDownloadButtonEnabled;
-(long long)minimumReadIssuesInMyMagazines;
-(long long)minimumArticlesInANFIssueBeforeRead;
-(long long)minimumPagesInPDFIssueBeforeRead;
-(long long)minimumArticlesBeforeArticleSoftPaywall;
-(long long)maximumArticlesWithSoftPaywallPerSession;
-(long long)minFollowedMagazinesToHideSuggestionsCompact;
-(long long)minFollowedMagazinesToHideSuggestionsRegular;
-(unsigned long long)appLaunchUpsellPaidVisibility;
-(NSString *)appLaunchUpsellInstanceID;
-(NSString *)appLaunchUpsellArticleID;
-(long long)appLaunchUpsellRequiredAppLaunchCount;
-(long long)appLaunchUpsellQuiescenceInterval;
-(long long)appLaunchUpsellNewSessionBackgroundTimeInterval;
-(char)isNarrativeAudioEnabled;
-(long long)audioSuggestionsMaxCount;
-(long long)audioSuggestionsRecycleAfterTime;
-(long long)audioSuggestionsMaxIgnoreCount;
-(long long)audioOfflineArticlesMaxCountNormalStorage;
-(long long)audioOfflineArticlesMaxCountLowStorage;
-(long long)audioOfflineArticlesMaxCountCriticalStorage;
-(NSString *)audioUpsellArticleID;
-(long long)audioUpsellMaxDisplayCount;
-(NSString *)audioUpsellInstanceID;
-(long long)audioRecentlyPlayedMaxCount;
-(long long)audioFinishedAtTimeFromEnd;
-(NSString *)audioDailyBriefingFeatureName;
-(long long)audioRefreshTimeGMT;
-(char)audioRefreshForceWakeEnabled;
-(long long)audioRefreshForceWakeRandomizationWindow;
-(long long)audioRewindToParagraphStartAfterTime;
-(long long)audioCloseIdlePlayerAfterTime;
-(NSArray *)audioFeedPaywallPositions;
-(NSArray *)audioChannelPaywallOverrideAllowedTagIDs;
-(NSString *)audioArticlesChannelId;
-(NSMutableDictionary *)keyedPaywallConfigurationsByType;
-(void)setKeyedPaywallConfigurationsByType:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keyedSubscriptionButtonConfigurationsByType;
-(void)setKeyedSubscriptionButtonConfigurationsByType:(NSMutableDictionary *)arg1 ;
-(void)setMagazineGenresByGenre:(NSDictionary *)arg1 ;
-(char)isFreeBadgeEnabled;
-(char)isPaidBadgeEnabled;
@end

