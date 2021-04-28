/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSOutlineViewDataSource.h>
#import <libobjc.A.dylib/NSOutlineViewDelegate.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>
#import <libobjc.A.dylib/NSMenuDelegate.h>
#import <libobjc.A.dylib/ABBookStateSaving.h>

@protocol ABGroupHelperFactory, ABGroupDragHelper, ABGroupDropHelper, ABAccessoryViewProvider, ABGroupListStyleProvider, NSObject;
@class NSString, ABGroupListView, ABGroupEntriesList, ABActionAutovalidator, ABKeystrokeForwarder, NSArray;

@interface ABGroupListController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, NSTextFieldDelegate, NSMenuDelegate, ABBookStateSaving> {

	ABGroupListView* _outlineView;
	id<ABGroupHelperFactory> _helperFactory;
	id<ABGroupDragHelper> _dragHelper;
	id<ABGroupDropHelper> _drophelper;
	char _didAwakeFromNib;
	ABGroupEntriesList* _groupEntriesList;
	NSString* _selectedGroupEntryIdentifier;
	NSString* _selectedGroupName;
	ABActionAutovalidator* _autovalidator;
	ABKeystrokeForwarder* _keystrokeForwarder;
	SEL _entryTextDidChangeMethod;
	/*^block*/id _editCompletionHandler;
	NSString* _identifier;
	NSString* _autosaveName;
	NSArray* _peopleForHighlightedMembership;
	id<ABAccessoryViewProvider> _accessoryViewProvider;
	id<ABGroupListStyleProvider> _styleProvider;
	long long _disableSelectionNotificationsCount;
	id<NSObject> _didEnterFullScreenToken;
	id<NSObject> _didLeaveFullScreenToken;

}

@property (retain) id<ABGroupDragHelper> dragHelper;                                         //@synthesize dragHelper=_dragHelper - In the implementation block
@property (retain) id<ABGroupDropHelper> dropHelper;                                         //@synthesize drophelper=_drophelper - In the implementation block
@property (copy) NSString * selectedGroupEntryIdentifier;                                    //@synthesize selectedGroupEntryIdentifier=_selectedGroupEntryIdentifier - In the implementation block
@property (copy) NSString * selectedGroupName;                                               //@synthesize selectedGroupName=_selectedGroupName - In the implementation block
@property (copy) id editCompletionHandler;                                                   //@synthesize editCompletionHandler=_editCompletionHandler - In the implementation block
@property (retain) id<NSObject> didEnterFullScreenToken;                                     //@synthesize didEnterFullScreenToken=_didEnterFullScreenToken - In the implementation block
@property (retain) id<NSObject> didLeaveFullScreenToken;                                     //@synthesize didLeaveFullScreenToken=_didLeaveFullScreenToken - In the implementation block
@property (__weak) ABGroupListView * outlineView;                                            //@synthesize outlineView=_outlineView - In the implementation block
@property (__weak) id<ABGroupHelperFactory> helperFactory;                                   //@synthesize helperFactory=_helperFactory - In the implementation block
@property (nonatomic,retain) ABGroupEntriesList * groupEntriesList;                          //@synthesize groupEntriesList=_groupEntriesList - In the implementation block
@property (copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * autosaveName;                                                    //@synthesize autosaveName=_autosaveName - In the implementation block
@property (nonatomic,retain) id<ABAccessoryViewProvider> accessoryViewProvider;              //@synthesize accessoryViewProvider=_accessoryViewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)awakeFromNib;
-(void)copy:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
-(void)delete:(id)arg1 ;
-(ABGroupListView *)outlineView;
-(void)setOutlineView:(ABGroupListView *)arg1 ;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3 ;
-(void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3 ;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(void)pasteboardChangedOwner:(id)arg1 ;
-(double)contentOffset;
-(id<ABGroupHelperFactory>)helperFactory;
-(void)reloadAndRestoreSelection;
-(void)setHelperFactory:(id<ABGroupHelperFactory>)arg1 ;
-(void)groupEntriesDidChange:(id)arg1 ;
-(long long)selectableRowForPreviouslySelectedRow:(long long)arg1 ;
-(NSString *)selectedGroupEntryIdentifier;
-(void)selectGroupEntryWithIdentifier:(id)arg1 ;
-(void)selectGroupEntry:(id)arg1 ;
-(char)canSelectEntryAtRow:(long long)arg1 ;
-(id)childrenForEntry:(id)arg1 ;
-(void)configureCellView:(id)arg1 forEntry:(id)arg2 ;
-(id)groupEntries;
-(void)setSelectedGroupEntryIdentifier:(NSString *)arg1 ;
-(void)updateSelectionAppearance;
-(char)canDropOnEntry:(id)arg1 ;
-(id)dropHelperWithDraggingInfo:(id)arg1 droppedEntry:(id)arg2 childIndex:(long long)arg3 ;
-(id)selectedGroupEntry;
-(void)setGroupEntriesList:(ABGroupEntriesList *)arg1 ;
-(ABGroupEntriesList *)groupEntriesList;
-(void)saveState;
-(id)entryForAction:(id)arg1 ;
-(id)selectedGroups;
-(char)canSendEmailToGroup;
-(char)canCopy;
-(char)canCut;
-(char)canEditSmartGroup;
-(void)reloadAccessoryViewsForEntries:(id)arg1 ;
-(void)callRenameDelegate:(id)arg1 ;
-(char)handleDeleteKey:(id)arg1 ;
-(void)updateContentOffset;
-(void)setDidEnterFullScreenToken:(id<NSObject>)arg1 ;
-(void)setDidLeaveFullScreenToken:(id<NSObject>)arg1 ;
-(char)canDeleteWithMenuItem:(id)arg1 ;
-(id)entryToValidate;
-(void)_updateGroupHighlightStateForTableRowView:(id)arg1 row:(long long)arg2 ;
-(void)_updateGroupHighlightState;
-(void)setDropHelper:(id<ABGroupDropHelper>)arg1 ;
-(id<ABGroupDropHelper>)dropHelper;
-(char)canDragEntries:(id)arg1 ;
-(void)setDragHelper:(id<ABGroupDragHelper>)arg1 ;
-(id<ABGroupDragHelper>)dragHelper;
-(void)groupEntriesListWillDeleteGroups:(id)arg1 ;
-(void)commitEditingByChangingFirstResponder;
-(void)setEditCompletionHandler:(id)arg1 ;
-(void)callEditCompletionHandler:(id)arg1 ;
-(void)runWithSelectionNotificationsDisabled:(/*^block*/id)arg1 ;
-(void)performSelectActionIfSelectionNotificationsEnabled;
-(id)selectedGroup;
-(void)setSelectedGroup:(id)arg1 ;
-(id)accessoryViewForEntry:(id)arg1 ;
-(id<ABAccessoryViewProvider>)accessoryViewProvider;
-(void)disableSelectionNotifications;
-(void)enableSelectionNotifications;
-(char)selectionNotificationsDisabled;
-(void)performSelectAction;
-(void)setSelectedGroupName:(NSString *)arg1 ;
-(void)saveSelectedGroupEntryToState:(id)arg1 ;
-(void)restoreSelectedGroupEntryFromState:(id)arg1 ;
-(void)editSmartGroup:(id)arg1 ;
-(void)sendEmailToGroup:(id)arg1 ;
-(void)restoreState;
-(char)canPaste;
-(id)entryForCreatingGroups;
-(void)createGroupInSection:(id)arg1 ;
-(void)printDescription:(id)arg1 ;
-(char)canRenameGroupWithMenuItem:(id)arg1 ;
-(void)renameGroup:(id)arg1 ;
-(void)highlightGroupsWithMembers:(id)arg1 ;
-(void)importFiles:(id)arg1 showImportConfirmation:(char)arg2 ignoresGuardianRestrictions:(char)arg3 ;
-(void)editGroupEntry:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setSelectedGroups:(id)arg1 ;
-(void)entryTextDidChange:(id)arg1 ;
-(NSString *)selectedGroupName;
-(id)editCompletionHandler;
-(void)setAccessoryViewProvider:(id<ABAccessoryViewProvider>)arg1 ;
-(id<NSObject>)didEnterFullScreenToken;
-(id<NSObject>)didLeaveFullScreenToken;
@end

