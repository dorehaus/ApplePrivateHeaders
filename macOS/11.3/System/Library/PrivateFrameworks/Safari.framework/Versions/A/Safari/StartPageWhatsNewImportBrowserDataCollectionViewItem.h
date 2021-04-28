/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSCollectionViewItem.h>

@protocol StartPageWhatsNewImportBrowserDataCollectionViewItemDelegate;
@class BrowserDataDirectories, NSImageView, NSTextField, NSButton, NSGridRow, NSStackView, NSProgressIndicator, NSBox, NSLayoutConstraint, NSView;

@interface StartPageWhatsNewImportBrowserDataCollectionViewItem : NSCollectionViewItem {

	long long _importPhase;
	char _isBrowserProcessRunning;
	char _isObservingRunningApplications;
	id _browserDataImportingDidPartiallySucceedNotificationObserver;
	id _browserDataImportingDidFailNotificationObserver;
	id _browserDataImportingDidEndNotificationObserver;
	char _displayAsSheet;
	BrowserDataDirectories* _browserDataDirectories;
	unsigned long long _availableDataTypes;
	id<StartPageWhatsNewImportBrowserDataCollectionViewItemDelegate> _delegate;
	NSImageView* _safariImageView;
	NSTextField* _topTitleLabel;
	NSTextField* _bottomTitleLabel;
	NSTextField* _topsubTitleLabel;
	NSTextField* _bottomsubTitleLabel;
	NSButton* _passwordsCheckBox;
	NSButton* _bookmarksAndHistoryCheckBox;
	NSImageView* _rightArrow;
	NSButton* _notNowButton;
	NSImageView* _originBrowserImageView;
	NSImageView* _browserArrowImageView;
	NSTextField* _importTitle;
	NSGridRow* _bookmarksAndHistoryRow;
	NSGridRow* _passwordsRow;
	NSTextField* _importErrorMessageTextField;
	NSTextField* _quitBrowserTextField;
	NSTextField* _importOneElementTextField;
	NSButton* _importButton;
	NSStackView* _migrateButtonStackView;
	NSProgressIndicator* _importingProgressIndicator;
	NSImageView* _checkmarkImageView;
	NSButton* _closeButton;
	NSBox* _horizontalLineSeparator;
	NSLayoutConstraint* _titleToImportOneElementTextField;
	NSLayoutConstraint* _titleToGridView;
	NSView* _importContentPlaceholderView;
	NSView* _importContentView;

}

@property (__weak) NSImageView * safariImageView;                                                          //@synthesize safariImageView=_safariImageView - In the implementation block
@property (__weak) NSTextField * topTitleLabel;                                                            //@synthesize topTitleLabel=_topTitleLabel - In the implementation block
@property (__weak) NSTextField * bottomTitleLabel;                                                         //@synthesize bottomTitleLabel=_bottomTitleLabel - In the implementation block
@property (__weak) NSTextField * topsubTitleLabel;                                                         //@synthesize topsubTitleLabel=_topsubTitleLabel - In the implementation block
@property (__weak) NSTextField * bottomsubTitleLabel;                                                      //@synthesize bottomsubTitleLabel=_bottomsubTitleLabel - In the implementation block
@property (__weak) NSButton * passwordsCheckBox;                                                           //@synthesize passwordsCheckBox=_passwordsCheckBox - In the implementation block
@property (__weak) NSButton * bookmarksAndHistoryCheckBox;                                                 //@synthesize bookmarksAndHistoryCheckBox=_bookmarksAndHistoryCheckBox - In the implementation block
@property (__weak) NSImageView * rightArrow;                                                               //@synthesize rightArrow=_rightArrow - In the implementation block
@property (__weak) NSButton * notNowButton;                                                                //@synthesize notNowButton=_notNowButton - In the implementation block
@property (__weak) NSImageView * originBrowserImageView;                                                   //@synthesize originBrowserImageView=_originBrowserImageView - In the implementation block
@property (__weak) NSImageView * browserArrowImageView;                                                    //@synthesize browserArrowImageView=_browserArrowImageView - In the implementation block
@property (__weak) NSTextField * importTitle;                                                              //@synthesize importTitle=_importTitle - In the implementation block
@property (__weak) NSGridRow * bookmarksAndHistoryRow;                                                     //@synthesize bookmarksAndHistoryRow=_bookmarksAndHistoryRow - In the implementation block
@property (__weak) NSGridRow * passwordsRow;                                                               //@synthesize passwordsRow=_passwordsRow - In the implementation block
@property (__weak) NSTextField * importErrorMessageTextField;                                              //@synthesize importErrorMessageTextField=_importErrorMessageTextField - In the implementation block
@property (__weak) NSTextField * quitBrowserTextField;                                                     //@synthesize quitBrowserTextField=_quitBrowserTextField - In the implementation block
@property (__weak) NSTextField * importOneElementTextField;                                                //@synthesize importOneElementTextField=_importOneElementTextField - In the implementation block
@property (__weak) NSButton * importButton;                                                                //@synthesize importButton=_importButton - In the implementation block
@property (__weak) NSStackView * migrateButtonStackView;                                                   //@synthesize migrateButtonStackView=_migrateButtonStackView - In the implementation block
@property (__weak) NSProgressIndicator * importingProgressIndicator;                                       //@synthesize importingProgressIndicator=_importingProgressIndicator - In the implementation block
@property (__weak) NSImageView * checkmarkImageView;                                                       //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (__weak) NSButton * closeButton;                                                                 //@synthesize closeButton=_closeButton - In the implementation block
@property (__weak) NSBox * horizontalLineSeparator;                                                        //@synthesize horizontalLineSeparator=_horizontalLineSeparator - In the implementation block
@property (__weak) NSLayoutConstraint * titleToImportOneElementTextField;                                  //@synthesize titleToImportOneElementTextField=_titleToImportOneElementTextField - In the implementation block
@property (__weak) NSLayoutConstraint * titleToGridView;                                                   //@synthesize titleToGridView=_titleToGridView - In the implementation block
@property (__weak) NSView * importContentPlaceholderView;                                                  //@synthesize importContentPlaceholderView=_importContentPlaceholderView - In the implementation block
@property (nonatomic,retain) NSView * importContentView;                                                   //@synthesize importContentView=_importContentView - In the implementation block
@property (nonatomic,retain) BrowserDataDirectories * browserDataDirectories;                              //@synthesize browserDataDirectories=_browserDataDirectories - In the implementation block
@property (assign,nonatomic) unsigned long long availableDataTypes;                                        //@synthesize availableDataTypes=_availableDataTypes - In the implementation block
@property (assign,nonatomic) char displayAsSheet;                                                          //@synthesize displayAsSheet=_displayAsSheet - In the implementation block
@property (__weak) id<StartPageWhatsNewImportBrowserDataCollectionViewItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<StartPageWhatsNewImportBrowserDataCollectionViewItemDelegate>)delegate;
-(void)setDelegate:(id<StartPageWhatsNewImportBrowserDataCollectionViewItemDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)close:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)accessibilityChildrenInNavigationOrder;
-(void)awakeFromNib;
-(NSButton *)closeButton;
-(void)viewDidLoad;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)_updateAppearance;
-(NSButton *)notNowButton;
-(void)setNotNowButton:(NSButton *)arg1 ;
-(void)setCloseButton:(NSButton *)arg1 ;
-(char)_isBrowserProcessInApplicationList:(id)arg1 ;
-(BrowserDataDirectories *)browserDataDirectories;
-(NSButton *)importButton;
-(void)setImportButton:(NSButton *)arg1 ;
-(void)setBrowserDataDirectories:(BrowserDataDirectories *)arg1 ;
-(void)setAvailableDataTypes:(unsigned long long)arg1 ;
-(void)setDisplayAsSheet:(char)arg1 ;
-(void)_updateViewContent;
-(void)_startImportingBrowserDataTypes:(unsigned long long)arg1 ;
-(void)_forceAccessibilityFocusOnImportTitleShouldNotifyUser:(char)arg1 ;
-(void)_removeBrowserImportingNotificationObservers;
-(NSImageView *)originBrowserImageView;
-(NSTextField *)importTitle;
-(NSTextField *)importOneElementTextField;
-(NSImageView *)browserArrowImageView;
-(NSGridRow *)bookmarksAndHistoryRow;
-(NSGridRow *)passwordsRow;
-(NSTextField *)importErrorMessageTextField;
-(NSStackView *)migrateButtonStackView;
-(NSProgressIndicator *)importingProgressIndicator;
-(NSImageView *)checkmarkImageView;
-(NSTextField *)quitBrowserTextField;
-(void)importSelectedItems:(id)arg1 ;
-(void)_importDataTypesDidChange:(id)arg1 ;
-(unsigned long long)availableDataTypes;
-(char)displayAsSheet;
-(NSImageView *)safariImageView;
-(void)setSafariImageView:(NSImageView *)arg1 ;
-(NSTextField *)topTitleLabel;
-(void)setTopTitleLabel:(NSTextField *)arg1 ;
-(NSTextField *)bottomTitleLabel;
-(void)setBottomTitleLabel:(NSTextField *)arg1 ;
-(NSTextField *)topsubTitleLabel;
-(void)setTopsubTitleLabel:(NSTextField *)arg1 ;
-(NSTextField *)bottomsubTitleLabel;
-(void)setBottomsubTitleLabel:(NSTextField *)arg1 ;
-(NSButton *)passwordsCheckBox;
-(void)setPasswordsCheckBox:(NSButton *)arg1 ;
-(NSButton *)bookmarksAndHistoryCheckBox;
-(void)setBookmarksAndHistoryCheckBox:(NSButton *)arg1 ;
-(NSImageView *)rightArrow;
-(void)setRightArrow:(NSImageView *)arg1 ;
-(void)setOriginBrowserImageView:(NSImageView *)arg1 ;
-(void)setBrowserArrowImageView:(NSImageView *)arg1 ;
-(void)setImportTitle:(NSTextField *)arg1 ;
-(void)setBookmarksAndHistoryRow:(NSGridRow *)arg1 ;
-(void)setPasswordsRow:(NSGridRow *)arg1 ;
-(void)setImportErrorMessageTextField:(NSTextField *)arg1 ;
-(void)setQuitBrowserTextField:(NSTextField *)arg1 ;
-(void)setImportOneElementTextField:(NSTextField *)arg1 ;
-(void)setMigrateButtonStackView:(NSStackView *)arg1 ;
-(void)setImportingProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setCheckmarkImageView:(NSImageView *)arg1 ;
-(NSBox *)horizontalLineSeparator;
-(void)setHorizontalLineSeparator:(NSBox *)arg1 ;
-(NSLayoutConstraint *)titleToImportOneElementTextField;
-(void)setTitleToImportOneElementTextField:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleToGridView;
-(void)setTitleToGridView:(NSLayoutConstraint *)arg1 ;
-(NSView *)importContentPlaceholderView;
-(void)setImportContentPlaceholderView:(NSView *)arg1 ;
-(NSView *)importContentView;
-(void)setImportContentView:(NSView *)arg1 ;
@end

