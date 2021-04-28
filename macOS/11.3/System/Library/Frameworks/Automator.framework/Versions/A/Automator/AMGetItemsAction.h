/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/AMAppleScriptAction.h>

@class NSArrayController, NSButton, NSTableView, NSMutableArray, NSIndexSet;

@interface AMGetItemsAction : AMAppleScriptAction {

	NSArrayController* _itemsController;
	NSButton* _addButton;
	NSButton* _removeButton;
	NSTableView* _itemsTableView;
	NSMutableArray* _items;
	NSIndexSet* _draggedIndexes;

}

@property (assign,nonatomic,__weak) NSArrayController * _itemsController;               //@synthesize itemsController=_itemsController - In the implementation block
@property (assign,nonatomic,__weak) NSButton * _addButton;                              //@synthesize addButton=_addButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * _removeButton;                           //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic,__weak) NSTableView * _itemsTableView;                      //@synthesize itemsTableView=_itemsTableView - In the implementation block
@property (nonatomic,__weak,readonly) NSArrayController * itemsController; 
@property (retain) NSMutableArray * items;                                              //@synthesize items=_items - In the implementation block
@property (retain) NSIndexSet * draggedIndexes;                                         //@synthesize draggedIndexes=_draggedIndexes - In the implementation block
@property (nonatomic,__weak,readonly) NSTableView * itemsTableView; 
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)closed;
-(void)awakeFromNib;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSButton *)_addButton;
-(void)addItems:(id)arg1 ;
-(NSButton *)_removeButton;
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(NSTableView *)_itemsTableView;
-(id)itemsPasteboardTypes;
-(NSArrayController *)_itemsController;
-(id)itemsFromPanelController:(id)arg1 ;
-(Class)itemsPanelControllerClass;
-(id)itemsPanelNibName;
-(void)_panelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(NSTableView *)itemsTableView;
-(NSArrayController *)itemsController;
-(id)itemsFromPasteboard:(id)arg1 forTypes:(id)arg2 ;
-(void)set_itemsController:(NSArrayController *)arg1 ;
-(void)set_addButton:(NSButton *)arg1 ;
-(void)set_removeButton:(NSButton *)arg1 ;
-(void)set_itemsTableView:(NSTableView *)arg1 ;
-(NSIndexSet *)draggedIndexes;
-(void)setDraggedIndexes:(NSIndexSet *)arg1 ;
-(unsigned long long)draggingStatus:(id)arg1 ;
@end
