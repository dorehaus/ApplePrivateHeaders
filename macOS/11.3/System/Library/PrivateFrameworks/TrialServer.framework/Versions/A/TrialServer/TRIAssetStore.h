/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIPaths, TRIAssetExtracting;
#import <TrialServer/TrialServer-Structs.h>
@interface TRIAssetStore : NSObject {

	id<TRIPaths> _paths;
	id<TRIAssetExtracting> _extractor;

}
+(id)shortHashForAssetIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithPaths:(id)arg1 ;
-(char)collectGarbageOlderThanNumScans:(unsigned)arg1 ;
-(char)hasAssetWithIdentifier:(id)arg1 type:(unsigned char*)arg2 ;
-(id)initWithPaths:(id)arg1 extractor:(id)arg2 ;
-(char)_validateAssetIdentifier:(id)arg1 ;
-(char)_saveFileAssetWithIdentifier:(id)arg1 assetData:(id)arg2 ;
-(char)_saveDirectoryAssetWithIdentifier:(id)arg1 assetData:(id)arg2 ;
-(char)_acquireLockfileAndRunBlock:(/*^block*/id)arg1 ;
-(id)_pathForAssetDirWithIdentifier:(id)arg1 ;
-(id)_createTempDir;
-(char)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)arg1 dest:(id)arg2 ;
-(void)_forceRemoveItemAtPath:(id)arg1 ;
-(char)_removeAssetWithIdentifier:(id)arg1 flockWitness:(const TRIFlockWitness_Ref)arg2 ;
-(id)_requireAssetStoreTempDir;
-(char)_linkFileAssetWithIdentifier:(id)arg1 toPath:(id)arg2 ;
-(char)_linkDirectoryAssetWithIdentifier:(id)arg1 toPath:(id)arg2 ;
-(char)_clearUnrefAgeForAssetWithIdentifier:(id)arg1 ;
-(id)_pathForRefsToAssetWithIdentifier:(id)arg1 ;
-(id)_pathForAssetContentWithIdentifier:(id)arg1 ;
-(char)_addSymlinkFromAssetWithIdentifier:(id)arg1 toPath:(id)arg2 ;
-(char)_removeDeadSymlinksWithFlockWitness:(const TRIFlockWitness_Ref)arg1 numRemoved:(unsigned*)arg2 ;
-(char)_removeUnreferencedAssetsWithFlockWitness:(const TRIFlockWitness_Ref)arg1 olderThanAge:(unsigned)arg2 numRemoved:(unsigned*)arg3 ;
-(char)_isValidTargetForSymlink:(id)arg1 assetIdentifier:(id)arg2 ;
-(void)_enumerateAssetDirsUsingBlock:(/*^block*/id)arg1 ;
-(int)_collectDeadSymlinks;
-(char)_removePathsInFd:(int)arg1 numRemoved:(unsigned*)arg2 ;
-(int)_collectUnreferencedAssets;
-(char)_incrementUnrefAgeForAssetWithIdentifier:(id)arg1 newValue:(unsigned*)arg2 ;
-(char)_enumerateZeroTerminatedStringsInFd:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)_isDirectoryAtPath:(id)arg1 matchingAssetContentAtPath:(id)arg2 ;
-(char)_isFileAtPath:(id)arg1 matchingAssetContentAtPath:(id)arg2 ;
-(void)_fixupPermissionsOnPath:(id)arg1 permissionBits:(const unsigned short*)arg2 ;
-(char)_nonAtomicOverwriteWithSrc:(id)arg1 dest:(id)arg2 finalPermissionBits:(const unsigned short*)arg3 ;
-(char)saveAssetWithIdentifier:(id)arg1 assetData:(id)arg2 type:(unsigned char)arg3 ;
-(char)removeAssetWithIdentifier:(id)arg1 ;
-(char)linkAssetWithIdentifier:(id)arg1 toPath:(id)arg2 ;
-(void)enumerateSavedAssetsUsingBlock:(/*^block*/id)arg1 ;
@end

