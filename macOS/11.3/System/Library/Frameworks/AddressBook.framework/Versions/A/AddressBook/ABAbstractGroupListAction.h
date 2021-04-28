/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABUserInterfaceAction.h>

@protocol ABGroupHelperFactory;
@class ABGroupListController, NSString;

@interface ABAbstractGroupListAction : NSObject <ABUserInterfaceAction> {

	ABGroupListController* _groupListController;
	id<ABGroupHelperFactory> _helperFactory;
	char executionWasAuthorized;

}

@property (nonatomic,readonly) char requiresAuthorizationBeforeExecution; 
@property (assign,nonatomic) char executionWasAuthorized; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)validateWithMenuItem:(id)arg1 ;
-(void)performWithSender:(id)arg1 ;
-(char)requiresAuthorizationBeforeExecution;
-(char)executionWasAuthorized;
-(void)setExecutionWasAuthorized:(char)arg1 ;
-(id)initWithGroupListController:(id)arg1 helperFactory:(id)arg2 ;
@end
