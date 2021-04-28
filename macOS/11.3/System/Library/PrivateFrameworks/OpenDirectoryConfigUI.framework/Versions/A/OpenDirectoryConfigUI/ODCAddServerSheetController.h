/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OpenDirectoryConfigUI.framework/Versions/A/OpenDirectoryConfigUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpenDirectoryConfigUI/OpenDirectoryConfigUI-Structs.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@class NSPanel, ODCServerComboBox, NSStackView, NSTextField, XSDisablingTextField, NSProgressIndicator, NSButton, SFAuthorizationView, NSWindow, ODCViewControllerBase, NSTimer, ODCAction, ODCGetODServerInfoAction, NSString, NSData;

@interface ODCAddServerSheetController : NSObject <NSTextFieldDelegate> {

	NSPanel* _sheet;
	ODCServerComboBox* _odServerNameCombo;
	NSStackView* _odAuthStackView;
	NSTextField* _odclientIDTextField;
	NSTextField* _odUserNameTextField;
	NSTextField* _odPassTextField;
	NSTextField* _odMessageTextField;
	NSTextField* _odServerTypeInstructionsLabel;
	NSStackView* _adAuthStackView;
	NSTextField* _adClientIDTextField;
	NSTextField* _adAdminNameTextField;
	NSTextField* _adAdminPassTextField;
	NSTextField* _adMessageTextField;
	XSDisablingTextField* _adRequiredLabel;
	NSProgressIndicator* _spinner;
	NSTextField* _progressLabel;
	NSButton* _okButton;
	NSButton* _cancelButton;
	NSButton* _overwriteButton;
	NSButton* _openDirectoryUtilityButton;
	SFAuthorizationView* _authView;
	NSWindow* _docWindow;
	char _allowADBinding;
	ODCViewControllerBase* _parentViewController;
	NSTimer* _addressChangedTimer;
	char _joinAfterInfoReceived;
	ODCAction* _action;
	ODCGetODServerInfoAction* _getInfoAction;
	char _authBindingAllowed;
	char _authBindingRequired;
	NSString* _serverNameForMostRecentInfo;
	NSString* _mostRecentInfoActiveDirectoryDomainName;
	NSString* _userForForcedJoin;
	char _isForcedJoin;
	char _showODInstructionsLabel;
	NSData* _certificateData;
	NSString* _addressOfServerAskedAboutCATrust;
	char _trustCACert;
	NSString* _addressOfServerWarnedAboutNoSSL;

}

@property (copy) NSString * serverNameForMostRecentInfo;                          //@synthesize serverNameForMostRecentInfo=_serverNameForMostRecentInfo - In the implementation block
@property (copy) NSString * mostRecentInfoActiveDirectoryDomainName;              //@synthesize mostRecentInfoActiveDirectoryDomainName=_mostRecentInfoActiveDirectoryDomainName - In the implementation block
@property (copy) NSString * userForForcedJoin;                                    //@synthesize userForForcedJoin=_userForForcedJoin - In the implementation block
@property (assign) char isForcedJoin;                                             //@synthesize isForcedJoin=_isForcedJoin - In the implementation block
@property (assign) char showODInstructionsLabel;                                  //@synthesize showODInstructionsLabel=_showODInstructionsLabel - In the implementation block
@property (retain) NSData * certificateData;                                      //@synthesize certificateData=_certificateData - In the implementation block
@property (assign) char trustCACert;                                              //@synthesize trustCACert=_trustCACert - In the implementation block
@property (retain) NSString * addressOfServerAskedAboutCATrust;                   //@synthesize addressOfServerAskedAboutCATrust=_addressOfServerAskedAboutCATrust - In the implementation block
@property (retain) NSString * addressOfServerWarnedAboutNoSSL;                    //@synthesize addressOfServerWarnedAboutNoSSL=_addressOfServerWarnedAboutNoSSL - In the implementation block
@property (assign) ODCAction * action;                                            //@synthesize action=_action - In the implementation block
@property (assign) ODCGetODServerInfoAction * getInfoAction;                      //@synthesize getInfoAction=_getInfoAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)finalize;
-(void)dealloc;
-(ODCAction *)action;
-(void)setAction:(ODCAction *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)awakeFromNib;
-(void)controlTextDidChange:(id)arg1 ;
-(void)comboBoxSelectionDidChange:(id)arg1 ;
-(void)setControlsEnabled:(char)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(void)actionDidFinish:(id)arg1 ;
-(NSData *)certificateData;
-(void)buttonHit:(id)arg1 ;
-(id)initWithMainWindow:(id)arg1 authView:(id)arg2 allowADBinding:(char)arg3 parentController:(id)arg4 ;
-(void)closeSheetAndPrepareForRelease;
-(void)setAddressOfServerWarnedAboutNoSSL:(NSString *)arg1 ;
-(void)setAddressOfServerAskedAboutCATrust:(NSString *)arg1 ;
-(id)dhcpLDAPServerName;
-(char)allRequiredFieldsFilled;
-(void)getInfoForEnteredServerTimer:(id)arg1 ;
-(NSString *)serverNameForMostRecentInfo;
-(NSString *)addressOfServerAskedAboutCATrust;
-(void)setTrustCACert:(char)arg1 ;
-(NSString *)addressOfServerWarnedAboutNoSSL;
-(char)trustCACert;
-(NSString *)mostRecentInfoActiveDirectoryDomainName;
-(void)setShowODInstructionsLabel:(char)arg1 ;
-(ODCGetODServerInfoAction *)getInfoAction;
-(void)setGetInfoAction:(ODCGetODServerInfoAction *)arg1 ;
-(id)odClientCompID;
-(void)setServerNameForMostRecentInfo:(NSString *)arg1 ;
-(void)setMostRecentInfoActiveDirectoryDomainName:(NSString *)arg1 ;
-(NSString *)userForForcedJoin;
-(void)setUserForForcedJoin:(NSString *)arg1 ;
-(char)isForcedJoin;
-(void)setIsForcedJoin:(char)arg1 ;
-(char)showODInstructionsLabel;
-(void)threadedSuggestComputerID:(id)arg1 ;
-(void)handleOtherActionError:(id)arg1 ;
-(void)showErrorAlertAndReleaseSelf:(id)arg1 ;
-(void)setComputerIDIfEmpty:(id)arg1 ;
-(void)getInfoForEnteredServer:(char)arg1 ;
-(void)didFinishGettingServerInfo:(id)arg1 ;
@end

