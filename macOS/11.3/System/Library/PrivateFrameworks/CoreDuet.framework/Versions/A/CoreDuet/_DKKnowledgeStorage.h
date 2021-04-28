/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKCoreDataStorageDelegate.h>
#import <libobjc.A.dylib/_DKKnowledgeEventStreamDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol OS_dispatch_queue;
@class _DKCoreDataStorage, NSUUID, NSObject, NSString, NSURL, NSHashTable, _DKTombstonePolicy;

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {

	char _localOnly;
	_DKCoreDataStorage* _syncStorage;
	NSUUID* _deviceUUID;
	NSObject*<OS_dispatch_queue> _defaultResponseQueue;
	NSString* _directory;
	NSURL* _modelURL;
	NSHashTable* _knowledgeStorageEventNotificationDelegates;
	unsigned long long _insertsAndDeletesObserverCount;
	NSString* _clientID;
	_DKTombstonePolicy* _tombstonePolicy;
	NSObject*<OS_dispatch_queue> _executionQueue;
	_DKCoreDataStorage* _storage;

}

@property (nonatomic,readonly) NSUUID * deviceUUID;                           //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (retain) _DKTombstonePolicy * tombstonePolicy;                      //@synthesize tombstonePolicy=_tombstonePolicy - In the implementation block
@property (nonatomic,readonly) char localOnly;                                //@synthesize localOnly=_localOnly - In the implementation block
@property (nonatomic,readonly) _DKCoreDataStorage * storage;                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) _DKCoreDataStorage * syncStorage;              //@synthesize syncStorage=_syncStorage - In the implementation block
+(id)storageWithDirectory:(id)arg1 readOnly:(char)arg2 ;
+(id)storeWithDirectory:(id)arg1 readOnly:(char)arg2 ;
+(id)storageWithDirectory:(id)arg1 readOnly:(char)arg2 localOnly:(char)arg3 ;
+(id)storageWithShallowCopyFromStorage:(id)arg1 clientIdentifier:(id)arg2 ;
+(id)sourceDeviceIdentityFromObject:(id)arg1 ;
-(_DKCoreDataStorage *)storage;
-(unsigned long long)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned long long)arg3 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned long long)arg2 batchLimit:(unsigned long long)arg3 ;
-(unsigned long long)deleteObjectsOlderThanDate:(id)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3 ;
-(unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3 ;
-(unsigned long long)deleteOrphanedEntities;
-(id)keyValueStoreForDomain:(id)arg1 ;
-(NSUUID *)deviceUUID;
-(void)addKnowledgeStorageEventNotificationDelegate:(id)arg1 ;
-(void)incrementInsertsAndDeletesObserverCount;
-(void)removeKnowledgeStorageEventNotificationDelegate:(id)arg1 ;
-(void)decrementInsertsAndDeletesObserverCount;
-(unsigned long long)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(char)saveObjects:(id)arg1 error:(id*)arg2 ;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(char)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)closeStorage;
-(char)deleteStorage;
-(_DKTombstonePolicy *)tombstonePolicy;
-(void)closeSyncStorage;
-(_DKCoreDataStorage *)syncStorage;
-(char)deleteSyncStorage;
-(void)_databaseChangedWithNotification:(id)arg1 ;
-(char)coreDataStorage:(id)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)arg2 ;
-(char)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2 ;
-(id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2 ;
-(char)coreDataStorage:(id)arg1 willAutoMigrateStoreAtURL:(id)arg2 fromManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(unsigned long long)eventCount;
-(id)eventCountPerStreamName;
-(void)saveHistogram:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)deleteHistogram:(id)arg1 ;
-(id)fetchLocalChangesSinceDate:(id)arg1 error:(id*)arg2 ;
-(id)fetchSyncChangesSinceDate:(id)arg1 error:(id*)arg2 ;
-(char)saveChangeSetsForSync:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)lastSequenceNumberForChangeSetWithEntityName:(id)arg1 error:(id*)arg2 ;
-(void)startSyncDownFromCloudWithResponseQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)startSyncUpToCloudWithResponseQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)lastChangeSetWithEntityName:(id)arg1 error:(id*)arg2 ;
-(id)sourceDeviceIdentity;
-(id)syncStorageAssertion;
-(void)setTombstonePolicy:(_DKTombstonePolicy *)arg1 ;
-(char)localOnly;
-(id)syncPeersWithError:(id*)arg1 ;
-(char)saveSyncPeer:(id)arg1 error:(id*)arg2 ;
-(void)removeSyncPeer:(id)arg1 ;
@end

