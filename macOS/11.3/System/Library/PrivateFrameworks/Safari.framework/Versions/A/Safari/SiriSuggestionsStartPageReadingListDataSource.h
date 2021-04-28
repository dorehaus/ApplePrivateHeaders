/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@class ReadingListController;

@interface SiriSuggestionsStartPageReadingListDataSource : WBSForYouRecommendationMediatorDataSource {

	ReadingListController* _readingListController;

}
-(void)dealloc;
-(id)init;
-(void)_readingListItemsDidChange:(id)arg1 ;
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_validLinkRecommendationsForTopic:(id)arg1 fromReadingListItems:(id)arg2 ;
-(id)_titleMatchPredicateForString:(id)arg1 ;
-(id)_previewTextMatchPredicateForString:(id)arg1 ;
@end
