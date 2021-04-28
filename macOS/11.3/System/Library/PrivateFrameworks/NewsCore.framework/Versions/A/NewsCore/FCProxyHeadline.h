/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/FCHeadlineProviding.h>

@protocol FCHeadlineProviding, FCHeadlineMetadata;
@class NSString, NSDate, FCHeadlineThumbnail, NSURL, NSArray, FCCoverArt, NSSet, FCFeedPersonalizedItemScoreProfile, FCTopStoriesStyleConfiguration, NSData, FCHeadlineExperimentalTitleMetadata, FCIssue, FCArticleAudioTrack, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector;

@interface FCProxyHeadline : NSProxy <FCHeadlineProviding> {

	id<FCHeadlineProviding> _headline;
	id<FCHeadlineMetadata> _overrideMetadata;
	unsigned long long _overrideStoryType;
	FCTopStoriesStyleConfiguration* _overrideStoryStyle;

}

@property (nonatomic,copy,readonly) id<FCHeadlineProviding> originalHeadline; 
@property (nonatomic,copy,readonly) NSString * versionIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * referencedArticleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * titleCompact; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) long long backendArticleVersion; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,readonly) CGRect thumbnailFocalFrame; 
@property (nonatomic,readonly) char hasThumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailMedium; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailUltraHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidget; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetHQ; 
@property (nonatomic,copy,readonly) NSString * shortExcerpt; 
@property (nonatomic,copy,readonly) NSString * accessoryText; 
@property (nonatomic,copy,readonly) NSURL * contentURL; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastFetchedDate; 
@property (nonatomic,copy,readonly) NSArray * topics; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) NSURL * videoURL; 
@property (nonatomic,readonly) double videoDuration; 
@property (getter=isFeatureCandidate,nonatomic,readonly) char featureCandidate; 
@property (getter=isSponsored,nonatomic,readonly) char sponsored; 
@property (getter=isDisplayingAsNativeAd,nonatomic,readonly) char displayAsNativeAd; 
@property (nonatomic,copy,readonly) NSString * sponsoredBy; 
@property (nonatomic,copy,readonly) NSArray * iAdCategories; 
@property (nonatomic,copy,readonly) NSArray * iAdKeywords; 
@property (nonatomic,copy,readonly) NSArray * iAdSectionIDs; 
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs; 
@property (getter=isDeleted,nonatomic,readonly) char deleted; 
@property (nonatomic,readonly) char isDraft; 
@property (nonatomic,copy,readonly) NSString * localDraftPath; 
@property (nonatomic,copy,readonly) NSArray * relatedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * moreFromPublisherArticleIDs; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (getter=isPaid,nonatomic,readonly) char paid; 
@property (nonatomic,readonly) FCCoverArt * coverArt; 
@property (nonatomic,copy,readonly) NSString * videoCallToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * videoCallToActionURL; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,readonly) char needsRapidUpdates; 
@property (nonatomic,readonly) char showMinimalChrome; 
@property (getter=isPressRelease,nonatomic,readonly) char pressRelease; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) char hiddenFromAutoFavorites; 
@property (getter=isBoundToContext,nonatomic,readonly) char boundToContext; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) char hiddenFromFeeds; 
@property (nonatomic,copy,readonly) NSString * surfacedBySectionID; 
@property (nonatomic,copy,readonly) NSString * surfacedByChannelID; 
@property (nonatomic,copy,readonly) NSString * surfacedByTopicID; 
@property (nonatomic,copy,readonly) NSString * surfacedByBinID; 
@property (nonatomic,copy,readonly) NSSet * surfacedByTagIDs; 
@property (nonatomic,readonly) double tileProminenceScore; 
@property (nonatomic,readonly) FCFeedPersonalizedItemScoreProfile * scoreProfile; 
@property (nonatomic,readonly) char isTopStory; 
@property (nonatomic,readonly) unsigned long long topStoryType; 
@property (nonatomic,readonly) char usesImageOnTopLayout; 
@property (nonatomic,readonly) unsigned long long feedOrder; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) unsigned long long storyType; 
@property (nonatomic,readonly) FCTopStoriesStyleConfiguration * storyStyle; 
@property (nonatomic,copy,readonly) NSDate * displayDate; 
@property (nonatomic,readonly) char showSubscriptionRequiredText; 
@property (nonatomic,readonly) char isBlockedExplicitContent; 
@property (nonatomic,readonly) char showPublisherLogo; 
@property (nonatomic,readonly) id<FCNativeAdProviding> associatedAd; 
@property (nonatomic,copy,readonly) NSString * nativeAdCampaignData; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs; 
@property (nonatomic,readonly) char isFullTrackAvailableToAll; 
@property (nonatomic,readonly) unsigned long long role; 
@property (getter=isBundlePaid,nonatomic,readonly) char bundlePaid; 
@property (nonatomic,readonly) id<FCHeadlineStocksFields> stocksFields; 
@property (nonatomic,readonly) NSData * backingArticleRecordData; 
@property (nonatomic,copy,readonly) FCHeadlineExperimentalTitleMetadata * experimentalTitleMetadata; 
@property (nonatomic,readonly) char webEmbedsEnabled; 
@property (nonatomic,copy,readonly) FCIssue * masterIssue; 
@property (getter=isIssueOnly,nonatomic,readonly) char issueOnly; 
@property (nonatomic,readonly) char showBundleSoftPaywall; 
@property (nonatomic,copy,readonly) NSArray * linkedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * linkedIssueIDs; 
@property (nonatomic,copy,readonly) NSString * callToActionText; 
@property (nonatomic,readonly) char isLocalDraft; 
@property (nonatomic,readonly) char useTransparentNavigationBar; 
@property (nonatomic,readonly) FCArticleAudioTrack * narrativeTrack; 
@property (nonatomic,readonly) FCArticleAudioTrack * narrativeTrackSample; 
@property (nonatomic,readonly) NSString * narrativeTrackTextRanges; 
@property (nonatomic,copy,readonly) NSString * surfacedByArticleListID; 
@property (nonatomic,readonly) NSString * layeredThumbnailJSON; 
@property (nonatomic,readonly) double layeredThumbnailAspectRatio; 
@property (nonatomic,copy,readonly) id<FCHeadlineMetadata> appliedOverrideMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) char fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) char explicitContent; 
@property (nonatomic,readonly) long long publisherArticleVersion; 
@property (nonatomic,readonly) char canBePurchased; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,readonly) char hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) char anf; 
@property (nonatomic,readonly) char hasVideo; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * publisherConversionStats; 
@property (nonatomic,readonly) long long bodyTextLength; 
@property (nonatomic,readonly) char isFeatured; 
@property (nonatomic,readonly) char hasAudioTrack; 
@property (nonatomic,readonly) char isEvergreen; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVector; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVectorAlt; 
-(char)conformsToProtocol:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)title;
-(NSDate *)publishDate;
-(NSDate *)displayDate;
-(unsigned long long)storyType;
-(NSString *)shortExcerpt;
-(FCTopStoriesStyleConfiguration *)storyStyle;
-(id<FCHeadlineMetadata>)appliedOverrideMetadata;
-(id)initWithHeadline:(id)arg1 overrideMetadata:(id)arg2 configuration:(id)arg3 ;
-(id<FCHeadlineProviding>)originalHeadline;
@end
