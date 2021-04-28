/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLDiskSpaceManagement : NSObject
+(unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(char)arg2 shouldKeepRecentlyViewedAssets:(char)arg3 fromPhotoLibrary:(id)arg4 ;
+(unsigned long long)purgeExpiredOutboundSharingAssetsFromPhotoLibrary:(id)arg1 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(char)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(char)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromPhotoMetadataDirectoryShouldFreeSpace:(char)arg2 bytesToPurge:(unsigned long long)arg3 skipAssets:(id)arg4 ;
+(unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(char)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(char)arg2 ;
@end
