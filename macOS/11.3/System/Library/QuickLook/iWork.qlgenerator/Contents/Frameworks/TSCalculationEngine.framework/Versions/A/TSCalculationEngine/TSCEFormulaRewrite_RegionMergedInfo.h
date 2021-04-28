/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@class TSCEFormulaRewrite_RegionInfo;

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject {

	TSUCellCoord _mergeSource;
	TSCEFormulaRewrite_RegionInfo* _mergeRegion;

}

@property (assign,nonatomic) const TSUCellCoord* mergeSource;                            //@synthesize mergeSource=_mergeSource - In the implementation block
@property (nonatomic,readonly) TSCEFormulaRewrite_RegionInfo * mergeRegion;              //@synthesize mergeRegion=_mergeRegion - In the implementation block
-(id)description;
-(TSCEFormulaRewrite_RegionInfo *)mergeRegion;
-(const TSUCellCoord*)mergeSource;
-(id)initWithMergeRegion:(id)arg1 mergeSource:(TSUCellCoord)arg2 ;
-(void)setMergeSource:(const TSUCellCoord*)arg1 ;
@end

