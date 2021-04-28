/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTCellIterating.h>

@protocol TSTCellRegionIteratingTSTMutableCellIteratorDataUpdating, TSTCellRegionIterating;
@class TSTTableInfo, TSTTableModel, TSTCellRegion, TSTCell, TSTMutableCellIteratorData, NSString;

@interface TSTCellIterator : NSObject <TSTCellIterating> {

	unordered_map<unsigned short, TSUCellRect, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSUCellRect>>>* _columnIndexToMergeRangeMap;
	char _returnCellContents;
	char _returnEmptyCells;
	char _returnOneEmptyCell;
	char _terminateRegionIterator;
	char _returnOnlyFormulas;
	char _returnMergeRanges;
	unsigned _rowForColumnIndexesWithMerges;
	TSTTableInfo* _tableInfo;
	TSTTableModel* _tableModel;
	TSTCellRegion* _region;
	TSTCell* _cell;
	TSTMutableCellIteratorData* _cellData;
	id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _contentIterator;
	id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _strokeIterator;
	id<TSTCellRegionIterating> _regionIterator;
	id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> _dataStoreIterator;

}

@property (nonatomic,retain) TSTTableInfo * tableInfo;                                                                      //@synthesize tableInfo=_tableInfo - In the implementation block
@property (nonatomic,retain) TSTTableModel * tableModel;                                                                    //@synthesize tableModel=_tableModel - In the implementation block
@property (nonatomic,readonly) TSTCellRegion * region;                                                                      //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) TSTCell * cell;                                                                                //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) TSTMutableCellIteratorData * cellData;                                                         //@synthesize cellData=_cellData - In the implementation block
@property (assign,nonatomic) char returnEmptyCells;                                                                         //@synthesize returnEmptyCells=_returnEmptyCells - In the implementation block
@property (assign,nonatomic) char returnOneEmptyCell;                                                                       //@synthesize returnOneEmptyCell=_returnOneEmptyCell - In the implementation block
@property (assign,nonatomic) char terminateRegionIterator;                                                                  //@synthesize terminateRegionIterator=_terminateRegionIterator - In the implementation block
@property (assign,nonatomic) char returnOnlyFormulas;                                                                       //@synthesize returnOnlyFormulas=_returnOnlyFormulas - In the implementation block
@property (assign,nonatomic) char returnMergeRanges;                                                                        //@synthesize returnMergeRanges=_returnMergeRanges - In the implementation block
@property (nonatomic,retain) id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> contentIterator;                //@synthesize contentIterator=_contentIterator - In the implementation block
@property (nonatomic,retain) id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> strokeIterator;                 //@synthesize strokeIterator=_strokeIterator - In the implementation block
@property (nonatomic,retain) id<TSTCellRegionIterating> regionIterator;                                                     //@synthesize regionIterator=_regionIterator - In the implementation block
@property (nonatomic,retain) id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> dataStoreIterator;              //@synthesize dataStoreIterator=_dataStoreIterator - In the implementation block
@property (assign,nonatomic) unsigned rowForColumnIndexesWithMerges;                                                        //@synthesize rowForColumnIndexesWithMerges=_rowForColumnIndexesWithMerges - In the implementation block
@property (nonatomic,readonly) char returnCellContents;                                                                     //@synthesize returnCellContents=_returnCellContents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)terminate;
-(TSTCell *)cell;
-(void)setCell:(TSTCell *)arg1 ;
-(TSTCellRegion *)region;
-(TSTTableModel *)tableModel;
-(void)setTableModel:(TSTTableModel *)arg1 ;
-(void)setCellData:(TSTMutableCellIteratorData *)arg1 ;
-(TSTMutableCellIteratorData *)cellData;
-(TSTTableInfo *)tableInfo;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4 ;
-(id)initWithTableInfo:(id)arg1 tableModel:(id)arg2 region:(id)arg3 flags:(unsigned long long)arg4 searchFlags:(unsigned long long)arg5 clampingRange:(TSUCellRect)arg6 ;
-(char)getNextCellData:(id*)arg1 ;
-(void)iterateCellsUsingBlock:(/*^block*/id)arg1 ;
-(TSUCellCoord)p_getNextCellID;
-(void)p_updateDataForCellID:(TSUCellCoord)arg1 ;
-(void)setRegionIterator:(id<TSTCellRegionIterating>)arg1 ;
-(void)p_updateDataForMergeAtCellID:(TSUCellCoord)arg1 ;
-(id)nextCellData;
-(id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4 clampingRange:(TSUCellRect)arg5 ;
-(id)initWithTableInfo:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3 ;
-(id)initWithTableInfo:(id)arg1 range:(TSUCellRect)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4 ;
-(char)returnCellContents;
-(char)returnEmptyCells;
-(void)setReturnEmptyCells:(char)arg1 ;
-(char)returnOneEmptyCell;
-(void)setReturnOneEmptyCell:(char)arg1 ;
-(char)terminateRegionIterator;
-(void)setTerminateRegionIterator:(char)arg1 ;
-(char)returnOnlyFormulas;
-(void)setReturnOnlyFormulas:(char)arg1 ;
-(char)returnMergeRanges;
-(void)setReturnMergeRanges:(char)arg1 ;
-(id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating>)contentIterator;
-(void)setContentIterator:(id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating>)arg1 ;
-(id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating>)strokeIterator;
-(void)setStrokeIterator:(id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating>)arg1 ;
-(id<TSTCellRegionIterating>)regionIterator;
-(id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating>)dataStoreIterator;
-(void)setDataStoreIterator:(id<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating>)arg1 ;
-(unsigned)rowForColumnIndexesWithMerges;
-(void)setRowForColumnIndexesWithMerges:(unsigned)arg1 ;
@end
