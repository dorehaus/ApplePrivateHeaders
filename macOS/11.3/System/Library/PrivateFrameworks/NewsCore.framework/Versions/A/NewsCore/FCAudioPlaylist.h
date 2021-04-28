/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCAudioPlaylistType.h>

@class NSArray, NSMutableDictionary, NSOrderedSet, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {

	NSMutableDictionary* _itemsByID;
	NSOrderedSet* _orderedArticleIDs;
	FCMTWriterLock* _itemsLock;

}

@property (nonatomic,readonly) NSArray * articleIDs; 
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
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)articleIDs;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(char)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(char)containsArticleID:(id)arg1 ;
-(void)insertArticleID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeArticleID:(id)arg1 ;
-(void)ensureSyncedWithCompletion:(/*^block*/id)arg1 ;
@end
