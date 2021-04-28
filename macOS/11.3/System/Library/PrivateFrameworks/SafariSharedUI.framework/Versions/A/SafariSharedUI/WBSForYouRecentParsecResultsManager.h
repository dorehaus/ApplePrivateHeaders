/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSArray;

@interface WBSForYouRecentParsecResultsManager : WBSForYouRecommendationMediatorDataSource {

	NSCache* _cache;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,copy,readonly) NSArray * recentRecommendations; 
+(id)recommendationsMatchingTopic:(id)arg1 fromArray:(id)arg2 ;
-(void)clearAllResults;
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)appendResultsIfApplicable:(id)arg1 ;
-(void)_createInternalQueueIfNecessary;
-(void)appendResultsIfApplicable:(id)arg1 withDelayedExistenceCheck:(char)arg2 ;
-(char)_hasPermissibleResultTypeForResult:(id)arg1 ;
-(id)_bestAcceptableImageForSFResult:(id)arg1 ;
-(id)_cacheEnsuringExistence;
-(NSArray *)recentRecommendations;
@end

