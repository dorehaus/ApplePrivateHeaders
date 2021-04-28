/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/CNContactDetailsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactNameViewControllerDelegate.h>
#import <libobjc.A.dylib/AKCardViewDataSourceSupport.h>
#import <libobjc.A.dylib/ABCardViewDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CNEditAuthorizationViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactEditingInterfaceElement.h>
#import <libobjc.A.dylib/CNUIShareKitTransitionProvider.h>

@protocol CNCancelable, CNInhibitor, CNContactCardViewControllerLogger, CNContactCardViewControllerDelegate;
@class AKCardViewDataSource, CNContact, CNUIUserActionListDataSource, ABPerson, ABAddressBook, AKCardViewDataSourceFactory, ABCardViewUndoableDataSource, CNContactCardViewControllerABPersonViewMediator, CNContactCardViewControllerDataSourceDelegate, ABCardViewSaveHelper, ABCommandExecutor, CNUIEnvironment, CNContactCardWidgetProvider, CNContactCardViewControllerWidgetProviderDelegate, CNContactCardViewControlContext, NSArray, NSUndoManager, NSMutableDictionary, NSStackView, NSTextField, CNContactAvatarPersistenceHelper, ABCardViewStyleProvider, NSString, CNContainer, NSColor, NSSet;

@interface CNContactCardViewController : NSViewController <CNContactDetailsViewControllerDelegate, CNContactNameViewControllerDelegate, AKCardViewDataSourceSupport, ABCardViewDelegate, CNAvatarViewDelegate, CNEditAuthorizationViewControllerDelegate, CNContactEditingInterfaceElement, CNUIShareKitTransitionProvider> {

	char _editable;
	char _selectable;
	char _shouldSaveChanges;
	char _shouldShowLinkedContacts;
	char _shouldShowSuggestedFields;
	char _shouldShowInMapsButtons;
	char _shouldDisableRefetching;
	char _shouldPreferRefetching;
	char _fetchAsynchronously;
	char _isMakingChangesOutsideOfEditMode;
	AKCardViewDataSource* _dataSource;
	CNContact* _contact;
	CNUIUserActionListDataSource* _userActionListDataSource;
	ABPerson* _legacySaveTarget;
	ABAddressBook* _legacySaveTargetAddressBook;
	id<CNCancelable> _fetchContactToken;
	AKCardViewDataSourceFactory* _dataSourceFactory;
	ABCardViewUndoableDataSource* _undoableDataSource;
	CNContactCardViewControllerABPersonViewMediator* _abPersonViewMediator;
	CNContactCardViewControllerDataSourceDelegate* _dataSourceDelegate;
	ABCardViewSaveHelper* _saveHelper;
	id<CNInhibitor> _editModeSuddenTerminationInhibitor;
	ABCommandExecutor* _commandExecutor;
	ABCommandExecutor* _dataSourceCommandExecutor;
	CNUIEnvironment* _environment;
	CNContactCardWidgetProvider* _widgetProvider;
	CNContactCardViewControllerWidgetProviderDelegate* _widgetProviderDelegate;
	CNContactCardViewControlContext* _controlContext;
	NSArray* _widgetsDisplayed;
	id<CNContactCardViewControllerLogger> _logger;
	NSUndoManager* _undoManager;
	NSMutableDictionary* _displayAtttibutes;
	NSStackView* _stackView;
	NSTextField* _noContactLabel;
	CNContactAvatarPersistenceHelper* _persistenceHelper;
	ABCardViewStyleProvider* _styleProvider;
	long long _backgroundStyle;
	NSString* _warningMessage;
	id<CNContactCardViewControllerDelegate> _contactCardControllerDelegate;
	unsigned long long _mode;
	unsigned long long _authorizedMode;
	CNContainer* _parentContainer;
	unsigned long long _displayStyle;
	NSColor* _backgroundColor;

}

@property (nonatomic,retain) ABPerson * legacySaveTarget;                                                               //@synthesize legacySaveTarget=_legacySaveTarget - In the implementation block
@property (nonatomic,retain) ABAddressBook * legacySaveTargetAddressBook;                                               //@synthesize legacySaveTargetAddressBook=_legacySaveTargetAddressBook - In the implementation block
@property (nonatomic,retain) id<CNCancelable> fetchContactToken;                                                        //@synthesize fetchContactToken=_fetchContactToken - In the implementation block
@property (nonatomic,retain) AKCardViewDataSourceFactory * dataSourceFactory;                                           //@synthesize dataSourceFactory=_dataSourceFactory - In the implementation block
@property (nonatomic,retain) AKCardViewDataSource * dataSource;                                                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) ABCardViewUndoableDataSource * undoableDataSource;                                         //@synthesize undoableDataSource=_undoableDataSource - In the implementation block
@property (nonatomic,retain) CNContactCardViewControllerABPersonViewMediator * abPersonViewMediator;                    //@synthesize abPersonViewMediator=_abPersonViewMediator - In the implementation block
@property (nonatomic,retain) CNContactCardViewControllerDataSourceDelegate * dataSourceDelegate;                        //@synthesize dataSourceDelegate=_dataSourceDelegate - In the implementation block
@property (nonatomic,retain) ABCardViewSaveHelper * saveHelper;                                                         //@synthesize saveHelper=_saveHelper - In the implementation block
@property (nonatomic,retain) id<CNInhibitor> editModeSuddenTerminationInhibitor;                                        //@synthesize editModeSuddenTerminationInhibitor=_editModeSuddenTerminationInhibitor - In the implementation block
@property (nonatomic,retain) ABCommandExecutor * commandExecutor;                                                       //@synthesize commandExecutor=_commandExecutor - In the implementation block
@property (nonatomic,retain) ABCommandExecutor * dataSourceCommandExecutor;                                             //@synthesize dataSourceCommandExecutor=_dataSourceCommandExecutor - In the implementation block
@property (nonatomic,retain) CNUIEnvironment * environment;                                                             //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNContactCardWidgetProvider * widgetProvider;                                              //@synthesize widgetProvider=_widgetProvider - In the implementation block
@property (nonatomic,retain) CNContactCardViewControllerWidgetProviderDelegate * widgetProviderDelegate;                //@synthesize widgetProviderDelegate=_widgetProviderDelegate - In the implementation block
@property (nonatomic,retain) CNContactCardViewControlContext * controlContext;                                          //@synthesize controlContext=_controlContext - In the implementation block
@property (nonatomic,retain) NSArray * widgetsDisplayed;                                                                //@synthesize widgetsDisplayed=_widgetsDisplayed - In the implementation block
@property (nonatomic,retain) id<CNContactCardViewControllerLogger> logger;                                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                                                               //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * displayAtttibutes;                                                   //@synthesize displayAtttibutes=_displayAtttibutes - In the implementation block
@property (nonatomic,retain) NSStackView * stackView;                                                                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSTextField * noContactLabel;                                                              //@synthesize noContactLabel=_noContactLabel - In the implementation block
@property (nonatomic,retain) CNContactAvatarPersistenceHelper * persistenceHelper;                                      //@synthesize persistenceHelper=_persistenceHelper - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * userActionListDataSource;                                   //@synthesize userActionListDataSource=_userActionListDataSource - In the implementation block
@property (nonatomic,readonly) ABPerson * person; 
@property (nonatomic,readonly) CNContact * editedContact; 
@property (nonatomic,retain) ABCardViewStyleProvider * styleProvider;                                                   //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                 //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,getter=isEditable,nonatomic) char editable;                                                           //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isSelectable,nonatomic) char selectable;                                                       //@synthesize selectable=_selectable - In the implementation block
@property (nonatomic,readonly) char hasChanges; 
@property (nonatomic,readonly) char isSaving; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) char isMe; 
@property (assign,nonatomic) char shouldSaveChanges;                                                                    //@synthesize shouldSaveChanges=_shouldSaveChanges - In the implementation block
@property (assign,nonatomic) char shouldShowLinkedContacts;                                                             //@synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts - In the implementation block
@property (assign,nonatomic) char shouldShowSuggestedFields;                                                            //@synthesize shouldShowSuggestedFields=_shouldShowSuggestedFields - In the implementation block
@property (assign,nonatomic) char shouldShowInMapsButtons;                                                              //@synthesize shouldShowInMapsButtons=_shouldShowInMapsButtons - In the implementation block
@property (assign,nonatomic) char shouldDisableRefetching;                                                              //@synthesize shouldDisableRefetching=_shouldDisableRefetching - In the implementation block
@property (assign,nonatomic) char shouldPreferRefetching;                                                               //@synthesize shouldPreferRefetching=_shouldPreferRefetching - In the implementation block
@property (assign,nonatomic) char fetchAsynchronously;                                                                  //@synthesize fetchAsynchronously=_fetchAsynchronously - In the implementation block
@property (nonatomic,retain) NSString * warningMessage;                                                                 //@synthesize warningMessage=_warningMessage - In the implementation block
@property (nonatomic,readonly) char isMakingChangesOutsideOfEditMode;                                                   //@synthesize isMakingChangesOutsideOfEditMode=_isMakingChangesOutsideOfEditMode - In the implementation block
@property (nonatomic,readonly) NSSet * uniqueIdentifiers; 
@property (assign,nonatomic,__weak) id<CNContactCardViewControllerDelegate> contactCardControllerDelegate;              //@synthesize contactCardControllerDelegate=_contactCardControllerDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long authorizedMode;                                                         //@synthesize authorizedMode=_authorizedMode - In the implementation block
@property (nonatomic,retain) CNContainer * parentContainer;                                                             //@synthesize parentContainer=_parentContainer - In the implementation block
@property (assign,nonatomic) unsigned long long displayStyle;                                                           //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,retain) NSColor * backgroundColor;                                                                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double desiredHeight; 
@property (nonatomic,retain) CNContact * contact;                                                                       //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(char)isEmpty;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setEnvironment:(CNUIEnvironment *)arg1 ;
-(CNUIEnvironment *)environment;
-(ABPerson *)person;
-(void)setPerson:(ABPerson *)arg1 ;
-(char)hasChanges;
-(unsigned long long)mode;
-(CGSize)preferredMinimumSize;
-(id<CNContactCardViewControllerLogger>)logger;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(AKCardViewDataSource *)dataSource;
-(void)reloadData;
-(NSColor *)backgroundColor;
-(void)setDataSource:(AKCardViewDataSource *)arg1 ;
-(char)commitEditing;
-(void)loadView;
-(char)isEditable;
-(void)setEditable:(char)arg1 ;
-(void)setSelectable:(char)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(NSUndoManager *)undoManager;
-(char)isSelectable;
-(void)viewDidLoad;
-(void)viewWillDisappear;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(unsigned long long)displayStyle;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(char)isMe;
-(id)initWithEnvironment:(id)arg1 ;
-(char)isUnified;
-(void)setLogger:(id<CNContactCardViewControllerLogger>)arg1 ;
-(void)setDataSourceDelegate:(CNContactCardViewControllerDataSourceDelegate *)arg1 ;
-(CNContactCardViewControllerDataSourceDelegate *)dataSourceDelegate;
-(char)isSaving;
-(CNContainer *)parentContainer;
-(char)canEditContact;
-(CGRect)profilePhotoScreenRect;
-(id)profilePhotoImage;
-(id)hostWindowForShareSheet;
-(CNUIUserActionListDataSource *)userActionListDataSource;
-(void)setUserActionListDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(void)editAuthorizationViewController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2 ;
-(double)desiredHeight;
-(ABCardViewStyleProvider *)styleProvider;
-(void)setStyleProvider:(ABCardViewStyleProvider *)arg1 ;
-(char)editMode;
-(void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3 ;
-(id)colorForProperty:(id)arg1 identifier:(id)arg2 ;
-(void)cardViewNoteDidChange;
-(char)isDirectoryResult;
-(char)canSelectContact;
-(id)containerFetchDescriptionForContact:(id)arg1 ;
-(void)setProhibitedPropertyKeys:(id)arg1 ;
-(void)setShouldSaveChanges:(char)arg1 ;
-(CNContact *)editedContact;
-(void)beginEditingContactImage;
-(void)clearContactImage;
-(void)setPropertyKeysToDisplay:(id)arg1 ;
-(void)avatarViewControllerWantsEdit:(id)arg1 ;
-(char)avatarViewControllerCanDisplayEditOverlay:(id)arg1 ;
-(void)avatarViewControllerDidFinishEditing:(id)arg1 cancelled:(char)arg2 ;
-(void)setWarningMessage:(NSString *)arg1 ;
-(void)highlightSearchTerms:(id)arg1 ;
-(void)contactDetailsViewControllerKeyViewLoopNeedsUpdate:(id)arg1 ;
-(void)addTemplateItemForKey:(id)arg1 ;
-(char)fetchAsynchronously;
-(void)setPerson:(id)arg1 shouldShowLinkedPeople:(char)arg2 ;
-(void)setPerson:(id)arg1 shouldShowLinkedPeople:(char)arg2 shouldShowSuggestedFields:(char)arg3 ;
-(void)setContact:(id)arg1 shouldShowLinkedContacts:(char)arg2 ;
-(void)setContact:(id)arg1 shouldShowLinkedContacts:(char)arg2 shouldShowSuggestedFields:(char)arg3 ;
-(void)setAuthorizedMode:(unsigned long long)arg1 ;
-(void)setParentContainer:(CNContainer *)arg1 ;
-(char)isAvailableKey:(id)arg1 ;
-(unsigned long long)authorizedMode;
-(id)colorForProperty:(id)arg1 ;
-(void)contactNameViewController:(id)arg1 willLoseFocusInDirection:(unsigned long long)arg2 ;
-(void)setShouldDisableRefetching:(char)arg1 ;
-(void)createViewHierarchy;
-(void)commonInitWithEnvironment:(id)arg1 ;
-(void)setSaveHelper:(ABCardViewSaveHelper *)arg1 ;
-(void)setEditModeSuddenTerminationInhibitor:(id<CNInhibitor>)arg1 ;
-(void)setDisplayAtttibutes:(NSMutableDictionary *)arg1 ;
-(void)setDataSourceFactory:(AKCardViewDataSourceFactory *)arg1 ;
-(void)setShouldShowSuggestedFields:(char)arg1 ;
-(void)setControlContext:(CNContactCardViewControlContext *)arg1 ;
-(void)setWidgetProviderDelegate:(CNContactCardViewControllerWidgetProviderDelegate *)arg1 ;
-(void)setWidgetProvider:(CNContactCardWidgetProvider *)arg1 ;
-(CNContactCardViewControllerWidgetProviderDelegate *)widgetProviderDelegate;
-(CNContactCardWidgetProvider *)widgetProvider;
-(void)setAbPersonViewMediator:(CNContactCardViewControllerABPersonViewMediator *)arg1 ;
-(void)setPersistenceHelper:(CNContactAvatarPersistenceHelper *)arg1 ;
-(CNContactAvatarPersistenceHelper *)persistenceHelper;
-(void)didClickHeader:(id)arg1 ;
-(void)tabSwitcherDidChange:(id)arg1 ;
-(id<CNInhibitor>)editModeSuddenTerminationInhibitor;
-(id<CNCancelable>)fetchContactToken;
-(void)ensureUserEnteredDataIsPersistedBeforeViewWillDisappear;
-(void)setNoContactLabel:(NSTextField *)arg1 ;
-(NSTextField *)noContactLabel;
-(void)saveContactIfNecessaryAndRefreshInterface:(char)arg1 ;
-(ABCommandExecutor *)dataSourceCommandExecutor;
-(ABAddressBook *)legacySaveTargetAddressBook;
-(void)setDataSourceCommandExecutor:(ABCommandExecutor *)arg1 ;
-(ABCardViewSaveHelper *)saveHelper;
-(void)setContact:(id)arg1 inParentContainer:(id)arg2 ;
-(void)switchModeFromMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2 refocusOnNameView:(char)arg3 ;
-(char)shouldPresentEditAutorizationUIWhenSwitchingFromMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2 ;
-(void)presentEditAutorizationUI;
-(void)authorizedSwitchModeFromMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2 refocusOnNameView:(char)arg3 ;
-(CNContactCardViewControlContext *)controlContext;
-(void)displayWidgets;
-(void)finishSwichingToEditModeAndRefocusOnNameView:(char)arg1 ;
-(void)finishSwichingToDefaultModeFromMode:(unsigned long long)arg1 ;
-(char)editLikenessMode;
-(void)endPresentationOfContact;
-(void)beginPresentationOfContact;
-(void)endEditModeIfNecessary;
-(ABCommandExecutor *)commandExecutor;
-(void)setCommandExecutor:(ABCommandExecutor *)arg1 ;
-(char)shouldSaveChanges;
-(void)refreshDisplayedValues;
-(void)setFetchContactToken:(id<CNCancelable>)arg1 ;
-(char)shouldRefetchContact:(id)arg1 ;
-(id)contactFetchDescriptionForContact:(id)arg1 ;
-(void)didReceveContactFetchResult:(id)arg1 ;
-(char)shouldDisableRefetching;
-(char)shouldPreferRefetching;
-(char)shouldShowLinkedContacts;
-(void)updateToContact:(id)arg1 inParentContainer:(id)arg2 ;
-(void)handleNilContact;
-(void)handeNewContact:(id)arg1 ;
-(id<CNContactCardViewControllerDelegate>)contactCardControllerDelegate;
-(void)setLegacySaveTarget:(ABPerson *)arg1 ;
-(void)updateDataSourceWithContact:(id)arg1 ;
-(AKCardViewDataSourceFactory *)dataSourceFactory;
-(ABPerson *)legacySaveTarget;
-(NSArray *)widgetsDisplayed;
-(void)dispayAndLayoutNewWidgets:(id)arg1 ;
-(void)setWidgetsDisplayed:(NSArray *)arg1 ;
-(void)setupKeyViewLoop;
-(void)updateWidgets;
-(void)informDelegateOfDeisredHeightChange;
-(void)setShouldShowLinkedContacts:(char)arg1 ;
-(void)setContact:(id)arg1 withSuggestedContact:(id)arg2 ;
-(void)commitDisplayedValues;
-(void)setPersonToCompanyIfNameIsEmpty;
-(char)canEditContactImage;
-(void)editKey:(id)arg1 label:(id)arg2 identifier:(id)arg3 yOffset:(double)arg4 ;
-(void)beginEditingContactKey:(id)arg1 label:(id)arg2 ;
-(void)editKey:(id)arg1 label:(id)arg2 ;
-(void)showDetailsViewControllerInEditModeIfNecessary;
-(char)isKeyDisplayedByNameViewController:(id)arg1 ;
-(NSSet *)uniqueIdentifiers;
-(id)displayAttributesForProperty:(id)arg1 identifier:(id)arg2 ;
-(id)_displayAttributeKeyForProperty:(id)arg1 identifier:(id)arg2 ;
-(NSMutableDictionary *)displayAtttibutes;
-(void)reloadCollectionData;
-(void)reloadNameDataForKey:(id)arg1 ;
-(id)addressBookForActionExecution;
-(void)setPerson:(id)arg1 withSuggestedContact:(id)arg2 ;
-(void)enableUndoWithManager:(id)arg1 ;
-(void)setNoCardLabel:(id)arg1 ;
-(void)selectFirstKeyViewIfNecessary;
-(void)toggleEditing;
-(void)reloadPreservingNoteInsertionPoint;
-(char)isPictureEditable;
-(char)canEditContactKey:(id)arg1 ;
-(void)beginEditingContactKey:(id)arg1 ;
-(void)editKey:(id)arg1 ;
-(void)setDisplayAttributes:(id)arg1 forProperty:(id)arg2 identifier:(id)arg3 ;
-(void)setLegacySaveTargetAddressBook:(ABAddressBook *)arg1 ;
-(ABCardViewUndoableDataSource *)undoableDataSource;
-(void)setUndoableDataSource:(ABCardViewUndoableDataSource *)arg1 ;
-(CNContactCardViewControllerABPersonViewMediator *)abPersonViewMediator;
-(char)shouldShowSuggestedFields;
-(char)shouldShowInMapsButtons;
-(void)setShouldShowInMapsButtons:(char)arg1 ;
-(void)setShouldPreferRefetching:(char)arg1 ;
-(void)setFetchAsynchronously:(char)arg1 ;
-(NSString *)warningMessage;
-(char)isMakingChangesOutsideOfEditMode;
-(void)setContactCardControllerDelegate:(id<CNContactCardViewControllerDelegate>)arg1 ;
@end

