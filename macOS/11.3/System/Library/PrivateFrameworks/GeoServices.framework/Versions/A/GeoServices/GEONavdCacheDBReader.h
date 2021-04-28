/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBReader.h>

@interface GEONavdCacheDBReader : GEODBReader {

	sqlite3_stmtRef _sqlReadAllEntries;
	sqlite3_stmtRef _sqlReadEntriesForHash;
	sqlite3_stmtRef _sqlReadKeysForHash;
	sqlite3_stmtRef _sqlReadNextTimerTimeStamp;
	sqlite3_stmtRef _sqlReadEntriesBeforeTimeStamp;
	sqlite3_stmtRef _sqlReadRowIdsOfEntriesBeforeTimeStamp;
	sqlite3_stmtRef _sqlReadEntryWithRowId;
	sqlite3_stmtRef _sqlCountEntries;

}
-(void)dealloc;
-(void)_openDB;
-(void)_cacheEntryForNextRefreshWithHandler:(/*^block*/id)arg1 ;
-(void)_cacheRowIdsOfEntriesBeforeTimeStamp:(double)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheKeysForHash:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheEntryWithRowId:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_cacheEntriesForHash:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_allCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(long long)_numberOfEntries;
-(void)_openDBIfNotAlreadyOpen;
-(void)_cacheEntriesBeforeTimeStamp:(double)arg1 withHandler:(/*^block*/id)arg2 ;
@end

