/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNCDPersistenceStack;

@interface CNCDChangeHistoryStore : NSObject {

	CNCDPersistenceStack* _persistenceStack;

}

@property (nonatomic,readonly) CNCDPersistenceStack * persistenceStack;              //@synthesize persistenceStack=_persistenceStack - In the implementation block
+(char)contextHasPersistentStores:(id)arg1 ;
-(id)currentHistoryAnchor;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(char)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(char)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)resultWithManagedObjectContext:(/*^block*/id)arg1 ;
-(CNCDPersistenceStack *)persistenceStack;
-(id)initWithPersistenceStack:(id)arg1 ;
@end
