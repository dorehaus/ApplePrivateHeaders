/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSVisualTabPickerSearchFieldDelegate.h>
#import <libobjc.A.dylib/NSVisualTabPickerGridViewDataSource.h>
#import <libobjc.A.dylib/NSVisualTabPickerGridViewDelegate.h>

@protocol NSVisualTabPickerDelegate;
@class NSVisualTabPickerRootView, NSArray, NSOperationQueue, NSString, NSImage;

@interface NSVisualTabPickerRootViewController : NSViewController <NSVisualTabPickerSearchFieldDelegate, NSVisualTabPickerGridViewDataSource, NSVisualTabPickerGridViewDelegate> {

	NSVisualTabPickerRootView* _rootView;
	NSArray* _orderedTabViewItems;
	NSArray* _filteredTabViewItems;
	NSOperationQueue* _filterQueue;
	NSString* _searchText;
	char _isPostponingClosingVisualTabPickerWhenNewTabIsInserted;
	char _didReportPerformSearch;
	char _isClosingBySelectingOrCreatingTab;
	id<NSVisualTabPickerDelegate> _delegate;
	char _shouldStackThumbnails;
	char _tabsShouldBeClosable;
	char _addingNewTab;
	NSImage* _tabBarSnapshot;
	NSImage* _sidebarSnapshot;
	char _shouldShowNewTabButton;
	char _shouldHighlightTiles;
	char _shouldShowCloseButtons;
	char _isClosing;

}

@property (assign,nonatomic) char tabsShouldBeClosable;                                  //@synthesize tabsShouldBeClosable=_tabsShouldBeClosable - In the implementation block
@property (assign) char isClosing;                                                       //@synthesize isClosing=_isClosing - In the implementation block
@property (assign,nonatomic,__weak) id<NSVisualTabPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldStackThumbnails;                                 //@synthesize shouldStackThumbnails=_shouldStackThumbnails - In the implementation block
@property (getter=isAddingNewTab,nonatomic,readonly) char addingNewTab;                  //@synthesize addingNewTab=_addingNewTab - In the implementation block
@property (nonatomic,retain) NSImage * tabBarSnapshot;                                   //@synthesize tabBarSnapshot=_tabBarSnapshot - In the implementation block
@property (nonatomic,retain) NSImage * sidebarSnapshot;                                  //@synthesize sidebarSnapshot=_sidebarSnapshot - In the implementation block
@property (assign,nonatomic) char shouldShowNewTabButton;                                //@synthesize shouldShowNewTabButton=_shouldShowNewTabButton - In the implementation block
@property (assign,nonatomic) char shouldHighlightTiles;                                  //@synthesize shouldHighlightTiles=_shouldHighlightTiles - In the implementation block
@property (assign,nonatomic) char shouldShowCloseButtons;                                //@synthesize shouldShowCloseButtons=_shouldShowCloseButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)springAnimationForVisualTabPicker;
-(void)dealloc;
-(id<NSVisualTabPickerDelegate>)delegate;
-(void)setDelegate:(id<NSVisualTabPickerDelegate>)arg1 ;
-(void)loadView;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)closeVisualTabPickerAnimated:(char)arg1 ;
-(double)tabPickerAnimationDuration;
-(void)setShouldShowNewTabButton:(char)arg1 ;
-(void)setShouldHighlightTiles:(char)arg1 ;
-(void)setShouldShowCloseButtons:(char)arg1 ;
-(id)_tabPickerThumbnailViews;
-(CGRect)contentLayoutRect;
-(char)isSearching;
-(void)visualTabPickerSearchFieldTextDidChange:(id)arg1 ;
-(void)_updateTabsShouldBeClosable;
-(id)_makeTabPickerBackdropVisualEffectViewWithFrame:(CGRect)arg1 ;
-(char)shouldShowNewTabButton;
-(char)shouldHighlightTiles;
-(char)shouldShowCloseButtons;
-(void)_resetFilterState;
-(void)_reloadGridView;
-(void)closeVisualTabPicker;
-(char)_doesSearchResultsContainSelectedTab;
-(void)_cancelSearchAndCloseAfterDelay;
-(void)removeVisualTabPickerFromViewHierarchy;
-(void)_resetSearch;
-(void)selectTabBarItem:(id)arg1 ;
-(void)selectedTabDidChange;
-(char)tabsShouldBeClosable;
-(void)focusSearchField;
-(void)_performAsynchronousFilter;
-(void)_updateSearchTextWithValue:(id)arg1 ;
-(id)_filterObjectsInArray:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_tabFilterInfoForOrderedTabs;
-(id)orderedTabItemsInVisualTabPickerGridView:(id)arg1 ;
-(id)selectedTabItemInVisualTabPickerGridView:(id)arg1 ;
-(id)visualTabPickerGridView:(id)arg1 thumbnailViewForTabItem:(id)arg2 ;
-(id)visualTabPickerGridView:(id)arg1 imageForTabItem:(id)arg2 ;
-(double)tilesHeightToWidthRatioInVisualTabPickerGridView:(id)arg1 ;
-(char)visualTabPickerGridView:(id)arg1 highlightStateForTabItem:(id)arg2 ;
-(char)canCloseTabsInVisualTabPickerGridView:(id)arg1 ;
-(void)createNewTabForVisualTabPickerGridView:(id)arg1 ;
-(void)visualTabPickerGridView:(id)arg1 selectTab:(id)arg2 ;
-(void)visualTabPickerGridView:(id)arg1 highlightTab:(id)arg2 ;
-(void)visualTabPickerGridViewCloseTabViewItem:(id)arg1 ;
-(void)startEntryAnimation;
-(char)entryOrExitAnimationInProgress;
-(char)shouldDisplayRealWebViews;
-(char)shouldStackMultipleThumbnailsInOneContainerIfPossible;
-(unsigned long long)indexOfSelectedTab;
-(void)postponeClosingVisualTabPickerWhenNewTabIsInserted;
-(void)willInsertTabBarItem;
-(void)didInsertTabBarItem:(id)arg1 ;
-(void)reloadTabBarItem:(id)arg1 ;
-(void)_reloadLocalTabData;
-(void)tabPickerItemsDidChange;
-(char)shouldStackThumbnails;
-(void)setShouldStackThumbnails:(char)arg1 ;
-(void)setTabsShouldBeClosable:(char)arg1 ;
-(char)isAddingNewTab;
-(NSImage *)tabBarSnapshot;
-(void)setTabBarSnapshot:(NSImage *)arg1 ;
-(NSImage *)sidebarSnapshot;
-(void)setSidebarSnapshot:(NSImage *)arg1 ;
-(char)isClosing;
-(void)setIsClosing:(char)arg1 ;
@end
