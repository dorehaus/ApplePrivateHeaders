/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCClearableReadingHistory.h>

@class NSMutableDictionary, FCMTWriterLock, NSSet, NSString;

@interface FCReadingHistory : FCPrivateDataController <FCClearableReadingHistory> {

	NSMutableDictionary* _itemsByIdentifier;
	NSMutableDictionary* _itemsByArticleID;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,readonly) NSSet * allReadArticleIDs; 
@property (nonatomic,readonly) NSSet * allSeenArticleIDs; 
@property (nonatomic,readonly) NSSet * allConsumedArticleIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(char)requiresPushNotificationSupport;
+(char)requiresBatchedSync;
+(char)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(void)populateLocalStoreClassRegistry:(id)arg1 ;
+(id)localStoreMigrator;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)clearHistory;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(char)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(id)allReadingHistoryItems;
-(char)hasArticleCompletedListening:(id)arg1 ;
-(char)hasArticleCompletedReading:(id)arg1 ;
-(unsigned long long)likingStatusForArticleID:(id)arg1 ;
-(char)hasArticleBeenMarkedAsOffensive:(id)arg1 ;
-(void)markArticle:(id)arg1 asOffensive:(char)arg2 ;
-(char)hasArticleBeenConsumed:(id)arg1 ;
-(char)markArticleAsReadWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3 ;
-(void)markArticleAsReadWithHeadline:(id)arg1 fromGroupType:(long long)arg2 swipedToArticle:(char)arg3 onScreenChecker:(/*^block*/id)arg4 ;
-(char)canHelpPruneZoneName:(id)arg1 ;
-(id)pruneRecords:(id)arg1 forZoneName:(id)arg2 ;
-(double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1 ;
-(unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1 ;
-(id)historyItemsForArticleIDs:(id)arg1 ;
-(id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)arg1 ;
-(id)mostRecentlyCompletedListeningArticlesWithMaxCount:(unsigned long long)arg1 ;
-(id)allSortedArticleIDsInReadingHistory;
-(NSSet *)allReadArticleIDs;
-(NSSet *)allSeenArticleIDs;
-(NSSet *)allConsumedArticleIDs;
-(id)consumedArticleIDsForTagID:(id)arg1 fromTime:(id)arg2 ;
-(id)lastVisitedDateForArticleID:(id)arg1 ;
-(char)hasArticleBeenRead:(id)arg1 ;
-(char)hasArticleBeenReadMoreThanThreshold:(id)arg1 ;
-(char)hasArticleBeenVisited:(id)arg1 ;
-(char)hasArticleBeenSeen:(id)arg1 ;
-(char)markArticleAsSeenWithHeadline:(id)arg1 ;
-(char)markArticleAsSeenWithHeadline:(id)arg1 rememberForever:(char)arg2 ;
-(id)markArticlesAsSeenWithHeadlines:(id)arg1 ;
-(char)markArticle:(id)arg1 withCompletedListening:(char)arg2 ;
-(char)markArticle:(id)arg1 withCompletedReading:(char)arg2 ;
-(char)markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2 ;
-(char)toggleLikeForArticleWithID:(id)arg1 ;
-(char)toggleDislikeForArticleWithID:(id)arg1 ;
-(char)toggleArticleHasBeenMarkedAsOffensive:(id)arg1 ;
-(void)markArticle:(id)arg1 asArticleConsumed:(char)arg2 sourceChannelTagID:(id)arg3 ;
-(void)markArticleAsReadWithHeadline:(id)arg1 ;
-(void)removeArticleFromHistory:(id)arg1 ;
-(double)listeningProgressFor:(id)arg1 ;
-(id)listeningProgressSavedDateFor:(id)arg1 ;
-(id)firstSeenDateFor:(id)arg1 ;
-(void)markArticle:(id)arg1 withListeningProgress:(double)arg2 ;
-(id)lastListenedFor:(id)arg1 ;
-(void)markArticle:(id)arg1 withLastListened:(id)arg2 ;
-(id)readingPositionJSONFor:(id)arg1 ;
-(id)readingPositionSavedDateFor:(id)arg1 ;
-(void)markArticle:(id)arg1 withReadingPositionJSON:(id)arg2 ;
@end
