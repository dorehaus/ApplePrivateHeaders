/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/SheetWithTableController.h>
#import <libobjc.A.dylib/AuthorizationSheetViewControllerDelegate.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/SecureWindow.h>

@class NSWindow, NSMutableArray, WBSFaviconRequestsController, WBSSavedPasswordStore, WBSSiteMetadataManager, WBSAutoFillQuirksManager, NSView, SecureWindowLockPolicyEnforcer, AuthorizationSheetViewController, NSArray, NSButton, NSSearchField, NSTextField, NSString;

@interface AutoFillCredentialPicker : SheetWithTableController <AuthorizationSheetViewControllerDelegate, NSTableViewDataSource, NSTableViewDelegate, SecureWindow> {

	NSMutableArray* _allPasswords;
	NSMutableArray* _suggestedPasswords;
	WBSFaviconRequestsController* _iconRequestsController;
	WBSSavedPasswordStore* _savedPasswordStore;
	WBSSiteMetadataManager* _siteMetadataManager;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	char _isWaitingForIconRequestCancellation;
	long long _purpose;
	NSWindow* _windowPresentingCredentialPicker;
	NSView* _parentView;
	char _bypassLockoutPolicy;
	SecureWindowLockPolicyEnforcer* _lockPolicyEnforcer;
	AuthorizationSheetViewController* _authorizationSheetViewController;
	NSArray* _domainHintStringsForPasswordSuggestions;
	NSArray* _serviceNameHintStringsForPasswordSuggestions;
	NSButton* _cancelButton;
	NSButton* _fillButton;
	NSSearchField* _searchField;
	NSTextField* _promptTextField;
	NSView* _otherPasswordsWindowContentView;
	/*^block*/id _didSelectCredentialToFillHandler;

}

@property (assign,nonatomic,__weak) NSButton * cancelButton;                                                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * fillButton;                                                       //@synthesize fillButton=_fillButton - In the implementation block
@property (assign,nonatomic,__weak) NSSearchField * searchField;                                                 //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * promptTextField;                                               //@synthesize promptTextField=_promptTextField - In the implementation block
@property (nonatomic,retain) NSView * otherPasswordsWindowContentView;                                           //@synthesize otherPasswordsWindowContentView=_otherPasswordsWindowContentView - In the implementation block
@property (nonatomic,copy) id didSelectCredentialToFillHandler;                                                  //@synthesize didSelectCredentialToFillHandler=_didSelectCredentialToFillHandler - In the implementation block
@property (nonatomic,readonly) SecureWindowLockPolicyEnforcer * lockPolicyEnforcer;                              //@synthesize lockPolicyEnforcer=_lockPolicyEnforcer - In the implementation block
@property (nonatomic,readonly) AuthorizationSheetViewController * authorizationSheetViewController;              //@synthesize authorizationSheetViewController=_authorizationSheetViewController - In the implementation block
@property (nonatomic,copy) NSArray * domainHintStringsForPasswordSuggestions;                                    //@synthesize domainHintStringsForPasswordSuggestions=_domainHintStringsForPasswordSuggestions - In the implementation block
@property (nonatomic,copy) NSArray * serviceNameHintStringsForPasswordSuggestions;                               //@synthesize serviceNameHintStringsForPasswordSuggestions=_serviceNameHintStringsForPasswordSuggestions - In the implementation block
@property (assign,nonatomic) char bypassLockoutPolicy;                                                           //@synthesize bypassLockoutPolicy=_bypassLockoutPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSWindow * windowToSecure; 
@property (nonatomic,readonly) char windowToSecureIsMainWindow; 
-(void)awakeFromNib;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(NSSearchField *)searchField;
-(id)windowNibName;
-(void)windowDidLoad;
-(NSButton *)cancelButton;
-(void)setCancelButton:(NSButton *)arg1 ;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(void)hideSheet:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(void)focusContentSearchField:(id)arg1 ;
-(void)_updateDisplayedPasswords;
-(void)fillSelectedItem:(id)arg1 ;
-(AuthorizationSheetViewController *)authorizationSheetViewController;
-(void)_installView:(id)arg1 ;
-(SecureWindowLockPolicyEnforcer *)lockPolicyEnforcer;
-(void)_updateCredentialsToDisplay;
-(id)_passwordForRowIndex:(long long)arg1 ;
-(char)_confirmCredentialRemoval;
-(char)_shouldShowSuggestedPasswords;
-(void)_updateFillAndRemoveButtons;
-(id)_titleForSectionHeader:(long long)arg1 ;
-(void)authorizationSheetViewControllerWasCancelled:(id)arg1 ;
-(void)authorizationSheetViewControllerDidSucceed:(id)arg1 ;
-(void)lockFromPolicyEnforcer:(id)arg1 ;
-(NSWindow *)windowToSecure;
-(char)windowToSecureIsMainWindow;
-(void)showSheetInWindow:(id)arg1 forPurpose:(long long)arg2 savedPasswordStore:(id)arg3 siteMetadataManager:(id)arg4 autoFillQuirksManager:(id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)presentAsChildOfView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)domainHintStringsForPasswordSuggestions;
-(void)setDomainHintStringsForPasswordSuggestions:(NSArray *)arg1 ;
-(NSArray *)serviceNameHintStringsForPasswordSuggestions;
-(void)setServiceNameHintStringsForPasswordSuggestions:(NSArray *)arg1 ;
-(char)bypassLockoutPolicy;
-(void)setBypassLockoutPolicy:(char)arg1 ;
-(NSButton *)fillButton;
-(void)setFillButton:(NSButton *)arg1 ;
-(NSTextField *)promptTextField;
-(void)setPromptTextField:(NSTextField *)arg1 ;
-(NSView *)otherPasswordsWindowContentView;
-(void)setOtherPasswordsWindowContentView:(NSView *)arg1 ;
-(id)didSelectCredentialToFillHandler;
-(void)setDidSelectCredentialToFillHandler:(id)arg1 ;
@end

