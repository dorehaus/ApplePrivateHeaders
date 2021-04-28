/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTabViewItem.h>
#import <libobjc.A.dylib/DelayedPopUpRolloverImageButtonDelegate.h>
#import <libobjc.A.dylib/FormTextStatusWatcherDelegate.h>
#import <libobjc.A.dylib/TabBarViewItem.h>
#import <libobjc.A.dylib/WBSOrderedTab.h>
#import <libobjc.A.dylib/WBSWebExtensionTab.h>

@class NSImage, NSString, NSArray, WKWebView, NSURL, BrowserViewController, NSMutableArray, DelayedPopUpRolloverImageButton, NSTimer, BrowserWindowController, TabContentViewController, NSUUID, SearchState, NSColor, ContinuousReadingListViewController, BrowserTabViewController, NSSet;

@interface BrowserTabViewItem : NSTabViewItem <DelayedPopUpRolloverImageButtonDelegate, FormTextStatusWatcherDelegate, TabBarViewItem, WBSOrderedTab, WBSWebExtensionTab> {

	BrowserViewController* _currentBrowserViewController;
	RefPtr<Safari::BrowserTab, WTF::RawPtrTraits<Safari::BrowserTab>, WTF::DefaultRefDerefTraits<Safari::BrowserTab>>* _browserTab;
	char _didFireOpenEvent;
	NSMutableArray* _accessoryViews;
	NSString* _urlFromScript;
	DelayedPopUpRolloverImageButton* _muteButton;
	NSTimer* _siteIconUpdateTimer;
	id _templateIconRequestToken;
	id _faviconRequestToken;
	unsigned long long _currentIconType;
	NSTimer* _fireOnUpdatedWebExtensionEventTimer;
	char _pinned;
	char _showIcon;
	char _prefersCachedTabSnapshotForTouchBar;
	char _showingMonogram;
	char _showingMuteButton;
	double _idForWebExtensions;
	unsigned long long _changedPropertiesForOnUpdatedWebExtensionEvent;
	BrowserWindowController* _browserWindowController;
	TabContentViewController* _tabContentViewController;
	NSUUID* _uuid;
	NSString* _fullLabel;
	NSString* _editedUnifiedFieldString;
	SearchState* _lastSearchState;
	NSString* _templateIconHost;
	NSImage* _highlightedImage;
	NSColor* _themeColor;
	NSURL* _pinnedPageURL;
	NSString* _pinnedPageTitle;
	BrowserTabViewItem* _representedPinnedTab;
	long long _muteButtonState;
	NSString* _lastUsedBookmarkFolderUUID;
	ContinuousReadingListViewController* _continuousReadingListViewController;

}

@property (retain) BrowserTabViewController * viewController; 
@property (nonatomic,retain) ContinuousReadingListViewController * continuousReadingListViewController;              //@synthesize continuousReadingListViewController=_continuousReadingListViewController - In the implementation block
@property (nonatomic,readonly) BrowserTab* browserTab; 
@property (assign,nonatomic,__weak) BrowserWindowController * browserWindowController;                               //@synthesize browserWindowController=_browserWindowController - In the implementation block
@property (nonatomic,retain) TabContentViewController * tabContentViewController;                                    //@synthesize tabContentViewController=_tabContentViewController - In the implementation block
@property (nonatomic,readonly) TabContentViewController * representedTabContentViewController; 
@property (nonatomic,readonly) BrowserWindowController * representedTabBrowserWindowController; 
@property (nonatomic,readonly) id<ThumbnailSnapshotProviding> thumbnailSnapshotProvider; 
@property (nonatomic,readonly) NSUUID * uuid;                                                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BrowserViewController * browserViewController; 
@property (nonatomic,readonly) BrowserViewController * currentBrowserViewController; 
@property (nonatomic,copy,readonly) NSSet * allBrowserViewControllers; 
@property (nonatomic,copy) NSString * fullLabel;                                                                     //@synthesize fullLabel=_fullLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTitle; 
@property (nonatomic,readonly) NSURL * expectedOrCurrentURL; 
@property (nonatomic,readonly) NSURL * expectedOrCurrentURLOrLastActiveURLIfCrashed; 
@property (nonatomic,readonly) NSURL * failedOrCurrentURL; 
@property (nonatomic,copy) NSString * editedUnifiedFieldString;                                                      //@synthesize editedUnifiedFieldString=_editedUnifiedFieldString - In the implementation block
@property (nonatomic,retain) SearchState * lastSearchState;                                                          //@synthesize lastSearchState=_lastSearchState - In the implementation block
@property (getter=isFrontmost,nonatomic,readonly) char frontmost; 
@property (nonatomic,readonly) char prefersCachedTabSnapshotForTouchBar;                                             //@synthesize prefersCachedTabSnapshotForTouchBar=_prefersCachedTabSnapshotForTouchBar - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessoryViews;                                                        //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (nonatomic,copy) NSString * templateIconHost;                                                              //@synthesize templateIconHost=_templateIconHost - In the implementation block
@property (nonatomic,retain) NSImage * highlightedImage;                                                             //@synthesize highlightedImage=_highlightedImage - In the implementation block
@property (nonatomic,retain) NSColor * themeColor;                                                                   //@synthesize themeColor=_themeColor - In the implementation block
@property (getter=isPlaceholderTab,nonatomic,readonly) char placeholderTab; 
@property (nonatomic,readonly) NSURL * pinnedPageURL;                                                                //@synthesize pinnedPageURL=_pinnedPageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * pinnedPageTitle;                                                      //@synthesize pinnedPageTitle=_pinnedPageTitle - In the implementation block
@property (nonatomic,retain) BrowserTabViewItem * representedPinnedTab;                                              //@synthesize representedPinnedTab=_representedPinnedTab - In the implementation block
@property (getter=isShowingMonogram,nonatomic,readonly) char showingMonogram;                                        //@synthesize showingMonogram=_showingMonogram - In the implementation block
@property (nonatomic,readonly) char canBeRemovedInBrowserDocumentShouldClose; 
@property (nonatomic,readonly) NSURL * urlForExtensions; 
@property (nonatomic,readonly) char isPrivate; 
@property (getter=isClosed,nonatomic,readonly) char closed; 
@property (assign,nonatomic) unsigned long long changedPropertiesForOnUpdatedWebExtensionEvent;                      //@synthesize changedPropertiesForOnUpdatedWebExtensionEvent=_changedPropertiesForOnUpdatedWebExtensionEvent - In the implementation block
@property (getter=isInContinuousMode,nonatomic,readonly) char inContinuousMode; 
@property (assign,getter=isShowingMuteButton,nonatomic) char showingMuteButton;                                      //@synthesize showingMuteButton=_showingMuteButton - In the implementation block
@property (assign,nonatomic) long long muteButtonState;                                                              //@synthesize muteButtonState=_muteButtonState - In the implementation block
@property (nonatomic,copy) NSString * lastUsedBookmarkFolderUUID;                                                    //@synthesize lastUsedBookmarkFolderUUID=_lastUsedBookmarkFolderUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isPinned,nonatomic) char pinned;                                                            //@synthesize pinned=_pinned - In the implementation block
@property (assign,nonatomic) char showIcon;                                                                          //@synthesize showIcon=_showIcon - In the implementation block
@property (nonatomic,readonly) NSImage * image; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy,readonly) NSString * toolTip; 
@property (nonatomic,copy,readonly) NSString * accessibilityItemIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSArray * ancestorTabIdentifiers; 
@property (nonatomic,copy,readonly) NSString * windowIdentifier; 
@property (nonatomic,readonly) char isPinnedTab; 
@property (nonatomic,readonly) char shouldSelectOriginatingTabWhenClosed; 
@property (getter=isClosing,nonatomic,readonly) char closing; 
@property (nonatomic,readonly) double lastActivationTime; 
@property (nonatomic,readonly) double idForWebExtensions;                                                            //@synthesize idForWebExtensions=_idForWebExtensions - In the implementation block
@property (nonatomic,readonly) WKWebView * webViewForExtensions; 
@property (nonatomic,copy,readonly) NSArray * webViewsThatCanReceiveMessages; 
@property (nonatomic,readonly) double parentTabIDForWebExtensions; 
@property (nonatomic,readonly) NSURL * pendingURLForWebExtensions; 
@property (nonatomic,readonly) char isLoadingComplete; 
@property (nonatomic,readonly) char isAudible; 
@property (nonatomic,readonly) char isMuted; 
@property (nonatomic,readonly) char isFrontmost; 
@property (nonatomic,copy,readonly) NSString * tabTitle; 
@property (nonatomic,readonly) CGSize tabViewSize; 
@property (nonatomic,readonly) id<WBSWebExtensionWindow> webExtensionWindow; 
+(id)findTabInAnyWindowWithIdForWebExtensions:(double)arg1 ;
+(id)findTabForPage:(const Page*)arg1 ;
+(id)findTabInAnyWindowWithUUID:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)uuid;
-(NSString *)identifier;
-(id)source;
-(void)setImage:(NSImage *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)objectSpecifier;
-(id)title;
-(char)isVisible;
-(void)setToolTip:(NSString *)arg1 ;
-(char)isClosed;
-(void)handleCloseScriptCommand:(id)arg1 ;
-(id)text;
-(char)isPinned;
-(void)setPinned:(char)arg1 ;
-(char)isClosing;
-(NSArray *)accessoryViews;
-(NSColor *)themeColor;
-(void)setThemeColor:(NSColor *)arg1 ;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
-(unsigned)orderedIndex;
-(char)isPrivate;
-(char)isMuted;
-(id)URLString;
-(NSString *)pageTitle;
-(double)lastActivationTime;
-(NSArray *)ancestorTabIdentifiers;
-(NSString *)windowIdentifier;
-(char)isPinnedTab;
-(char)shouldSelectOriginatingTabWhenClosed;
-(void)didSelect;
-(void)willUnselect;
-(NSURL *)expectedOrCurrentURL;
-(TabContentViewController *)tabContentViewController;
-(id<ThumbnailSnapshotProviding>)thumbnailSnapshotProvider;
-(BrowserTabViewItem *)representedPinnedTab;
-(BrowserViewController *)currentBrowserViewController;
-(BrowserViewController *)browserViewController;
-(char)isFrontmost;
-(BrowserWindowController *)browserWindowController;
-(char)isPlaceholderTab;
-(void)closeWithoutConfirming;
-(void)formTextStatusWasVerified:(id)arg1 ;
-(NSURL *)urlForExtensions;
-(char)isInContinuousMode;
-(NSURL *)failedOrCurrentURL;
-(ContinuousReadingListViewController *)continuousReadingListViewController;
-(void)mutableMediaPlayingStateDidChange;
-(double)idForWebExtensions;
-(NSURL *)expectedOrCurrentURLOrLastActiveURLIfCrashed;
-(void)updateSiteIconSoonIfNecessary;
-(unsigned long long)changedPropertiesForOnUpdatedWebExtensionEvent;
-(void)setChangedPropertiesForOnUpdatedWebExtensionEvent:(unsigned long long)arg1 ;
-(id)currentContinuousReadingListPageItem;
-(SearchState *)lastSearchState;
-(void)setLastSearchState:(SearchState *)arg1 ;
-(void)setDoesNotPreferCachedTabSnapshotForTouchBar;
-(BrowserTab*)browserTab;
-(NSString *)fullLabel;
-(NSURL *)pinnedPageURL;
-(void)loadContinuousReadingListPageItem:(id)arg1 ;
-(id)computeTabLabelIncludingDebuggingContent:(char)arg1 ;
-(void)stopAllMediaPlayback;
-(char)canBeRemovedInBrowserDocumentShouldClose;
-(id)handleDoJavaScriptCommand:(id)arg1 ;
-(void)setURLString:(id)arg1 ;
-(id)handleSearchTheWebCommand:(id)arg1 ;
-(id)handleEmailContentsCommand:(id)arg1 ;
-(void)getVisibleContentsAsDataURLForContext:(OpaqueJSContextRef)arg1 callback:(OpaqueJSValueRef)arg2 ;
-(void)loadURLFromAppExtension:(id)arg1 waitInQueue:(char)arg2 ;
-(void)activateFromExtension;
-(char)allowAccessFromExtension:(const ExtensionAPIExtension*)arg1 ;
-(char)allowAccessFromExtensionToAnyAssociatedPage:(const ExtensionAPIExtension*)arg1 ;
-(BrowserWindowController *)representedTabBrowserWindowController;
-(NSString *)pinnedPageTitle;
-(long long)muteButtonState;
-(void)_commonInitWithBrowserWindowController:(id)arg1 ;
-(void)setRepresentedPinnedTab:(BrowserTabViewItem *)arg1 ;
-(void)_showIconsInTabsPreferenceDidChange:(id)arg1 ;
-(void)_resetCurrentPinnedTabIconType;
-(NSSet *)allBrowserViewControllers;
-(char)_shouldSuppressExtensionTabEvents;
-(void)_willCloseDueToWindowClosing:(char)arg1 ;
-(void)willClose;
-(void)restorePinnedState:(char)arg1 pinnedPageURL:(id)arg2 pinnedPageTitle:(id)arg3 ;
-(void)_restoreBrowserTabStateOnBrowserViewController:(id)arg1 allowJavaScript:(char)arg2 ;
-(void)updateSiteIconNow;
-(void)_cancelFireOnUpdatedWebExtensionEventTimer;
-(void)_fireOnUpdatedExtensionEventSoon;
-(void)_fireOnUpdatedExtensionEvent;
-(void)insertAccessoryView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_tryToClose;
-(void)_cancelSiteIconUpdate;
-(void)setTemplateIconHost:(NSString *)arg1 ;
-(char)continuousPageViewIsHandlingPageTransitionOrLoadingPageItem;
-(void)_muteButtonClicked:(id)arg1 ;
-(void)_updateMuteButtonImageAndTooltip;
-(void)removeAccessoryView:(id)arg1 ;
-(void)setMuteButtonState:(long long)arg1 ;
-(void)setShowingMuteButton:(char)arg1 ;
-(void)muteMediaCapture;
-(void)unmuteMediaCapture;
-(void)_pauseScreenCapture;
-(void)_resumeScreenCapture;
-(void)transferContentToPlaceholderTab:(id)arg1 ;
-(void)_internalSetPinned:(char)arg1 ;
-(void)setTabContentViewController:(TabContentViewController *)arg1 ;
-(void)updateSiteIconIgnoringPinnedTabState:(char)arg1 ;
-(char)_shouldUpdatePinnedTabIcon;
-(void)_requestFaviconForURL:(id)arg1 ;
-(void)_requestTemplateIconWithURL:(id)arg1 ;
-(void)setHighlightedImage:(NSImage *)arg1 ;
-(NSImage *)highlightedImage;
-(void)_setPinnedTabIcon:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)menuForDelayedPopUpRolloverImageButton:(id)arg1 ;
-(NSString *)accessibilityItemIdentifier;
-(WKWebView *)webViewForExtensions;
-(NSArray *)webViewsThatCanReceiveMessages;
-(double)parentTabIDForWebExtensions;
-(NSURL *)pendingURLForWebExtensions;
-(char)isLoadingComplete;
-(char)isAudible;
-(NSString *)tabTitle;
-(CGSize)tabViewSize;
-(id<WBSWebExtensionWindow>)webExtensionWindow;
-(id)initWithBrowserWindowController:(id)arg1 ;
-(id)initWithRepresentedPinnedTab:(id)arg1 browserWindowController:(id)arg2 ;
-(TabContentViewController *)representedTabContentViewController;
-(void)willOpen;
-(void)willCloseDueToWindowClosing;
-(void)restoreFromBrowserTabState:(id)arg1 allowJavaScript:(char)arg2 ;
-(void)addAccessoryView:(id)arg1 ;
-(void)tryToCloseWhenReady;
-(void)rememberCurrentURLString;
-(void)toggleMediaOrScreenCapture;
-(void)setBrowserWindowController:(BrowserWindowController *)arg1 ;
-(void)setFullLabel:(NSString *)arg1 ;
-(NSString *)editedUnifiedFieldString;
-(void)setEditedUnifiedFieldString:(NSString *)arg1 ;
-(char)prefersCachedTabSnapshotForTouchBar;
-(NSString *)templateIconHost;
-(char)isShowingMonogram;
-(char)isShowingMuteButton;
-(NSString *)lastUsedBookmarkFolderUUID;
-(void)setLastUsedBookmarkFolderUUID:(NSString *)arg1 ;
-(void)setContinuousReadingListViewController:(ContinuousReadingListViewController *)arg1 ;
@end

