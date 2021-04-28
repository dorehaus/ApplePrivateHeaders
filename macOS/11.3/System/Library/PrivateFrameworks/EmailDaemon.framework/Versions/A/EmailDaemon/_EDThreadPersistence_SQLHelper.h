/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistenceDatabaseConnection, _EDThreadPersistence_StatementCache;

@interface _EDThreadPersistence_SQLHelper : NSObject {

	EDPersistenceDatabaseConnection* _connection;
	_EDThreadPersistence_StatementCache* _cache;

}

@property (nonatomic,readonly) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) _EDThreadPersistence_StatementCache * cache;               //@synthesize cache=_cache - In the implementation block
-(EDPersistenceDatabaseConnection *)connection;
-(_EDThreadPersistence_StatementCache *)cache;
-(id)initWithCache:(id)arg1 ;
-(int)executeUpdateSQL:(id)arg1 bindings:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(long long)executeUpsertSQL:(id)arg1 bindings:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(char)executeSelectSQL:(id)arg1 bindings:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 rowHandler:(/*^block*/id)arg4 ;
-(char)executeSQL:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(char)executeSQL:(id)arg1 indexBindings:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
@end

