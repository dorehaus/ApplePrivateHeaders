/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMStore;

@interface REMListsDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedListIDs:(id)arg4 ;
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 ;
+(id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedExternalIdentifiers:(id)arg4 ;
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)fetchListWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchDefaultListWithError:(id*)arg1 ;
-(id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchEligibleDefaultListsWithError:(id*)arg1 ;
-(id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAllListsWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
-(id)debugFetchPhantomListsWithError:(id*)arg1 ;
-(id)fetchListsInAccount:(id)arg1 error:(id*)arg2 ;
-(id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
-(id)fetchListsInGroup:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsIncludingMarkedForDeleteWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsIncludingSpecialContainersWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchListsWithExternalIdentifiers:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
@end
