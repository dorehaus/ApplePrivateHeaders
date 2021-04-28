/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@class ABAddressBook;

@interface ABFindVisibleSystemGroupsTask : CNTask {

	ABAddressBook* _addressBook;

}

@property (readonly) ABAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(id)description;
-(id)init;
-(id)run:(id*)arg1 ;
-(id)initWithAddressBook:(id)arg1 ;
-(ABAddressBook *)addressBook;
-(id)findHomeGroups;
-(id)findDupesOfHomeGroups:(id)arg1 ;
@end
