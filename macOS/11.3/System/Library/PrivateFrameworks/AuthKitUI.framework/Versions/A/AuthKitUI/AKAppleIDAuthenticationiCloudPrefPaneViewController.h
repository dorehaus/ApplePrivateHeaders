/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>

@class NSButton, NSTextField, AKPaddedTextFieldCell, NSView, NSLayoutConstraint, NSString, NSProgressIndicator, OBPrivacyLinkController;

@interface AKAppleIDAuthenticationiCloudPrefPaneViewController : NSViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate> {

	char _isUsernameEditable;
	NSButton* _loginButton;
	NSButton* _forgotButton;
	NSButton* _createButton;
	NSTextField* _usernameField;
	AKPaddedTextFieldCell* _paddedUserNameCell;
	NSTextField* _passwordField;
	NSView* _privacyView;
	NSTextField* _usernameTitle;
	NSTextField* _passwordTitle;
	NSLayoutConstraint* _loginViewHeight;
	NSString* _initialUsername;
	NSString* _loginButtonString;
	long long _selectedButton;
	NSString* _privacyBundleIdentifier;
	/*^block*/id _loginButtonAction;
	/*^block*/id _forgotButtonAction;
	/*^block*/id _createButtonAction;
	NSProgressIndicator* _progressIndicator;
	/*^block*/id _passwordHandler;
	OBPrivacyLinkController* _privacyController;

}

@property (retain) NSProgressIndicator * progressIndicator;                   //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (copy) id passwordHandler;                                          //@synthesize passwordHandler=_passwordHandler - In the implementation block
@property (retain) OBPrivacyLinkController * privacyController;               //@synthesize privacyController=_privacyController - In the implementation block
@property (retain) NSButton * loginButton;                                    //@synthesize loginButton=_loginButton - In the implementation block
@property (retain) NSButton * forgotButton;                                   //@synthesize forgotButton=_forgotButton - In the implementation block
@property (retain) NSButton * createButton;                                   //@synthesize createButton=_createButton - In the implementation block
@property (retain) NSTextField * usernameField;                               //@synthesize usernameField=_usernameField - In the implementation block
@property (retain) AKPaddedTextFieldCell * paddedUserNameCell;                //@synthesize paddedUserNameCell=_paddedUserNameCell - In the implementation block
@property (retain) NSTextField * passwordField;                               //@synthesize passwordField=_passwordField - In the implementation block
@property (retain) NSView * privacyView;                                      //@synthesize privacyView=_privacyView - In the implementation block
@property (retain) NSTextField * usernameTitle;                               //@synthesize usernameTitle=_usernameTitle - In the implementation block
@property (retain) NSTextField * passwordTitle;                               //@synthesize passwordTitle=_passwordTitle - In the implementation block
@property (retain) NSLayoutConstraint * loginViewHeight;                      //@synthesize loginViewHeight=_loginViewHeight - In the implementation block
@property (setter=setUsernameEditable:) char isUsernameEditable;              //@synthesize isUsernameEditable=_isUsernameEditable - In the implementation block
@property (retain) NSString * initialUsername;                                //@synthesize initialUsername=_initialUsername - In the implementation block
@property (retain) NSString * loginButtonString;                              //@synthesize loginButtonString=_loginButtonString - In the implementation block
@property (assign) long long selectedButton;                                  //@synthesize selectedButton=_selectedButton - In the implementation block
@property (retain) NSString * privacyBundleIdentifier;                        //@synthesize privacyBundleIdentifier=_privacyBundleIdentifier - In the implementation block
@property (copy) id loginButtonAction;                                        //@synthesize loginButtonAction=_loginButtonAction - In the implementation block
@property (copy) id forgotButtonAction;                                       //@synthesize forgotButtonAction=_forgotButtonAction - In the implementation block
@property (copy) id createButtonAction;                                       //@synthesize createButtonAction=_createButtonAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)awakeFromNib;
-(void)controlTextDidChange:(id)arg1 ;
-(NSProgressIndicator *)progressIndicator;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(NSTextField *)passwordField;
-(char)isUsernameEditable;
-(NSView *)privacyView;
-(NSTextField *)usernameField;
-(void)_disableUserInteraction;
-(NSButton *)forgotButton;
-(NSString *)privacyBundleIdentifier;
-(void)setPrivacyController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyController;
-(void)setPrivacyView:(NSView *)arg1 ;
-(void)showError:(id)arg1 ;
-(void)setUsernameField:(NSTextField *)arg1 ;
-(void)setPasswordField:(NSTextField *)arg1 ;
-(void)setForgotButton:(NSButton *)arg1 ;
-(NSString *)initialUsername;
-(void)setInitialUsername:(NSString *)arg1 ;
-(id)createButtonAction;
-(void)setCreateButtonAction:(id)arg1 ;
-(id)forgotButtonAction;
-(void)setForgotButtonAction:(id)arg1 ;
-(long long)selectedButton;
-(void)setSelectedButton:(long long)arg1 ;
-(void)forgotPasswordPressed:(id)arg1 ;
-(NSString *)loginButtonString;
-(NSButton *)loginButton;
-(void)_addPrivacyView:(id)arg1 ;
-(id)loginButtonAction;
-(void)setPasswordFieldHidden:(char)arg1 animated:(char)arg2 ;
-(id)passwordHandler;
-(void)setPasswordHandler:(id)arg1 ;
-(void)_stopSpinner;
-(NSButton *)createButton;
-(void)_startSpinner;
-(AKPaddedTextFieldCell *)paddedUserNameCell;
-(NSTextField *)passwordTitle;
-(NSLayoutConstraint *)loginViewHeight;
-(void)allowUserInteraction;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)disableUserInteractionAndStartSpinner;
-(void)defaultButtonPressed:(id)arg1 ;
-(void)createPasswordPressed:(id)arg1 ;
-(void)setLoginButton:(NSButton *)arg1 ;
-(void)setCreateButton:(NSButton *)arg1 ;
-(void)setPaddedUserNameCell:(AKPaddedTextFieldCell *)arg1 ;
-(NSTextField *)usernameTitle;
-(void)setUsernameTitle:(NSTextField *)arg1 ;
-(void)setPasswordTitle:(NSTextField *)arg1 ;
-(void)setLoginViewHeight:(NSLayoutConstraint *)arg1 ;
-(void)setUsernameEditable:(char)arg1 ;
-(void)setLoginButtonString:(NSString *)arg1 ;
-(void)setPrivacyBundleIdentifier:(NSString *)arg1 ;
-(void)setLoginButtonAction:(id)arg1 ;
@end
