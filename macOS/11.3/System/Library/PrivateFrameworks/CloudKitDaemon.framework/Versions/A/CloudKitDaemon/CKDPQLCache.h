/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PQLConnection, NSHashTable, NSObject, NSString, NSArray;

@interface CKDPQLCache : NSObject {

	PQLConnection* _pdb;
	NSHashTable* _contexts;
	NSObject*<OS_dispatch_queue> _dbQueue;
	unsigned long long _openHandles;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dbQueue;              //@synthesize dbQueue=_dbQueue - In the implementation block
@property (assign,nonatomic) unsigned long long openHandles;                    //@synthesize openHandles=_openHandles - In the implementation block
@property (nonatomic,readonly) NSHashTable * contexts;                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,readonly) PQLConnection * database;                        //@synthesize pdb=_pdb - In the implementation block
@property (nonatomic,readonly) char isOpen; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSArray * createInitialTablesSQL; 
-(NSString *)path;
-(char)isOpen;
-(char)openWithError:(id*)arg1 ;
-(PQLConnection *)database;
-(NSHashTable *)contexts;
-(char)resetWithError:(id*)arg1 ;
-(char)closeWithError:(id*)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dbQueue;
-(NSArray *)createInitialTablesSQL;
-(id)infoToUpgradeFromVersion:(unsigned long long)arg1 ;
-(char)_setupConnectionWithError:(id*)arg1 ;
-(char)_truncateAndReconnectToDatabaseWithError:(id*)arg1 ;
-(char)removeCorruptDatabaseWithError:(id*)arg1 ;
-(id)_newConnection:(id)arg1 ;
-(char)_setupCacheWithError:(id*)arg1 ;
-(unsigned long long)openHandles;
-(void)setOpenHandles:(unsigned long long)arg1 ;
-(char)_lockedOpenDatabase:(id*)arg1 ;
-(char)removeDatabaseFilesWithError:(id*)arg1 ;
-(void)performOnDBQueue:(/*^block*/id)arg1 ;
-(char)_closeWithError:(id*)arg1 force:(char)arg2 ;
-(char)forceCloseWithError:(id*)arg1 ;
-(void)setDbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

