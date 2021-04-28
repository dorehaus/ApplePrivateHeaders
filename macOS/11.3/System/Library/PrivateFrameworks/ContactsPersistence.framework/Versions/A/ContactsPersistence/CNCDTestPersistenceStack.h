/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CNCDTestPersistenceStack : NSObject {

	NSManagedObjectModel* _model;
	NSPersistentStoreCoordinator* _coordinator;

}

@property (readonly) NSManagedObjectModel * model;                            //@synthesize model=_model - In the implementation block
@property (readonly) NSPersistentStoreCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(id)description;
-(id)init;
-(NSManagedObjectModel *)model;
-(NSPersistentStoreCoordinator *)coordinator;
-(id)initWithModel:(id)arg1 ;
-(id)makeContext;
-(id)addInMemoryStore;
-(id)addSQLiteStoreWithURL:(id)arg1 ;
-(id)makeDeprecatedLockableContext;
-(void)performWithSession:(/*^block*/id)arg1 ;
-(id)resultWithSession:(/*^block*/id)arg1 ;
@end
