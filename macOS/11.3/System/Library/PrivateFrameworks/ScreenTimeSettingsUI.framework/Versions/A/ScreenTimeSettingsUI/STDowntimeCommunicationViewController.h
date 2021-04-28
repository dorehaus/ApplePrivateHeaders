/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/Versions/A/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/CNFamilyMemberContactsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNFamilyMemberWhitelistedContactsViewControllerDelegate.h>
#import <libobjc.A.dylib/STProtectedControlDelegate.h>

@class NSString, FAFamilyMember, CNFamilyMemberContactsViewController, CNFamilyMemberWhitelistedContactsViewController, STCommunicationContactEditingViewController, NSButton, NSView, NSNumber, STUsersController;

@interface STDowntimeCommunicationViewController : NSViewController <CNFamilyMemberContactsViewControllerDelegate, CNFamilyMemberWhitelistedContactsViewControllerDelegate, STProtectedControlDelegate> {

	char _showContactsManagingControls;
	char _isValidatingSpecificContacts;
	char _isValidatingWhitelistedContacts;
	NSString* _descriptionString;
	FAFamilyMember* _familyMember;
	CNFamilyMemberContactsViewController* _familyMemberContactsViewController;
	CNFamilyMemberWhitelistedContactsViewController* _familyMemberWhitelistedContactsViewController;
	STCommunicationContactEditingViewController* _editListViewController;
	NSButton* _leastRestrictiveOptionRadioButton;
	NSButton* _specificContactsRadioButton;
	NSView* _contactManagementStateView;
	NSButton* _managingOnOffButton;
	NSButton* _allowContactEditingCheckBox;
	NSNumber* _numberOfContacts;

}

@property (nonatomic,retain) FAFamilyMember * familyMember;                                                                                //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) CNFamilyMemberContactsViewController * familyMemberContactsViewController;                                    //@synthesize familyMemberContactsViewController=_familyMemberContactsViewController - In the implementation block
@property (nonatomic,retain) CNFamilyMemberWhitelistedContactsViewController * familyMemberWhitelistedContactsViewController;              //@synthesize familyMemberWhitelistedContactsViewController=_familyMemberWhitelistedContactsViewController - In the implementation block
@property (assign,nonatomic,__weak) STCommunicationContactEditingViewController * editListViewController;                                  //@synthesize editListViewController=_editListViewController - In the implementation block
@property (retain) NSButton * leastRestrictiveOptionRadioButton;                                                                           //@synthesize leastRestrictiveOptionRadioButton=_leastRestrictiveOptionRadioButton - In the implementation block
@property (retain) NSButton * specificContactsRadioButton;                                                                                 //@synthesize specificContactsRadioButton=_specificContactsRadioButton - In the implementation block
@property (nonatomic,readonly) NSString * communicationDescription; 
@property (retain) NSView * contactManagementStateView;                                                                                    //@synthesize contactManagementStateView=_contactManagementStateView - In the implementation block
@property (retain) NSButton * managingOnOffButton;                                                                                         //@synthesize managingOnOffButton=_managingOnOffButton - In the implementation block
@property (retain) NSButton * allowContactEditingCheckBox;                                                                                 //@synthesize allowContactEditingCheckBox=_allowContactEditingCheckBox - In the implementation block
@property (nonatomic,readonly) char editListButtonEnabled; 
@property (nonatomic,readonly) NSString * manageContactsDescriptionString; 
@property (nonatomic,readonly) NSString * onOffLabelString; 
@property (nonatomic,readonly) NSString * onOffButtonString; 
@property (nonatomic,retain) NSNumber * numberOfContacts;                                                                                  //@synthesize numberOfContacts=_numberOfContacts - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactsLabelValue; 
@property (nonatomic,readonly) char contactManagementHidden; 
@property (nonatomic,readonly) char contactEditButtonHidden; 
@property (nonatomic,readonly) char allowContactEditingHidden; 
@property (nonatomic,readonly) char allowContactEditingEnabled; 
@property (assign,nonatomic) char isValidatingSpecificContacts;                                                                            //@synthesize isValidatingSpecificContacts=_isValidatingSpecificContacts - In the implementation block
@property (assign,nonatomic) char isValidatingWhitelistedContacts;                                                                         //@synthesize isValidatingWhitelistedContacts=_isValidatingWhitelistedContacts - In the implementation block
@property (retain) STUsersController * representedObject; 
@property (nonatomic,copy,readonly) NSString * descriptionString;                                                                          //@synthesize descriptionString=_descriptionString - In the implementation block
@property (assign,nonatomic) char showContactsManagingControls;                                                                            //@synthesize showContactsManagingControls=_showContactsManagingControls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingEditListButtonEnabled;
+(id)keyPathsForValuesAffectingManageContactsDescriptionString;
+(id)keyPathsForValuesAffectingOnOffLabelString;
+(id)keyPathsForValuesAffectingOnOffButtonString;
+(id)keyPathsForValuesAffectingContactsLabelValue;
+(id)keyPathsForValuesAffectingContactManagementHidden;
+(id)keyPathsForValuesAffectingContactEditButtonHidden;
+(id)keyPathsForValuesAffectingAllowContactEditingHidden;
+(id)keyPathsForValuesAffectingAllowContactEditingEnabled;
+(id)keyPathsForValuesAffectingCommunicationDescription;
-(void)dealloc;
-(void)setRepresentedObject:(STUsersController *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(STUsersController *)representedObject;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(NSString *)descriptionString;
-(FAFamilyMember *)familyMember;
-(void)setFamilyMember:(FAFamilyMember *)arg1 ;
-(void)familyMemberContactsDidChangeFamilyMemberContactsViewController:(id)arg1 ;
-(void)dismissFamilyMemberContactsViewController:(id)arg1 ;
-(void)whitelistedContactsDidChangeWhitelistedContactsViewController:(id)arg1 ;
-(void)whitelistedContactsViewController:(id)arg1 presentViewController:(id)arg2 ;
-(void)whitelistedContactsViewController:(id)arg1 dismissViewController:(id)arg2 ;
-(NSNumber *)numberOfContacts;
-(void)_contactStoreDidChange:(id)arg1 ;
-(void)setIsValidatingSpecificContacts:(char)arg1 ;
-(void)setIsValidatingWhitelistedContacts:(char)arg1 ;
-(void)_validateContactManagementControlsHidden;
-(void)_updateFamilyMemberContactsViewController;
-(void)_validateAllowContactEditingCheckBoxState;
-(void)_saveChangesNotification:(id)arg1 ;
-(void)_discardChangesNotification:(id)arg1 ;
-(void)_validateRadioButtonState;
-(char)_familyMemberChangedForOldUser:(id)arg1 newUser:(id)arg2 ;
-(CNFamilyMemberContactsViewController *)familyMemberContactsViewController;
-(char)showContactsManagingControls;
-(NSButton *)leastRestrictiveOptionRadioButton;
-(void)_saveDowntimeCommunicationPolicy:(long long)arg1 ;
-(void)_presentWhitelistedContactsViewControllerIfNeeded;
-(CNFamilyMemberWhitelistedContactsViewController *)familyMemberWhitelistedContactsViewController;
-(void)_setAllowContactEditing:(char)arg1 ;
-(void)setEditListViewController:(STCommunicationContactEditingViewController *)arg1 ;
-(void)_createFamilyMemberWhitelistedContactsViewController;
-(NSButton *)specificContactsRadioButton;
-(NSView *)contactManagementStateView;
-(NSButton *)managingOnOffButton;
-(void)setFamilyMemberContactsViewController:(CNFamilyMemberContactsViewController *)arg1 ;
-(void)setFamilyMemberWhitelistedContactsViewController:(CNFamilyMemberWhitelistedContactsViewController *)arg1 ;
-(void)setNumberOfContacts:(NSNumber *)arg1 ;
-(NSButton *)allowContactEditingCheckBox;
-(STCommunicationContactEditingViewController *)editListViewController;
-(char)isValidatingSpecificContacts;
-(char)isValidatingWhitelistedContacts;
-(void)actionCancelledForControl:(id)arg1 ;
-(char)editListButtonEnabled;
-(NSString *)manageContactsDescriptionString;
-(NSString *)onOffLabelString;
-(NSString *)onOffButtonString;
-(NSString *)contactsLabelValue;
-(char)contactManagementHidden;
-(char)contactEditButtonHidden;
-(char)allowContactEditingHidden;
-(char)allowContactEditingEnabled;
-(NSString *)communicationDescription;
-(void)clickEditButton:(id)arg1 ;
-(void)chooseRadioButton:(id)arg1 ;
-(void)toggleOnOffButton:(id)arg1 ;
-(void)toggleAllowContactEditingCheckBox:(id)arg1 ;
-(void)setShowContactsManagingControls:(char)arg1 ;
-(void)setLeastRestrictiveOptionRadioButton:(NSButton *)arg1 ;
-(void)setSpecificContactsRadioButton:(NSButton *)arg1 ;
-(void)setContactManagementStateView:(NSView *)arg1 ;
-(void)setManagingOnOffButton:(NSButton *)arg1 ;
-(void)setAllowContactEditingCheckBox:(NSButton *)arg1 ;
@end

