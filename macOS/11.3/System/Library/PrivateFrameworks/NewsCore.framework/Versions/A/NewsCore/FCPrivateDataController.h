/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>
#import <libobjc.A.dylib/FCPrivateZoneSyncManagerDelegate.h>
#import <libobjc.A.dylib/FCPrivateRecordSyncManagerDelegate.h>
#import <libobjc.A.dylib/FCCommandQueueDelegate.h>
#import <libobjc.A.dylib/FCCKZoneRestorationSource.h>
#import <libobjc.A.dylib/FCCKZonePruningAssistant.h>

@class FCPushNotificationCenter, NSString, FCCommandQueue, NSArray, FCAsyncSerialQueue, NSHashTable, FCCloudContext, FCKeyValueStore;

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant> {

	char _waitingForFirstSync;
	char _preparedForUse;
	char _syncingEnabled;
	FCPushNotificationCenter* _pushNotificationCenter;
	NSString* _storeDirectory;
	FCCommandQueue* _commandQueue;
	NSArray* _syncManagers;
	unsigned long long _changeCount;
	FCAsyncSerialQueue* _syncQueue;
	NSHashTable* _stateObservers;
	FCCloudContext* _context;
	NSHashTable* _observers;
	FCKeyValueStore* _localStore;

}

@property (getter=isSyncingEnabled,nonatomic,readonly) char syncingEnabled; 
@property (assign,getter=isSyncingEnabled,nonatomic) char syncingEnabled;                //@synthesize syncingEnabled=_syncingEnabled - In the implementation block
@property (nonatomic,readonly) FCCloudContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) FCKeyValueStore * localStore;                             //@synthesize localStore=_localStore - In the implementation block
@property (getter=isDirty,nonatomic,readonly) char dirty; 
@property (getter=isWaitingForFirstSync,readonly) char waitingForFirstSync; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(char)isLocalStoreKeyInternal:(id)arg1 ;
+(id)internalLocalStoreKeys;
+(char)requiresPushNotificationSupport;
+(char)requiresBatchedSync;
+(char)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(void)populateLocalStoreClassRegistry:(id)arg1 ;
+(id)localStoreMigrator;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FCCloudContext *)context;
-(NSHashTable *)observers;
-(char)isDirty;
-(void)saveWithCompletion:(/*^block*/id)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)setSyncingEnabled:(char)arg1 ;
-(char)isSyncingEnabled;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)addCommandToCommandQueue:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(char)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(void)markAsDirty;
-(char)canHelpPruneZoneName:(id)arg1 ;
-(id)pruneRecords:(id)arg1 forZoneName:(id)arg2 ;
-(double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1 ;
-(unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1 ;
-(id)jsonEncodableObject;
-(void)recordSyncManagerNotifyObservers:(id)arg1 ;
-(void)recordSyncManager:(id)arg1 stateDidChange:(id)arg2 ;
-(void)forceSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(void)handleSyncCompletion;
-(char)isWaitingForFirstSync;
-(void)performFirstSyncWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg1 ;
-(void)zoneSyncManager:(id)arg1 stateDidChange:(id)arg2 ;
-(void)zoneSyncManagerNotifyObservers:(id)arg1 ;
-(long long)qualityOfServiceForNextCommandInCommandQueue:(id)arg1 ;
-(void)syncWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performFirstSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)addStateObserver:(id)arg1 ;
-(void)removeStateObserver:(id)arg1 ;
-(char)isBackedByAnyRecordZoneIDsInSet:(id)arg1 ;
-(void)_possiblySimulateCrashWithMessage:(id)arg1 ;
-(void)enableSyncing;
-(void)disableSyncing;
-(void)createLocalStore;
-(void)mergeLocalStoreWithCloud;
-(void)prepareForUse;
-(void)assertReadyForUse;
@end

