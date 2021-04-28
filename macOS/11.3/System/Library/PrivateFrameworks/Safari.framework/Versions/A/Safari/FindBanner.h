/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Banner.h>
#import <libobjc.A.dylib/NSControlTextEditingDelegate.h>
#import <libobjc.A.dylib/NSMenuItemValidation.h>

@class NSTimer, NSString, NSResponder, NSSearchField, NSSegmentedControl, NSTextField, NSPopUpButton;

@interface FindBanner : Banner <NSControlTextEditingDelegate, NSMenuItemValidation> {

	NSTimer* _clearMatchCountTimer;
	int _lastFindPasteboardChangeCount;
	unsigned long long _matchCount;
	long long _matchIndex;
	NSString* _previousSearchString;
	char _nextReturnShouldPerformFind;
	char _suppressUpdatingSearchFieldFromFindPasteboard;
	char _forceUpdateSearchFieldFromFindPasteboardScheduled;
	char _beepOnFailure;
	NSResponder* _supplementalSearchFieldCommandPerformer;
	NSSearchField* _searchField;
	NSSegmentedControl* _nextPreviousControl;
	NSTextField* _statusField;
	NSPopUpButton* _findBehaviorPopUp;

}

@property (__weak) NSSearchField * searchField;                                                         //@synthesize searchField=_searchField - In the implementation block
@property (__weak) NSSegmentedControl * nextPreviousControl;                                            //@synthesize nextPreviousControl=_nextPreviousControl - In the implementation block
@property (__weak) NSTextField * statusField;                                                           //@synthesize statusField=_statusField - In the implementation block
@property (__weak) NSPopUpButton * findBehaviorPopUp;                                                   //@synthesize findBehaviorPopUp=_findBehaviorPopUp - In the implementation block
@property (assign,nonatomic,__weak) id<FindBannerDelegate> delegate; 
@property (assign,nonatomic,__weak) NSResponder * supplementalSearchFieldCommandPerformer;              //@synthesize supplementalSearchFieldCommandPerformer=_supplementalSearchFieldCommandPerformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)bannerSortOrder;
+(unsigned long long)_optionsForFindingMatches;
-(void)dealloc;
-(id)init;
-(id)_searchString;
-(void)awakeFromNib;
-(void)controlTextDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(NSSearchField *)searchField;
-(char)isInKeyWindow;
-(void)focusSearchField;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(void)setStatusField:(NSTextField *)arg1 ;
-(NSTextField *)statusField;
-(id)bannerNibName;
-(void)didInstallBannerView;
-(void)willUninstallBannerView;
-(void)hideOverlay;
-(void)findNext:(id)arg1 ;
-(void)findPrevious:(id)arg1 ;
-(void)_clearStatus;
-(void)_stopObservingWindowAndBannerView;
-(void)_updateHighlightedMatches;
-(void)_updateNextAndPreviousButtons;
-(void)_startObservingWindowAndBannerView;
-(void)_updateSearchFieldFromFindPasteboard;
-(void)_makeSearchFieldFirstResponder;
-(void)_findBannerBehaviorDidChange:(id)arg1 ;
-(void)_cancelClearMatchCountTimer;
-(long long)_segmentIndexForFindPrevious;
-(void)_findWithDirection:(unsigned long long)arg1 beepOnFailure:(char)arg2 ;
-(void)_setUseMatchesWordStartsOnly:(char)arg1 ;
-(char)readyToFind;
-(long long)_segmentIndexForFindNext;
-(id)_computeStatusText;
-(void)_updateFindPasteboardFromSearchField;
-(void)_findString:(id)arg1 direction:(unsigned long long)arg2 beepOnFailure:(char)arg3 ;
-(char)_canHighlightAllMatches;
-(unsigned long long)_optionsForCountingMatches;
-(void)_windowDidUpdate:(id)arg1 ;
-(void)_highlightAllMatchesIfPossible;
-(void)setSearchFieldString:(id)arg1 ;
-(void)findFromNextPreviousControl:(id)arg1 ;
-(void)findFromSearchField:(id)arg1 ;
-(void)takeFindBehaviorFromPopupButton:(id)arg1 ;
-(void)updateDisplayedMatchCountForString:(id)arg1 to:(unsigned long long)arg2 at:(long long)arg3 ;
-(NSResponder *)supplementalSearchFieldCommandPerformer;
-(void)setSupplementalSearchFieldCommandPerformer:(NSResponder *)arg1 ;
-(NSSegmentedControl *)nextPreviousControl;
-(void)setNextPreviousControl:(NSSegmentedControl *)arg1 ;
-(NSPopUpButton *)findBehaviorPopUp;
-(void)setFindBehaviorPopUp:(NSPopUpButton *)arg1 ;
@end

