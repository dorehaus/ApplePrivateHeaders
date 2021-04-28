/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNCDPersistenceBackend, CNCDPersistenceChangesNotifier;
@class NSManagedObjectContext;

@interface CNCDPersistenceContext : NSObject {

	id<CNCDPersistenceBackend> _persistenceBackend;
	NSManagedObjectContext* _managedObjectContext;
	id _owningAddressBook;
	id<CNCDPersistenceChangesNotifier> _changesNotifier;
	char _registeredForDidSaveNotification;

}

@property (nonatomic,readonly) id<CNCDPersistenceBackend> persistenceBackend;                   //@synthesize persistenceBackend=_persistenceBackend - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                   //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) id owningAddressBook;                                            //@synthesize owningAddressBook=_owningAddressBook - In the implementation block
@property (nonatomic,readonly) id<CNCDPersistenceChangesNotifier> changesNotifier;              //@synthesize changesNotifier=_changesNotifier - In the implementation block
@property (nonatomic,readonly) char registeredForDidSaveNotification;                           //@synthesize registeredForDidSaveNotification=_registeredForDidSaveNotification - In the implementation block
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)notificationID;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainer;
-(id)executeFetchRequest:(id)arg1 ;
-(id)initWithPersistenceBackend:(id)arg1 managedObjectContext:(id)arg2 changesNotifier:(id)arg3 ;
-(id)initWithPersistenceBackend:(id)arg1 managedObjectContext:(id)arg2 owningAddressBook:(id)arg3 changesNotifier:(id)arg4 ;
-(void)managedObjectContextWillSave:(id)arg1 ;
-(id)performResultBlockWithManagedObjectContext:(/*^block*/id)arg1 ;
-(void)performBlockAndWaitWithManagedObjectContext:(/*^block*/id)arg1 ;
-(id)accountContainers;
-(id)storeUrlForContainerIdentifer:(id)arg1 ;
-(void)performBlockAndWaitWithContextAndCoordinator:(/*^block*/id)arg1 ;
-(id)storeForContainer:(id)arg1 inCoordinator:(id)arg2 ;
-(void)applyDiff:(id)arg1 toContainerWithIdentifier:(id)arg2 ;
-(id)storeForContainer:(id)arg1 ;
-(id)initWithPersistenceBackend:(id)arg1 managedObjectContext:(id)arg2 ;
-(char)saveManagedObjectContext:(id*)arg1 ;
-(void)assignManagedObject:(id)arg1 toStoreWithContainerIdentifier:(id)arg2 ;
-(id)storesForContainers:(id)arg1 ;
-(id)exchangeAccountContainers;
-(id)defaultPersistentStore;
-(id<CNCDPersistenceBackend>)persistenceBackend;
-(id)owningAddressBook;
-(id<CNCDPersistenceChangesNotifier>)changesNotifier;
-(char)registeredForDidSaveNotification;
@end
