/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <SocialUI/SOChatViewController.h>
#import <libobjc.A.dylib/NSCandidateListTouchBarItemDelegate.h>
#import <libobjc.A.dylib/NSTouchBarDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>
#import <libobjc.A.dylib/NSControlTextEditingDelegate.h>
#import <libobjc.A.dylib/CNAutocompleteResultWindowDelegate.h>

@protocol CNCancelable;
@class IDSBatchIDQueryController, NSMutableDictionary, NSDate, NSString, CNExtendedAutocompleteResultWindow, NSCandidateListTouchBarItem, NSProgressIndicator, IMHandle, NSTimer, CNAutocompleteStore, NSMutableArray, NSMutableOrderedSet, NSImageView, NSTextField, NSColor, IMAccount, CNAutocompleteResult;

@interface SOAddRecipientFieldViewController : SOChatViewController <NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate, CNAutocompleteFetchDelegate, IDSBatchIDQueryControllerDelegate, NSTextFieldDelegate, NSControlTextEditingDelegate, CNAutocompleteResultWindowDelegate> {

	IDSBatchIDQueryController* _batchIDQueryController;
	NSMutableDictionary* _validatedIDQueryResults;
	NSMutableDictionary* _idsIDsToValidate;
	NSDate* _previousCompletionDisplayDate;
	unsigned long long _previousListCount;
	char _skipCompletionRebuilding;
	char _userIsDeleting;
	char _completionWindowVisible;
	char _isBlockedForDowntime;
	char _shouldShowDowntimeErrorAppearance;
	/*^block*/id _autocompleteResultComparator;
	NSString* _searchString;
	CNExtendedAutocompleteResultWindow* _completionWindow;
	NSCandidateListTouchBarItem* _recipientCandidateListTouchBarItem;
	NSProgressIndicator* _addRecipientProgressIndicator;
	IMHandle* _addRecipientInvitedHandle;
	NSTimer* _addRecipientIDSCheckTimer;
	CNAutocompleteStore* _autocompleteStore;
	long long _completionWindowLevel;
	NSMutableArray* _autocompleteResults;
	NSMutableOrderedSet* _searchResults;
	id<CNCancelable> _currentFetchRequest;
	id _showingMenuForRepresentedObject;
	NSImageView* _screenTimeGlyphView;
	NSMutableDictionary* _lastMessageDateCache;
	NSTextField* _blockedForDowntimeTextField;
	NSImageView* _blockedForDowntimeImageView;
	NSColor* _textFieldNormalColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSCandidateListTouchBarItem * recipientCandidateListTouchBarItem;              //@synthesize recipientCandidateListTouchBarItem=_recipientCandidateListTouchBarItem - In the implementation block
@property (assign) char userIsDeleting;                                                           //@synthesize userIsDeleting=_userIsDeleting - In the implementation block
@property (retain) NSProgressIndicator * addRecipientProgressIndicator;                           //@synthesize addRecipientProgressIndicator=_addRecipientProgressIndicator - In the implementation block
@property (retain) IMHandle * addRecipientInvitedHandle;                                          //@synthesize addRecipientInvitedHandle=_addRecipientInvitedHandle - In the implementation block
@property (nonatomic,retain) NSTimer * addRecipientIDSCheckTimer;                                 //@synthesize addRecipientIDSCheckTimer=_addRecipientIDSCheckTimer - In the implementation block
@property (readonly) IMAccount * autocompleteAccount; 
@property (readonly) id autocompleteResultComparator;                                             //@synthesize autocompleteResultComparator=_autocompleteResultComparator - In the implementation block
@property (getter=isCompletionWindowVisible,readonly) char completionWindowVisible;               //@synthesize completionWindowVisible=_completionWindowVisible - In the implementation block
@property (nonatomic,retain) CNExtendedAutocompleteResultWindow * completionWindow;               //@synthesize completionWindow=_completionWindow - In the implementation block
@property (nonatomic,retain) CNAutocompleteStore * autocompleteStore;                             //@synthesize autocompleteStore=_autocompleteStore - In the implementation block
@property (assign) long long completionWindowLevel;                                               //@synthesize completionWindowLevel=_completionWindowLevel - In the implementation block
@property (retain) NSMutableArray * autocompleteResults;                                          //@synthesize autocompleteResults=_autocompleteResults - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * searchResults;                                 //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) id<CNCancelable> currentFetchRequest;                                //@synthesize currentFetchRequest=_currentFetchRequest - In the implementation block
@property (retain) id showingMenuForRepresentedObject;                                            //@synthesize showingMenuForRepresentedObject=_showingMenuForRepresentedObject - In the implementation block
@property (readonly) char shouldShowAccountColumn; 
@property (nonatomic,retain) NSImageView * screenTimeGlyphView;                                   //@synthesize screenTimeGlyphView=_screenTimeGlyphView - In the implementation block
@property (retain) NSMutableDictionary * lastMessageDateCache;                                    //@synthesize lastMessageDateCache=_lastMessageDateCache - In the implementation block
@property (nonatomic,retain) NSTextField * blockedForDowntimeTextField;                           //@synthesize blockedForDowntimeTextField=_blockedForDowntimeTextField - In the implementation block
@property (nonatomic,retain) NSImageView * blockedForDowntimeImageView;                           //@synthesize blockedForDowntimeImageView=_blockedForDowntimeImageView - In the implementation block
@property (assign,nonatomic) char isBlockedForDowntime;                                           //@synthesize isBlockedForDowntime=_isBlockedForDowntime - In the implementation block
@property (nonatomic,retain) NSColor * textFieldNormalColor;                                      //@synthesize textFieldNormalColor=_textFieldNormalColor - In the implementation block
@property (assign,nonatomic) char shouldShowDowntimeErrorAppearance;                              //@synthesize shouldShowDowntimeErrorAppearance=_shouldShowDowntimeErrorAppearance - In the implementation block
@property (readonly) NSTextField * addRecipientField; 
@property (nonatomic,retain) NSString * searchString;                                             //@synthesize searchString=_searchString - In the implementation block
@property (readonly) char showingCompletionWindow; 
@property (assign) char skipCompletionRebuilding;                                                 //@synthesize skipCompletionRebuilding=_skipCompletionRebuilding - In the implementation block
@property (readonly) CNAutocompleteResult * selectedCompletionResult; 
+(void)initialize;
+(void)_updateABPropertyToIMAccountMap;
+(void)_presentUnregisteredErrorForHandle:(id)arg1 ;
+(id)activeLegacyIMAccountsForABProperty:(id)arg1 ;
+(id)_stringForAutocompleteResultSourceType:(unsigned long long)arg1 ;
+(id)activeAddressBookProperties;
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayout;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(NSRange)arg4 indexOfSelectedItem:(long long*)arg5 ;
-(id)makeTouchBar;
-(void)viewDidLoad;
-(void)viewWillDisappear;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2 ;
-(void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(unsigned long long)arg2 ;
-(CNExtendedAutocompleteResultWindow *)completionWindow;
-(void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4 ;
-(NSMutableOrderedSet *)searchResults;
-(void)setSearchResults:(NSMutableOrderedSet *)arg1 ;
-(CNAutocompleteStore *)autocompleteStore;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(char)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2 ;
-(/*^block*/id)resultComparatorForAutocompleteFetch:(id)arg1 ;
-(void)setAutocompleteStore:(CNAutocompleteStore *)arg1 ;
-(id<CNCancelable>)currentFetchRequest;
-(void)selectedResult:(id)arg1 ;
-(void)selectionDidChange:(id)arg1 ;
-(id)currentPrefix;
-(void)didSelectResult:(id)arg1 ;
-(id)accountStringForResult:(id)arg1 ;
-(id)addressStringForResult:(id)arg1 ;
-(id)iconTypeForResult:(id)arg1 selected:(char)arg2 ;
-(void)setAutocompleteResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)autocompleteResults;
-(void)dismissCompletionUI;
-(void)setCompletionWindow:(CNExtendedAutocompleteResultWindow *)arg1 ;
-(void)chatDisplayControllerWillChange:(id)arg1 ;
-(char)showingCompletionWindow;
-(void)setSkipCompletionRebuilding:(char)arg1 ;
-(CNAutocompleteResult *)selectedCompletionResult;
-(id)handleForChosenCompletionResult:(id)arg1 ;
-(char)skipCompletionRebuilding;
-(NSTextField *)addRecipientField;
-(id)autocompleteStringForFieldEditor:(id)arg1 ;
-(char)selectCurrentResult;
-(NSRange)rangeForUserCompletionInFieldEditor:(id)arg1 ;
-(void)setUserIsDeleting:(char)arg1 ;
-(void)_startAutocompletion;
-(IMAccount *)autocompleteAccount;
-(id)accountForAutocompleteResult:(id)arg1 ;
-(id)_lastDateForIMHandle:(id)arg1 ;
-(long long)_knownIMessageIDStatusForIDSID:(id)arg1 ;
-(char)isHandleIDAllowedToJoinConversation:(id)arg1 ;
-(void)setIsBlockedForDowntime:(char)arg1 ;
-(void)setShouldShowDowntimeErrorAppearance:(char)arg1 ;
-(long long)_knownIMessageIDStatusForIMHandle:(id)arg1 ;
-(void)setAddRecipientInvitedHandle:(IMHandle *)arg1 ;
-(void)_idsCheckTimerDidFire:(id)arg1 ;
-(void)setAddRecipientIDSCheckTimer:(NSTimer *)arg1 ;
-(NSTimer *)addRecipientIDSCheckTimer;
-(IMHandle *)addRecipientInvitedHandle;
-(void)_cleanupIDSCheckTimer;
-(void)_cleanupIDSCheckUI;
-(NSProgressIndicator *)addRecipientProgressIndicator;
-(NSImageView *)screenTimeGlyphView;
-(void)setScreenTimeGlyphView:(NSImageView *)arg1 ;
-(void)setCurrentFetchRequest:(id<CNCancelable>)arg1 ;
-(void)setLastMessageDateCache:(NSMutableDictionary *)arg1 ;
-(void)_updateRecipientCandidateListTouchBarItem;
-(void)_addIMHandleIDToDanglingHandlesForHandleGUID:(id)arg1 typedString:(id)arg2 ;
-(unsigned long long)indexOfSelectedCompletionResult;
-(NSMutableDictionary *)lastMessageDateCache;
-(void)_updateAutoCompleteUI;
-(id)_additionalSearchAccountsToHandleIDs;
-(id)_completionResultWithPotentialValidationForName:(id)arg1 imHandleID:(id)arg2 person:(id)arg3 account:(id)arg4 result:(id)arg5 addressType:(long long)arg6 ;
-(id)_searchString:(id)arg1 matchForAlternativeCombinationsOfFirstName:(id)arg2 lastName:(id)arg3 ;
-(char)_searchString:(id)arg1 matchesWithHandleID:(id)arg2 ;
-(char)handleIsMe:(id)arg1 ;
-(id)autocompleteResultComparator;
-(char)userIsDeleting;
-(void)updateWindowLocation;
-(CGPoint)calculateWindowOrigin;
-(void)completionWindowDidResize:(id)arg1 ;
-(long long)completionWindowLevel;
-(char)shouldShowAccountColumn;
-(char)isHandleOrHandleAliasAlreadyAdded:(id)arg1 ;
-(char)_addSearchResult:(id)arg1 ;
-(id)_completionResultsForName:(id)arg1 imHandleID:(id)arg2 person:(id)arg3 addressBookProperty:(id)arg4 originalResult:(id)arg5 ;
-(void)_queryIDSIMessageDestinations;
-(void)showCompletions;
-(void)controlTextDidChange;
-(char)shouldShowDowntimeErrorAppearance;
-(void)_commonAddRecipientFieldViewControllerInit;
-(void)traceCompletionSelection;
-(NSCandidateListTouchBarItem *)recipientCandidateListTouchBarItem;
-(void)setRecipientCandidateListTouchBarItem:(NSCandidateListTouchBarItem *)arg1 ;
-(void)setAddRecipientProgressIndicator:(NSProgressIndicator *)arg1 ;
-(char)isCompletionWindowVisible;
-(void)setCompletionWindowLevel:(long long)arg1 ;
-(id)showingMenuForRepresentedObject;
-(void)setShowingMenuForRepresentedObject:(id)arg1 ;
-(NSTextField *)blockedForDowntimeTextField;
-(void)setBlockedForDowntimeTextField:(NSTextField *)arg1 ;
-(NSImageView *)blockedForDowntimeImageView;
-(void)setBlockedForDowntimeImageView:(NSImageView *)arg1 ;
-(char)isBlockedForDowntime;
-(NSColor *)textFieldNormalColor;
-(void)setTextFieldNormalColor:(NSColor *)arg1 ;
@end

