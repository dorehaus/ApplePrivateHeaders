/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LUI2ViewController.h>
#import <libobjc.A.dylib/LUI2SecureTextFieldViewControllerDelegate.h>
#import <libobjc.A.dylib/NSStackViewDelegate.h>

@class LUI2TextFieldBackgroundView, LUI2SecureTextFieldViewController, NSControl, NSStackView, NSView, NSLayoutConstraint, NSString;

@interface LUI2PasswordViewController : LUI2ViewController <LUI2SecureTextFieldViewControllerDelegate, NSStackViewDelegate> {

	LUI2TextFieldBackgroundView* _backgroundView;
	LUI2SecureTextFieldViewController* _secureTextFieldViewController;
	NSControl* _backButton;
	NSControl* _helpButton;
	NSControl* _loginButton;
	NSStackView* _stackView;
	NSView* _leftSpacer;
	NSView* _rightSpacer;
	NSLayoutConstraint* _backgroundWidthConstraint;

}

@property (retain) LUI2TextFieldBackgroundView * backgroundView;                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) NSStackView * stackView;                                                          //@synthesize stackView=_stackView - In the implementation block
@property (retain) NSView * leftSpacer;                                                              //@synthesize leftSpacer=_leftSpacer - In the implementation block
@property (retain) NSView * rightSpacer;                                                             //@synthesize rightSpacer=_rightSpacer - In the implementation block
@property (assign) NSLayoutConstraint * backgroundWidthConstraint;                                   //@synthesize backgroundWidthConstraint=_backgroundWidthConstraint - In the implementation block
@property (readonly) LUI2SecureTextFieldViewController * secureTextFieldViewController;              //@synthesize secureTextFieldViewController=_secureTextFieldViewController - In the implementation block
@property (readonly) NSControl * backButton;                                                         //@synthesize backButton=_backButton - In the implementation block
@property (readonly) NSControl * helpButton;                                                         //@synthesize helpButton=_helpButton - In the implementation block
@property (readonly) NSControl * loginButton;                                                        //@synthesize loginButton=_loginButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)secureTextFieldTextDidChange:(id)arg1 ;
-(void)_backgroundPressed:(id)arg1 ;
-(void)_updateBlendingMode:(id)arg1 ;
-(void)_sleepWakeNotificationReceived:(id)arg1 ;
-(void)_configureForSFAuthorizationPluginView;
-(id)viewForPopover;
-(LUI2SecureTextFieldViewController *)secureTextFieldViewController;
-(NSLayoutConstraint *)backgroundWidthConstraint;
-(void)setBackgroundWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBackgroundView:(LUI2TextFieldBackgroundView *)arg1 ;
-(LUI2TextFieldBackgroundView *)backgroundView;
-(void)loadView;
-(void)viewDidLoad;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(void)stackView:(id)arg1 willDetachViews:(id)arg2 ;
-(void)stackView:(id)arg1 didReattachViews:(id)arg2 ;
-(NSView *)leftSpacer;
-(NSView *)rightSpacer;
-(NSControl *)loginButton;
-(NSControl *)helpButton;
-(NSControl *)backButton;
-(void)shake;
-(void)setRightSpacer:(NSView *)arg1 ;
-(void)setLeftSpacer:(NSView *)arg1 ;
@end
