/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABAddressBook, ABAccount, NSArray;

@interface ABFindsUserDataInAddressBook : NSObject {

	ABAddressBook* _addressBook;
	ABAccount* _account;
	NSArray* _people;
	ABAddressBook* _addressBookForTipCards;
	NSArray* _tipCards;

}
-(void)dealloc;
-(id)people;
-(id)initWithAddressBook:(id)arg1 account:(id)arg2 ;
-(char)hasUserData;
-(void)setupTipCards;
-(char)_hasUserGroups;
-(char)_hasUserPeople;
-(char)_hasMeCard;
-(char)_hasTipCard;
-(id)tipCards;
@end
