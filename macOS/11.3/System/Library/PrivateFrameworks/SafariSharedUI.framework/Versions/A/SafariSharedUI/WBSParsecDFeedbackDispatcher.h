/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSParsecFeedbackDispatcher.h>
#import <libobjc.A.dylib/WBSParsecGlobalFeedbackDispatcher.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSArray, NSString;

@interface WBSParsecDFeedbackDispatcher : NSObject <WBSParsecFeedbackDispatcher, WBSParsecGlobalFeedbackDispatcher> {

	NSMapTable* _queriesToDictionariesFromSearchTypesToStartSearchFeedbacks;
	NSObject*<OS_dispatch_queue> _feedbackQueue;
	NSObject*<OS_dispatch_queue> _queriesToDictionariesMappingQueue;
	NSArray* _feedbackListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(id)initWithSession:(id)arg1 ;
-(void)sendCrowdsourcedAutoFillFeedback:(id)arg1 forQueryID:(long long)arg2 ;
-(void)sendAppLaunchFeedback;
-(void)sendAppLostFocusFeedback;
-(void)sendAppQuitFeedback;
-(void)sendNewTabFeedback;
-(void)sendNewWindowFeedback;
-(void)sendWindowMiniaturizeByKeyboardFeedback;
-(void)sendWindowMiniaturizeByMouseFeedback;
-(void)sendWindowCloseByKeyboardFeedback;
-(void)sendWindowCloseByMouseFeedback;
-(void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(char)arg1 ;
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3 ;
-(void)userDidTypeKey:(long long)arg1 ;
-(void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2 forQueryID:(long long)arg3 ;
-(void)userTypedURLDirectlyForQuery:(id)arg1 ;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(char)arg2 method:(long long)arg3 ;
-(void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(char)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(char)arg4 ;
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5 ;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3 ;
-(void)didReceiveLocalResultsForQuery:(id)arg1 ;
-(void)userDidCancelSession;
-(void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1 forQueryID:(long long)arg2 ;
-(void)didReceiveParsecResultsAfterTimeout:(id)arg1 ;
-(void)_postFeedbackOnFeedbackQueue:(id)arg1 forQueryID:(long long)arg2 ;
-(void)postFeedback:(id)arg1 forQueryID:(long long)arg2 ;
-(id)_takeStartSearchFeedbackForSearchOfType:(long long)arg1 forQuery:(id)arg2 ;
-(void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5 ;
-(void)_setStartSearchFeedback:(id)arg1 forSearchOfType:(long long)arg2 withQuery:(id)arg3 ;
-(id)_customFeedbackOfType:(unsigned long long)arg1 JSONDictionary:(id)arg2 ;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 forQueryID:(long long)arg2 ;
-(void)searchViewDisappearedBecauseOfEvent:(long long)arg1 forQueryID:(long long)arg2 ;
-(void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(char)arg2 forQueryID:(long long)arg3 ;
-(void)userDidCancelSession:(long long)arg1 ;
-(void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2 ;
-(void)didRankSections:(id)arg1 blendingDuration:(double)arg2 feedbackForHiddenAndDuplicateResults:(id)arg3 forQueryID:(long long)arg4 ;
-(void)sendClearInputFeedbackWithTriggerEvent:(unsigned long long)arg1 forQueryID:(long long)arg2 ;
@end

