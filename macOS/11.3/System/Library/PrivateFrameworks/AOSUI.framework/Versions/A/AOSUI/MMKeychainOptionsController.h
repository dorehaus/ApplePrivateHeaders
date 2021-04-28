/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/MMCSCSetupControllerDelegate.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>

@class NSString, NSWindow, NSTextField, NSButton, NSBox, NSPopUpButton, NSImageView, MMPhoneNumberFormatter, iCloudTouchBarController, NSTouchBar;

@interface MMKeychainOptionsController : NSViewController <MMCSCSetupControllerDelegate, NSTouchBarProvider> {

	NSString* _accountID;
	char _didModifySecurityCode;
	NSWindow* _sheet;
	NSTextField* _statusString;
	NSButton* _detailsButton;
	NSBox* _pendingApprovalDivider;
	NSTextField* _iCloudSecurityCodeLabel;
	NSButton* _iCloudSecurityCodeButton;
	NSTextField* _allowKeyChainRecoveryInfoLabel;
	NSButton* _cancelButton;
	NSButton* _OKButton;
	NSButton* _allowKeyChainRecovery;
	NSPopUpButton* _countryCodePopupMenu;
	NSTextField* _phoneNumberTF;
	NSTextField* _phoneNumberLabel;
	NSTextField* _phoneNumberInfoLabel;
	NSImageView* _keychainImageView;
	NSImageView* _cautionImageView;
	NSString* _fullName;
	NSString* _emailAddress;
	NSString* _description;
	NSString* _smsCountryCode;
	NSString* _smsCountryPrefix;
	NSString* _smsTarget;
	NSString* _passPhrase;
	char _usingComplexPassphrase;
	char _isSecurePassphrase;
	char _usingNumericPassphrase;
	int _numericPassphraseLength;
	char _initialState;
	NSString* _initialSMSCountryCode;
	NSString* _initialSMSTarget;
	MMPhoneNumberFormatter* _smsTargetFormatter;
	/*^block*/id _completionHandler;
	id _delegate;
	NSWindow* _parentWindow;
	iCloudTouchBarController* _touchBarController;

}

@property (retain) NSString * accountID;                                       //@synthesize accountID=_accountID - In the implementation block
@property (assign) char didModifySecurityCode;                                 //@synthesize didModifySecurityCode=_didModifySecurityCode - In the implementation block
@property (assign) NSWindow * parentWindow;                                    //@synthesize parentWindow=_parentWindow - In the implementation block
@property (copy) NSString * smsCountryCode;                                    //@synthesize smsCountryCode=_smsCountryCode - In the implementation block
@property (copy) NSString * smsCountryPrefix;                                  //@synthesize smsCountryPrefix=_smsCountryPrefix - In the implementation block
@property (copy) NSString * smsTarget;                                         //@synthesize smsTarget=_smsTarget - In the implementation block
@property (copy) NSString * passPhrase;                                        //@synthesize passPhrase=_passPhrase - In the implementation block
@property (assign) char usingComplexPassphrase;                                //@synthesize usingComplexPassphrase=_usingComplexPassphrase - In the implementation block
@property (assign) char isSecurePassphrase;                                    //@synthesize isSecurePassphrase=_isSecurePassphrase - In the implementation block
@property (assign) char initialState;                                          //@synthesize initialState=_initialState - In the implementation block
@property (copy) NSString * initialSMSCountryCode;                             //@synthesize initialSMSCountryCode=_initialSMSCountryCode - In the implementation block
@property (copy) NSString * initialSMSTarget;                                  //@synthesize initialSMSTarget=_initialSMSTarget - In the implementation block
@property (retain) MMPhoneNumberFormatter * smsTargetFormatter;                //@synthesize smsTargetFormatter=_smsTargetFormatter - In the implementation block
@property (assign) char usingNumericPassphrase;                                //@synthesize usingNumericPassphrase=_usingNumericPassphrase - In the implementation block
@property (assign) int numericPassphraseLength;                                //@synthesize numericPassphraseLength=_numericPassphraseLength - In the implementation block
@property (retain) iCloudTouchBarController * touchBarController;              //@synthesize touchBarController=_touchBarController - In the implementation block
@property (assign) id delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSWindow * sheet;                                         //@synthesize sheet=_sheet - In the implementation block
@property (copy) NSString * fullName;                                          //@synthesize fullName=_fullName - In the implementation block
@property (copy) NSString * emailAddress;                                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSString * description;                                       //@synthesize description=_description - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSTouchBar * touchBar; 
-(NSString *)description;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSWindow *)parentWindow;
-(NSTouchBar *)touchBar;
-(void)cancel:(id)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(void)done:(id)arg1 ;
-(NSWindow *)sheet;
-(NSString *)fullName;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setInitialState:(char)arg1 ;
-(char)initialState;
-(void)setFullName:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(iCloudTouchBarController *)touchBarController;
-(void)setTouchBarController:(iCloudTouchBarController *)arg1 ;
-(char)_shouldSave;
-(NSString *)passPhrase;
-(void)setSmsTargetFormatter:(MMPhoneNumberFormatter *)arg1 ;
-(MMPhoneNumberFormatter *)smsTargetFormatter;
-(void)_selectCountryCodeInPopUpMenu:(id)arg1 ;
-(void)popUpMenuItemSelected:(id)arg1 ;
-(NSString *)smsCountryPrefix;
-(NSString *)smsCountryCode;
-(NSString *)smsTarget;
-(void)setDidModifySecurityCode:(char)arg1 ;
-(id)_getKeychainBackupStatus;
-(id)_getKeychainBackupDictionary;
-(void)setSmsTarget:(NSString *)arg1 ;
-(void)setInitialSMSTarget:(NSString *)arg1 ;
-(void)setSmsCountryCode:(NSString *)arg1 ;
-(void)setInitialSMSCountryCode:(NSString *)arg1 ;
-(NSString *)initialSMSCountryCode;
-(void)setIsSecurePassphrase:(char)arg1 ;
-(void)setAllowKeychainRecovery:(char)arg1 ;
-(char)isSecurePassphrase;
-(void)setSMSTargetEnabled:(char)arg1 clearTarget:(char)arg2 ;
-(void)updateApprovalUI;
-(NSString *)initialSMSTarget;
-(char)didModifySecurityCode;
-(id)_countryCodeFromPopupMenu;
-(id)_countryPrefixFromPopupMenu;
-(void)setSmsCountryPrefix:(NSString *)arg1 ;
-(id)_targetFromPhoneNumberTF;
-(void)_finishSavingAccountDetails;
-(char)usingComplexPassphrase;
-(int)numericPassphraseLength;
-(char)usingNumericPassphrase;
-(void)_handleSetupKeychainSyncError;
-(char)_isBackupEnabled;
-(char)_isHighSecurityEnabled;
-(void)setPassPhrase:(NSString *)arg1 ;
-(void)setUsingComplexPassphrase:(char)arg1 ;
-(void)setUsingNumericPassphrase:(char)arg1 ;
-(void)setNumericPassphraseLength:(int)arg1 ;
-(void)mmCSCSetupControllerDidEnd:(id)arg1 ;
-(void)mmCSCSetupControllerDidOptOut:(id)arg1 ;
-(void)mmCSCSetupControllerDidCancel:(id)arg1 ;
-(void)showInWindow:(id)arg1 deviceInCircle:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)_isDeviceInCircle;
-(void)changeSecurityCodePressed:(id)arg1 ;
-(void)allowKeyChainRecoveryPressed:(id)arg1 ;
-(void)detailsPressed:(id)arg1 ;
@end

