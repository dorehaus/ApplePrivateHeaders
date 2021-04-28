/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeMachine/TMMachineStore.h>
#import <libobjc.A.dylib/TMBackupStoreRoot.h>

@class TMNodeCache, TMDisk, NSURL, TMBackup, NSString, NSArray, NSDictionary;

@interface TMAPFSMachineStore : TMMachineStore <TMBackupStoreRoot> {

	TMNodeCache* _nodeCache;
	TMDisk* _liveVolumeDisk;

}

@property (retain) TMDisk * liveVolumeDisk;                               //@synthesize liveVolumeDisk=_liveVolumeDisk - In the implementation block
@property (__weak) TMNodeCache * nodeCache;                               //@synthesize nodeCache=_nodeCache - In the implementation block
@property (readonly) NSURL * machineStoreURL; 
@property (readonly) NSURL * inheritanceHistoryURL; 
@property (readonly) NSURL * liveVolumeMountPoint; 
@property (readonly) TMBackup * baselineBackupCandidate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * sortedCompleteBackups; 
@property (readonly) NSDictionary * backupHistoryDictionary; 
@property (readonly) NSArray * backupDateHistory; 
+(id)structureType;
+(id)annotatedStateAtURL:(id)arg1 ;
+(id)URLForBuildUnderURL:(id)arg1 error:(id*)arg2 ;
+(void)enumerateURLsForReuseUnderURL:(id)arg1 enumerator:(/*^block*/id)arg2 ;
+(char)validateMachineStoreAttributesAtURL:(id)arg1 ;
+(char)_makeMachineStoreDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
+(id)machineAddress;
+(char)addMachineStoreRootACLsToURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)description;
-(char)buildAtURL:(id)arg1 parentURL:(id)arg2 error:(id*)arg3 ;
-(NSURL *)liveVolumeMountPoint;
-(long long)refreshFromDisk;
-(NSArray *)sortedCompleteBackups;
-(id)computerName;
-(char)prepareForReuse:(id*)arg1 ;
-(id)sortedWritableBackupsWithState:(unsigned long long)arg1 ;
-(TMBackup *)baselineBackupCandidate;
-(id)prepareAllBackupsForBrowsing:(id*)arg1 ;
-(id)prepareBackupForBrowsingWithDate:(id)arg1 error:(id*)arg2 ;
-(id)prepareLegacyBackupsDB:(id*)arg1 ;
-(char)finishBrowsingBackups:(id*)arg1 ;
-(NSURL *)machineStoreURL;
-(NSURL *)inheritanceHistoryURL;
-(char)rename:(id)arg1 error:(id*)arg2 ;
-(char)_updateMachineStoreNameAtURL:(id)arg1 previousComputerName:(id)arg2 error:(id*)arg3 ;
-(Class)snapshotClass;
-(void)setLiveVolumeDisk:(TMDisk *)arg1 ;
-(TMDisk *)liveVolumeDisk;
-(id)machineUUID;
-(id)_readOnlyBackups;
-(id)completedBackups;
-(char)revertToBackup:(id)arg1 error:(id*)arg2 ;
-(TMNodeCache *)nodeCache;
-(void)setNodeCache:(TMNodeCache *)arg1 ;
@end
