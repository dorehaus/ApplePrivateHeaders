/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookUndoableCommand.h>

@class ABRecordContext, NSArray, ABLazyGroup, ABGroupEntriesList, ABImportRecordFactory, NSMutableArray;

@interface ABBookGroupImportCommand : ABBookUndoableCommand {

	ABRecordContext* _sourceContext;
	NSArray* _sourceGroups;
	NSArray* _sourcePersonUids;
	ABRecordContext* _destinationContext;
	ABLazyGroup* _destinationGroup;
	ABGroupEntriesList* _groupEntriesList;
	ABImportRecordFactory* _importRecordFactory;
	NSMutableArray* _importedGroups;
	NSMutableArray* _importedPeopleUids;
	char ignoresGuardianRestrictions;

}
-(void)dealloc;
-(id)actionName;
-(void)execute;
-(char)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(char)arg1 ;
-(void)executeUndo;
-(id)importPerson:(id)arg1 ;
-(id)importAllPeople;
-(void)makeImportedPeopleMembersOfDestinationGroup:(id)arg1 ;
-(id)importGroupsWithImportedPeople:(id)arg1 ;
-(void)makeImportedGroupsSubgroupsOfDestinationGroup:(id)arg1 ;
-(void)rememberImportedPeopleForUndo:(id)arg1 ;
-(void)rememberImportedGroupsForUndo:(id)arg1 ;
-(id)allPeopleToImport;
-(id)importPeople:(id)arg1 ;
-(void)addPeopleFromSourcePersonUid:(id)arg1 ;
-(void)addPeopleFromSourceGroups:(id)arg1 ;
-(id)importGroup:(id)arg1 withImportedPeople:(id)arg2 ;
-(id)importGroup:(id)arg1 ;
-(void)addMembers:(id)arg1 toGroup:(id)arg2 ;
-(void)undoImportedPeople;
-(void)undoImportedGroups;
-(void)removeRecords:(id)arg1 ;
-(id)initWithSourceRecordContext:(id)arg1 sourcePersonUids:(id)arg2 sourceGroupUids:(id)arg3 destinationRecordContext:(id)arg4 destinationGroup:(id)arg5 groupEntriesList:(id)arg6 ;
@end

