/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABPersistentStoreCoordinatorMap;

@interface ABPersistentStoreCoordinatorUpdater : NSObject {

	ABPersistentStoreCoordinatorMap* _coordinatorMap;
	char _readOnly;
	char _isPristine;

}

@property (assign) char isPristine;              //@synthesize isPristine=_isPristine - In the implementation block
-(void)dealloc;
-(char)isPristine;
-(id)updatePersistentStoresInCacheWithKey:(id)arg1 newAccounts:(id)arg2 ;
-(void)checkIfMainDatabaseInResultsIsPristine:(id)arg1 forCacheKey:(id)arg2 ;
-(id)storeUrlsForCoordinator:(id)arg1 ;
-(id)scopeAccountUrls:(id)arg1 forCacheKey:(id)arg2 ;
-(id)makeStoreBuilderWithCoordinator:(id)arg1 ;
-(void)updatePersistentStoresWithBuilder:(id)arg1 oldUrls:(id)arg2 newUrls:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(void)updatePersistentStoresWithBuilder:(id)arg1 addedUrls:(id)arg2 removedUrls:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(void)setIsPristine:(char)arg1 ;
-(id)initWithCoordinatorMap:(id)arg1 readOnly:(char)arg2 ;
-(void)updatePersistentStoresForAccounts:(id)arg1 ;
@end

