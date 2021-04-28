/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, NSString, NSMutableDictionary;

@interface CNCDRecordSaveCache : NSObject {

	NSManagedObjectContext* _context;
	NSString* _entityName;
	NSMutableDictionary* _recordsByIdentifier;

}
-(id)recordsForIdentifiers:(id)arg1 ;
-(char)fetchAllIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)enumerateCoreDataContactsMatchingContacts:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)fetchRecordsWithLinkIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)recordForIdentifier:(id)arg1 ;
-(id)initWithContext:(id)arg1 entityName:(id)arg2 ;
-(id)fetchIndexedRecordsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)fetchRecordsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)enumerateCoreDataGroupsMatchingGroups:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end
