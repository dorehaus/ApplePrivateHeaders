/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FAFamilyMember, CNContactStore, ABAddressBook;

@interface CNContactPickerFamilyMemberScope : NSObject {

	FAFamilyMember* _familyMember;
	CNContactStore* _familyMemberScopedContactStore;
	ABAddressBook* _familyMemberScopedAddressBook;

}

@property (nonatomic,readonly) FAFamilyMember * familyMember;                                //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) CNContactStore * familyMemberScopedContactStore;              //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) ABAddressBook * familyMemberScopedAddressBook;                //@synthesize familyMemberScopedAddressBook=_familyMemberScopedAddressBook - In the implementation block
+(id)addressBookForFamilyMember:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg1 ;
-(FAFamilyMember *)familyMember;
-(CNContactStore *)familyMemberScopedContactStore;
-(ABAddressBook *)familyMemberScopedAddressBook;
@end

