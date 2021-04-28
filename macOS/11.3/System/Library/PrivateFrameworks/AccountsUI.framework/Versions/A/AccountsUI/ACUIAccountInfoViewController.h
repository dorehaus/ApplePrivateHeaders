/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/Versions/A/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <libobjc.A.dylib/ACUIAccountDataclassDelegate.h>
#import <libobjc.A.dylib/ACUIAccountInfoViewControllerAccountSyncDelegate.h>

@class NSString, NSView, NSButton, NSTextField, NSProgressIndicator, ACUIAccountDetailsViewController, ACUICredentialPromptViewController, NSStackView;

@interface ACUIAccountInfoViewController : ACUIViewController <ACUIAccountDataclassDelegate, ACUIAccountInfoViewControllerAccountSyncDelegate> {

	NSString* _password;
	NSView* _dataclassesTableView;
	NSButton* _helpButton;
	NSView* _headerLogo;
	NSView* _headerLogoWithDetails;
	NSView* _headerLogoWithDetailsNoFullName;
	NSView* _headerGenericAccount;
	NSView* _enableAccountView;
	NSTextField* _descriptionField;
	NSTextField* _fullNameField;
	NSView* _dataclassesTableViewWithPadding;
	NSProgressIndicator* _spinner;
	ACUIAccountDetailsViewController* _accountDetailsVC;
	ACUICredentialPromptViewController* _credentialPromptVC;

}

@property (retain) NSView * headerLogo;                                                  //@synthesize headerLogo=_headerLogo - In the implementation block
@property (retain) NSView * headerLogoWithDetails;                                       //@synthesize headerLogoWithDetails=_headerLogoWithDetails - In the implementation block
@property (retain) NSView * headerLogoWithDetailsNoFullName;                             //@synthesize headerLogoWithDetailsNoFullName=_headerLogoWithDetailsNoFullName - In the implementation block
@property (retain) NSView * headerGenericAccount;                                        //@synthesize headerGenericAccount=_headerGenericAccount - In the implementation block
@property (retain) NSView * enableAccountView;                                           //@synthesize enableAccountView=_enableAccountView - In the implementation block
@property (retain) NSTextField * descriptionField;                                       //@synthesize descriptionField=_descriptionField - In the implementation block
@property (retain) NSTextField * fullNameField;                                          //@synthesize fullNameField=_fullNameField - In the implementation block
@property (retain) NSView * dataclassesTableViewWithPadding;                             //@synthesize dataclassesTableViewWithPadding=_dataclassesTableViewWithPadding - In the implementation block
@property (retain) NSProgressIndicator * spinner;                                        //@synthesize spinner=_spinner - In the implementation block
@property (retain) ACUIAccountDetailsViewController * accountDetailsVC;                  //@synthesize accountDetailsVC=_accountDetailsVC - In the implementation block
@property (retain) ACUICredentialPromptViewController * credentialPromptVC;              //@synthesize credentialPromptVC=_credentialPromptVC - In the implementation block
@property (retain) NSStackView * view; 
@property (retain) NSString * password;                                                  //@synthesize password=_password - In the implementation block
@property (retain) NSView * dataclassesTableView;                                        //@synthesize dataclassesTableView=_dataclassesTableView - In the implementation block
@property (retain) NSButton * helpButton;                                                //@synthesize helpButton=_helpButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)nibName;
-(void)viewDidAppear;
-(id)initWithAccount:(id)arg1 ;
-(NSProgressIndicator *)spinner;
-(void)setSpinner:(NSProgressIndicator *)arg1 ;
-(NSButton *)helpButton;
-(void)setHelpButton:(NSButton *)arg1 ;
-(NSTextField *)descriptionField;
-(void)setDescriptionField:(NSTextField *)arg1 ;
-(char)willToggleDataclass:(id)arg1 ;
-(void)didToggleDataclass:(id)arg1 ;
-(void)saveAccountFailedWithError:(id)arg1 ;
-(void)saveAccountSucceeded;
-(NSTextField *)fullNameField;
-(void)setFullNameField:(NSTextField *)arg1 ;
-(void)constructViewStack;
-(void)addFullNameSlice;
-(void)addUserNameSliceWithLabel:(id)arg1 ;
-(void)addPasswordSlice;
-(void)addEmailAddressSlice;
-(void)_verifyCredentialAndPromptIfNeeded:(/*^block*/id)arg1 ;
-(void)setCredentialPromptVC:(ACUICredentialPromptViewController *)arg1 ;
-(ACUICredentialPromptViewController *)credentialPromptVC;
-(void)saveAccountWithoutVerification:(id)arg1 ;
-(NSView *)headerLogo;
-(NSView *)headerLogoWithDetails;
-(NSView *)headerLogoWithDetailsNoFullName;
-(NSView *)headerGenericAccount;
-(NSView *)dataclassesTableViewWithPadding;
-(NSView *)enableAccountView;
-(NSView *)dataclassesTableView;
-(void)addHeaderLogoWithDetailsSlice;
-(void)addHeaderGenericAccountSlice;
-(void)addHeaderLogoSlice;
-(void)addDataClassesConfigurationSlice;
-(void)addDescriptionSlice;
-(void)setAccountDetailsVC:(ACUIAccountDetailsViewController *)arg1 ;
-(ACUIAccountDetailsViewController *)accountDetailsVC;
-(void)turnOnAfterVerification;
-(void)addEnableThisAccountSlice;
-(void)addUseWithDataclassSlice;
-(void)detailsButtonClicked:(id)arg1 ;
-(void)didUpdatePassword:(id)arg1 ;
-(void)setDataclassesTableView:(NSView *)arg1 ;
-(void)setHeaderLogo:(NSView *)arg1 ;
-(void)setHeaderLogoWithDetails:(NSView *)arg1 ;
-(void)setHeaderLogoWithDetailsNoFullName:(NSView *)arg1 ;
-(void)setHeaderGenericAccount:(NSView *)arg1 ;
-(void)setEnableAccountView:(NSView *)arg1 ;
-(void)setDataclassesTableViewWithPadding:(NSView *)arg1 ;
@end

