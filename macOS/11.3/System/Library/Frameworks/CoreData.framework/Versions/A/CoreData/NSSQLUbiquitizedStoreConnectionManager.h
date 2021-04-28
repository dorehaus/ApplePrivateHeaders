/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLConnectionManager.h>

@class NSSQLiteConnection;

@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager {

	NSSQLiteConnection* _connection;

}
-(char)routeStoreRequest:(id)arg1 ;
-(void)setExclusiveLockingMode:(char)arg1 ;
-(char)handleStoreRequest:(id)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(id)initializationConnection;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)disconnectAllConnections;
@end

