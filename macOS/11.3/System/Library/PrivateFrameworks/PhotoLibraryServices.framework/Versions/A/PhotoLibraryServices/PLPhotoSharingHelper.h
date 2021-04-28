/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoSharingHelper : NSObject
+(void)retryOutstandingActivities;
+(void)updateCloudSharedAlbumMetadataOnServer:(id)arg1 ;
+(char)sharedStreamsEnabledForPhotoLibraryURL:(id)arg1 ;
+(char)debugAlwaysStreamSharedVideos;
+(id)streamdVideoCache;
+(void)updateSharedAlbumsCachedServerConfigurationLimits;
+(void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2 ;
+(void)deleteCloudSharedAlbumFromServer:(id)arg1 ;
+(void)clearCachedAccountState;
+(void)accountSettingsChanged;
+(void)photosPreferencesChanged;
+(id)sharingPersonID;
+(void)downloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 shouldPrioritize:(char)arg3 shouldExtendTimer:(char)arg4 ;
+(id)downloadNotificationForAssetwithUUID:(id)arg1 cloudPlaceholderKind:(short)arg2 ;
+(CGSize)videoPosterFrameDimension;
+(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4 ;
+(void)forgetSharingPersonID:(id)arg1 ;
+(char)removeCloudSharingDirectories:(id*)arg1 ;
+(void)pollForAlbumListUpdates;
+(void)requestVideoPlaybackURLForAsset:(id)arg1 videoType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(char)canSetUserCloudSharedLiked:(char)arg1 forAssets:(id)arg2 error:(id*)arg3 ;
+(void)publishCloudSharedCommentToServer:(id)arg1 ;
+(void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2 ;
+(void)publishCloudSharedAlbumToServer:(id)arg1 ;
+(char)_sharedStreamsEnabled;
+(char)_sharedStreamsExplicitlyDisabled;
+(char)sharedStreamsExplictlyDisabledForPhotoLibraryURL:(id)arg1 ;
+(id)sharingUsername;
+(id)sharingFirstName;
+(id)sharingLastName;
+(id)sharingDisplayNameIncludingEmail:(char)arg1 allowsEmail:(char)arg2 ;
+(char)accountMatchesEmail:(id)arg1 ;
+(void)pollForAlbumListUpdatesIfNecessary;
+(void)initializeMSPlatform;
+(id)_pathToServerConfigurationCache;
+(void)_resetServerSideConfigurationDictionary;
+(id)serverSideConfigurationDictionary;
+(long long)_serverLimitValueForKey:(id)arg1 withDefaultResult:(long long)arg2 ;
+(long long)maxOwnedStreams;
+(long long)maxSubscribedStreams;
+(long long)maxAssetsPerStream;
+(long long)maxSubscribersPerStream;
+(long long)maxCommentsPerAsset;
+(long long)maxCharactersPerComment;
+(long long)maxNumDerivativesToDownloadPerPush;
+(long long)maxNumDerivativesToPrefetchPerDay;
+(long long)maxNumThumbnailsToPrefetchPerDay;
+(long long)maxVideoLengthForPublishing;
+(long long)maxGIFSizeForPublishing;
+(char)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1 ;
+(char)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1 ;
+(char)canCreateStreamInPhotoLibrary:(id)arg1 error:(id*)arg2 ;
+(char)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id*)arg2 ;
+(id)_localizationKeyForAssets:(id)arg1 ;
+(void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2 ;
+(void)resetAllLocalState;
+(void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1 ;
+(void)deleteLocalAlbumsForMSASAlbumsWithGUID:(id)arg1 inviterAddress:(id)arg2 ;
+(void)_userDidDeleteSharedAlbum:(id)arg1 ;
+(void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1 ;
+(void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1 ;
+(void)_userDidDeleteSharedAssets:(id)arg1 ;
+(char)isCellularConnection;
+(unsigned)registerIdleStateChangeObserverWithToken:(int*)arg1 handler:(/*^block*/id)arg2 ;
+(unsigned)unregisterIdleStateChangeObserverWithToken:(int)arg1 ;
+(void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1 ;
+(void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2 ;
+(void)unsubscribeFromAlbum:(id)arg1 ;
+(void)acceptPendingInvitationForAlbum:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)declinePendingInvitationForAlbum:(id)arg1 ;
+(void)markPendingInvitationAsSpamForAlbum:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)refreshSubscriberListForAlbumGUID:(id)arg1 ;
+(char)hasPhoneInvitationForAlbum:(id)arg1 ;
+(id)_phoneInvitationFailureFile;
+(void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2 ;
+(id)_processPhoneFailuresQueue;
+(id)_transactionWithName:(const char*)arg1 ;
+(void)handlePhoneInvitationFailuresWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)deleteCommentWithGUIDFromServer:(id)arg1 ;
+(id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2 ;
+(id)_videoDerivativeForVideoAtURL:(id)arg1 outputURL:(id)arg2 withPreset:(id)arg3 reason:(id)arg4 outputFileType:(id)arg5 ;
+(id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2 ;
+(double)derivedAssetSmallDimensionLimitForType:(int)arg1 ;
+(id)_temporaryUploadDerivativesPathForCollectionGUID:(id)arg1 pathExtension:(id)arg2 ;
+(id)temporaryDerivativePathForCollectionGUID:(id)arg1 uti:(id)arg2 ;
+(id)temporaryThumbnailPathForCollectionGUID:(id)arg1 ;
+(id)temporaryVideoPathForCollectionGUID:(id)arg1 ;
+(id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1 ;
+(id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1 ;
+(id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1 ;
+(void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(char)arg2 ;
+(void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 ;
+(void)checkServerModelForAlbum:(id)arg1 photoLibrary:(id)arg2 ;
+(void)prioritizeDownloadsForAlbumGUID:(id)arg1 ;
+(char)_recentlyRequestedDownloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 ;
+(id)_downloadRequestQueue;
+(char)_derivativeExistsForAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 ;
+(double)intervalBetweenPolls;
+(double)intervalBetweenAlbumPolls;
+(void)applicationIsInForeground:(char)arg1 photoLibraryURL:(id)arg2 ;
+(void)pruneCloudSharingContentIfNecessaryInLibrary:(id)arg1 ;
+(void)_markStreamVideosAsPurgeable;
+(unsigned long long)purgeableSpace;
+(unsigned long long)purgeSpace:(unsigned long long)arg1 ;
+(char)isBreadcrumbDebugEnabled;
+(id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(char)arg2 ;
+(id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(char)arg2 ;
+(void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(char)arg3 ;
+(id)prefixForBreadcrumbState:(int)arg1 ;
+(void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3 ;
+(void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5 ;
+(void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1 ;
+(char)debugDownloadThumbnailsOnly;
+(char)debugDownloadMetadataOnly;
+(char)debugDownloadAllDerivatives;
+(char)debugAutoAcceptInvitation;
@end

