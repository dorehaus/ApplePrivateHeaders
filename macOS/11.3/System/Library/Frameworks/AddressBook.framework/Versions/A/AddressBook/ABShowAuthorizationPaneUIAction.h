/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNEditAuthorizationViewControllerDelegate.h>
#import <libobjc.A.dylib/ABUserInterfaceAction.h>

@protocol ABUserInterfaceAction;
@class CNEditAuthorizationViewController, NSString;

@interface ABShowAuthorizationPaneUIAction : NSObject <CNEditAuthorizationViewControllerDelegate, ABUserInterfaceAction> {

	char executionWasAuthorized;
	id<ABUserInterfaceAction> _actionRequiringAuthorization;
	CNEditAuthorizationViewController* _editAuthorizationController;

}

@property (nonatomic,readonly) id<ABUserInterfaceAction> actionRequiringAuthorization;                       //@synthesize actionRequiringAuthorization=_actionRequiringAuthorization - In the implementation block
@property (nonatomic,readonly) CNEditAuthorizationViewController * editAuthorizationController;              //@synthesize editAuthorizationController=_editAuthorizationController - In the implementation block
@property (nonatomic,readonly) NSString * actionName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char requiresAuthorizationBeforeExecution; 
@property (assign,nonatomic) char executionWasAuthorized; 
+(id)log;
+(char)isPasscodeEnabled;
+(id)fetchIsPasscodeEnabled;
+(id)actionByAdddingOptionalAuthorizationStepBeforePerformingAction:(id)arg1 ;
-(NSString *)actionName;
-(void)editAuthorizationViewController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2 ;
-(char)validateWithMenuItem:(id)arg1 ;
-(void)performWithSender:(id)arg1 ;
-(char)requiresAuthorizationBeforeExecution;
-(char)executionWasAuthorized;
-(void)setExecutionWasAuthorized:(char)arg1 ;
-(id)initWithActionRequiringAuthorization:(id)arg1 ;
-(id<ABUserInterfaceAction>)actionRequiringAuthorization;
-(void)presentAuthorizationUI;
-(CNEditAuthorizationViewController *)editAuthorizationController;
-(void)markGuardedActionAsAuthorized;
-(void)executeGuardedAction;
@end

