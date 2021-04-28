/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSKit/TSKSelection.h>
#import <TSTables/TSDTextSelection.h>

@class TSTTableInfo, TSTCellUIDRegion, TSTCellRegion, NSString;

@interface TSTCellSelection : TSKSelection <TSDTextSelection> {

	char _beginImplicitEditing;
	long long _selectionType;
	TSTTableInfo* _tableInfo;
	TSTCellUIDRegion* _cellUIDRegion;
	TSTCellUIDRegion* _baseCellUIDRegion;
	TSTCellRegion* _cachedCellRegion;
	unsigned long long _cachedCellRegionVersionCounter;
	TSTCellRegion* _cachedBaseRegion;
	unsigned long long _cachedBaseRegionVersionCounter;
	NSRange _searchReferenceRange;
	TSKUIDStructCoord _anchorCellUID;
	TSKUIDStructCoord _cursorCellUID;

}

@property (assign,nonatomic,__weak) TSTTableInfo * tableInfo;                                //@synthesize tableInfo=_tableInfo - In the implementation block
@property (nonatomic,retain) TSTCellUIDRegion * cellUIDRegion;                               //@synthesize cellUIDRegion=_cellUIDRegion - In the implementation block
@property (assign,nonatomic) TSKUIDStructCoord anchorCellUID;                                //@synthesize anchorCellUID=_anchorCellUID - In the implementation block
@property (assign,nonatomic) TSKUIDStructCoord cursorCellUID;                                //@synthesize cursorCellUID=_cursorCellUID - In the implementation block
@property (nonatomic,retain) TSTCellUIDRegion * baseCellUIDRegion;                           //@synthesize baseCellUIDRegion=_baseCellUIDRegion - In the implementation block
@property (nonatomic,retain) TSTCellRegion * cachedCellRegion;                               //@synthesize cachedCellRegion=_cachedCellRegion - In the implementation block
@property (assign,nonatomic) unsigned long long cachedCellRegionVersionCounter;              //@synthesize cachedCellRegionVersionCounter=_cachedCellRegionVersionCounter - In the implementation block
@property (nonatomic,retain) TSTCellRegion * cachedBaseRegion;                               //@synthesize cachedBaseRegion=_cachedBaseRegion - In the implementation block
@property (assign,nonatomic) unsigned long long cachedBaseRegionVersionCounter;              //@synthesize cachedBaseRegionVersionCounter=_cachedBaseRegionVersionCounter - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) TSTCellRegion * cellRegion; 
@property (nonatomic,readonly) long long selectionType;                                      //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,readonly) TSUCellCoord anchorCellID; 
@property (nonatomic,readonly) TSTCellRegion * baseRegion; 
@property (nonatomic,readonly) TSUCellCoord cursorCellID; 
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (nonatomic,readonly) char beginImplicitEditing;                                    //@synthesize beginImplicitEditing=_beginImplicitEditing - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeClass; 
@property (assign,nonatomic) NSRange searchReferenceRange;                                   //@synthesize searchReferenceRange=_searchReferenceRange - In the implementation block
@property (nonatomic,readonly) char containsHeaderColumns; 
@property (nonatomic,readonly) char containsHeaderRows; 
@property (nonatomic,readonly) char containsBodyRows; 
@property (nonatomic,readonly) char containsFooterRows; 
@property (nonatomic,readonly) char containsCellsInCategoryColumn; 
@property (nonatomic,readonly) char containsCellsInSummaryRow; 
@property (nonatomic,readonly) char containsCellsInLabelRow; 
@property (nonatomic,readonly) char containsCellsInSummaryOrLabelRows; 
@property (nonatomic,readonly) char containsGroupValueCells; 
@property (nonatomic,readonly) char containsCellsInCategoryGroupingColumn; 
@property (nonatomic,readonly) char containsCellsInCategoryColumnsOrRows; 
@property (nonatomic,readonly) char containsOnlyCellsInCategoryColumn; 
@property (nonatomic,readonly) char containsOnlyCellsInSummaryRow; 
@property (nonatomic,readonly) char containsOnlyCellsInSummaryAndLabelRows; 
@property (nonatomic,readonly) char containsOnlyGroupValueCells; 
@property (nonatomic,readonly) char containsOnlyCellsInCategoryColumnsAndRows; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) char isAtEndOfLine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedSelectionClass;
+(id)selectionWithTableInfo:(id)arg1 cellID:(TSUCellCoord)arg2 ;
+(id)selectionWithTableInfo:(id)arg1 columnIndices:(id)arg2 ;
+(id)selectionWithTableInfo:(id)arg1 cellRegion:(id)arg2 ;
+(id)selectionWithTableInfo:(id)arg1 rowIndices:(id)arg2 ;
+(id)selectionWithTableInfo:(id)arg1 cellUID:(const TSKUIDStructCoord*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(char)isValid;
-(NSRange)range;
-(long long)selectionType;
-(unsigned long long)cellCount;
-(id)briefDescription;
-(unsigned long long)sizeClass;
-(char)isAtEndOfLine;
-(id)initWithArchive:(const SelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(TSTTableInfo *)tableInfo;
-(TSTCellRegion *)cellRegion;
-(TSUCellCoord)anchorCellID;
-(TSUCellCoord)cursorCellID;
-(TSTCellRegion *)baseRegion;
-(id)selectionByExtendingWithCellRange:(TSUCellRect)arg1 inTable:(id)arg2 selectionType:(long long)arg3 cursorCell:(TSUCellCoord)arg4 ;
-(char)isEqualToSelection:(id)arg1 ;
-(id)selectionByAddingCellRange:(TSUCellRect)arg1 inTable:(id)arg2 withAnchor:(TSUCellCoord)arg3 cursor:(TSUCellCoord)arg4 selectionType:(long long)arg5 ;
-(id)selectionByRemovingCellRange:(TSUCellRect)arg1 inTable:(id)arg2 withAnchor:(TSUCellCoord)arg3 cursor:(TSUCellCoord)arg4 selectionType:(long long)arg5 ;
-(void)insert:(long long)arg1 atIndex:(unsigned)arg2 count:(unsigned)arg3 ;
-(void)remove:(long long)arg1 atIndex:(unsigned)arg2 count:(unsigned)arg3 ;
-(char)areCellsInTheSameRegionInTable:(id)arg1 ;
-(char)containsSelection:(id)arg1 ;
-(char)containsCell:(TSUCellCoord)arg1 ;
-(char)intersectsPartialMergeRangeInTable:(id)arg1 ;
-(NSRange)searchReferenceRange;
-(void)setSearchReferenceRange:(NSRange)arg1 ;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(void)setCellRange:(TSUCellRect)arg1 ;
-(void)saveToArchive:(SelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithTableInfo:(id)arg1 andCellRange:(TSUCellRect)arg2 ;
-(id)initWithTableInfo:(id)arg1 cellUIDRegion:(id)arg2 anchorCellUID:(TSKUIDStructCoord*)arg3 cursorCellUID:(TSKUIDStructCoord*)arg4 baseCellUIDRegion:(id)arg5 selectionType:(long long)arg6 searchReferenceRange:(NSRange)arg7 beginImplicitEditing:(char)arg8 ;
-(id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 baseRegion:(id)arg5 selectionType:(long long)arg6 searchReferenceRange:(NSRange)arg7 beginImplicitEditing:(char)arg8 ;
-(id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 baseRegion:(id)arg5 selectionType:(long long)arg6 ;
-(id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 baseRegion:(id)arg5 ;
-(id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 selectionType:(long long)arg5 ;
-(id)initWithTableInfo:(id)arg1 cellRange:(TSUCellRect)arg2 type:(long long)arg3 anchorCellID:(TSUCellCoord)arg4 cursorCellID:(TSUCellCoord)arg5 ;
-(id)initWithTableInfo:(id)arg1 startingRowIndex:(unsigned)arg2 numberOfRows:(unsigned)arg3 ;
-(id)initWithTableInfo:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned)arg3 ;
-(id)initWithTableInfo:(id)arg1 andCellID:(TSUCellCoord)arg2 ;
-(id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 ;
-(id)initWithTableInfo:(id)arg1 rowIndices:(id)arg2 ;
-(id)initWithTableInfo:(id)arg1 columnIndices:(id)arg2 ;
-(void)p_cacheCellRegion:(id)arg1 ;
-(void)p_cacheBaseRegion:(id)arg1 ;
-(char)containsSingleCellOrMergeInTable:(id)arg1 ;
-(TSKUIDStructCoord)anchorCellUID;
-(TSKUIDStructCoord)cursorCellUID;
-(char)beginImplicitEditing;
-(char)canEditWithControlCellSubselectionInTable:(id)arg1 ;
-(char)containsCellsInSummaryRow;
-(char)containsCellsInLabelRow;
-(char)containsCellsInCategoryColumn;
-(char)containsCellsInSummaryOrLabelRows;
-(char)containsOnlyCellsInSummaryRow;
-(char)canEditWithCellSubselectionInTable:(id)arg1 ;
-(id)initForUpgradeWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 baseRegion:(id)arg5 selectionType:(long long)arg6 ;
-(id)initWithTableInfo:(id)arg1 cellRegion:(id)arg2 anchorCellID:(TSUCellCoord)arg3 cursorCellID:(TSUCellCoord)arg4 ;
-(id)initWithTableInfo:(id)arg1 selectionType:(long long)arg2 ;
-(id)initWithTableInfo:(id)arg1 cellID:(TSUCellCoord)arg2 selectionType:(long long)arg3 ;
-(id)initWithTableInfo:(id)arg1 rowOrColumn:(long long)arg2 index:(unsigned)arg3 count:(unsigned)arg4 ;
-(id)initWithTableInfo:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(TSUColumnRowOffset)arg3 ;
-(TSUCellCoord)logicalCellIDInTable:(id)arg1 ;
-(id)initWithRdar39989167Archive:(const DeathhawkRdar39989167CellSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)selectionAdjustedForRowVisibilityInTableInfo:(id)arg1 ;
-(id)selectionAdjustedForColumnVisibilityInTableInfo:(id)arg1 ;
-(id)selectionAdjustedForGeometryInTableInfo:(id)arg1 ;
-(id)selectionToBeginImplicitEditingInTableInfo:(id)arg1 ;
-(id)selectionExpandedToCoverCollapsedRows;
-(char)selectsSingleControlCellWithInteractionUIInTable:(id)arg1 ;
-(char)containsHeaderColumns;
-(char)containsHeaderRows;
-(char)containsBodyRows;
-(char)containsFooterRows;
-(char)containsCellsInCategoryColumnsOrRows;
-(char)containsCellsInCategoryGroupingColumn;
-(char)containsGroupValueCells;
-(char)containsOnlyCellsInCategoryColumn;
-(char)containsOnlyCellsInSummaryAndLabelRows;
-(char)containsOnlyCellsInCategoryColumnsAndRows;
-(char)containsOnlyGroupValueCells;
-(char)canEditWithStockCellSubselectionInTable:(id)arg1 ;
-(char)getAggregateType:(out unsigned char*)arg1 ;
-(TSTCellUIDRegion *)cellUIDRegion;
-(void)setCellUIDRegion:(TSTCellUIDRegion *)arg1 ;
-(void)setAnchorCellUID:(TSKUIDStructCoord)arg1 ;
-(void)setCursorCellUID:(TSKUIDStructCoord)arg1 ;
-(TSTCellUIDRegion *)baseCellUIDRegion;
-(void)setBaseCellUIDRegion:(TSTCellUIDRegion *)arg1 ;
-(TSTCellRegion *)cachedCellRegion;
-(void)setCachedCellRegion:(TSTCellRegion *)arg1 ;
-(unsigned long long)cachedCellRegionVersionCounter;
-(void)setCachedCellRegionVersionCounter:(unsigned long long)arg1 ;
-(TSTCellRegion *)cachedBaseRegion;
-(void)setCachedBaseRegion:(TSTCellRegion *)arg1 ;
-(unsigned long long)cachedBaseRegionVersionCounter;
-(void)setCachedBaseRegionVersionCounter:(unsigned long long)arg1 ;
@end
