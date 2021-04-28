/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABCommandExecutor.h>

@protocol ABCommandExecutor <NSObject>
@required
-(void)executeCommand:(id)arg1;

@end

#import <libobjc.A.dylib/ABCommandVisitor.h>

@class NSUndoManager, ABCommandExecutionPolicy, NSString;

@interface ABCommandExecutor : NSObject <ABCommandExecutor, ABCommandVisitor> {

	NSUndoManager* _undoManager;
	ABCommandExecutionPolicy* _defaultPolicy;

}

@property (retain,readonly) NSUndoManager * undoManager;              //@synthesize undoManager=_undoManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSUndoManager *)undoManager;
-(void)visitCommand:(id)arg1 ;
-(void)visitUndoableCommand:(id)arg1 ;
-(id)initWithUndoManager:(id)arg1 addressBook:(id)arg2 saveOnExecute:(char)arg3 ;
-(void)removeAllCommands;
-(void)visitSaveRequestCommand:(id)arg1 ;
-(void)visitSaveCNRequestCommand:(id)arg1 ;
-(void)visitUndoableSaveCNRequestCommand:(id)arg1 ;
-(void)executeCommand:(id)arg1 ;
-(id)initWithUndoManager:(id)arg1 defaultPolicy:(id)arg2 ;
-(void)doCommand:(id)arg1 ;
-(void)undoCommand:(id)arg1 ;
-(void)addCommandToUndoManager:(id)arg1 withExecutorSelector:(SEL)arg2 ;
-(void)runPolicyForCommand:(id)arg1 withCommandSelector:(SEL)arg2 ;
-(void)redoCommand:(id)arg1 ;
-(id)policyForCommand:(id)arg1 ;
-(void)runUndoTransaction:(/*^block*/id)arg1 ;
-(id)initWithUndoManager:(id)arg1 addressBook:(id)arg2 ;
@end
