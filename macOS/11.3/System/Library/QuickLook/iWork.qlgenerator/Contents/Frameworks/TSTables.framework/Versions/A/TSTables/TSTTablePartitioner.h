/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSDPartitioner.h>

@class TSTTableInfo, TSDInfoGeometry, TSTLayout, TSUPointerKeyDictionary, NSMutableDictionary;

@interface TSTTablePartitioner : NSObject <TSDPartitioner> {

	TSTTableInfo* mTableInfo;
	TSDInfoGeometry* mInfoGeometry;
	char mTableIsLTR;
	char mLayoutIsLTR;
	double mFirstPartitionWidth;
	CGSize mScaleToFit;
	TSTLayout* mScaledLayout;
	TSUPointerKeyDictionary* mHintMatricesByCanvas;
	NSMutableDictionary* mPartitioningPassCache;

}

@property (nonatomic,readonly) TSTLayout * scaledLayout; 
@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) double inlineTableWidth; 
@property (assign,nonatomic) CGSize scaleToFit; 
@property (nonatomic,readonly) char scaleIsValid; 
@property (nonatomic,copy) TSDInfoGeometry * infoGeometry; 
@property (nonatomic,readonly) CGRect totalPartitionFrame; 
-(void)dealloc;
-(id)initWithInfo:(id)arg1 ;
-(CGSize)scaleToFit;
-(TSDInfoGeometry *)infoGeometry;
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(char)arg4 outFinished:(out char*)arg5 ;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2 ;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(char)arg4 outFinished:(out char*)arg5 ;
-(id)hintForLayout:(id)arg1 ;
-(TSTTableInfo *)tableInfo;
-(char)scaleIsValid;
-(TSTLayout *)scaledLayout;
-(void)setScaleToFit:(CGSize)arg1 ;
-(void)setInfoGeometry:(TSDInfoGeometry *)arg1 ;
-(void)validateScaledLayout;
-(char)p_didFinishPartitioningHint:(id)arg1 horizontally:(char)arg2 ;
-(TSUCellRect)measureCellRangeForNextPartitionOfSize:(CGSize)arg1 previousHint:(id)arg2 horizontally:(char)arg3 ;
-(id)partitioningPassForHint:(id)arg1 withPreviousHint:(id)arg2 ;
-(id)hintCacheKeyForHint:(id)arg1 ;
-(char)shouldReuseLayout:(id)arg1 forSize:(CGSize)arg2 parentLayout:(id)arg3 hint:(id)arg4 ;
-(void)p_flushCacheAfterPartitioningFinished:(id)arg1 lastHint:(id)arg2 horizontally:(char)arg3 ;
-(id)partitioningPassForFirstPartitionSize:(CGSize)arg1 ;
-(id)hintCacheKeyForPartitioningPass:(id)arg1 andHintID:(TSUCellCoord)arg2 ;
-(double)inlineTableWidth;
-(void)setLayoutPartititionsRightToLeft:(char)arg1 contentPartitionsRightToLeft:(char)arg2 ;
-(CGRect)totalPartitionFrame;
-(char)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(char)arg3 ;
-(TSUCellRect)calculateCellRangeForNextPartition:(unsigned short)arg1 nextPartitionRange:(TSUCellRect)arg2 additionalHeightForCaption:(double)arg3 availableSizeRemaining:(CGSize)arg4 previousHint:(id)arg5 ;
@end

