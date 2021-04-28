/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator;

@interface CNPersistentStoreCoordinatorResult : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	char _pristineDatabase;
	char _didMigrate;

}

@property (readonly) NSPersistentStoreCoordinator * coordinator;                   //@synthesize coordinator=_coordinator - In the implementation block
@property (getter=isPristineDatabase,readonly) char pristineDatabase;              //@synthesize pristineDatabase=_pristineDatabase - In the implementation block
@property (readonly) char didMigrate;                                              //@synthesize didMigrate=_didMigrate - In the implementation block
+(id)resultsWithCoordinator:(id)arg1 pristineDatabase:(char)arg2 didMigrate:(char)arg3 ;
+(id)resultsWithCoordinator:(id)arg1 pristineDatabase:(char)arg2 ;
-(NSPersistentStoreCoordinator *)coordinator;
-(char)isPristineDatabase;
-(char)didMigrate;
-(id)initWithCoordinator:(id)arg1 pristineDatabase:(char)arg2 didMigrate:(char)arg3 ;
@end

