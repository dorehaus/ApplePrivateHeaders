/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookUndoableCommand.h>
#import <libobjc.A.dylib/ABSaveRequestCommand.h>

@class NSString, NSArray, ABAddressBook;

@interface ABBookAggregateUndoableCommand : ABBookUndoableCommand <ABSaveRequestCommand> {

	NSString* _actionName;
	NSArray* _undoableCommands;
	ABAddressBook* _addressBook;
	char _shouldSave;
	char ignoresGuardianRestrictions;

}

@property (assign,nonatomic) char ignoresGuardianRestrictions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builder;
-(void)dealloc;
-(id)actionName;
-(void)execute;
-(id)initWithBuilder:(id)arg1 ;
-(char)ignoresGuardianRestrictions;
-(void)visit:(id)arg1 ;
-(void)setIgnoresGuardianRestrictions:(char)arg1 ;
-(void)executeUndo;
-(void)executeRedo;
-(id)actionNameOfFirstCommand;
-(void)visitCommandsWithUnconfiguredVisitor:(id)arg1 enumerationOptions:(unsigned long long)arg2 ;
-(void)saveIfNeeded;
-(void)configureVisitor:(id)arg1 ;
-(void)visitCommandsWithVisitor:(id)arg1 enumerationOptions:(unsigned long long)arg2 ;
-(void)executeWithSaveRequest:(id)arg1 ;
-(void)executeUndoWithSaveRequest:(id)arg1 ;
-(void)executeRedoWithSaveRequest:(id)arg1 ;
-(id)subCommands;
-(char)containsSubCommands;
@end

