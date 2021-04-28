/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>
#import <libobjc.A.dylib/BRCZone.h>

@protocol BRCClientZoneDelegate, OS_dispatch_queue, OS_dispatch_source, NSObject;
@class BRCAccountSession, BRCServerZone, BRCZoneRowID, NSString, BRMangledID, BRCPQLConnection, BRCThrottleBase, BRCCreateZoneAndSubscribeOperation, NSObject, NSMutableArray, BRCSyncUpOperation, NSError, BRCSyncDownOperation, BRCSyncOperationThrottle, BRCSyncBudgetThrottle, BRCSyncOperationBackoffRatio, BRCDeadlineSource, NSMutableIndexSet, NSDate, NSMutableDictionary, NSMutableSet, CKOperationGroup, brc_task_tracker, NSArray, BRCItemID, NSSet, NSDictionary;

@interface BRCClientZone : NSObject <BRCReachabilityDelegate, BRCZone> {

	BRCAccountSession* _session;
	BRCServerZone* _serverZone;
	id<BRCClientZoneDelegate> _delegate;
	BRCZoneRowID* _dbRowID;
	NSString* _zoneName;
	NSString* _ownerName;
	BRMangledID* _mangledID;
	BRCPQLConnection* _db;
	unsigned _state;
	char _activated;
	char _isInitialCreation;
	BRCThrottleBase* _readerThrottle;
	BRCCreateZoneAndSubscribeOperation* _createZoneOperation;
	NSObject*<OS_dispatch_queue> _createZoneQueue;
	NSMutableArray* _zoneCreationCompletionBlocks;
	long long _syncUpRetryAfter;
	AI _syncState;
	BRCSyncUpOperation* _syncUpOperation;
	NSError* _lastSyncUpError;
	char _lastSyncUpErrorWasOnChainedItem;
	BRCSyncDownOperation* _syncDownOperation;
	id _syncDeadlineSourceResumer;
	NSError* _lastSyncDownError;
	BRCSyncOperationThrottle* _syncUpThrottle;
	BRCSyncBudgetThrottle* _syncUpBudget;
	BRCSyncOperationBackoffRatio* _syncUpBackoffRatio;
	BRCSyncOperationThrottle* _syncDownThrottle;
	BRCDeadlineSource* _syncDeadlineSource;
	NSMutableIndexSet* _appliedTombstoneRanks;
	long long _lastInsertedRank;
	NSDate* _lastSyncDownDate;
	NSDate* _lastAttemptedSyncDownDate;
	NSObject*<OS_dispatch_source> _resetTimer;
	NSMutableDictionary* _syncDownBlockToPerformForBookmarkData;
	char _shouldShowiCloudDriveAppInstallationNotification;
	NSMutableSet* _itemIDsBlockedFromSyncForCZMProcessing;
	NSMutableDictionary* _itemsBlockedByAssociationForCZMProcessing;
	NSMutableArray* _blocksWaitingOnCrossZoneMoveProcessing;
	NSMutableDictionary* _onDiskBlockToPerformForItemID;
	NSMutableDictionary* _downloadedBlockToPerformForItemID;
	NSMutableDictionary* _syncDownBlockToPerformForItemID;
	NSMutableDictionary* _parentsOfCZMFaults;
	NSMutableArray* _nextSyncDownBarriers;
	NSMutableArray* _currentSyncDownBarriers;
	id<NSObject> _hasWorkDidUpdateObserver;
	NSMutableArray* _nextIdleHandlers;
	CKOperationGroup* _syncDownGroup;
	NSMutableArray* _syncDownDependencies;
	NSMutableArray* _allItemsDidUploadTrackers;
	float _syncUpBatchSizeMultiplier;
	brc_task_tracker* _taskTracker;
	char _needsSave;
	unsigned long long _requestID;
	NSArray* _syncThrottles;
	NSString* _osNameRequiredToSync;

}

@property (nonatomic,retain) BRCServerZone * serverZone;                                    //@synthesize serverZone=_serverZone - In the implementation block
@property (nonatomic,retain) NSDate * lastAttemptedSyncDownDate;                            //@synthesize lastAttemptedSyncDownDate=_lastAttemptedSyncDownDate - In the implementation block
@property (nonatomic,readonly) NSString * zoneName;                                         //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,retain) id<BRCClientZoneDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BRCItemID * rootItemID; 
@property (nonatomic,readonly) BRMangledID * mangledID;                                     //@synthesize mangledID=_mangledID - In the implementation block
@property (nonatomic,readonly) BRCPQLConnection * db;                                       //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) brc_task_tracker * taskTracker;                              //@synthesize taskTracker=_taskTracker - In the implementation block
@property (nonatomic,readonly) char isCloudDocsZone; 
@property (nonatomic,readonly) NSString * osNameRequiredToSync;                             //@synthesize osNameRequiredToSync=_osNameRequiredToSync - In the implementation block
@property (nonatomic,readonly) char isForeground; 
@property (nonatomic,readonly) char activated;                                              //@synthesize activated=_activated - In the implementation block
@property (nonatomic,readonly) unsigned long long currentRequestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (readonly) unsigned syncState; 
@property (nonatomic,readonly) NSArray * syncThrottles;                                     //@synthesize syncThrottles=_syncThrottles - In the implementation block
@property (nonatomic,readonly) BRCDeadlineSource * syncDeadlineSource;                      //@synthesize syncDeadlineSource=_syncDeadlineSource - In the implementation block
@property (nonatomic,readonly) char hasHighPriorityWatchers; 
@property (nonatomic,readonly) long long lastInsertedRank;                                  //@synthesize lastInsertedRank=_lastInsertedRank - In the implementation block
@property (nonatomic,readonly) unsigned syncUpBatchSize; 
@property (nonatomic,readonly) NSSet * itemIDsBlockedFromSyncForCZMProcessing;              //@synthesize itemIDsBlockedFromSyncForCZMProcessing=_itemIDsBlockedFromSyncForCZMProcessing - In the implementation block
@property (nonatomic,readonly) NSDictionary * parentsOfCZMFaults;                           //@synthesize parentsOfCZMFaults=_parentsOfCZMFaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char needsSave;                                                //@synthesize needsSave=_needsSave - In the implementation block
@property (nonatomic,retain) BRCZoneRowID * dbRowID;                                        //@synthesize dbRowID=_dbRowID - In the implementation block
@property (nonatomic,readonly) char isSharedZone; 
@property (nonatomic,readonly) char isPrivateZone; 
@property (nonatomic,readonly) NSMutableDictionary * plist; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id<BRCClientZoneDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<BRCClientZoneDelegate>)arg1 ;
-(void)resume;
-(unsigned)state;
-(char)needsSave;
-(void)setNeedsSave:(char)arg1 ;
-(BRCPQLConnection *)db;
-(BRCAccountSession *)session;
-(NSString *)zoneName;
-(char)activated;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(NSMutableDictionary *)plist;
-(id)ownerName;
-(id)allItems;
-(char)isForeground;
-(unsigned)syncState;
-(BRCZoneRowID *)dbRowID;
-(char)isSharedZone;
-(BRMangledID *)mangledID;
-(void)associateWithServerZone:(id)arg1 offline:(char)arg2 ;
-(id)descriptionWithContext:(id)arg1 ;
-(unsigned long long)currentRequestID;
-(id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3 ;
-(id)serverItemByItemID:(id)arg1 db:(id)arg2 ;
-(id)itemByDocumentID:(unsigned)arg1 db:(id)arg2 ;
-(id)itemByFileID:(unsigned long long)arg1 db:(id)arg2 ;
-(id)faultByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(void)scheduleSyncDown;
-(id)itemByItemID:(id)arg1 db:(id)arg2 ;
-(brc_task_tracker *)taskTracker;
-(id)itemByRowID:(unsigned long long)arg1 ;
-(char)isPrivateZone;
-(id)asPrivateClientZone;
-(id)itemByItemID:(id)arg1 ;
-(char)isEqualToClientZone:(id)arg1 ;
-(void)setDbRowID:(BRCZoneRowID *)arg1 ;
-(id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(char)arg6 ;
-(void)_forDBUpgrade_setStateBits:(unsigned)arg1 clearStateBits:(unsigned)arg2 ;
-(void)flushAppliedTombstones;
-(char)isSyncBlockedBecauseAppNotInstalled;
-(char)isSyncBlockedBecauseOSNeedsUpgrade;
-(BRCServerZone *)serverZone;
-(char)dumpStatusToContext:(id)arg1 error:(id*)arg2 ;
-(id)asSharedClientZone;
-(void)associateWithServerZone:(id)arg1 ;
-(char)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(char)arg2 error:(id*)arg3 ;
-(char)dumpTablesToContext:(id)arg1 includeAllItems:(char)arg2 error:(id*)arg3 ;
-(void)networkReachabilityChanged:(char)arg1 ;
-(BRCItemID *)rootItemID;
-(float)syncUpBackoffRatio;
-(void)resetSyncUpBackoffRatio;
-(float)syncUpBackoffDelay;
-(unsigned)syncUpBatchSize;
-(char)isSyncBlocked;
-(id)syncUpAnalyticsError;
-(id)syncDownAnalyticsError;
-(id)serverItemByItemID:(id)arg1 ;
-(void)learnCKInfosFromSavedRecords:(id)arg1 isOutOfBandModifyRecords:(char)arg2 ;
-(id)itemByDocumentID:(unsigned)arg1 ;
-(char)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(char)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(id)serverItemByRank:(long long)arg1 ;
-(char)hasCompletedInitialSyncDownOnce;
-(void)signalFaultingWatchersWithError:(id)arg1 ;
-(long long)serverRankByItemID:(id)arg1 ;
-(long long)lastInsertedRank;
-(void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(char)arg3 syncDownDate:(id)arg4 ;
-(long long)throttleHashWithItemID:(id)arg1 ;
-(void)updateWithPlist:(id)arg1 ;
-(unsigned)_activateState:(unsigned)arg1 origState:(unsigned)arg2 ;
-(void)scheduleSyncUp;
-(char)setStateBits:(unsigned)arg1 ;
-(void)clearStateBits:(unsigned)arg1 ;
-(char)hasInitialFaultsLive;
-(char)hasInitialFaultsEverLive;
-(char)shouldSyncMangledID:(id)arg1 ;
-(id)itemByRowID:(unsigned long long)arg1 db:(id)arg2 ;
-(char)isCloudDocsZone;
-(char)handleZoneLevelErrorIfNeeded:(id)arg1 ;
-(/*^block*/id)popDownloadedBlockForItemID:(id)arg1 ;
-(void)scheduleReset:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearSyncStateBits:(unsigned)arg1 ;
-(id)_cancelAllOperationsForReset;
-(void)_reset:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishedReset:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performResetAndWantsUnlink:(char)arg1 clientTruthBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_performAfterResetServerAndClientTruthsAndUnlinkData:(/*^block*/id)arg1 ;
-(void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(/*^block*/id)arg1 ;
-(void)_removeTargetedAliasesWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)supportsKeepingClientItemsDuringReset;
-(void)_mkdirAppLibraryIfNeeded:(id)arg1 ;
-(id)itemsParentedToThisZoneButLivingInAnOtherZone;
-(void)_performAfterResetServerAndClientSharedTruthsAndUnlinkData:(/*^block*/id)arg1 ;
-(void)_performAfterResetServerAndClientPrivateTruthsAndUnlinkData:(/*^block*/id)arg1 ;
-(void)_removeAllShareAcceptanceBlocks;
-(void)scheduleResetServerAndClientTruthsForReason:(id)arg1 ;
-(void)_recreateAppLibraryForDocsOrDesktopID:(id)arg1 ;
-(void)cancelReset;
-(void)scheduleReset:(unsigned long long)arg1 ;
-(char)itemTypeByItemID:(id)arg1 db:(id)arg2 ;
-(NSDictionary *)parentsOfCZMFaults;
-(NSString *)osNameRequiredToSync;
-(void)scheduleSyncDownForOOBModifyRecordsAck;
-(void)scheduleSyncDownFirst;
-(BRCDeadlineSource *)syncDeadlineSource;
-(void)scheduleSyncDownWithGroup:(id)arg1 ;
-(void)recomputeAllItemsDidUploadState;
-(/*^block*/id)popOnDiskBlockForItemID:(id)arg1 ;
-(void)createCloudKitZoneWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didGCTombstoneRanks:(id)arg1 ;
-(char)_crossZoneMoveDocumentsToZone:(id)arg1 ;
-(id)xattrForSignature:(id)arg1 ;
-(id)itemsEnumeratorWithDB:(id)arg1 ;
-(char)isSyncBlockedOrBrokenStructure;
-(void)clearSyncUpError;
-(unsigned long long)nextSyncUpRequestID;
-(void)setServerZone:(BRCServerZone *)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 whenItemWithIDIsOnDisk:(id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 whenItemWithIDIsDownloaded:(id)arg2 ;
-(void)_recreateSyncBudgetsAndThrottlesIfNeeded;
-(void)_startSync;
-(void)setSyncStateBits:(unsigned)arg1 ;
-(void)scheduleResetServerAndClientTruthsForReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)itemCountPendingUploadOrSyncUpAndReturnError:(id*)arg1 ;
-(id)sizeOfItemsNeedingSyncUpOrUploadAndReturnError:(id*)arg1 ;
-(void)disconnectNSMDQListenerAsync;
-(id)xattrForSignature:(id)arg1 db:(id)arg2 ;
-(id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(id)itemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3 ;
-(id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3 ;
-(char)existsByParentID:(id)arg1 andCaseInsensitiveLogicalName:(id)arg2 db:(id)arg3 ;
-(void)_enumerateFaultsWithBlock:(/*^block*/id)arg1 rowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 ;
-(id)_faultsEnumeratorFromRow:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 ;
-(void)_createCloudKitZoneWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeSyncDownDependency:(id)arg1 ;
-(char)hasHighPriorityWatchers;
-(void)_syncUpOfRecords:(id)arg1 createdAppLibraryNames:(id)arg2 didFinishWithError:(id)arg3 errorWasOnPCSChainedItem:(char)arg4 ;
-(id)syncDownImmediately;
-(id)itemsWithInFlightDiffsEnumerator;
-(void)_markRequestIDAcked;
-(void)_increaseSyncUpBatchSizeAfterSuccess;
-(void)_decreaseSyncUpBatchSizeAfterError;
-(void)_markLatestSyncRequestFailed;
-(NSArray *)syncThrottles;
-(void)_fixupMissingCrossMovedItems;
-(id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(char)_hasAllItemsDidUploadHandlers;
-(void)_allItemsDidUploadWithError:(id)arg1 ;
-(char)_dumpItemsToContext:(id)arg1 includeAllItems:(char)arg2 error:(id*)arg3 ;
-(long long)serverRankByItemID:(id)arg1 db:(id)arg2 ;
-(id)serverItemByRowID:(unsigned long long)arg1 db:(id)arg2 ;
-(id)documentItemByItemID:(id)arg1 db:(id)arg2 ;
-(id)directoryOrRootItemIDByFileID:(unsigned long long)arg1 db:(id)arg2 ;
-(char)existsByItemID:(id)arg1 db:(id)arg2 ;
-(void)_removeOnDiskBlockToPerformForItemID:(id)arg1 ;
-(void)_removeDownloadedBlockToPerformForItemID:(id)arg1 ;
-(void)_prepareForForegroundSyncDown;
-(void)_appendToString:(id)arg1 descriptionOfFieldNamed:(id)arg2 inResultSet:(id)arg3 pos:(int*)arg4 containsSize:(char)arg5 context:(id)arg6 ;
-(void)_dumpRecursivePropertiesOfItemByRowID:(unsigned long long)arg1 context:(id)arg2 depth:(int)arg3 ;
-(void)_finishedProcessingItemThatMovedToThisZone:(id)arg1 ;
-(void)_removeItemFromCZMProcessingIfNotAssociated:(id)arg1 ;
-(id)_refreshItemFromDB:(id)arg1 ;
-(void)_removeItemAndProcess:(id)arg1 ;
-(void)_startDownloadingItemIfNecessary:(id)arg1 ;
-(void)registerAllItemsDidUploadTracker:(id)arg1 ;
-(void)unregisterAllItemsDidUploadTracker:(id)arg1 ;
-(id)itemByFileID:(unsigned long long)arg1 ;
-(id)itemByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2 ;
-(id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(id)faultByParentID:(id)arg1 andLogicalName:(id)arg2 ;
-(id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2 ;
-(char)existsByParentID:(id)arg1 andCaseInsensitiveLogicalName:(id)arg2 ;
-(id)documentsNotIdleEnumeratorWithDB:(id)arg1 ;
-(void)enumerateFaultsAsyncWithBlock:(/*^block*/id)arg1 batchSize:(unsigned long long)arg2 ;
-(void)didClearOutOfQuota;
-(void)addSyncDownDependency:(id)arg1 ;
-(void)resetSyncBudgetAndThrottle;
-(void)notifyClient:(id)arg1 afterNextSyncDown:(/*^block*/id)arg2 ;
-(void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(long long)arg3 ;
-(void)handleRootRecordDeletion;
-(void)didApplyTombstoneForRank:(long long)arg1 ;
-(char)_resetItemsTable;
-(id)serverItemByRowID:(unsigned long long)arg1 ;
-(id)documentItemByItemID:(id)arg1 ;
-(id)directoryOrRootItemIDByFileID:(unsigned long long)arg1 ;
-(char)existsByItemID:(id)arg1 ;
-(void)_cancelSyncDownFromDBCorruption;
-(char)removeItemOnDiskBlock:(id)arg1 ;
-(char)removeItemIsDownloadedBlock:(id)arg1 ;
-(char)removeSyncDownForItemIDBlock:(id)arg1 ;
-(void)itemMovedIntoShareInThisZone:(id)arg1 associatedItemID:(id)arg2 ;
-(void)itemCrossZoneMoved:(id)arg1 withLookup:(id)arg2 ;
-(void)waitForCrossZoneMoveProcessingWithCompletion:(/*^block*/id)arg1 ;
-(NSDate *)lastAttemptedSyncDownDate;
-(void)setLastAttemptedSyncDownDate:(NSDate *)arg1 ;
-(NSSet *)itemIDsBlockedFromSyncForCZMProcessing;
@end

