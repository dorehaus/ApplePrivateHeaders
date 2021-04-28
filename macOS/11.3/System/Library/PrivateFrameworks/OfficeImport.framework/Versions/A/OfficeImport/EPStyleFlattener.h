/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDProcessor.h>

@class EDWorksheet, EDRowBlocks, EDRowBlock, EDColumnInfoCollection, NSArray, NSMutableArray, ECIntToTwoIntKeyCache;

@interface EPStyleFlattener : EDProcessor {

	EDWorksheet* mWorksheet;
	EDRowBlocks* mRowBlocks;
	EDRowBlock* mCurrentRowBlock;
	EDColumnInfoCollection* mColumnInfos;
	NSArray* mKeys;
	NSMutableArray* mRanges;
	ECIntToTwoIntKeyCache* mFlattenedStyleCache;
	ECIntToTwoIntKeyCache* mFillCache;
	int mFirstRow;
	int mLastRow;
	int mFirstColumn;
	int mLastColumn;
	unsigned mFirstRowStripeSize;
	unsigned mSecondRowStripeSize;
	unsigned mFirstColumnStripeSize;
	unsigned mSecondColumnStripeSize;

}
-(void)clearCache;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(id)newExtractedKeys:(id)arg1 from:(id)arg2 parent:(id)arg3 ;
-(void)cacheRange:(id)arg1 ;
-(void)cacheSizes:(id)arg1 inObject:(id)arg2 ;
-(id)collectionFromWorksheet:(id)arg1 ;
-(id)styleFromObject:(id)arg1 ;
-(id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 ;
-(id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3 ;
-(void)processObject:(id)arg1 ;
-(id)newExtractedGlobalStyleElements:(id)arg1 ;
-(EDCellHeader*)cellWithSetupStyleAtRowNumber:(int)arg1 columnNumber:(int)arg2 ;
-(void)applyStyleElements:(id)arg1 toCell:(EDCellHeader*)arg2 row:(int)arg3 column:(int)arg4 ;
-(void)applyDifferentialStyle:(id)arg1 borderFlags:(int)arg2 precedence:(unsigned long long)arg3 toCell:(EDCellHeader*)arg4 row:(int)arg5 column:(int)arg6 ;
-(id)copyFlattenBorders:(id)arg1 differentialBorders:(id)arg2 borderFlags:(int)arg3 precedence:(unsigned long long)arg4 row:(int)arg5 column:(int)arg6 ;
-(unsigned long long)flattenFillIndex:(unsigned long long)arg1 differentialFill:(id)arg2 ;
-(id)copyFlattenFont:(id)arg1 differentialFont:(id)arg2 ;
-(id)copyFlattenBorder:(int)arg1 borders:(id)arg2 differentialBorders:(id)arg3 flag:(BOOL)arg4 precedence:(unsigned long long)arg5 row:(int)arg6 column:(int)arg7 ;
-(id)wrapDifferentialStyleInATableStyleElement:(id)arg1 type:(int)arg2 ;
@end

