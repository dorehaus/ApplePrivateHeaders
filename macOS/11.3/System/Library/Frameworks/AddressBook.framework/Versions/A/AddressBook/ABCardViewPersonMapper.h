/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUIParentContainerCache;
@class CNContact, CNMultiDictionary, NSDictionary;

@interface ABCardViewPersonMapper : NSObject {

	CNContact* _contact;
	id<CNUIParentContainerCache> _parentContainerCache;
	CNMultiDictionary* _linkedIdentifierMap;
	NSDictionary* _containerByContactIdentifier;

}

@property (nonatomic,retain) CNContact * contact;                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<CNUIParentContainerCache> parentContainerCache;              //@synthesize parentContainerCache=_parentContainerCache - In the implementation block
@property (nonatomic,retain) CNMultiDictionary * linkedIdentifierMap;                        //@synthesize linkedIdentifierMap=_linkedIdentifierMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * containerByContactIdentifier;                  //@synthesize containerByContactIdentifier=_containerByContactIdentifier - In the implementation block
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)contacts;
-(id)contactIdentifiers;
-(CNMultiDictionary *)linkedIdentifierMap;
-(char)isUnified;
-(id)contactWithIdentifier:(id)arg1 ;
-(id<CNUIParentContainerCache>)parentContainerCache;
-(NSDictionary *)containerByContactIdentifier;
-(void)setParentContainerCache:(id<CNUIParentContainerCache>)arg1 ;
-(id)initWithContact:(id)arg1 parentContainerCache:(id)arg2 ;
-(id)identifiersOfContactsUnifiedUnderMultiValueWithIdentifier:(id)arg1 forDisplayedKey:(id)arg2 ;
-(id)identifiersOfValuesUnifiedUnderMultiValueWithIdentifier:(id)arg1 forDisplayedKey:(id)arg2 ;
-(id)nameOfContainerForContactWithIdentifier:(id)arg1 ;
-(char)isExchangeContainerForContactWithIdentifier:(id)arg1 ;
-(char)canCreateContactsInContainerOfContactWithIdentifier:(id)arg1 ;
-(id)contactsUnifiedUnderMultiValueWithIdentifier:(id)arg1 forDisplayedKey:(id)arg2 ;
-(id)searchForContactsUnifiedUnderMultiValueWithIdentifier:(id)arg1 forDisplayedKey:(id)arg2 ;
-(id)containerForContactWithIdentifier:(id)arg1 ;
-(char)canCreateCustomLabelsInContainerOfContactWithIdentifier:(id)arg1 ;
-(char)isDirectoryContainerForContactWithIdentifier:(id)arg1 ;
-(void)setLinkedIdentifierMap:(CNMultiDictionary *)arg1 ;
@end

