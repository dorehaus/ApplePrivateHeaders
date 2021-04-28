/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_PASDatabaseMigrationProtocol.h>

@class NSRecursiveLock, PPSQLDatabaseHandlePool, NSCondition, NSString;

@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol> {

	NSRecursiveLock* _writeLock;
	PPSQLDatabaseHandlePool* _handlePool;
	NSCondition* _handlePoolCond;
	NSString* _path;
	NSString* _parentDirectory;
	unsigned char _migrationCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)tableNameForTable:(unsigned char)arg1 ;
+(id)nonMigratingToolsInstance;
+(id)nonMigratingToolsInstanceWithParentDirectory:(id)arg1 ;
+(void)dropTableWithName:(id)arg1 txnWitness:(id)arg2 ;
+(id)createTempTableContainingRowsFromQuery:(id)arg1 descriptiveTableName:(id)arg2 txnWitness:(id)arg3 bind:(/*^block*/id)arg4 ;
-(id)init;
-(id)stats;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
-(id)databaseHandle;
-(char)isInMemory;
-(char)_removeCorruptionMarker;
-(char)migrateToVersion:(unsigned)arg1 ;
-(id)_initInStandardParentDirectoryWithPerformMigrations:(char)arg1 ;
-(id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(char)arg1 ;
-(id)initWithParentDirectory:(id)arg1 performMigrations:(char)arg2 ;
-(id)_initWithPath:(id)arg1 performMigrations:(char)arg2 ;
-(id)_openFreshHandleForClient:(unsigned char)arg1 ;
-(void)_enableQueryLoggingForHandle:(id)arg1 ;
-(void)_disableQueryLoggingForHandle:(id)arg1 ;
-(id)_nullableHandleWithClient:(unsigned char)arg1 ;
-(id)handleWithClient:(unsigned char)arg1 ;
-(id)_acquireReadOnlyHandleWithClient:(unsigned char)arg1 ;
-(void)_releaseReadOnlyHandle:(id)arg1 client:(unsigned char)arg2 ;
-(void)readTransactionWithClient:(unsigned char)arg1 block:(/*^block*/id)arg2 ;
-(void)writeTransactionWithClient:(unsigned char)arg1 block:(/*^block*/id)arg2 ;
-(char)writeTransactionWithClient:(unsigned char)arg1 timeoutInSeconds:(double)arg2 block:(/*^block*/id)arg3 ;
-(id)parentDirectory;
-(id)sourceStatsWithMedianRefCountNeeded:(char)arg1 table:(id)arg2 txnWitness:(id)arg3 ;
-(id)sourceStatsForTableWithName:(id)arg1 medianRefCountNeeded:(char)arg2 txnWitness:(id)arg3 ;
-(id)sourceStatsWithMedianRefCountNeeded:(char)arg1 ;
-(id)checkWithError:(id*)arg1 ;
-(id)_allTables;
-(char)optimizeDatabaseWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(char)_isCorruptionMarkerPresent;
-(char)_handleCorruption;
-(char)unmigrate;
-(unsigned long long)maxSchemaVersion;
-(char)_prepareDatabaseHandleForMigration;
-(unsigned char)migration_ConvertLocationDescriptionsToLowercase;
@end

