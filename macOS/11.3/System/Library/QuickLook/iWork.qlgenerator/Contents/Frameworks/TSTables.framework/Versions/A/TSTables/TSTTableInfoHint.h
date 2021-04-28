/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSTCellUIDList, NSMutableIndexSet;

@interface TSTTableInfoHint : NSObject {

	TSTCellUIDList* _cellUIDs;
	NSMutableIndexSet* _tableStyleIndexes;
	CGSize _maximumSize;
	vector<unsigned long, std::__1::allocator<unsigned long>>* _cellFlags;

}

@property (nonatomic,readonly) CGSize maximumSize;                                 //@synthesize maximumSize=_maximumSize - In the implementation block
@property (nonatomic,readonly) vector<unsigned long cellFlags;                     //@synthesize cellFlags=_cellFlags - In the implementation block
@property (nonatomic,readonly) TSTCellUIDList * cellUIDs;                          //@synthesize cellUIDs=_cellUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * tableStyleIndexes;              //@synthesize tableStyleIndexes=_tableStyleIndexes - In the implementation block
-(id)init;
-(CGSize)maximumSize;
-(void)enumerateCellUIDsUsingBlock:(/*^block*/id)arg1 ;
-(vector<unsigned long)cellFlags;
-(void)addTableStyleIndex:(unsigned long long)arg1 ;
-(char)hasTableStyles;
-(char)containsStyleNetworkIndex:(unsigned long long)arg1 ;
-(void)enumerateTableStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)addCellUID:(const TSKUIDStructCoord*)arg1 flags:(unsigned long long)arg2 addingMaximumSize:(CGSize)arg3 ;
-(char)hasStylesInCells;
-(TSTCellUIDList *)cellUIDs;
-(NSMutableIndexSet *)tableStyleIndexes;
@end
