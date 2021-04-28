/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, PLGenericAlbum, NSSet, PLPhotoLibraryBundle, PLManagedObjectContext, NSPersistentStore, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLPhotoLibraryPathManager, PLLibraryServicesManager, NSString, PLPhotoLibraryOptions, PLKeywordManager, NSArray, PLThumbnailManager, PLThumbnailIndexes, PLGlobalValues;

@interface PLPhotoLibrary : NSObject {

	unsigned long long _pendingTransactions;
	NSMutableArray* _transactionCompletionHandlers;
	PLGenericAlbum* _allImportedPhotosAlbum;
	PLGenericAlbum* _lastImportedPhotosAlbum;
	NSSet* _imageFileExtensions;
	NSSet* _rawImageFileExtensions;
	NSSet* _audioFileExtensions;
	NSSet* _extraVideoExtensions;
	PLPhotoLibraryBundle* _libraryBundle;
	os_unfair_lock_s _managedObjectContextLock;
	PLManagedObjectContext* _managedObjectContext;
	NSPersistentStore* _loadedPersistentStore;
	PAImageConversionServiceClient* _imageConversionServiceClient;
	PAVideoConversionServiceClient* _videoConversionServiceClient;
	PLPhotoLibraryPathManager* _pathManager;
	PLLibraryServicesManager* _libraryServicesManager;
	NSString* _name;
	PLPhotoLibraryOptions* _options;

}

@property (readonly) PLPhotoLibraryBundle * libraryBundle;                                                   //@synthesize libraryBundle=_libraryBundle - In the implementation block
@property (readonly) PLKeywordManager * keywordManager; 
@property (nonatomic,retain,readonly) NSArray * syncedAlbums; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> syncProgressAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> otaRestoreProgressAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> filesystemImportProgressAlbum; 
@property (nonatomic,readonly) PLPhotoLibraryOptions * options;                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;                                      //@synthesize pathManager=_pathManager - In the implementation block
@property (nonatomic,__weak,readonly) PLLibraryServicesManager * libraryServicesManager;                     //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (getter=isCloudPhotoLibraryEnabled,readonly) char cloudPhotoLibraryEnabled; 
@property (nonatomic,readonly) PAImageConversionServiceClient * imageConversionServiceClient; 
@property (nonatomic,readonly) PAVideoConversionServiceClient * videoConversionServiceClient; 
@property (nonatomic,readonly) PLThumbnailManager * thumbnailManager; 
@property (nonatomic,readonly) PLThumbnailIndexes * thumbnailIndexes; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbums; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbumsForPreferences; 
@property (nonatomic,readonly) PLGlobalValues * globalValues; 
+(void)initialize;
+(id)newPhotoLibraryWithName:(const char*)arg1 loadedFromBundle:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(char)shouldTryFastPathWithLibraryBundle:(id)arg1 ;
+(id)sharedPhotoLibrary;
+(char)canSaveVideoToLibrary:(id)arg1 ;
+(char)isVideoFileExtension:(id)arg1 ;
+(char)isImageFileExtension:(id)arg1 ;
+(char)isAudioFileExtension:(id)arg1 ;
+(id)fileReservationForFileAtPath:(id)arg1 exclusive:(char)arg2 ;
+(id)photoOutboundSharingTmpDirectoryURL;
+(id)_resourcesInfoFromMoc:(id)arg1 ;
+(char)isAdjustmentEnvelopeExtension:(id)arg1 ;
+(char)removeFaceMetadataAtURL:(id)arg1 includingPeople:(char)arg2 ;
+(char)systemPhotoLibraryIsObtainable;
+(id)opportunisticTaskIsolationQueue;
+(id)systemPhotoLibrary;
+(id)systemMainQueuePhotoLibrary;
+(id)_internalSystemPhotoLibrary;
+(id)cameraPhotoLibrary;
+(id)cplPhotoLibrary;
+(id)cmmPhotoLibrary;
+(id)cloudSharingPhotoLibrary;
+(id)myPhotoStreamPhotoLibrary;
+(id)diagnosticsPhotoLibrary;
+(id)unitTestPhotoLibrary;
+(char)areOpportunisticTasksDisabled;
+(id)newPhotoLibraryWithName:(const char*)arg1 loadedFromURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(void)setPhotoStreamEnabled:(char)arg1 ;
+(void)setCloudAlbumSharingEnabled:(char)arg1 ;
+(char)photoLibraryIsObtainable;
+(void)postGlobalPhotoLibraryAvailableIfNecessary;
+(id)masterURLFromSidecarURLs:(id)arg1 ;
+(void)_loadFileExtensionInformation;
+(char)isRawImageFileExtension:(id)arg1 ;
+(char)isNonRawImageFileExtension:(id)arg1 ;
+(int)priorityForFileExtension:(id)arg1 ;
+(void)_getResourceData:(id)arg1 nonDerivativeSizeOut:(unsigned long long*)arg2 derivativesSizeOut:(unsigned long long*)arg3 fileBackedThumbnailsSizeOut:(unsigned long long*)arg4 tableThumbnailsSizeOut:(unsigned long long*)arg5 ;
+(id)savedPhotosOriginalsSizeWithSizeDataRef:(id)arg1 ;
+(id)savedPhotosReferenceMediaSizeWithSizeDataRef:(id)arg1 ;
+(id)librarySummarySizeDataRefWithManagedObjectContext:(id)arg1 ;
+(void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1 ;
+(void)refreshCachedCountsAndDates:(char)arg1 onAssetsContainerClass:(Class)arg2 inContext:(id)arg3 withPredicate:(id)arg4 ;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(char)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+(unsigned long long)CloudPhotoLibrarySize;
+(void)_contextSaveFailedWithNoPersistentStores:(id)arg1 ;
+(void)_contextSaveFailedDueToChangingSPL:(id)arg1 ;
+(void)_contextSaveFailedDueToClientRequestedShutdown:(id)arg1 ;
+(void)_contextSaveFailedWithError:(id)arg1 ;
+(void)_contextSaveFailedWithTimeoutError:(id)arg1 ;
+(void)_contextSaveFailedWithSQLiteError:(id)arg1 ;
+(void)_context:(id)arg1 saveFailedWithError:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)name;
-(PLPhotoLibraryOptions *)options;
-(void)performBlock:(/*^block*/id)arg1 ;
-(PLManagedObjectContext *)managedObjectContext;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(id)objectWithObjectID:(id)arg1 ;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)invalidateWithReason:(id)arg1 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(void)userUntrashAlbums:(id)arg1 ;
-(void)userExpungeAlbums:(id)arg1 ;
-(void)userTrashAlbums:(id)arg1 ;
-(void)userUntrashAssets:(id)arg1 ;
-(void)userExpungeAssets:(id)arg1 ;
-(void)userTrashAssets:(id)arg1 ;
-(PLLibraryServicesManager *)libraryServicesManager;
-(void)performTransactionWithName:(id)arg1 transaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(id)albumListForAlbumOfKind:(int)arg1 ;
-(id)syncProgressAlbumsIgnoreiTunes:(char)arg1 ;
-(PLThumbnailManager *)thumbnailManager;
-(PLPhotoLibraryBundle *)libraryBundle;
-(PLKeywordManager *)keywordManager;
-(NSArray *)photoStreamAlbums;
-(id)libraryID;
-(char)isCloudPhotoLibraryEnabled;
-(id)assetsdClient;
-(id)photoAnalysisClient;
-(void)countOfReferencedMediaWithCompletionHandler:(/*^block*/id)arg1 ;
-(PAImageConversionServiceClient *)imageConversionServiceClient;
-(PAVideoConversionServiceClient *)videoConversionServiceClient;
-(char)isReadyForCloudPhotoLibrary;
-(void)performBlockAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)personInfoManager;
-(id)managedObjectContextStoreUUID;
-(void)performTransactionAndWait:(/*^block*/id)arg1 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_photoLibraryCorruptNotification;
-(void)_photoLibraryForceClientExitNotification;
-(id)incompleteRestoreProcesses;
-(void)performBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(NSArray *)syncedAlbums;
-(NSObject*<PLAlbumProtocol>)syncProgressAlbum;
-(NSObject*<PLAlbumProtocol>)otaRestoreProgressAlbum;
-(NSObject*<PLAlbumProtocol>)filesystemImportProgressAlbum;
-(PLThumbnailIndexes *)thumbnailIndexes;
-(NSArray *)photoStreamAlbumsForPreferences;
-(PLGlobalValues *)globalValues;
-(void)handlePossibleCoreDataError:(id)arg1 ;
-(void)enableOpportunisticTasks;
-(void)disableOpportunisticTasks;
-(id)_initWithPathManager:(id)arg1 ;
-(id)initWithName:(const char*)arg1 libraryBundle:(id)arg2 options:(id)arg3 ;
-(void)_setManagedObjectContext:(id)arg1 ;
-(char)unloadDatabase:(id*)arg1 ;
-(char)loadDatabaseWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)handlePersistentStoreRemoval:(id)arg1 ;
-(void)clientApplicationWillEnterForeground;
-(id)constraintsDirector;
-(char)_hasIncompleteAsset;
-(char)hasITunesSyncedContent;
-(id)iTunesSyncedContentInfo;
-(void)deleteITunesSyncedContentForEnablingiCPL;
-(void)addCompletionHandlerToCurrentTransaction:(/*^block*/id)arg1 ;
-(id)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 ;
-(id)albumWithUuid:(id)arg1 ;
-(void)_userDeleteAlbums:(id)arg1 ;
-(void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4 ;
-(void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2 ;
-(id)eventAlbumContainingPhoto:(id)arg1 ;
-(unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2 ;
-(id)assetWithUUID:(id)arg1 ;
-(id)assetWithUUID:(id)arg1 inContainer:(id)arg2 ;
-(void)_userDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4 ;
-(void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2 ;
-(void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 ;
-(void)createPhotoStreamAlbumWithStreamID:(id)arg1 ;
-(id)duplicatePhotoStreamPhotosForPhotos:(id)arg1 ;
-(id)assetURLForPhoto:(id)arg1 extension:(id)arg2 ;
-(id)assetURLForPhoto:(id)arg1 ;
-(id)photoFromAssetURL:(id)arg1 ;
-(id)albumFromGroupURL:(id)arg1 ;
-(char)deleteAllDiagnosticFiles:(id*)arg1 ;
-(void)_deleteObsoleteMetadataFiles;
-(void)cleanupAfterImportAllDCIMAssets;
-(void)_safeSave:(id)arg1 ;
-(char)safeSave:(id)arg1 error:(id*)arg2 ;
-(void)batchDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(id)_fetchedObjectsForDeleteWithEntity:(id)arg1 predicate:(id)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)batchDeleteAssetsWithPredicate:(id)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(char)batchDeleteObjectsWithEntity:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
-(id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2 ;
-(void)dataMigratorSupportCleanupModelForDataMigrationPurgeMissingSharedAndSynced;
-(void)cleanupIncompleteAssetsAfterOTARestore;
-(id)_loadClientDatabaseContextFastPathAndReturnAbortAfterOpen:(char*)arg1 ;
-(id)_loadClientDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_loadServerDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_loadDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)repairSingletonObjects;
-(void)recreateAlbumsAndPersonsFromMetadata;
-(void)recreateMemoriesAndPersonsFromMetadata;
-(void)recreatePersonsFromMetadata;
-(void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1 ;
-(void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1 includeAlbums:(char)arg2 ;
-(void)_enumerateFilesAtURLs:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_enumerateFilesAtURL:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_removeOldFaceMetadataAsync;
-(id)allImportedPhotosAlbum;
-(id)allImportedPhotosAlbumCreateIfNeeded:(char)arg1 ;
-(id)lastImportedPhotosAlbum;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(char)arg1 ;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1 ;
-(id)imageForFormat:(unsigned short)arg1 forAsset:(id)arg2 ;
-(id)newImageForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(char)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(char*)arg5 ;
-(id)newImageForPhoto:(id)arg1 format:(unsigned short)arg2 ;
-(id)photoOutboundSharingTmpDirectoryURL;
-(void)modifyDCIMEntryForPhoto:(id)arg1 ;
-(id)addDCIMEntryAtFileURL:(id)arg1 mainFileMetadata:(id)arg2 toEvent:(id)arg3 sidecarFileInfo:(id)arg4 progress:(id)arg5 importSessionIdentifier:(id)arg6 isImported:(char)arg7 previewImage:(id)arg8 thumbnailImage:(id)arg9 savedAssetType:(short)arg10 replacementUUID:(id)arg11 publicGlobalUUID:(id)arg12 extendedInfo:(id)arg13 withUUID:(id)arg14 ignoreEmbeddedMetadata:(char)arg15 isPlaceholder:(char)arg16 placeholderFileURL:(id)arg17 ;
-(void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3 mainFileMetadata:(id)arg4 ;
-(void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5 mainFileMetadata:(id)arg6 ;
-(void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2 mainFileMetadata:(id)arg3 ;
-(id)albumListForContentMode:(int)arg1 ;
-(char)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 excludeTrashed:(char)arg3 excludeInvisible:(char)arg4 excludeCloudShared:(char)arg5 ;
-(char)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 ;
-(id)librarySizesFromDB;
-(unsigned long long)_fileSizeAtPath:(id)arg1 ;
-(unsigned long long)_dbFileSizes;
-(id)estimatedLibrarySizes;
-(id)librarySizes;
-(char)hasPendingAssetsIgnoreiTunes:(char)arg1 ;
-(char)hasCompletedRestorePostProcessing;
-(char)hasCompletedMomentAnalysis;
-(char)_checkMomentAnalysisCompletion;
-(id)syncedAlbumSubtitleStringFormat;
-(char)isAlbumSynced:(id)arg1 ;
-(void)old_refreshCachedCountsOnAllAssetContainersInContext:(id)arg1 ;
-(void)updateAssetPlayShareViewCountsInContext:(id)arg1 ;
-(void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3 ;
-(void)updateMemoryPlayShareViewCountsInContext:(id)arg1 ;
-(void)_updateMemoryCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3 ;
-(void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2 ;
-(void)deleteExpiredTrashedResources;
-(void)deleteExpiredTrashedAssetsAndAlbums;
-(unsigned long long)sharedStreamsSize;
-(unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2 ;
-(unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)queueStatusDescription;
-(void)performTransaction:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)performTransactionAndWaitWithName:(id)arg1 transaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 forceSave:(char)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_withDispatchGroup:(id)arg1 synchronously:(char)arg2 name:(id)arg3 shouldSave:(char)arg4 performTransaction:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

