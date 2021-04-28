/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConsoleKit/ConsoleKit-Structs.h>
#import <ConsoleKit/CSKTableViewController.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>
#import <libobjc.A.dylib/CSKMessagesTableViewEventDelegate.h>

@protocol CSKMessagesViewControllerDataSource, OS_dispatch_queue;
@class NSMutableDictionary, NSOperationQueue, NSMapTable, NSObject, NSString;

@interface CSKMessagesViewController : CSKTableViewController <NSTableViewDataSource, CSKMessagesTableViewEventDelegate> {

	NSMutableDictionary* _rowToBlockOp;
	NSOperationQueue* _cellUpdateOpQueue;
	char _allowsMessagesInsertion;
	id<CSKMessagesViewControllerDataSource> _dataSource;
	unsigned long long _anchorROWID;
	double _defaultRowHeight;
	NSMapTable* _expandedRowsCache;
	NSObject*<OS_dispatch_queue> _cellUpdateQueue;
	unsigned long long _currentRow;

}

@property (nonatomic,readonly) NSMapTable * expandedRowsCache;                                       //@synthesize expandedRowsCache=_expandedRowsCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cellUpdateQueue;                           //@synthesize cellUpdateQueue=_cellUpdateQueue - In the implementation block
@property (assign,nonatomic) unsigned long long currentRow;                                          //@synthesize currentRow=_currentRow - In the implementation block
@property (assign,nonatomic,__weak) id<CSKMessagesViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) char allowsMessagesInsertion;                                           //@synthesize allowsMessagesInsertion=_allowsMessagesInsertion - In the implementation block
@property (assign,nonatomic) unsigned long long anchorROWID;                                         //@synthesize anchorROWID=_anchorROWID - In the implementation block
@property (assign,nonatomic) double defaultRowHeight;                                                //@synthesize defaultRowHeight=_defaultRowHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<CSKMessagesViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<CSKMessagesViewControllerDataSource>)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3 ;
-(void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)stringLength;
-(id)stringAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 endsWithSearchBoundary:(char*)arg3 ;
-(NSRange)firstSelectedRange;
-(void)reload;
-(double)defaultRowHeight;
-(void)setDefaultRowHeight:(double)arg1 ;
-(void)textFinder:(id)arg1 findBarVisibilityDidChange:(char)arg2 ;
-(void)messagesTableViewLeftArrowDidPress:(id)arg1 ;
-(void)messagesTableViewRightArrowDidPress:(id)arg1 ;
-(void)insertMessagesAtIndexes:(id)arg1 ;
-(void)removeMessagesAtIndexes:(id)arg1 ;
-(void)scrollViewDidEndResizeNotification:(id)arg1 ;
-(void)insertMessagesAtIndexes:(id)arg1 ignoreFocus:(char)arg2 ;
-(char)allowsMessagesInsertion;
-(id)entitiesAtIndexes:(id)arg1 ;
-(NSMapTable *)expandedRowsCache;
-(char)_isMessageStringColumnVisible;
-(id)_collapsedRowsInRows:(id)arg1 ;
-(void)_cacheHeightsForMessagesStringAtIndexes:(id)arg1 ;
-(void)_reloadMessageStringColumnRows:(id)arg1 ;
-(id)_expandedRowsInRows:(id)arg1 ;
-(void)_removeCachedHeightsForRows:(id)arg1 ;
-(void)setAnchorROWID:(unsigned long long)arg1 ;
-(void)setCurrentRow:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)cellUpdateQueue;
-(char)_isRowExpanded:(long long)arg1 ;
-(double)_cachedHeightForRow:(long long)arg1 ;
-(void)collapseEntitiesAtIndexes:(id)arg1 ;
-(void)expandEntitiesAtIndexes:(id)arg1 ;
-(id)entityAtIndex:(unsigned long long)arg1 ;
-(void)_updateCachedHeightForRow:(unsigned long long)arg1 string:(id)arg2 width:(double)arg3 ;
-(NSRange)_rangeForCharacterIndex:(unsigned long long)arg1 ;
-(unsigned long long)_rangeToRowIndex:(NSRange)arg1 ;
-(id)_padString:(id)arg1 ;
-(id)defaultColumnLayout;
-(void)setAllowsMessagesInsertion:(char)arg1 ;
-(unsigned long long)anchorROWID;
-(void)setCellUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)currentRow;
@end

