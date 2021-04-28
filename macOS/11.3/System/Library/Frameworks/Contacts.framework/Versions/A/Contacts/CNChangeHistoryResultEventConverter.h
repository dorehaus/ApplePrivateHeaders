/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, NSArray, CNChangeHistoryEventFactory;

@interface CNChangeHistoryResultEventConverter : NSObject {

	CNContactStore* _contactStore;
	NSArray* _additionalContactKeyDescriptors;
	CNChangeHistoryEventFactory* _factory;

}

@property (readonly) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (copy,readonly) NSArray * additionalContactKeyDescriptors;              //@synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors - In the implementation block
@property (readonly) CNChangeHistoryEventFactory * factory;                       //@synthesize factory=_factory - In the implementation block
-(CNChangeHistoryEventFactory *)factory;
-(NSArray *)additionalContactKeyDescriptors;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 additionalContactKeyDescriptors:(id)arg2 ;
-(id)eventsFromResult:(id)arg1 ;
@end

