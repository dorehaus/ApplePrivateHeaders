/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NumbersQuicklook/NumbersQuicklook-Structs.h>
@class TSCEFormulaObject, TNChartVectorWrapper, NSArray;

@interface TNChartFormulaWrapper : NSObject {

	TSCEFormulaObject* _formulaObject;
	long long _cachedNumberOfValues;
	TNChartVectorWrapper* _cachedOutputValueVector;
	vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>* _cachedChromeCoords;
	NSArray* _cachedPlotwiseLabels;
	char _cachedSkipHiddenData;
	char _cachedLabelsByRow;
	char _cachedChromeCoordsRealized;

}

@property (nonatomic,retain,readonly) TSCEFormulaObject * formulaObject; 
+(id)chartFormulaForRangeReference:(TSCERangeRef)arg1 ;
+(id)chartFormulaForTractReference:(id)arg1 ;
+(id)chartFormulaForTractAsRangeReferences:(id)arg1 ;
+(id)chartFormulaForCellRegion:(id)arg1 inTable:(id)arg2 ;
+(id)chartFormulaForString:(id)arg1 ;
+(id)chartFormulaWithFormulaObject:(id)arg1 ;
+(id)emptyChartFormula;
+(id)chartFormulaForCellReference:(TSCECellRef)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)argumentCollectionWithCalcEngine:(id)arg1 inChart:(const TSKUIDStruct*)arg2 ;
-(TSCEFormulaObject *)formulaObject;
-(char)isAllStaticValuesWithCalcEngine:(id)arg1 inOwner:(const TSKUIDStruct*)arg2 ;
-(unsigned long long)numberOfTotalPlotwiseLabelValuesWithCalcEngine:(id)arg1 inChart:(const TSKUIDStruct*)arg2 byRow:(char)arg3 shouldSkipHiddenData:(char)arg4 ;
-(id)outputValue:(TSCEEvaluationContext*)arg1 shouldSkipHiddenData:(char)arg2 ;
-(id)plotwiseLabelValuesWithEvaluationContext:(TSCEEvaluationContext*)arg1 byRow:(char)arg2 shouldSkipHiddenData:(char)arg3 ;
-(id)initWithFormulaObject:(id)arg1 ;
-(TSCERangeRef)rangeCircumscribingPrecedentsWithCalcEngine:(id)arg1 inOwner:(const TSKUIDStruct*)arg2 ;
-(id)stringValueForFormulaWithCalcEngine:(id)arg1 inOwner:(const TSKUIDStruct*)arg2 ;
-(unsigned long long)numberOfValuesWithCalcEngine:(id)arg1 inChart:(const TSKUIDStruct*)arg2 ;
-(id)argumentCollectionWithCalcEngine:(id)arg1 inChart:(const TSKUIDStruct*)arg2 storeBadRef:(char)arg3 ;
-(id)formulaByProcessingArgumentsWithCalcEngine:(id)arg1 inOwner:(const TSKUIDStruct*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)outputValue:(TSCEEvaluationContext*)arg1 shouldSkipHiddenData:(char)arg2 requiresChromeCoords:(char)arg3 ;
-(vector<std::__1::pair<TSCEValue, TSUCellCoord>, std::__1::allocator<std::__1::pair<TSCEValue, TSUCellCoord>>>*)outputVectorValuesWithChromeCoords:(TSCEEvaluationContext*)arg1 shouldSkipHiddenData:(char)arg2 ;
-(char)formulaIsEqualTo:(id)arg1 ;
-(void)clearCacheForCalculationEngine:(id)arg1 ;
-(id)formulaByRewriting:(char)arg1 withCalcEngine:(id)arg2 andHostUID:(const TSKUIDStruct*)arg3 ;
-(id)formulaByBakingValuesWithCalcEngine:(id)arg1 inOwner:(const TSKUIDStruct*)arg2 ;
-(id)formulaByTrimmingCategoryLabels:(unsigned long long)arg1 plotByRow:(char)arg2 calcEngine:(id)arg3 inChart:(TSKUIDStruct*)arg4 ;
@end

