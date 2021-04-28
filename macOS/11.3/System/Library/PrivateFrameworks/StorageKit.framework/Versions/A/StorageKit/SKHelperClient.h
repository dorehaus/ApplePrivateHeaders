/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageKit.framework/Versions/A/StorageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKHelperClientProtocol.h>
#import <libobjc.A.dylib/SKDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject, NSString;

@interface SKHelperClient : NSObject <SKHelperClientProtocol, SKDaemonProtocol> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _progressBlockDictionary;
	/*^block*/id _progressBlock;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClient;
-(id)remoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)_xpcConnection;
-(id)synchronousRemoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(void)managerStalled;
-(void)managerResumed;
-(void)initialPopulateComplete;
-(void)disksAppeared:(id)arg1 ;
-(void)disksChanged:(id)arg1 ;
-(void)disksDisappeared:(id)arg1 ;
-(void)_setProgressHandler:(/*^block*/id)arg1 forUUID:(id)arg2 ;
-(void)resizeLimitsForDisk:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)createRAIDSetType:(id)arg1 name:(id)arg2 disks:(id)arg3 format:(id)arg4 options:(id)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setDaemonLanguage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setDiskIconWithImageData:(id)arg1 forDisk:(id)arg2 WithReply:(/*^block*/id)arg3 ;
-(void)renameDisk:(id)arg1 to:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)unmountDisk:(id)arg1 options:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)mountDisk:(id)arg1 options:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)blessDisk:(id)arg1 options:(id)arg2 withCallbackBlock:(/*^block*/id)arg3 ;
-(void)enablePermissionsOnDisk:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)enableJournalingOnDisk:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)ejectDisk:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)getRecoverySystemInfoForDisk:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)extendedInfoForDisk:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)changePasswordForDisk:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3 passwordHint:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)establishReserveKEKForDisk:(id)arg1 diskUnlockPassword:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)validateEncryptedDiskPassword:(id)arg1 diskUnlockPassword:(id)arg2 forUser:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)unlockEncryptedDisk:(id)arg1 diskUnlockPassword:(id)arg2 forUser:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)unlockEncryptedDisk:(id)arg1 withiCloudUser:(id)arg2 iCloudHandle:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)decryptVolume:(id)arg1 withPassword:(id)arg2 forUser:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)getFDEUsersFromDisk:(id)arg1 retrieveImageData:(char)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)enclosingVolumeCount:(/*^block*/id)arg1 ;
-(void)enclosingDiskAtLevel:(unsigned long long)arg1 withCallbackBlock:(/*^block*/id)arg2 ;
-(void)recacheDisk:(id)arg1 withCallbackBlock:(/*^block*/id)arg2 ;
-(void)diskForPath:(id)arg1 withCallbackBlock:(/*^block*/id)arg2 ;
-(void)childDisksForWholeDisk:(id)arg1 withCallbackBlock:(/*^block*/id)arg2 ;
-(void)isBusy:(/*^block*/id)arg1 ;
-(void)filesystemsWithCallbackBlock:(/*^block*/id)arg1 ;
-(void)fixIncorrectlySizedPartitionMapOnDisk:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)physicalStoresForAPFSVolume:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)volumesForAPFSPS:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setAPFSRole:(id)arg1 forDisk:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dataRecordForUser:(id)arg1 forVolume:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)allSnapshotsForDisk:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)createSnapshot:(id)arg1 disk:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)renameSnapshot:(id)arg1 toName:(id)arg2 disk:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)revertToSnapshot:(id)arg1 disk:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)deleteSnapshots:(id)arg1 disk:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)rootFromSnapshot:(id)arg1 disk:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)createAPFSVolumeGroupWithDisks:(id)arg1 container:(id)arg2 completetionBlock:(/*^block*/id)arg3 ;
-(void)removeAPFSVolumeGroup:(id)arg1 container:(id)arg2 completetionBlock:(/*^block*/id)arg3 ;
-(void)wholeDiskForDisk:(id)arg1 withCallbackBlock:(/*^block*/id)arg2 ;
-(void)updateUUID:(id)arg1 progress:(float)arg2 message:(id)arg3 ;
-(void)volumesForDiskImageFileURL:(id)arg1 handlingProgress:(/*^block*/id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)verifyDisk:(id)arg1 handlingProgress:(/*^block*/id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)repairDisk:(id)arg1 options:(id)arg2 handlingProgress:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)repairUserHomeDirectoryForDisk:(id)arg1 forUser:(long long)arg2 handlingProgress:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)splitDisk:(id)arg1 toSize:(unsigned long long)arg2 newDiskType:(id)arg3 name:(id)arg4 caseSensitive:(char)arg5 password:(id)arg6 handlingProgress:(/*^block*/id)arg7 withCompletionBlock:(/*^block*/id)arg8 ;
-(void)splitDisk:(id)arg1 toSize:(unsigned long long)arg2 newDiskRole:(id)arg3 name:(id)arg4 caseSensitive:(char)arg5 password:(id)arg6 handlingProgress:(/*^block*/id)arg7 withCompletionBlock:(/*^block*/id)arg8 ;
-(void)updatePrebootForDisk:(id)arg1 handlingProgress:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)ensureRecoveryForDisk:(id)arg1 withRecoverySystemPath:(id)arg2 chunkkList:(id)arg3 diagnostics:(id)arg4 ignoreBlacklist:(char)arg5 handlingProgress:(/*^block*/id)arg6 callbackBlock:(/*^block*/id)arg7 ;
-(void)unEnsureRecoveryForDisk:(id)arg1 withProgressHandler:(/*^block*/id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)convertDisk:(id)arg1 toCoreStorage:(char)arg2 handlingProgress:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)manageFDEUsersForDisk:(id)arg1 diskUnlockPassword:(id)arg2 removingUsers:(id)arg3 resettingUserPasswords:(id)arg4 fdeRecipe:(id)arg5 handlingProgress:(/*^block*/id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(void)iCloudRecoverManageFDEUsersForDisk:(id)arg1 icloudUser:(id)arg2 icloudPassData:(id)arg3 usersToRemoveArray:(id)arg4 resettingUserPasswords:(id)arg5 fdeRecipe:(id)arg6 handlingProgress:(/*^block*/id)arg7 withCompletionBlock:(/*^block*/id)arg8 ;
-(void)addChildVolumeToEmptyLVG:(id)arg1 withProgress:(/*^block*/id)arg2 completetionBlock:(/*^block*/id)arg3 ;
-(void)repairRAID:(id)arg1 spareDisk:(id)arg2 progress:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)convertToAPFS:(id)arg1 isDryRun:(char)arg2 prebootFolderPath:(id)arg3 withProgress:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(void)blockRestoreDisk:(id)arg1 fromDisk:(id)arg2 handlingProgress:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)blockRestoreDisk:(id)arg1 fromDisk:(id)arg2 volumeUUID:(id)arg3 creatingNewVolume:(char)arg4 handlingProgress:(/*^block*/id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(void)blockRestoreDisk:(id)arg1 fromDiskImageFileURL:(id)arg2 handlingProgress:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)blockRestoreDisk:(id)arg1 fromDiskImageFileURL:(id)arg2 volumeUUID:(id)arg3 creatingNewVolume:(char)arg4 handlingProgress:(/*^block*/id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(void)eraseDisk:(id)arg1 toFilesystem:(id)arg2 partitionMap:(id)arg3 name:(id)arg4 password:(id)arg5 passwordHint:(id)arg6 handlingProgress:(/*^block*/id)arg7 withCompletionBlock:(/*^block*/id)arg8 ;
-(void)secureEraseDisk:(id)arg1 withEraseLevel:(int)arg2 handlingProgress:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)resize:(id)arg1 toSize:(unsigned long long)arg2 handlingProgress:(/*^block*/id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)removeDisk:(id)arg1 handlingProgress:(/*^block*/id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)compositeDisks:(id)arg1 volumeName:(id)arg2 handlingProgress:(/*^block*/id)arg3 callbackBlock:(/*^block*/id)arg4 ;
-(void)convertDiskToFDE:(id)arg1 withRecipe:(id)arg2 handlingProgress:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)addDisks:(id)arg1 toRAID:(id)arg2 memberType:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)removeDisk:(id)arg1 fromRAID:(id)arg2 progress:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)deleteRAID:(id)arg1 progress:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)createAPFSContainerWithDisks:(id)arg1 progress:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)deleteAPFSContainer:(id)arg1 progress:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)addSystemVolumeToAPFSContainer:(id)arg1 dataVolume:(id)arg2 name:(id)arg3 caseSensitive:(char)arg4 minSize:(unsigned long long)arg5 maxSize:(unsigned long long)arg6 password:(id)arg7 passwordHint:(id)arg8 uid:(unsigned)arg9 gid:(unsigned)arg10 progressBlock:(/*^block*/id)arg11 completetionBlock:(/*^block*/id)arg12 ;
-(void)addUnencryptedSystemVolumeToAPFSContainer:(id)arg1 dataVolume:(id)arg2 name:(id)arg3 caseSensitive:(char)arg4 minSize:(unsigned long long)arg5 maxSize:(unsigned long long)arg6 password:(id)arg7 passwordHint:(id)arg8 uid:(unsigned)arg9 gid:(unsigned)arg10 progressBlock:(/*^block*/id)arg11 completetionBlock:(/*^block*/id)arg12 ;
-(void)addDataVolumeToAPFSContainer:(id)arg1 systemVolume:(id)arg2 name:(id)arg3 caseSensitive:(char)arg4 minSize:(unsigned long long)arg5 maxSize:(unsigned long long)arg6 password:(id)arg7 passwordHint:(id)arg8 uid:(unsigned)arg9 gid:(unsigned)arg10 progressBlock:(/*^block*/id)arg11 completetionBlock:(/*^block*/id)arg12 ;
-(void)addChildVolumeToAPFSContainer:(id)arg1 name:(id)arg2 caseSensitive:(char)arg3 minSize:(unsigned long long)arg4 maxSize:(unsigned long long)arg5 password:(id)arg6 passwordHint:(id)arg7 apfsRole:(id)arg8 uid:(unsigned)arg9 gid:(unsigned)arg10 progressBlock:(/*^block*/id)arg11 completetionBlock:(/*^block*/id)arg12 ;
-(void)deleteAPFSVolume:(id)arg1 progress:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_addChildVolumeToAPFSContainer:(id)arg1 dataVolume:(id)arg2 systemVolume:(id)arg3 name:(id)arg4 caseSensitive:(char)arg5 minSize:(unsigned long long)arg6 maxSize:(unsigned long long)arg7 password:(id)arg8 passwordHint:(id)arg9 apfsRole:(id)arg10 unencryptedSystemVolume:(char)arg11 uid:(unsigned)arg12 gid:(unsigned)arg13 progressBlock:(/*^block*/id)arg14 completetionBlock:(/*^block*/id)arg15 ;
-(void)eraseDisk:(id)arg1 toFilesystem:(id)arg2 partitionMap:(id)arg3 name:(id)arg4 password:(id)arg5 handlingProgress:(/*^block*/id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(void)unmountDisk:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)addChildVolumeToAPFSContainer:(id)arg1 name:(id)arg2 caseSensitive:(char)arg3 minSize:(unsigned long long)arg4 maxSize:(unsigned long long)arg5 password:(id)arg6 uid:(unsigned)arg7 gid:(unsigned)arg8 progressBlock:(/*^block*/id)arg9 completetionBlock:(/*^block*/id)arg10 ;
-(void)convertToAPFS:(id)arg1 isDryRun:(char)arg2 withProgress:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(id)diskNotificationQueue;
@end

