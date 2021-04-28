/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICTableTextStorage.h>
#import <libobjc.A.dylib/ICTableCellMergeableStringObserving.h>

@protocol ICTableUndoHelping;
@class NSUUID, ICTable, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSArray, NSString;

@interface ICTableColumnTextStorage : ICTableTextStorage <ICTableCellMergeableStringObserving> {

	char _shouldPreventUndoCommands;
	NSUUID* _columnID;
	id<ICTableUndoHelping> _undoHelper;
	ICTable* _table;
	NSMutableArray* _rows;
	NSMutableDictionary* _mergeableStringDelegates;
	NSMutableIndexSet* _rowStartIndexes;
	unsigned long long _preventEditingUpdatesCount;

}

@property (nonatomic,__weak,readonly) ICTable * table;                                      //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rows;                                       //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mergeableStringDelegates;              //@synthesize mergeableStringDelegates=_mergeableStringDelegates - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * rowStartIndexes;                         //@synthesize rowStartIndexes=_rowStartIndexes - In the implementation block
@property (assign,nonatomic) unsigned long long preventEditingUpdatesCount;                 //@synthesize preventEditingUpdatesCount=_preventEditingUpdatesCount - In the implementation block
@property (readonly) NSUUID * columnID;                                                     //@synthesize columnID=_columnID - In the implementation block
@property (assign,nonatomic,__weak) id<ICTableUndoHelping> undoHelper;                      //@synthesize undoHelper=_undoHelper - In the implementation block
@property (nonatomic,readonly) NSArray * populatedRows; 
@property (assign,nonatomic) char shouldPreventUndoCommands;                                //@synthesize shouldPreventUndoCommands=_shouldPreventUndoCommands - In the implementation block
@property (nonatomic,readonly) char preventEditingUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(void)removeRow:(id)arg1 ;
-(unsigned long long)indexOfRow:(id)arg1 ;
-(ICTable *)table;
-(void)breakUndoCoalescing;
-(void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(NSMutableArray *)rows;
-(void)restoreSelection:(id)arg1 ;
-(char)wantsUndoCommands;
-(NSUUID *)columnID;
-(id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1 ;
-(char)wantsTimestampUpdates;
-(NSRange)logicalRangeForLocation:(unsigned long long)arg1 ;
-(void)resetUndoManager;
-(id)mergeableStringReplicaUUIDAtIndex:(unsigned long long)arg1 ;
-(void)setPreventEditingUpdatesCount:(unsigned long long)arg1 ;
-(unsigned long long)rowLocationForRowID:(id)arg1 ;
-(id)mergeableStringForRowID:(id)arg1 ;
-(unsigned long long)indexOfRowAtLocation:(unsigned long long)arg1 ;
-(NSMutableIndexSet *)rowStartIndexes;
-(void)beginPreventEditingUpdates;
-(void)endPreventEditingUpdates;
-(NSMutableDictionary *)mergeableStringDelegates;
-(void)removeTextForRow:(id)arg1 ;
-(id)rowAtIndex:(unsigned long long)arg1 rowRange:(out NSRange*)arg2 ;
-(unsigned long long)insertionIndexForRow:(id)arg1 ;
-(unsigned long long)rowLocationForRowIndex:(unsigned long long)arg1 ;
-(unsigned long long)nextLocationAfterRowLocation:(unsigned long long)arg1 ;
-(void)tableCellWasEditedAtColumnID:(id)arg1 rowID:(id)arg2 edited:(unsigned long long)arg3 range:(NSRange)arg4 changeInLength:(long long)arg5 ;
-(char)preventEditingUpdates;
-(void)setShouldPreventUndoCommands:(char)arg1 ;
-(unsigned long long)preventEditingUpdatesCount;
-(id<ICTableUndoHelping>)undoHelper;
-(void)closeUndoGroups;
-(char)shouldPreventUndoCommands;
-(id)initWithTable:(id)arg1 columnID:(id)arg2 ;
-(NSArray *)populatedRows;
-(NSRange)characterRangeForRowID:(id)arg1 ;
-(void)updateStorageForMovedRow:(id)arg1 ;
-(void)setUndoHelper:(id<ICTableUndoHelping>)arg1 ;
@end

