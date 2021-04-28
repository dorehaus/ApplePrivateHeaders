/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookUndoableCommand.h>

@class NSString, ABAddressBook, NSMutableArray;

@interface ABApplyPrivacyFieldsToLinkedRecordsCommand : ABBookUndoableCommand {

	NSString* _personIdentifier;
	ABAddressBook* _addressBook;
	NSMutableArray* _privatizedFields;
	char ignoresGuardianRestrictions;

}
+(id)commandWithPerson:(id)arg1 ;
-(void)dealloc;
-(void)execute;
-(char)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(char)arg1 ;
-(void)executeUndo;
-(id)initWithPersonIdentifier:(id)arg1 addressBook:(id)arg2 ;
-(id)makeIdentifierMap;
-(void)applyPrivacyFieldsUsingMap:(id)arg1 ;
-(id)fetchPerson;
-(id)reindexMap:(id)arg1 ;
-(void)markPrivateIdentifier:(id)arg1 property:(id)arg2 ;
@end
