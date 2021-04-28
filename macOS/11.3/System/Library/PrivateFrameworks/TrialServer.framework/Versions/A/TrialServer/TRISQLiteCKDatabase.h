/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/_PASDatabaseMigrationProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, _PASSqliteDatabase, NSObject;

@interface TRISQLiteCKDatabase : NSObject <_PASDatabaseMigrationProtocol> {

	NSString* _parentDir;
	NSString* _assetDir;
	NSString* _assetCacheDir;
	_PASSqliteDatabase* _db;
	NSObject*<OS_dispatch_queue> _opQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mockContainerWithIdentifier:(id)arg1 database:(id)arg2 ;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)saveRecordZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteRecordZoneWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
-(id)databaseHandle;
-(void)closePermanently;
-(char)migrateToVersion:(unsigned)arg1 ;
-(void)_processQueryOperation:(id)arg1 ;
-(void)_processFetchRecordsOperation:(id)arg1 ;
-(void)_processModifyRecordsOperation:(id)arg1 ;
-(id)_errorWithCode:(long long)arg1 message:(id)arg2 ;
-(char)_evalQueryOperationWithRecordType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultsLimit:(unsigned long long)arg4 desiredKeys:(id)arg5 txn:(id)arg6 error:(id*)arg7 recordFetchedBlock:(/*^block*/id)arg8 ;
-(id)_valueTypesForFieldsOfRecordType:(id)arg1 ;
-(char)_parseDesiredKeys:(id)arg1 recordType:(id)arg2 unindexedFields:(id*)arg3 indexedFields:(id*)arg4 error:(id*)arg5 ;
-(char)_translatePredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(id)_createRecordFromSelectRow:(id)arg1 recordType:(id)arg2 unindexedDesiredKeys:(id)arg3 indexedDesiredKeys:(id)arg4 txn:(id)arg5 error:(id*)arg6 ;
-(id)_keysForFieldsOfRecordType:(id)arg1 ;
-(id)_parseIndexedFieldKey:(id)arg1 indexRange:(NSRange*)arg2 ;
-(id)_loadArrayForRecordType:(id)arg1 recordId:(id)arg2 fieldKey:(id)arg3 indexRange:(NSRange)arg4 txn:(id)arg5 error:(id*)arg6 ;
-(char)_parseDecimalString:(id)arg1 value:(unsigned long long*)arg2 ;
-(char)_translateCompoundPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_translateComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_translateScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_translateArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_translateDirectModifiedScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_translateAnyModifiedScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_parseScalarExpression:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_translateDirectModifiedArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_translateAnyModifiedArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5 ;
-(char)_parseArrayExpression:(id)arg1 forRecordType:(id)arg2 usingCTEName:(id)arg3 toSQLCommonTableExpression:(id*)arg4 paramBindings:(id*)arg5 error:(id*)arg6 ;
-(id)_evalFetchRecordsOperationWithRecordIds:(id)arg1 recordType:(id)arg2 desiredKeys:(id)arg3 txn:(id)arg4 error:(id*)arg5 ;
-(void)_deleteRecordsWithRecordIds:(id)arg1 recordType:(id)arg2 txn:(id)arg3 ;
-(char)_upsertRecord:(id)arg1 txn:(id)arg2 error:(id*)arg3 ;
-(void)_bindParam:(int)arg1 toScalarValue:(id)arg2 forStatement:(id)arg3 ;
-(char)_replaceArrayFieldWithKey:(id)arg1 recordType:(id)arg2 recordId:(id)arg3 values:(id)arg4 txn:(id)arg5 error:(id*)arg6 ;
-(id)_createTableForRecordType:(id)arg1 scalarFields:(id)arg2 ;
-(id)_createTableForArrayFieldWithKey:(id)arg1 attachedToRecordType:(id)arg2 sqliteContainedType:(id)arg3 ;
-(id)initWithParentDir:(id)arg1 assetCacheDir:(id)arg2 ;
@end
