/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISDChangeSource.h>

@class NSString, ISDRecordStore, ISDRecordIdMapper, ISDSqliteChangeStore;

@interface ISDClientState : NSObject <ISDChangeSource> {

	NSString* _dataDirectory;
	NSString* _clientId;
	ISDRecordStore* _recordStore;
	ISDRecordIdMapper* _recordIdMapper;
	ISDSqliteChangeStore* _changeStore;
	id _resetHandler;
	unsigned long long _flushCount;
	id _dirtyCoderDelegate;
	char _isLocalClientType;
	char _isTransferClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordIdMapperForClientWithIdentifier:(id)arg1 inDataDirectory:(id)arg2 ;
-(void)dealloc;
-(void)compact;
-(void)vacuum;
-(id)clientId;
-(id)resetHandler;
-(void)setResetHandler:(id)arg1 ;
-(void)rollbackChanges;
-(void)disableSqliteTracing;
-(id)recordStore;
-(void)disableFlush;
-(void)enableFlush;
-(id)initWithClientDataDirectory:(id)arg1 clientId:(id)arg2 clientType:(id)arg3 clientIsTransferType:(char)arg4 ;
-(void)releaseState;
-(void)setDirtyCoderDelegate:(id)arg1 ;
-(id)recordIdMapper;
-(id)changeStore;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 ;
-(char)didCreateRecordIdMapper;
-(char)isLocalClientType;
-(void)removeAllChangesForEntityNames:(id)arg1 ;
-(void)dropIndexes;
-(void)recreateIndexes;
-(void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2 ;
-(id)dirtyCoderDelegate;
-(void)enumerateAddsForEntityNames:(id)arg1 asArgumentToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(void)disableFlushAndLockImmediately;
-(char)enumerateAddsForEntityNames:(id)arg1 state:(long long*)arg2 maxToEnumerate:(long long)arg3 asArgumentToFunction:(/*function pointer*/void*)arg4 context:(void*)arg5 ;
-(void)enumerateChangesForEntityNames:(id)arg1 asArgumentToFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(unsigned long long)removeEnumeratedChanges;
-(id)entityNamesOfAddedRecords;
-(unsigned)earliestFromGenerationOfAddedRecordsForEntityName:(id)arg1 ;
-(void)enableSqliteTracing;
-(char)isTransferClient;
-(id)commonClientId;
-(char)isConflictManager;
-(char)isUndoManager;
-(id)unacceptedRecordIdsForEntityName:(id)arg1 ;
-(char)enumerateChangesForEntityNames:(id)arg1 changeType:(int*)arg2 state:(long long*)arg3 maxToEnumerate:(long long)arg4 asArgumentToFunction:(/*function pointer*/void*)arg5 context:(void*)arg6 ;
-(void)updateChangePropertiesForChange:(id)arg1 ;
-(id)newSetOfDeletedRecordIdsForEntityNames:(id)arg1 ;
-(void)recycleDatabaseConnection;
-(id)initWithClientDataDirectory:(id)arg1 clientId:(id)arg2 clientType:(id)arg3 ;
-(char)didCreateRecordStore;
-(char)didCreateChangeStore;
@end

