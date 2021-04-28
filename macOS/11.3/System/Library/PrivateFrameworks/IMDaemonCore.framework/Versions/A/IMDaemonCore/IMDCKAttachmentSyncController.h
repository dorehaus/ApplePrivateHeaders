/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@protocol OS_dispatch_queue, IMDCKSyncTokenStore, OS_xpc_object;
@class NSObject, IMDRecordZoneManager, IMDCKAttachmentSyncCKOperationFactory, NSMutableDictionary, NSMutableArray;

@interface IMDCKAttachmentSyncController : IMDCKAbstractSyncController {

	char _assetDownloadInProgress;
	NSObject*<OS_dispatch_queue> _ckQueue;
	IMDRecordZoneManager* _recordZoneManager;
	IMDCKAttachmentSyncCKOperationFactory* _CKOperationFactory;
	id<IMDCKSyncTokenStore> _syncTokenStore;
	NSMutableDictionary* _completionBlocksForAssetFetchOperations;
	NSMutableDictionary* _recordIDToTransferMap;
	/*^block*/id _perTransferProgress;
	NSMutableArray* _downloadAssetsForTransferGUIDs;
	unsigned long long _deviceConditionsToCheck;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;                                     //@synthesize ckQueue=_ckQueue - In the implementation block
@property (nonatomic,retain) IMDRecordZoneManager * recordZoneManager;                                   //@synthesize recordZoneManager=_recordZoneManager - In the implementation block
@property (nonatomic,retain) IMDCKAttachmentSyncCKOperationFactory * CKOperationFactory;                 //@synthesize CKOperationFactory=_CKOperationFactory - In the implementation block
@property (nonatomic,retain) id<IMDCKSyncTokenStore> syncTokenStore;                                     //@synthesize syncTokenStore=_syncTokenStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionBlocksForAssetFetchOperations;              //@synthesize completionBlocksForAssetFetchOperations=_completionBlocksForAssetFetchOperations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDToTransferMap;                                //@synthesize recordIDToTransferMap=_recordIDToTransferMap - In the implementation block
@property (nonatomic,copy) id perTransferProgress;                                                       //@synthesize perTransferProgress=_perTransferProgress - In the implementation block
@property (assign,nonatomic) char assetDownloadInProgress;                                               //@synthesize assetDownloadInProgress=_assetDownloadInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadAssetsForTransferGUIDs;                            //@synthesize downloadAssetsForTransferGUIDs=_downloadAssetsForTransferGUIDs - In the implementation block
@property (assign,nonatomic) unsigned long long deviceConditionsToCheck;                                 //@synthesize deviceConditionsToCheck=_deviceConditionsToCheck - In the implementation block
@property (assign) NSObject*<OS_xpc_object> activity;                                                    //@synthesize activity=_activity - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_scheduleOperation:(id)arg1 ;
-(long long)syncControllerRecordType;
-(void)deleteAttachmentZone;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(IMDRecordZoneManager *)recordZoneManager;
-(void)setRecordZoneManager:(IMDRecordZoneManager *)arg1 ;
-(void)setPerTransferProgress:(id)arg1 ;
-(void)_migrateSyncToken;
-(id)initWithSyncTokenStore:(id)arg1 ;
-(char)_shouldMarkAttachmentsAsNeedingReupload;
-(void)setDeviceConditionsToCheck:(unsigned long long)arg1 ;
-(long long)_numberOfMetadataBatchesOfAttachmentsToFetchInInitialSync;
-(id)latestSyncTokenForSyncType:(long long)arg1 ;
-(void)_fetchAttachmentZoneChangesShouldWriteBackChanges:(char)arg1 desiredKeys:(long long)arg2 syncType:(long long)arg3 currentBatchCount:(long long)arg4 maxBatchCount:(long long)arg5 syncToken:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(char)_shouldMarkAllAttachmentsAsNeedingSync;
-(void)clearLocalSyncState:(unsigned long long)arg1 ;
-(void)_hasMarkedAllAttachmentsAsNeedingSync;
-(void)setLatestSyncToken:(id)arg1 forSyncType:(long long)arg2 ;
-(void)_writeAttachmentsToCloudKit:(/*^block*/id)arg1 ;
-(void)_markAllUnsuccessFullSyncAttachmentsAsNeedingSync;
-(long long)_numberOfBatchesOfAttachmentsToFetchInInitialSync;
-(id)_attachmentZoneID;
-(id)_attachmentZoneSalt;
-(NSMutableDictionary *)recordIDToTransferMap;
-(void)_fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 useNonHSA2ManateeDatabase:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(char)arg2 useNonHSA2ManateeDatabase:(char)arg3 perTransferProgress:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(char)arg2 perTransferProgress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(char)__shouldOptimizeAttachmentDefault;
-(char)assetDownloadInProgress;
-(char)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(char)arg1 ;
-(void)_downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(char)arg2 useNonHSA2ManateeDatabase:(char)arg3 retryCount:(unsigned long long)arg4 numAttachmentsDownloaded:(unsigned long long)arg5 transfers:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setAssetDownloadInProgress:(char)arg1 ;
-(id)__databaseRequestForAttachmentsWithAssets;
-(id)fileTransferCenter;
-(char)_attachmentDownloadCanStart:(char)arg1 withActivity:(id)arg2 ;
-(void)_downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(char)arg2 useNonHSA2ManateeDatabase:(char)arg3 retryCount:(unsigned long long)arg4 numAttachmentsDownloaded:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(char)arg2 useNonHSA2ManateeDatabase:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)purgedAttachmentsForChat:(id)arg1 services:(id)arg2 limit:(long long)arg3 ;
-(unsigned long long)_numberOfAttachmentsToDownload;
-(unsigned long long)deviceConditionsToCheck;
-(void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 ;
-(char)_deviceConditionsAllowsMessageSync;
-(id)_ckUtilitiesInstance;
-(id)_recordKeyManagerSharedInstance;
-(void)_markAttachmentWithROWIDAsSyncedWithCloudKit:(id)arg1 ;
-(char)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 ;
-(unsigned long long)_numberOfAttachmentsToWriteUp;
-(id)_updateAttachmentGUIDIfNeededAndReturnTransfersToForceMarkAsSync:(id)arg1 transfersToSyncRowIDs:(id)arg2 ;
-(void)_kickOffWriteOnCKQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)_writeCKRecordsToAttachmentZone:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(IMDCKAttachmentSyncCKOperationFactory *)CKOperationFactory;
-(void)_processAssetFetchPerRecordProgressBlock:(id)arg1 progress:(double)arg2 ;
-(void)_processAssetFetchPerRecordCompletionBlock:(id)arg1 recordID:(id)arg2 error:(id)arg3 ;
-(void)_processAssetFetchOperationCompletionBlock:(id)arg1 operationID:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)completionBlocksForAssetFetchOperations;
-(char)_fetchedAllChangesFromCloudKit;
-(void)_processRecordChanged:(id)arg1 ;
-(void)_processRecordDeletion:(id)arg1 ;
-(void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(char)arg4 shouldWriteBackChanges:(char)arg5 desiredKeys:(long long)arg6 syncType:(long long)arg7 error:(id)arg8 currentBatchCount:(long long)arg9 maxBatchCount:(long long)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)_processFetchRecordChangesCompleted:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2 ;
-(void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_deleteStingRayToken;
-(void)_kickOffAssetFetchForTransfersIfNeeded;
-(char)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(char)_attachmentZoneCreated;
-(void)_updateTransferUsingCKRecord:(id)arg1 wasFetched:(char)arg2 ;
-(void)_resetAttachmentSyncStateForRecord:(id)arg1 toState:(long long)arg2 ;
-(void)_markTransferAsNotBeingAbleToSyncUsingCKRecord:(id)arg1 ;
-(id)_operationErrorForModifyingRecordCompletion:(id)arg1 ;
-(id)perTransferProgress;
-(id)_recordIDsToProcessWithError:(id)arg1 error:(id)arg2 ;
-(void)_removeTransferFromiCloudBackupWithGuid:(id)arg1 ;
-(NSMutableArray *)downloadAssetsForTransferGUIDs;
-(void)setDownloadAssetsForTransferGUIDs:(NSMutableArray *)arg1 ;
-(id<IMDCKSyncTokenStore>)syncTokenStore;
-(id)_changeTokenKeyForSyncType:(long long)arg1 ;
-(void)deleteAttachmentSyncToken;
-(void)_needsToMarkAllAttachmentsAsNeedingSync;
-(void)_validateTransferFromCloudKit:(id)arg1 localTransfer:(id)arg2 validateCompletion:(/*^block*/id)arg3 ;
-(void)_processAndValidateAttachmentRecordsEligibleForPurge:(id)arg1 recordIDsToTransfers:(id)arg2 capturedWithABC:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)_constructAttachmentRecordIDUsingTombStoneDictionary:(id)arg1 ;
-(unsigned long long)_attachmentDeleteBatchSize;
-(id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1 ;
-(void)syncAttachmentDeletesToCloudKit:(/*^block*/id)arg1 ;
-(void)_deleteAttachmentsWithRecordIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncAttachmentsWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)acceptFileTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(char)arg2 ;
-(unsigned long long)purgedAttachmentsCountForChat:(id)arg1 services:(id)arg2 ;
-(void)downloadAttachmentAssetsForChatIDs:(id)arg1 services:(id)arg2 style:(unsigned char)arg3 completion:(/*^block*/id)arg4 ;
-(void)__databaseRequestResetAllAttachmentsInFaiedCloudDownloadState;
-(void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3 syncType:(long long)arg4 ;
-(void)_markTransferAsNotBeingAbleToSync:(id)arg1 ;
-(void)_fetchAndValidateFileTransfersFromCloudKit:(id)arg1 capturedWithABC:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCKOperationFactory:(IMDCKAttachmentSyncCKOperationFactory *)arg1 ;
-(void)setSyncTokenStore:(id<IMDCKSyncTokenStore>)arg1 ;
-(void)setCompletionBlocksForAssetFetchOperations:(NSMutableDictionary *)arg1 ;
-(void)setRecordIDToTransferMap:(NSMutableDictionary *)arg1 ;
@end

