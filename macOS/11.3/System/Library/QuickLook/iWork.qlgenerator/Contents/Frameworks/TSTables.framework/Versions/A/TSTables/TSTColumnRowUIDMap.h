/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSTables/TSCEColumnRowUIDMapping.h>

@class TSTColumnRowUIDMapper;

@interface TSTColumnRowUIDMap : TSPObject <TSCEColumnRowUIDMapping> {

	TSKUIDStructVectorTemplate<TSKUIDStruct>* _columnUidForIndex;
	TSKUIDStructVectorTemplate<TSKUIDStruct>* _rowUidForIndex;
	unordered_map<TSKUIDStruct, unsigned short, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<std::__1::pair<const TSKUIDStruct, unsigned short>>>* _columnIndexForUid;
	unordered_map<TSKUIDStruct, unsigned int, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<std::__1::pair<const TSKUIDStruct, unsigned int>>>* _rowIndexForUid;
	unsigned long long _versionCounter;
	TSTColumnRowUIDMapper* _copyOnWriteUIDMapper;

}

@property (nonatomic,readonly) unsigned short numberOfColumns; 
@property (nonatomic,readonly) unsigned numberOfRows; 
@property (nonatomic,readonly) unsigned long long versionCounter;              //@synthesize versionCounter=_versionCounter - In the implementation block
-(char)isEmpty;
-(id)initWithContext:(id)arg1 ;
-(void)reset;
-(TSUCellRect)range;
-(unsigned short)numberOfColumns;
-(unsigned)numberOfRows;
-(id)copyWithContext:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSKUIDStruct)columnUIDForColumnIndex:(unsigned short)arg1 ;
-(TSKUIDStruct)rowUIDForRowIndex:(unsigned)arg1 ;
-(TSKUIDStructCoord)cellUIDForCellID:(TSUCellCoord)arg1 ;
-(unsigned)rowIndexForRowUID:(TSKUIDStruct)arg1 ;
-(id)mutableColumnIndexesForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)mutableRowIndexesForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(unsigned short)columnIndexForColumnUID:(TSKUIDStruct)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)columnUIDsForColumnIndexes:(id)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)rowUIDsForRowIndexes:(id)arg1 ;
-(id)UIDSetForIndexes:(id)arg1 isRows:(char)arg2 ;
-(TSCERangeCoordinate)tableRangeCoordinate;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)rowUIDsForRowRange:(NSRange)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)columnUIDsForColumnRange:(NSRange)arg1 ;
-(TSUCellCoord)cellIDForCellUID:(TSKUIDStructCoord)arg1 ;
-(unsigned long long)versionCounter;
-(id)initWithContext:(id)arg1 columnUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg2 rowUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg3 ;
-(id)initWithContext:(id)arg1 tableUUID:(id)arg2 numberOfRows:(unsigned)arg3 numberOfColumns:(unsigned)arg4 ;
-(void)insertNewRowsInIndexRange:(NSRange)arg1 ;
-(void)insertNewColumnsInIndexRange:(NSRange)arg1 ;
-(void)insertRowsWithUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 atIndex:(unsigned)arg2 ;
-(void)insertColumnsWithUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 atIndex:(unsigned short)arg2 ;
-(void)removeRowsAtIndexes:(id)arg1 ;
-(void)removeColumnsAtIndexes:(id)arg1 ;
-(void)moveRowIndexRange:(NSRange)arg1 toIndex:(unsigned)arg2 ;
-(void)moveColumnIndexRange:(NSRange)arg1 toIndex:(unsigned short)arg2 ;
-(void)swapRowAtIndex:(unsigned)arg1 withRowAtIndex:(unsigned)arg2 ;
-(void)assertCollaborationConvergence;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)columnUIDs;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)rowUIDs;
-(char)writeCellIDsInCellUIDList:(id)arg1 toVector:(vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>*)arg2 prunedCellUIDs:(vector<TSKUIDStructCoord, std::__1::allocator<TSKUIDStructCoord>>*)arg3 ;
-(void)convertCellUIDLookupList:(id)arg1 toCellRangeVector:(vector<TSUCellRect, std::__1::allocator<TSUCellRect>>*)arg2 prunedSummaryCellUIDs:(vector<TSKUIDStructCoord, std::__1::allocator<TSKUIDStructCoord>>*)arg3 ;
-(id)rowIndexesForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)columnIndexesForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)prunedColumnUIDsFromColumnUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(TSKUIDStructVectorTemplate<TSKUIDStruct>*)prunedRowUIDsFromRowUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(id)mutableIndexesForUIDSet:(id)arg1 isRows:(char)arg2 ;
-(id)mutableIndexesForUIDSet:(id)arg1 isRows:(char)arg2 notFoundUIDs:(id)arg3 ;
-(NSRange)rowRangeForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(NSRange)columnRangeForUIDs:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(TSUCellRect)cellRangeForUIDRange:(const TSKUIDStructTract*)arg1 ;
-(TSKUIDStructTract*)cellUIDRangeForCellRange:(TSUCellRect)arg1 ;
-(id)cellRegionForUIDRange:(const TSKUIDStructTract*)arg1 ;
-(id)cellTractRefForUIDRectRef:(id)arg1 ;
-(id)copyOnWriteUIDMapper;
-(char)_checkStructure;
-(id)p_mutableRowIndexesForUIDSet:(id)arg1 notFoundUIDs:(id)arg2 ;
-(id)p_mutableColumnIndexesForUIDSet:(id)arg1 notFoundUIDs:(id)arg2 ;
-(void)incrementVersionCounter;
-(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)allOrderedRowUIDs;
-(void)replaceRowsWithUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(void)replaceColumnsWithUids:(const TSKUIDStructVectorTemplate<TSKUIDStruct>*)arg1 ;
-(void)applyMap:(const TSKUIDStructMap*)arg1 toRows:(char)arg2 ;
@end
