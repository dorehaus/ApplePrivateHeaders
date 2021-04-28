/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPersonListDelegate <NSObject>
@optional
-(char)personList:(id)arg1 canDeleteContactsWithSender:(id)arg2;
-(char)personList:(id)arg1 deleteContactsWithSender:(id)arg2;
-(char)personList:(id)arg1 rejectContactsWithSender:(id)arg2;
-(char)personList:(id)arg1 ignoreContactsWithSender:(id)arg2;
-(char)personList:(id)arg1 deleteContactsWithoutConfirmationWithSender:(id)arg2;
-(void)entriesChangedInPersonList:(id)arg1;
-(void)personListDidChangeAddressBook:(id)arg1;

@required
-(void)personList:(id)arg1 didSelectEntries:(id)arg2;
-(void)personListDidDoubleClick:(id)arg1;
-(unsigned long long)personList:(id)arg1 validateFilenamesDrop:(id)arg2;
-(unsigned long long)personList:(id)arg1 validateGroupsDrop:(id)arg2;
-(char)personList:(id)arg1 acceptFilenamesDrop:(id)arg2;
-(char)personList:(id)arg1 acceptGroupsDrop:(id)arg2;
-(void)toggleCardEditingMode:(id)arg1;
-(void)setCardEditingMode:(char)arg1;
-(char)shouldDrawHorizontalSeparators;

@end

