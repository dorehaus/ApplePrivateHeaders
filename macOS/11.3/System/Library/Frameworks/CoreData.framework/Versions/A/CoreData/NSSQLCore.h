/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStore.h>
#import <libobjc.A.dylib/NSFilePresenter.h>
#import <libobjc.A.dylib/NSSQLModelProvider.h>

@class NSURL, NSOperationQueue, NSSet, NSSQLModel, NSSQLiteAdapter, NSSQLiteConnection, NSSQLCoreDispatchManager, NSGenerationalRowCache, _NSSQLCoreConnectionObsever, NSMutableDictionary, NSString, _PFMutex, NSDictionary, NSData;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter, NSSQLModelProvider> {

	NSSQLModel* _model;
	NSSQLiteAdapter* _adapter;
	NSSQLiteConnection* _schemaValidationConnection;
	NSSQLCoreDispatchManager* _dispatchManager;
	NSGenerationalRowCache* _generationalRowCache;
	_NSSQLCoreConnectionObsever* _observer;
	os_unfair_lock_s _sqlCoreStateLock;
	NSMutableDictionary* _storeMetadata;
	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	NSString* _fileBackedFuturesPath;
	int _transactionInMemorySequence;
	char _metadataIsClean;
	struct {
		unsigned useSyntaxColoredLogging : 1;
		unsigned hasExternalDataReferences : 1;
		unsigned fileProtectionType : 3;
		unsigned notifyFOKChanges : 1;
		unsigned initializationComplete : 1;
		unsigned connectionsAreLocal : 1;
		unsigned isXPCDelegate : 1;
		unsigned queryGenerationInitializationFailed : 1;
		unsigned persistentHistoryTracking : 1;
		unsigned hasAncillaryModels : 1;
		unsigned postRemoteNotify : 1;
		unsigned hasFileBackedFutures : 1;
		unsigned isInMemory : 1;
		unsigned _debugRequestsHandling : 1;
		unsigned historyBatchUpdateModProperties : 1;
		unsigned indexTracking : 1;
		unsigned _RESERVED : 14;
	}  _sqlCoreFlags;
	NSSQLiteConnection* _queryGenerationTrackingConnection;
	_PFMutex* _writerSerializationMutex;
	NSDictionary* _ancillaryModels;
	NSDictionary* _ancillarySQLModels;
	NSDictionary* _historyTrackingOptions;
	NSData* _dbKey;
	id _usedIndexes;
	char _remoteStoresDidChange;
	int _remoteNotificationToken;

}

@property (nonatomic,readonly) NSSQLModel * model; 
@property (nonatomic,readonly) char isInitialized; 
@property (nonatomic,readonly) NSDictionary * ancillaryModels;                           //@synthesize ancillaryModels=_ancillaryModels - In the implementation block
@property (readonly) char remoteStoresDidChange; 
@property (nonatomic,readonly) char isInMemory; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)migrationManagerClass;
+(Class)rowCacheClass;
+(char)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(char)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(char)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id*)arg4 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(void)setDebugDefault:(int)arg1 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(char)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(char)dropPersistentHistoryforPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_databaseKeyFromValue:(id)arg1 ;
+(char)coloredLoggingDefault;
+(id)databaseKeyFromOptionsDictionary:(id)arg1 ;
+(int)debugDefault;
+(char)sanityCheckFileAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(void)setColoredLoggingDefault:(char)arg1 ;
+(char)useConcurrentFetching;
+(long long)bufferedAllocationsOverride;
+(void)initialize;
+(id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2 ;
+(id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(char)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
-(char)_unload:(id*)arg1 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(Class)_objectIDClass;
-(id)currentQueryGeneration;
-(NSDictionary *)ancillaryModels;
-(Class)objectIDFactoryForEntity:(id)arg1 ;
-(char)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(char)_isCloudKitOptioned;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(char)supportsConcurrentRequestHandling;
-(char)supportsGenerationalQuerying;
-(char)_hasActiveGenerations;
-(void)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_rebuildIndiciesSynchronously:(char)arg1 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(char)finishDeferredLightweightMigration:(char)arg1 withError:(id*)arg2 ;
-(id)externalDataReferencesDirectory;
-(id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)entityForEntityDescription:(id)arg1 ;
-(id)_externalDataLinksDirectory;
-(void)_initializeQueryGenerationConnectionForProtectionClasses;
-(char)hasHistoryTracking;
-(void)_disconnectAllConnections;
-(id)ancillarySQLModels;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(void)_ensureDatabaseMatchesModel;
-(void)setConnectionsAreLocal:(char)arg1 ;
-(void)_checkAndRepairCorrelationTables:(char)arg1 storeVersionNumber:(id)arg2 usingConnection:(id)arg3 ;
-(id)_dissectCorrelationTableCreationSQL:(id)arg1 ;
-(id)_collectSkewedComponents:(id*)arg1 usingConnection:(id)arg2 ;
-(void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(char)arg4 usingConnection:(id)arg5 ;
-(id)fetchTableNames;
-(char)_rebuildTriggerSchemaUsingConnection:(id)arg1 recomputeValues:(char)arg2 error:(id*)arg3 ;
-(char)_rebuildRTreeTriggerSchemaUsingConnection:(id)arg1 recomputeValues:(char)arg2 error:(id*)arg3 ;
-(char)_rebuildDerivedAttributeTriggerSchemaUsingConnection:(id)arg1 recomputeValues:(char)arg2 error:(id*)arg3 ;
-(char)_updateToVersion640PrimaryKeyTableUsingStatements:(id)arg1 connection:(id)arg2 ;
-(void)_fixPrimaryKeyTableFromEntitiesAndJoinsUsingConnection:(id)arg1 ;
-(void)_fixPrimaryKeyTableFromEntitiesUsingConnection:(id)arg1 ;
-(id)schemaValidationConnection;
-(void)_doBasicTableNameCheckUsingConnection:(id)arg1 ;
-(char)_checkAndRepairSchemaUsingConnection:(id)arg1 ;
-(void)_doUnboundedGrowthCheckAndConstraintUsingConnection:(id)arg1 ;
-(void)_cacheModelIfNecessaryUsingConnection:(id)arg1 ;
-(char)_checkAndRepairTriggersUsingConnection:(id)arg1 ;
-(void)_checkAndRepairHistoryTrackingUsingConnection:(id)arg1 ;
-(char)_fixPrimaryKeyTablesUsingConnection:(id)arg1 ;
-(void)_setMetadata:(id)arg1 clean:(char)arg2 ;
-(void)dispatchRequest:(id)arg1 withRetries:(long long)arg2 ;
-(id)_loadAndSetMetadata;
-(id)notifyPostName;
-(id)rowCacheForGeneration:(id)arg1 ;
-(id)rowCacheForContext:(id)arg1 ;
-(id)_newValuesForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)entityForFetchRequest:(id)arg1 ;
-(char)hasIndexTracking;
-(id)entityForObject:(id)arg1 ;
-(id)_obtainPermanentIDsForObjects:(id)arg1 withNotification:(id*)arg2 error:(id*)arg3 ;
-(id)processFetchRequest:(id)arg1 inContext:(id)arg2 ;
-(id)processCountRequest:(id)arg1 inContext:(id)arg2 ;
-(id)processSaveChanges:(id)arg1 forContext:(id)arg2 ;
-(id)processRefreshObjects:(id)arg1 inContext:(id)arg2 ;
-(id)processBatchInsert:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processBatchUpdate:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processBatchDelete:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processChangeRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processCloudKitMirroringRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processSQLiteIndexStatisticsRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processCloudKitContainerEventRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)_supportDirectoryPath;
-(id)externalDataLinksDirectory;
-(char)_initializeQueryGenerationTrackingConnection;
-(char)supportsComplexFeatures;
-(char)_isQueryGenerationSupportActive;
-(int)_registerNewQueryGenerationSnapshot:(id)arg1 ;
-(char)remoteStoresDidChange;
-(char)isUbiquitized;
-(void)resetExternalDataReferencesDirectories;
-(void)_useModel:(id)arg1 ;
-(void)setExclusiveLockingMode:(char)arg1 ;
-(id)failableRowCacheForGeneration:(id)arg1 ;
-(id)harvestIndexStatisticsFromConnections;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(void)dropUbiquityTables;
-(id)fetchUbiquityKnowledgeVector;
-(void)updateUbiquityKnowledgeVector:(id)arg1 ;
-(void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(void)replaceUbiquityKnowledgeVector:(id)arg1 ;
-(id)allPeerRanges;
-(void)addPeerRange:(id)arg1 ;
-(void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6 ;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntities:(id)arg1 ;
-(void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2 ;
-(id)ubiquityTableKeysAndValues;
-(id)ubiquityTableValueForKey:(id)arg1 ;
-(void)configureUbiquityMetadataTable;
-(void)_dropHistoryTables;
-(id)entityForObjectID:(id)arg1 ;
-(Class)objectIDFactoryForPersistentHistoryEntity:(id)arg1 ;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(id)newForeignKeyID:(long long)arg1 entity:(id)arg2 ;
-(void)_postChangeNotificationWithTransactionID:(id)arg1 ;
-(void)writeSerializationLock;
-(void)writeSerializationUnlock;
-(void)removeRowCacheForGenerationWithIdentifier:(id)arg1 ;
-(id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3 ;
-(id)_newRowDataForXPCFetch:(id)arg1 variables:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(id)metadataToWrite;
-(id)fileBackedFuturesDirectory;
-(id)externalLocationForFileWithUUID:(id)arg1 ;
-(id)safeguardLocationForFileWithUUID:(id)arg1 ;
-(void)_updateAutoVacuumMetadataWithValues:(id)arg1 ;
-(id)_queryGenerationTrackingConnection;
-(void)recordRemoteQueryGenerationDidChange;
-(id)dispatchManager;
-(id)connectionForMigration;
-(id)_debugConnection;
-(int)fileProtectionLevel;
-(void)_cacheRows:(id)arg1 ;
-(void)_uncacheRows:(id)arg1 ;
-(char)shouldNotifyFOKChanges;
-(void)_purgeRowCache;
-(void)removeUbiquityMetadata;
-(id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2 ;
-(void)recomputePrimaryKeyMaxForEntities:(id)arg1 ;
-(id)_newReservedKeysForEntities:(id)arg1 counts:(id)arg2 ;
-(id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2 ;
-(char)hasAncillaryModels;
-(void)_setHasAncillaryModels:(char)arg1 ;
-(id)dbKey;
-(char)hasHistoryBatchUpdatePropertiesOption;
-(id)entitiesToInclude;
-(id)entitiesToExclude;
-(void)dealloc;
-(id)type;
-(id)identifier;
-(void)setURL:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSQLModel *)model;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(char)load:(id*)arg1 ;
-(id)cachedModelWithError:(id*)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)adapter;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)_setMetadata:(id)arg1 ;
-(char)isInMemory;
-(char)isInitialized;
-(char)_refreshTriggerValues:(id*)arg1 ;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)_setupObserver;
-(char)loadMetadata:(id*)arg1 ;
-(id)currentChangeToken;
@end

