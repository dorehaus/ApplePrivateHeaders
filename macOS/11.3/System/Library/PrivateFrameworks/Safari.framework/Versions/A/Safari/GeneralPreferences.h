/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/PreferencesModule.h>
#import <libobjc.A.dylib/BookmarkChooserDelegate.h>
#import <libobjc.A.dylib/HomepageHostViewControllerDelegate.h>
#import <Safari/SandboxExtensionPresentationDelegate.h>

@class NSTextField, NSButton, NSPopUpButton, HomepageHostViewController, NSArray, NSView, NSLayoutConstraint, NSString;

@interface GeneralPreferences : PreferencesModule <BookmarkChooserDelegate, HomepageHostViewControllerDelegate, SandboxExtensionPresentationDelegate> {

	NSTextField* defaultBrowserMessageField;
	NSTextField* homePageField;
	NSButton* useCurrentPageButton;
	NSButton* autoOpenDownloadsCheckbox;
	NSTextField* launchBehaviorLabel;
	NSPopUpButton* launchBehaviorPopUp;
	NSTextField* newWindowBehaviorLabel;
	NSPopUpButton* newWindowBehaviorPopUp;
	NSPopUpButton* newTabBehaviorPopUp;
	NSPopUpButton* downloadLocationPopUp;
	NSPopUpButton* downloadsClearingPolicyPopUp;
	NSPopUpButton* historyAgeLimitPopUp;
	NSTextField* historyAgeLimitLabel;
	char _confirmingHomePageURL;
	double _forcedWindowHeight;
	HomepageHostViewController* _remoteHomepageViewController;
	char _launchBehaviorMenuItemsAreHidden;
	char _registeredForDefaultBrowserChangedNotifications;
	long long _defaultBrowserState;
	NSArray* _identifiersForExtensionsWithOverridePages;
	char _applyingHomePageBeforeClosing;
	NSView* _mainContentView;
	NSTextField* _downloadLocationTextField;
	NSLayoutConstraint* _downloadLocationPopUpButtonMinimizeWidthConstraint;
	NSTextField* _favoritesCollectionTextField;
	NSPopUpButton* _favoritesCollectionPopUpButton;
	NSTextField* _numberOfTopSitesTextField;
	NSPopUpButton* _numberOfTopSitesPopUp;
	NSView* _nonDefaultBrowserInformativeView;
	NSView* _homepageFieldContainerView;
	NSLayoutConstraint* _nonDefaultBrowserInformativeViewTopSpaceConstraint;
	NSLayoutConstraint* _nonDefaultBrowserInformativeViewTrailingSpaceConstraint;
	NSLayoutConstraint* _nonDefaultBrowserInformativeViewBottomSpaceToMainContentViewConstraint;
	NSLayoutConstraint* _nonDefaultBrowserInformativeViewLeadingSpaceConstraint;
	NSLayoutConstraint* _nonDefaultBrowserInformativeViewCenteringConstraint;

}

@property (assign,nonatomic,__weak) NSView * mainContentView;                                                                          //@synthesize mainContentView=_mainContentView - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * downloadLocationTextField;                                                           //@synthesize downloadLocationTextField=_downloadLocationTextField - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * downloadLocationPopUpButtonMinimizeWidthConstraint;                           //@synthesize downloadLocationPopUpButtonMinimizeWidthConstraint=_downloadLocationPopUpButtonMinimizeWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * favoritesCollectionTextField;                                                        //@synthesize favoritesCollectionTextField=_favoritesCollectionTextField - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * favoritesCollectionPopUpButton;                                                    //@synthesize favoritesCollectionPopUpButton=_favoritesCollectionPopUpButton - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * numberOfTopSitesTextField;                                                           //@synthesize numberOfTopSitesTextField=_numberOfTopSitesTextField - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * numberOfTopSitesPopUp;                                                             //@synthesize numberOfTopSitesPopUp=_numberOfTopSitesPopUp - In the implementation block
@property (nonatomic,retain) NSView * nonDefaultBrowserInformativeView;                                                                //@synthesize nonDefaultBrowserInformativeView=_nonDefaultBrowserInformativeView - In the implementation block
@property (assign,nonatomic,__weak) NSView * homepageFieldContainerView;                                                               //@synthesize homepageFieldContainerView=_homepageFieldContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonDefaultBrowserInformativeViewTopSpaceConstraint;                                  //@synthesize nonDefaultBrowserInformativeViewTopSpaceConstraint=_nonDefaultBrowserInformativeViewTopSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonDefaultBrowserInformativeViewTrailingSpaceConstraint;                             //@synthesize nonDefaultBrowserInformativeViewTrailingSpaceConstraint=_nonDefaultBrowserInformativeViewTrailingSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonDefaultBrowserInformativeViewBottomSpaceToMainContentViewConstraint;              //@synthesize nonDefaultBrowserInformativeViewBottomSpaceToMainContentViewConstraint=_nonDefaultBrowserInformativeViewBottomSpaceToMainContentViewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonDefaultBrowserInformativeViewLeadingSpaceConstraint;                              //@synthesize nonDefaultBrowserInformativeViewLeadingSpaceConstraint=_nonDefaultBrowserInformativeViewLeadingSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonDefaultBrowserInformativeViewCenteringConstraint;                                 //@synthesize nonDefaultBrowserInformativeViewCenteringConstraint=_nonDefaultBrowserInformativeViewCenteringConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowDidResize:(id)arg1 ;
-(void)windowDidResignKey:(id)arg1 ;
-(id)imageForPreferenceNamed:(id)arg1 ;
-(void)moduleWillBeRemoved;
-(void)initializeFromDefaults;
-(void)moduleWasInstalled;
-(char)preferencesWindowShouldClose;
-(id)safariHelpAnchor;
-(void)_startObservingBookmarkChanges;
-(void)_parentalControlsDidChange;
-(void)bookmarkChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 ;
-(char)bookmarkChooser:(id)arg1 shouldEnableCollection:(id)arg2 ;
-(void)_stopObservingBookmarkChanges;
-(void)_bookmarksChanged:(id)arg1 ;
-(void)homepageHostViewController:(id)arg1 tryApplyingHomepageURL:(id)arg2 sandboxExtensionToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSView *)mainContentView;
-(void)setMainContentView:(NSView *)arg1 ;
-(void)_startPageModeDidChange:(id)arg1 ;
-(void)_removeOpensWithANewPrivateWindowSettingIfNecessary;
-(void)_setUpDefaultBrowserUI;
-(void)_handleIncomingWebExtensionStateNotification;
-(void)_chooseMultiplePages:(id)arg1 ;
-(void)_unregisterForDefaultBrowserChangedNotifications;
-(void)_defaultWebBrowserMayHaveChanged;
-(void)_insertFavoritesAndTopSitesBehaviorIntoPopUp:(id)arg1 ;
-(void)_updateWebExtensionOverridePagesOptionsInPopups;
-(void)_updateLaunchBehaviorViews;
-(void)_updateNewTabBehaviorViews;
-(void)_updateNewWindowBehaviorViews;
-(void)_updateHomePageViews;
-(void)_updateHistoryAgeLimitPopUp;
-(void)_updateFavoritesCollectionPopUpButton;
-(void)_updateDownloadLocationMenu;
-(void)_registerForDefaultBrowserChangedNotifications;
-(void)_updateUseCurrentPageButton;
-(id)_preferencesWindow;
-(void)_TALRestoresWindowsOnAppLaunchSettingMightHaveChanged:(id)arg1 ;
-(void)_applyHomepageDone;
-(void)_tryApplyingHomePage:(id)arg1 extensionToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performSynchronousRemoteHomepageUpdateOnlyIfFieldIsFirstResponder:(char)arg1 ;
-(char)_canSetHomePageToCurrentPage;
-(void)_confirmSetHomePageToURLString:(id)arg1 extensionToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)_userDefaultsTagByPersistingPopUpTagToDefaults:(long long)arg1 ;
-(void)_choseDownloadFolderFromPanel:(id)arg1 returnCode:(long long)arg2 ;
-(void)_resetNewWindowPreferenceIfNeeded;
-(void)_chooseDownloadFolderFromFileBrowser:(id)arg1 ;
-(long long)_userDefaultsToPopUpTag:(long long)arg1 ;
-(void)_updateNewWindowTabsMenuItem;
-(void)chooseFolderForOpenWithTabs:(id)arg1 ;
-(void)setHomePageToCurrentPage:(id)arg1 ;
-(void)takeDownloadsClearingPolicyFrom:(id)arg1 ;
-(void)takeHistoryAgeLimitFrom:(id)arg1 ;
-(void)takeLaunchBehaviorFrom:(id)arg1 ;
-(void)takeNewTabBehaviorFrom:(id)arg1 ;
-(void)takeNewWindowBehaviorFrom:(id)arg1 ;
-(void)toggleAutoOpenDownloads:(id)arg1 ;
-(void)setSafariAsDefaultBrowser:(id)arg1 ;
-(void)takeFavoritesCollectionFrom:(id)arg1 ;
-(NSTextField *)downloadLocationTextField;
-(void)setDownloadLocationTextField:(NSTextField *)arg1 ;
-(NSLayoutConstraint *)downloadLocationPopUpButtonMinimizeWidthConstraint;
-(void)setDownloadLocationPopUpButtonMinimizeWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSTextField *)favoritesCollectionTextField;
-(void)setFavoritesCollectionTextField:(NSTextField *)arg1 ;
-(NSPopUpButton *)favoritesCollectionPopUpButton;
-(void)setFavoritesCollectionPopUpButton:(NSPopUpButton *)arg1 ;
-(NSTextField *)numberOfTopSitesTextField;
-(void)setNumberOfTopSitesTextField:(NSTextField *)arg1 ;
-(NSPopUpButton *)numberOfTopSitesPopUp;
-(void)setNumberOfTopSitesPopUp:(NSPopUpButton *)arg1 ;
-(NSView *)nonDefaultBrowserInformativeView;
-(void)setNonDefaultBrowserInformativeView:(NSView *)arg1 ;
-(NSView *)homepageFieldContainerView;
-(void)setHomepageFieldContainerView:(NSView *)arg1 ;
-(NSLayoutConstraint *)nonDefaultBrowserInformativeViewTopSpaceConstraint;
-(void)setNonDefaultBrowserInformativeViewTopSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nonDefaultBrowserInformativeViewTrailingSpaceConstraint;
-(void)setNonDefaultBrowserInformativeViewTrailingSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nonDefaultBrowserInformativeViewBottomSpaceToMainContentViewConstraint;
-(void)setNonDefaultBrowserInformativeViewBottomSpaceToMainContentViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nonDefaultBrowserInformativeViewLeadingSpaceConstraint;
-(void)setNonDefaultBrowserInformativeViewLeadingSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nonDefaultBrowserInformativeViewCenteringConstraint;
-(void)setNonDefaultBrowserInformativeViewCenteringConstraint:(NSLayoutConstraint *)arg1 ;
@end

