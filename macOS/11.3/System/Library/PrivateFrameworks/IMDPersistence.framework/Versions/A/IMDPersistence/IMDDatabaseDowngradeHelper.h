/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/Versions/A/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMDPersistence/IMDPersistence-Structs.h>
@class NSString, NSArray;

@interface IMDDatabaseDowngradeHelper : NSObject {

	char _inTransaction;
	sqlite3Ref _database;
	NSString* _path;
	long long _downgradesToVersion;
	NSArray* _tableNames;
	NSArray* _createIndexesSQL;
	NSArray* _createTablesSQL;
	NSArray* _createTriggersSQL;

}

@property (nonatomic,retain) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSArray * tableNames;                         //@synthesize tableNames=_tableNames - In the implementation block
@property (nonatomic,retain) NSArray * createIndexesSQL;                   //@synthesize createIndexesSQL=_createIndexesSQL - In the implementation block
@property (nonatomic,retain) NSArray * createTablesSQL;                    //@synthesize createTablesSQL=_createTablesSQL - In the implementation block
@property (nonatomic,retain) NSArray * createTriggersSQL;                  //@synthesize createTriggersSQL=_createTriggersSQL - In the implementation block
@property (nonatomic,readonly) char isOpen; 
@property (nonatomic,readonly) sqlite3Ref database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long downgradesToVersion;              //@synthesize downgradesToVersion=_downgradesToVersion - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(char)open:(/*^block*/id)arg1 ;
-(char)close:(/*^block*/id)arg1 ;
-(char)isOpen;
-(sqlite3Ref)database;
-(void)setTableNames:(NSArray *)arg1 ;
-(NSArray *)tableNames;
-(char)commitTransaction:(/*^block*/id)arg1 ;
-(char)readDatabaseVersion:(/*^block*/id)arg1 ;
-(id)initWithPath:(id)arg1 tableNames:(id)arg2 createTablesSQL:(id)arg3 createIndexesSQL:(id)arg4 createTriggersSQL:(id)arg5 downgradesToVersion:(long long)arg6 ;
-(char)beginTransaction:(/*^block*/id)arg1 ;
-(char)createTables:(/*^block*/id)arg1 ;
-(char)createIndexes:(/*^block*/id)arg1 ;
-(char)revertTransaction:(/*^block*/id)arg1 ;
-(char)importDataFromWhitetailDatabaseWithSqlOperation:(IMDSqlOperation*)arg1 resultBlock:(/*^block*/id)arg2 ;
-(char)createTriggers:(/*^block*/id)arg1 ;
-(long long)downgradesToVersion;
-(char)writeDatabaseVersion:(long long)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id)errorFromResult:(int)arg1 query:(id)arg2 ;
-(char)runSimpleQuery:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(NSArray *)createTablesSQL;
-(char)runArrayOfQueries:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(NSArray *)createIndexesSQL;
-(NSArray *)createTriggersSQL;
-(char)cloneTableContents:(id)arg1 withOperation:(IMDSqlOperation*)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)setCreateIndexesSQL:(NSArray *)arg1 ;
-(void)setCreateTablesSQL:(NSArray *)arg1 ;
-(void)setCreateTriggersSQL:(NSArray *)arg1 ;
-(char)_readIntegerFromQuery:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(char)readRowCountForTable:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
@end

