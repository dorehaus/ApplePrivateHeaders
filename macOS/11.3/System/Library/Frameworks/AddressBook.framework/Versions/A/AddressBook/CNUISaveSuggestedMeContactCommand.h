/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/CNUIUndoableCommand.h>

@class CNUIUndoableCommand;

@interface CNUISaveSuggestedMeContactCommand : CNUIUndoableCommand {

	CNUIUndoableCommand* _aggreageCommand;

}

@property (nonatomic,retain) CNUIUndoableCommand * aggreageCommand;              //@synthesize aggreageCommand=_aggreageCommand - In the implementation block
-(id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(char)arg2 ;
-(void)executeWithCNSaveRequest:(id)arg1 ;
-(void)executeUndoWithCNSaveRequest:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 contact:(id)arg2 containerIdentifier:(id)arg3 ignoresGuardianRestrictions:(char)arg4 ;
-(id)copyOfContactWithNameValuesAndUserCreatedMultiValues:(id)arg1 ;
-(CNUIUndoableCommand *)aggreageCommand;
-(void)setAggreageCommand:(CNUIUndoableCommand *)arg1 ;
@end
