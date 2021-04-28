/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABAccount, ABAddressBook;

@interface ABAccountGroupEntriesBuilder : NSObject {

	ABAccount* _account;
	ABAddressBook* _addressBook;

}
-(id)initWithAccount:(id)arg1 addressBook:(id)arg2 ;
-(id)buildEntries;
-(id)groupsForEntries;
-(void)addEntryForGroup:(id)arg1 to:(id)arg2 ;
-(char)shouldAddEntryForGroup:(id)arg1 ;
-(id)entryForGroup:(id)arg1 ;
-(id)buildEntriesForGroups;
-(id)buildEntryForAllContacts:(unsigned long long)arg1 ;
-(id)buildEntryForSearching;
@end

