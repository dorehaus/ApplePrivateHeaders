/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNCDIOSLegacyIdentifierRegistration;
@class NSURL, NSString, NSPersistentStoreCoordinator, CNPersistentStoreDescription, NSPersistentStore, NSError;

@interface CNCDDatabasePreparationTask : CNTask {

	BOOL _readOnly;
	BOOL _pristineDatabase;
	BOOL _shouldCachePSC;
	BOOL _didMigrate;
	BOOL _shouldAddAsReadOnly;
	NSURL* _url;
	NSString* _path;
	NSPersistentStoreCoordinator* _coordinator;
	CNPersistentStoreDescription* _storeDescription;
	NSPersistentStore* _store;
	NSError* _error;
	id<CNCDIOSLegacyIdentifierRegistration> _legacyIdentifierRegistrar;

}

@property (nonatomic,copy,readonly) NSURL * url;                                                               //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                                                                  //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) NSString * path;                                                                //@synthesize path=_path - In the implementation block
@property (getter=isPristineDatabase) BOOL pristineDatabase;                                                   //@synthesize pristineDatabase=_pristineDatabase - In the implementation block
@property (assign) BOOL shouldCachePSC;                                                                        //@synthesize shouldCachePSC=_shouldCachePSC - In the implementation block
@property (assign) BOOL didMigrate;                                                                            //@synthesize didMigrate=_didMigrate - In the implementation block
@property (assign) BOOL shouldAddAsReadOnly;                                                                   //@synthesize shouldAddAsReadOnly=_shouldAddAsReadOnly - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator;                                     //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) CNPersistentStoreDescription * storeDescription;                                //@synthesize storeDescription=_storeDescription - In the implementation block
@property (retain) NSPersistentStore * store;                                                                  //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<CNCDIOSLegacyIdentifierRegistration> legacyIdentifierRegistrar;              //@synthesize legacyIdentifierRegistrar=_legacyIdentifierRegistrar - In the implementation block
@property (copy) NSError * error;                                                                              //@synthesize error=_error - In the implementation block
+(id)outOfProcessPreparationTaskWithRequest:(id)arg1 ;
+(void)configureLegacyIdentifierDefaultsInManagedObjectModel:(id)arg1 ;
+(BOOL)shouldTryAutomaticMigrationAfterError:(id)arg1 ;
+(id)coordinatorWithUnconstrainedModel;
+(id)preparationTaskWithRequest:(id)arg1 ;
+(id)inProcessPreparationTaskWithRequest:(id)arg1 ;
-(id)description;
-(id)init;
-(NSError *)error;
-(NSString *)path;
-(void)setError:(NSError *)arg1 ;
-(NSURL *)url;
-(NSPersistentStore *)store;
-(id)managedObjectModel;
-(BOOL)readOnly;
-(void)setStore:(NSPersistentStore *)arg1 ;
-(CNPersistentStoreDescription *)storeDescription;
-(NSPersistentStoreCoordinator *)coordinator;
-(id)initWithRequest:(id)arg1 ;
-(id)run:(id*)arg1 ;
-(BOOL)isPristineDatabase;
-(BOOL)didMigrate;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 legacyIdentifierRegistrar:(id)arg3 ;
-(void)setupInitialState;
-(void)preflightDatabaseFile;
-(void)removeDotNewPathForDatabasePath;
-(void)tryToAddPersistentStore;
-(char)databaseConstraintCleanupNeeded;
-(void)migrateToUnconstrainedDatabaseAndRepairConstraintViolations;
-(char)databaseMigrationNeeded;
-(void)migrateLabels;
-(void)migratePhoneNumbers;
-(void)migrateOrphanProperties;
-(void)migrateContactIndex;
-(void)promotePreviouslyUnknownPropertiesToKnownProperties;
-(void)migrateCardDAVLegacyCustomProperties;
-(void)adoptRecordsIntoContainers;
-(void)cleanUpDuplicateInfoObjects;
-(void)moveAsideDatabaseIfNeeded;
-(void)rebuildIOSLegacyIdentifiersIfNeeded;
-(char)didAddStore;
-(void)updateMetdataIfNeeded;
-(void)emptySaveIfNeeded;
-(void)logFailureMessage;
-(id)prepareReturnValue;
-(char)databaseFileIsMissing;
-(char)databaseFileIsEmpty;
-(id)urlByCopyingToTemporaryUrl:(id)arg1 ;
-(void)addSqlitePersistentStoreWithURL:(id)arg1 ;
-(void)_coreDataR10319914Hack:(id)arg1 ;
-(id)optionsWithoutMigrationForStoreAtUrl:(id)arg1 ;
-(id)optionsWithMigrationForStoreAtUrl:(id)arg1 ;
-(void)migrateCustomPropertiesInContext:(id)arg1 store:(id)arg2 ;
-(void)consolidateDuplicateContainersInContext:(id)arg1 store:(id)arg2 ;
-(id<CNCDIOSLegacyIdentifierRegistration>)legacyIdentifierRegistrar;
-(void)moveAsideDatabaseWithReason:(id)arg1 message:(id)arg2 ;
-(void)logPersistentStoreTracerFailureWithMessage:(id)arg1 error:(id)arg2 ;
-(void)moveAsideDatabaseAtPath:(id)arg1 reason:(id)arg2 ;
-(char)shouldUpdateMetadata;
-(void)updateMetdata;
-(unsigned long long)storeOptionsWithMigrateIfNecessary:(BOOL)arg1 ;
-(void)setPristineDatabase:(BOOL)arg1 ;
-(BOOL)shouldCachePSC;
-(void)setShouldCachePSC:(BOOL)arg1 ;
-(void)setDidMigrate:(BOOL)arg1 ;
-(BOOL)shouldAddAsReadOnly;
-(void)setShouldAddAsReadOnly:(BOOL)arg1 ;
@end
