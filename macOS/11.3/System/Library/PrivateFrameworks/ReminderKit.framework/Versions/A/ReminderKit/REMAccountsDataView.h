/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMStore;

@interface REMAccountsDataView : NSObject {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;              //@synthesize store=_store - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchAllAccountsWithError:(id*)arg1 ;
-(id)fetchAllAccountsForAccountManagementWithError:(id*)arg1 ;
-(id)fetchAllAccountsForDumpingWithError:(id*)arg1 ;
-(id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)accountsFromStorages:(id)arg1 ;
@end

