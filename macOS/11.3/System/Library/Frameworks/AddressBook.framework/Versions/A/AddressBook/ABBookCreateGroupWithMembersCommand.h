/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookUndoableCommand.h>

@class ABAccount, ABAddressBook, ABGroupEntriesList, ABBookCreateGroupCommand, ABBookGroupAddMembersCommand, NSSet;

@interface ABBookCreateGroupWithMembersCommand : ABBookUndoableCommand {

	ABAccount* _account;
	ABAddressBook* _addressBook;
	ABGroupEntriesList* _groupEntriesList;
	ABBookCreateGroupCommand* _createCommand;
	ABBookGroupAddMembersCommand* _addMembersCommand;
	NSSet* _memberUids;
	char ignoresGuardianRestrictions;

}
-(void)dealloc;
-(id)actionName;
-(void)execute;
-(char)ignoresGuardianRestrictions;
-(void)setIgnoresGuardianRestrictions:(char)arg1 ;
-(void)executeUndo;
-(void)executeRedo;
-(id)groupEntryForNewGroup;
-(void)updateGroupName:(id)arg1 ;
-(id)initWithAccount:(id)arg1 addressBook:(id)arg2 groupEntriesList:(id)arg3 memberUids:(id)arg4 ;
@end

