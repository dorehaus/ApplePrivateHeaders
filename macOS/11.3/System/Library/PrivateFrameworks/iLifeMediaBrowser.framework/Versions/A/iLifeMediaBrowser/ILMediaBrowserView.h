/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <AppKit/NSControl.h>
#import <libobjc.A.dylib/NSSearchFieldDelegate.h>

@class ILMediaObjectsViewController, NSSplitView, NSView, NSSearchField, NSTextField, NSButton, NSString;

@interface ILMediaBrowserView : NSControl <NSSearchFieldDelegate> {

	ILMediaObjectsViewController* _mediaObjectsViewController;
	NSSplitView* _splitView;
	NSView* _controlView;
	NSSearchField* _searchField;
	NSTextField* _itemCountText;
	NSButton* _playButton;
	NSButton* _applyButton;
	NSButton* _clipboardButton;
	unsigned long long _currentBrowserType;
	unsigned long long _displayMode;
	unsigned long long _controlSize;
	char _showsControlView;
	char _allowsMultipleSelection;
	char _displaysToolTips;
	SEL _doubleAction;
	unsigned long long _filteredContentTypes;
	NSString* _filterString;
	char _useSplitView;
	char _isCollapsed;
	char _isVertical;
	CGSize _thumbnailCellSize;
	char _showsThumbnailCaptions;
	char _delegateFiltersMediaManagers;
	char _delegateFiltersMediaGroups;
	char _delegateFiltersMediaObjects;
	char _delegateControlsObjectSelection;
	char _establishedBindings;
	char _inDelegatePreview;
	long long _lastiTunesCategory;
	long long _lastiPhotoCategory;
	long long _lastMovieCategory;
	id _delegate;
	id _reserved1;
	id _reserved2;
	id _reserved3;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedString:(id)arg1 ;
+(Class)searchFieldClass;
+(Class)splitViewClass;
+(Class)scrollViewClass;
+(Class)scrollerClass;
+(Class)popUpButtonClass;
+(Class)tableHeaderCellClass;
+(void)setSplitViewClass:(Class)arg1 ;
+(void)setScrollViewClass:(Class)arg1 ;
+(void)setScrollerClass:(Class)arg1 ;
+(void)setPopUpButtonClass:(Class)arg1 ;
+(void)setSearchFieldClass:(Class)arg1 ;
+(void)setTableHeaderCellClass:(Class)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)objectSpecifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBackgroundColor:(id)arg1 ;
-(char)isFlipped;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(unsigned long long)displayMode;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(void)reloadData;
-(id)backgroundColor;
-(void)setFilterString:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(SEL)doubleAction;
-(void)setDoubleAction:(SEL)arg1 ;
-(char)allowsMultipleSelection;
-(void)viewDidMoveToSuperview;
-(void)setVerticalMotionCanBeginDrag:(char)arg1 ;
-(id)searchField;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)setAutosaveName:(id)arg1 ;
-(id)autosaveName;
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2 ;
-(double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(void)splitView:(id)arg1 resizeSubviewsWithOldSize:(CGSize)arg2 ;
-(void)splitViewDidResizeSubviews:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(char)verticalMotionCanBeginDrag;
-(id)filterString;
-(id)properties;
-(id)audioOutputDeviceUniqueID;
-(void)setAudioOutputDeviceUniqueID:(id)arg1 ;
-(char)isPreviewing;
-(id)playButton;
-(id)tableSelectionColor;
-(void)setShowsControlView:(char)arg1 ;
-(void)setShowsThumbnailCaptions:(char)arg1 ;
-(void)setCurrentBrowserType:(unsigned long long)arg1 ;
-(id)selectedMediaGroup;
-(id)initWithFrame:(CGRect)arg1 mediaTypes:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 mediaTypes:(unsigned long long)arg2 options:(id)arg3 ;
-(void)_mediaPreviewStateChanged:(id)arg1 ;
-(void)refreshCurrentBrowser;
-(void)disableViewBindings;
-(void)enableViewBindings;
-(id)preferencesKeyForKey:(id)arg1 ;
-(void)_layoutInterface;
-(void)showGroupPopUp;
-(void)showGroupOutlineViewWithHeight:(long long)arg1 ;
-(void)_resetContent;
-(id)clickedItem;
-(void)selectMediaGroup:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)selectMediaGroupIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(id)selectedMediaGroups;
-(void)selectMediaObject:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)selectMediaObjectIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(id)selectedMediaObjects;
-(id)displayedMediaGroups;
-(void)setMediaDisplayMode:(unsigned long long)arg1 forBrowserType:(unsigned long long)arg2 ;
-(unsigned long long)mediaDisplayModeForBrowserType:(unsigned long long)arg1 ;
-(unsigned long long)currentBrowserType;
-(void)setDisplaysToolTips:(char)arg1 ;
-(void)setAllowsUserAddedCustomFolders:(char)arg1 ;
-(char)allowsUserAddedCustomFolders;
-(void)setSingleWindowModeEnabled:(char)arg1 ;
-(char)isSingleWindowModeEnabled;
-(char)_allowPopupMode;
-(CGRect)_calculateGroupsPopUpRect;
-(Class)searchFieldClass;
-(void)clearSearch:(id)arg1 ;
-(void)configureSearchField;
-(id)itemCountTextColor;
-(void)togglePreview:(id)arg1 ;
-(char)showsControlView;
-(void)_createControlView;
-(Class)splitViewClass;
-(void)_sendKVONoteForKey:(id)arg1 ;
-(void)refreshClipboardButton;
-(id)mediaBrowserViews;
-(Class)scrollViewClass;
-(Class)scrollerClass;
-(Class)popUpButtonClass;
-(Class)tableHeaderCellClass;
-(void)setTableTextFont:(id)arg1 ;
-(id)tableTextFont;
-(void)setTableTextColor:(id)arg1 ;
-(id)tableTextColor;
-(void)setTableGridColor:(id)arg1 ;
-(id)tableGridColor;
-(void)setTableAlternatingRowColors:(id)arg1 ;
-(id)tableAlternatingRowsColors;
-(void)setTableSelectionColor:(id)arg1 ;
-(void)setOutlineTriangleColor:(id)arg1 ;
-(id)outlineTriangleColor;
-(void)setItemCountTextColor:(id)arg1 ;
-(void)setPlayButtonImage:(id)arg1 ;
-(void)setPlayButtonHighlightedImage:(id)arg1 ;
-(void)setStopButtonImage:(id)arg1 ;
-(void)setStopButtonHighlightedImage:(id)arg1 ;
-(void)setAudioPlayingImage:(id)arg1 ;
-(id)audioPlayingImage;
-(void)displayAudioBrowser:(id)arg1 ;
-(void)displayImageBrowser:(id)arg1 ;
-(void)displayMovieBrowser:(id)arg1 ;
-(void)startPreview:(id)arg1 ;
-(void)stopPreview:(id)arg1 ;
-(id)selectedMediaObject;
-(id)displayedMediaObjects;
-(void)setMediaDisplayMode:(unsigned long long)arg1 ;
-(unsigned long long)mediaDisplayMode;
-(char)displaysToolTips;
-(void)setFilteredContentTypes:(unsigned long long)arg1 ;
-(unsigned long long)filteredContentTypes;
-(void)setThumbnailCellSize:(CGSize)arg1 ;
-(CGSize)thumbnailCellSize;
-(char)showsThumbnailCaptions;
-(void)setShowsGroupsListInPopUpMode:(char)arg1 ;
-(char)showsGroupsListInPopUpMode;
-(char)isInPopupMode;
-(void)setShowsApplyButton:(char)arg1 ;
-(char)showsApplyButton;
-(void)setApplyButtonEnabled:(char)arg1 ;
-(void)viewControllerSelectionDidChange:(id)arg1 ;
-(char)_shouldLoadMediaManager:(id)arg1 ;
-(char)_shouldDisplayMediaGroup:(id)arg1 ;
-(char)_shouldDisplayMediaObject:(id)arg1 ;
-(char)_shouldSelectMediaObject:(id)arg1 ;
-(id)itemCountTextField;
-(id)clipboardButton;
-(void)clipboardAddSucessful;
-(void)addCustomFolder:(id)arg1 forBrowser:(unsigned long long)arg2 ;
-(void)needToUpdateSplitViewSize;
-(id)mediaBrowserView;
-(void)setDividerLineColor:(id)arg1 ;
-(id)dividerLineColor;
-(void)setMediaGroupsScrollViewContentInsets:(NSEdgeInsets*)arg1 ;
-(void)_ilMediaBrowserImportPanelView_adjustSplitViewStyle;
@end

