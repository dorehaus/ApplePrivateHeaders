/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreUI.framework/Versions/A/StoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreUI/FRContentViewController.h>
#import <libobjc.A.dylib/NSToolbarDelegate.h>
#import <libobjc.A.dylib/NSTouchBarDelegate.h>

@class NSToolbarItem, FRWindowBackgroundView, FRToolbarManager, NSArray, NSString, NSToolbar, NSMutableArray, NSView, FRContentViewController, NSTimer, NSSearchField;

@interface FRViewNavigationController : FRContentViewController <NSToolbarDelegate, NSTouchBarDelegate> {

	NSToolbarItem* _leadingToolbarItem;
	NSToolbarItem* _trailingToolbarItem;
	char _useMonobarStyle;
	char _backButtonEnabled;
	char _forwardButtonEnabled;
	char _searchEnabled;
	char _reloadingTabBar;
	FRWindowBackgroundView* _backgroundView;
	FRToolbarManager* _toolbarManager;
	NSArray* _tabItems;
	NSString* _selectedTab;
	NSToolbar* _toolbar;
	NSMutableArray* _toolbarItems;
	NSView* _tabBar;
	FRContentViewController* _currentContentViewController;
	NSMutableArray* _contentViewControllers;
	long long _activityIndicatorStackDepth;
	NSTimer* _activityIndicatorTimer;
	NSSearchField* _searchField;
	long long _savedWindowTitleVisibility;
	NSArray* _tabBarItems;

}

@property (nonatomic,readonly) NSToolbar * toolbar;                                                //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) NSMutableArray * toolbarItems;                                        //@synthesize toolbarItems=_toolbarItems - In the implementation block
@property (nonatomic,retain) NSView * tabBar;                                                      //@synthesize tabBar=_tabBar - In the implementation block
@property (assign,nonatomic) char reloadingTabBar;                                                 //@synthesize reloadingTabBar=_reloadingTabBar - In the implementation block
@property (nonatomic,retain) FRContentViewController * currentContentViewController;               //@synthesize currentContentViewController=_currentContentViewController - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentViewControllers;                              //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (assign,nonatomic) long long activityIndicatorStackDepth;                                //@synthesize activityIndicatorStackDepth=_activityIndicatorStackDepth - In the implementation block
@property (nonatomic,retain) NSTimer * activityIndicatorTimer;                                     //@synthesize activityIndicatorTimer=_activityIndicatorTimer - In the implementation block
@property (nonatomic,retain) NSSearchField * searchField;                                          //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic) long long savedWindowTitleVisibility;                                 //@synthesize savedWindowTitleVisibility=_savedWindowTitleVisibility - In the implementation block
@property (nonatomic,readonly) NSArray * tabBarItems;                                              //@synthesize tabBarItems=_tabBarItems - In the implementation block
@property (assign,nonatomic) char useMonobarStyle;                                                 //@synthesize useMonobarStyle=_useMonobarStyle - In the implementation block
@property (nonatomic,readonly) FRWindowBackgroundView * backgroundView;                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) FRToolbarManager * toolbarManager;                                  //@synthesize toolbarManager=_toolbarManager - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tabItems;                                            //@synthesize tabItems=_tabItems - In the implementation block
@property (nonatomic,retain) NSString * selectedTab;                                               //@synthesize selectedTab=_selectedTab - In the implementation block
@property (assign,getter=isBackButtonEnabled,nonatomic) char backButtonEnabled;                    //@synthesize backButtonEnabled=_backButtonEnabled - In the implementation block
@property (assign,getter=isForwardButtonEnabled,nonatomic) char forwardButtonEnabled;              //@synthesize forwardButtonEnabled=_forwardButtonEnabled - In the implementation block
@property (nonatomic,retain) NSString * searchString; 
@property (assign,getter=isSearchEnabled,nonatomic) char searchEnabled;                            //@synthesize searchEnabled=_searchEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)acceptsFirstResponder;
-(char)validateMenuItem:(id)arg1 ;
-(FRWindowBackgroundView *)backgroundView;
-(NSToolbar *)toolbar;
-(void)loadView;
-(NSSearchField *)searchField;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(id)makeTouchBar;
-(void)viewWillAppear;
-(void)viewDidDisappear;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2 ;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(NSView *)tabBar;
-(void)setTabBar:(NSView *)arg1 ;
-(void)reload;
-(id)navigationController;
-(NSMutableArray *)toolbarItems;
-(void)setToolbarItems:(NSMutableArray *)arg1 ;
-(char)canGoBack;
-(char)canGoForward;
-(void)goBack;
-(void)goForward;
-(void)clearHistory;
-(void)reloadPage:(id)arg1 ;
-(NSString *)selectedTab;
-(void)_updateTopContentInset;
-(void)addContentViewController:(id)arg1 ;
-(void)removeContentViewController:(id)arg1 ;
-(void)setNavigationController:(id)arg1 ;
-(void)setBackButtonEnabled:(char)arg1 ;
-(void)setLeadingToolbarItem:(id)arg1 ;
-(void)setTrailingToolbarItem:(id)arg1 ;
-(void)startSearch:(id)arg1 ;
-(char)canLoadURL:(id)arg1 ;
-(char)loadURL:(id)arg1 referrer:(id)arg2 ;
-(char)isTabEnabled:(id)arg1 ;
-(void)_windowDidChangeFullScreen:(id)arg1 ;
-(void)_windowKeyStatusChanged:(id)arg1 ;
-(NSMutableArray *)contentViewControllers;
-(void)reloadTabBar;
-(void)_updateSearchAppearance;
-(void)_updateBackForwardAppearance;
-(FRContentViewController *)currentContentViewController;
-(void)setSavedWindowTitleVisibility:(long long)arg1 ;
-(char)useMonobarStyle;
-(long long)savedWindowTitleVisibility;
-(void)setCurrentContentViewController:(FRContentViewController *)arg1 ;
-(void)pushActivityIndicator;
-(void)popActivityIndicator;
-(void)setForwardButtonEnabled:(char)arg1 ;
-(void)selectTab:(id)arg1 ;
-(NSArray *)tabItems;
-(char)reloadingTabBar;
-(void)setReloadingTabBar:(char)arg1 ;
-(void)_updateTouchTabBarAppearance;
-(void)setSelectedTab:(NSString *)arg1 ;
-(void)itemSelected:(id)arg1 ;
-(void)_removeCustomToolbarItem:(id)arg1 ;
-(void)_addCustomToolbarItem:(id)arg1 index:(long long)arg2 ;
-(char)_isDuplicateToolbarItem:(id)arg1 ;
-(long long)activityIndicatorStackDepth;
-(void)setActivityIndicatorStackDepth:(long long)arg1 ;
-(NSTimer *)activityIndicatorTimer;
-(void)setActivityIndicatorTimer:(NSTimer *)arg1 ;
-(void)_activityIndicatorTimerFired;
-(char)isSearchEnabled;
-(void)doSearch:(id)arg1 ;
-(char)isForwardButtonEnabled;
-(char)isBackButtonEnabled;
-(id)_newToolbarItemForIdentifier:(id)arg1 ;
-(void)traverseHistory:(id)arg1 ;
-(id)_tabToolbarItem;
-(NSArray *)tabBarItems;
-(void)_updateStoreMenu;
-(id)initWithToolbarItems:(id)arg1 ;
-(void)contentViewController:(id)arg1 startedLoadingURL:(id)arg2 ;
-(void)contentViewController:(id)arg1 finishedLoadingURL:(id)arg2 selectedToolbarItem:(id)arg3 ;
-(void)contentViewController:(id)arg1 searchedForString:(id)arg2 ;
-(char)isTabSelected:(id)arg1 ;
-(void)setSearchEnabled:(char)arg1 ;
-(void)addSearchSuggester:(id)arg1 ;
-(void)removeSearchSuggester:(id)arg1 ;
-(void)setUseMonobarStyle:(char)arg1 ;
-(FRToolbarManager *)toolbarManager;
-(void)setContentViewControllers:(NSMutableArray *)arg1 ;
@end

