/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, WBSSQLiteDatabase;

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject {

	NSURL* _databaseURL;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	WBSSQLiteDatabase* _database;

}
+(id)_defaultDatabaseURL;
+(id)standardStore;
-(long long)_schemaVersion;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)closeDatabase;
-(void)_openDatabaseIfNeeded;
-(long long)_idForThirdPartyWithHighLevelDomain:(id)arg1 ;
-(long long)_idForFirstPartyWithHighLevelDomain:(id)arg1 ;
-(void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 onFirstParty:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_clearStatisticsAfter:(id)arg1 before:(id)arg2 ;
-(void)_clearStatisticsForDomain:(id)arg1 ;
-(void)_deleteUnusedDomains;
-(void)_closeDatabaseOnDatabaseQueue;
-(void)_openDatabase;
-(void)_configureDatabase;
-(void)_createDatabaseSchemaIfNeeded;
-(void)recordThirdPartyResourceBlocked:(id)arg1 onFirstParty:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearAllStatisticsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearStatisticsAfter:(id)arg1 before:(id)arg2 ;
-(void)clearStatisticsForDomains:(id)arg1 ;
@end

