/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/SidebarSearchFieldDelegate.h>
#import <libobjc.A.dylib/SidebarTableCellViewDelegate.h>
#import <libobjc.A.dylib/ReadingListTableViewLiveResizeDelegate.h>
#import <libobjc.A.dylib/ReadingListTableCellViewDelegate.h>
#import <libobjc.A.dylib/TableViewPlusDelegate.h>
#import <libobjc.A.dylib/TableViewPlusDataSource.h>

@protocol ReadingListTableViewControllerDelegate, ReadingListTableViewContentProvider;
@class ReadingListTableView, NSArray, NSDate, SidebarTableCellView, NSTimer, NSView, NSLayoutConstraint, NSMenu, NSString;

@interface ReadingListTableViewController : NSViewController <SidebarSearchFieldDelegate, SidebarTableCellViewDelegate, ReadingListTableViewLiveResizeDelegate, ReadingListTableCellViewDelegate, TableViewPlusDelegate, TableViewPlusDataSource> {

	ReadingListTableView* _tableView;
	NSArray* _displayedItems;
	NSDate* _dateOfLastInitialContentUpdate;
	SidebarTableCellView* _tableCellViewForRowHeightCalculation;
	NSTimer* _coalescedTableViewReloadTimer;
	NSView* _spacerView;
	NSLayoutConstraint* _spacerViewHeightConstraint;
	NSMenu* _contextMenu;
	char _showsSearchFieldWrapperView;
	char _showAsOffline;
	id<ReadingListTableViewControllerDelegate> _delegate;
	id<ReadingListTableViewContentProvider> _contentProvider;

}

@property (assign,nonatomic) char showsSearchFieldWrapperView;                                            //@synthesize showsSearchFieldWrapperView=_showsSearchFieldWrapperView - In the implementation block
@property (assign,nonatomic) char showAsOffline;                                                          //@synthesize showAsOffline=_showAsOffline - In the implementation block
@property (assign,nonatomic,__weak) id<ReadingListTableViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<ReadingListTableViewContentProvider> contentProvider;              //@synthesize contentProvider=_contentProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long displayedItemsCount; 
@property (assign,getter=isEditingTableView,nonatomic) char editingTableView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<ReadingListTableViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ReadingListTableViewControllerDelegate>)arg1 ;
-(void)loadView;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(char)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3 ;
-(id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(id<ReadingListTableViewContentProvider>)contentProvider;
-(void)setContentProvider:(id<ReadingListTableViewContentProvider>)arg1 ;
-(char)tableView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(char)tableView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(id)tableView:(id)arg1 menuForEvent:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4 ;
-(void)didPressTableCellView:(id)arg1 ;
-(void)sidebarWillClose:(id)arg1 ;
-(void)sidebarSearchFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)actionButtonClickedInTableCellView:(id)arg1 ;
-(id)initWithContentProvider:(id)arg1 initialSidebarBounds:(CGRect)arg2 ;
-(void)setShowsSearchFieldWrapperView:(char)arg1 ;
-(void)setShowAsOffline:(char)arg1 ;
-(void)highlightRowByURLString:(id)arg1 ;
-(void)setEditingTableView:(char)arg1 ;
-(void)reloadRowForItem:(id)arg1 ;
-(void)highlightRowByItem:(id)arg1 ;
-(void)scrollToBeginningOfContent;
-(void)activateItemAtIndex:(long long)arg1 ;
-(void)readingListTableCellViewDidChangeTitleOrPreviewText:(id)arg1 ;
-(char)showAsOffline;
-(void)_setContentProvider:(id)arg1 limitingDisplayedItemsBasedOnSidebarBounds:(CGRect)arg2 ;
-(void)_rowClicked:(id)arg1 ;
-(void)_notifyDelegateTableViewDidMoveToWindow;
-(void)_updateItemsWithAnimation:(char)arg1 ;
-(char)_isValidRowIndex:(long long)arg1 ;
-(unsigned long long)_indexOfItemForURLString:(id)arg1 ;
-(void)_highlightRowByIndex:(long long)arg1 ;
-(long long)_rowIndexOfItem:(id)arg1 ;
-(id)_spacerViewAtAdjustedHeight;
-(id)_makeTableCellViewOfClass:(Class)arg1 ;
-(id)_contextMenuBuilderForRow:(long long)arg1 item:(id*)arg2 ;
-(id)_itemForRow:(long long)arg1 ;
-(void)_itemsInDataSourceDidChange:(id)arg1 ;
-(void)openInNewTab:(id)arg1 ;
-(void)openInNewWindow:(id)arg1 ;
-(char)_hasFinishedDisplayingInitialContent;
-(id)_performDiffWithOldItems:(id)arg1 newItems:(id)arg2 ;
-(void)_updateTableView:(id)arg1 withNewDisplayedItems:(id)arg2 ;
-(id)_adjustedIndexSetAccountingForDummyRow:(id)arg1 ;
-(id)accessibilityDescriptionForTableCellView:(id)arg1 ;
-(unsigned long long)displayedItemsCount;
-(char)isEditingTableView;
-(char)showsSearchFieldWrapperView;
@end
