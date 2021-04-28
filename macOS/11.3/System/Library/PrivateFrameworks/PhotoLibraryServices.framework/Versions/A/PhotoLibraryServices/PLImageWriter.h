/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLPhotoBakedThumbnailsDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, PLIndicatorFileCoordinator, PLLibraryServicesManager;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {

	int _unfinishedJobsRequiringIndicatorCount;
	char _databaseIsCorrupt;
	NSObject*<OS_dispatch_queue> _jobQueue;
	os_unfair_recursive_lock_s _jobCountLock;
	os_unfair_lock_s _transactionLock;
	unsigned long long _transactionCounter;
	NSObject*<OS_os_transaction> _transaction;
	PLIndicatorFileCoordinator* _indicatorFileCoordinator;
	PLLibraryServicesManager* _libraryServicesManager;

}
+(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
+(char)_requiresAssetUUIDForJobType:(id)arg1 ;
+(void)setAdjustmentsForNewVideo:(id)arg1 mainFileMetadata:(id)arg2 withAdjustmentsDictionary:(id)arg3 cameraAdjustments:(id)arg4 renderedContentPath:(id)arg5 renderedPosterFramePreviewPath:(id)arg6 finalAssetSize:(CGSize)arg7 ;
+(id)spatialOverCaptureDestinationURLForPrimaryAssetURL:(id)arg1 ;
+(id)semanticEnhancePreviewDestinationURLForPrimaryAssetURL:(id)arg1 ;
+(char)semanticEnhanceSceneIsValid:(long long)arg1 ;
+(id)deferredPhotoPreviewDestinationURLForPrimaryAssetURL:(id)arg1 ;
+(char)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)arg1 inIncomingFilenames:(id)arg2 forAssetUUID:(id)arg3 ;
+(id)_assetUUIDFromIncomingFilename:(id)arg1 ;
+(char)setAdjustmentsForNewPhoto:(id)arg1 mainFileMetadata:(id)arg2 cameraAdjustmentData:(id)arg3 adjustmentDataPath:(id)arg4 filteredImagePath:(id)arg5 cameraMetadata:(id)arg6 finalAssetSize:(CGSize)arg7 isSubstandardRender:(char)arg8 ;
+(id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)arg1 ;
+(char)_requiresIndicatorFileForJobType:(id)arg1 ;
+(char)isSpatialOverCaptureURL:(id)arg1 ;
+(char)isDeferredPhotoPreviewURL:(id)arg1 ;
+(id)finalizedAssetURLForDeferredPhotoPreviewURL:(id)arg1 extension:(id)arg2 ;
+(id)cameraMetadataURLForPrimaryAssetURL:(id)arg1 photoLibrary:(id)arg2 ;
+(id)assetAdjustmentsFromCompositionController:(id)arg1 exportProperties:(id)arg2 ;
+(id)assetAdjustmentsFromCameraFilters:(id)arg1 portraitMetadata:(id)arg2 exportProperties:(id)arg3 cameraMetadata:(id)arg4 ;
+(id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)arg1 exportProperties:(id)arg2 cameraMetadata:(id)arg3 ;
+(id)assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 applySemanticEnhance:(char)arg4 ;
+(id)assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 ;
+(id)_assetAdjustmentsFromCameraAdjustments:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 assetType:(short)arg4 applySemanticEnhance:(char)arg5 ;
+(id)assetAdjustmentsFromCameraAdjustmentData:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 applySemanticEnhance:(char)arg4 ;
+(id)assetAdjustmentsFromCameraAdjustmentData:(id)arg1 exportProperties:(id)arg2 ;
+(id)_assetAdjustmentsFromCameraAdjustmentData:(id)arg1 cameraMetadata:(id)arg2 exportProperties:(id)arg3 assetType:(short)arg4 applySemanticEnhance:(char)arg5 ;
+(void)decorateThumbnailInRect:(CGRect)arg1 size:(CGSize)arg2 duration:(id)arg3 inContext:(CGContextRef)arg4 format:(id)arg5 ;
-(id)init;
-(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)indicatorFileCoordinator;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(char)_isHighPriorityJob:(id)arg1 ;
-(char)canEnqueueJob:(id)arg1 ;
-(void)_incrementJobCount:(id)arg1 ;
-(void)_decrementJobCount:(id)arg1 ;
-(char)enqueueJob:(id)arg1 ;
-(id)cameraAssetPathForNewAssetWithExtension:(id)arg1 assetUUID:(id)arg2 ;
-(id)pathForNewAssetWithDirectoryPath:(id)arg1 fileName:(id)arg2 extension:(id)arg3 ;
-(id)_pathForNewAssetWithPath:(id)arg1 withExtension:(id)arg2 ;
-(id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned)arg2 extension:(id)arg3 ;
-(id)pathForOriginalMyPhotoStreamAssetWithJob:(id)arg1 ;
-(void)_removeTransientKeys:(id)arg1 ;
-(id)_pathForFilteredPreviewWithBaseName:(id)arg1 imageData:(id)arg2 orImage:(id)arg3 ;
-(void)_linkDiagnosticFileWithSourcePath:(id)arg1 forPhotoDestinationURL:(id)arg2 ;
-(void)_processImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1 ;
-(id)_processLimitedLibraryAdditionIfNeededWithAssetUUID:(id)arg1 clientBundleIdentifier:(id)arg2 clientAuthorization:(id)arg3 library:(id)arg4 ;
-(void)_processBatchImageJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAvalancheJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAvalanchesValidationJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_enablePhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleAvalancheCrashRecovery:(id)arg1 ;
-(void)_handleCameraMetadataCrashRecovery:(id)arg1 ;
-(id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2 ;
-(void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1 ;
-(void)_handleCameraAdjustments:(id)arg1 fullsizeRenders:(id)arg2 largeThumbnails:(id)arg3 ;
-(void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1 ;
-(void)_photoIrisPairingDidSucceed:(char)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4 ;
-(void)_processCrashRecoveryJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processXPCDaemonJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_decorateThumbnail:(id)arg1 ;
-(char)_transferSpatialOverCaptureVideoFromIncomingPath:(id)arg1 forBaseDestinationPath:(id)arg2 shouldRemoveIncoming:(char*)arg3 ;
-(char)_transferVideoFromIncomingPath:(id)arg1 toDestinationPath:(id)arg2 shouldRemoveIncoming:(char*)arg3 error:(id*)arg4 ;
-(void)_processVideoJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processVideoSaveJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processJob:(id)arg1 ;
-(char)imageWriterJob:(id)arg1 hasValidPathsWithConnection:(id)arg2 ;
-(void)saveAssetJob:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enqueueAutoDeleteEmptyAlbumJobWithAlbumID:(id)arg1 ;
@end

