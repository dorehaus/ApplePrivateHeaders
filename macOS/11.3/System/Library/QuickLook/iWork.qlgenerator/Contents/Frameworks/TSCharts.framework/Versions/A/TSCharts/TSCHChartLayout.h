/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCHChartInfo, TSCHChartModel;

@interface TSCHChartLayout : NSObject {

	char _needsLayout;
	TSCHChartInfo* _chartInfo;
	SCD_Struct_TS50 _layoutSettings;
	CGRect _legendModelGeometryFrame;

}

@property (assign,nonatomic) char needsLayout;                       //@synthesize needsLayout=_needsLayout - In the implementation block
@property (nonatomic,retain) TSCHChartInfo * chartInfo;              //@synthesize chartInfo=_chartInfo - In the implementation block
@property (readonly) TSCHChartModel * model; 
@property (readonly) CGRect outerLayoutFrame; 
@property (readonly) CGRect outerShadowFrame; 
@property (readonly) CGRect chartAreaFrame; 
@property (readonly) CGRect legendFrame; 
@property (readonly) CGRect legendDrawingFrame; 
@property (assign) CGRect legendGeometryFrame; 
@property (assign) CGRect legendModelGeometryFrame;                  //@synthesize legendModelGeometryFrame=_legendModelGeometryFrame - In the implementation block
@property (readonly) CGRect chartBodyFrame; 
@property (readonly) CGRect titleFrame; 
@property (assign) unsigned long long dataSetIndex; 
@property (assign) SCD_Struct_TS50 layoutSettings;                   //@synthesize layoutSettings=_layoutSettings - In the implementation block
+(id)chartLayoutWithChartInfo:(id)arg1 ;
+(id)propertiesThatInvalidateLayout;
+(CGSize)legendSizeForChartInfo:(id)arg1 initialWidth:(double)arg2 ;
-(void)invalidate;
-(char)isValid;
-(void)setNeedsLayout:(char)arg1 ;
-(char)needsLayout;
-(TSCHChartModel *)model;
-(CGRect)titleFrame;
-(void)processChanges:(id)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)beginResize;
-(id)initWithChartInfo:(id)arg1 ;
-(TSCHChartInfo *)chartInfo;
-(void)setLayoutSettings:(SCD_Struct_TS50)arg1 ;
-(void)setDataSetIndex:(unsigned long long)arg1 ;
-(SCD_Struct_TS50)layoutSettings;
-(void)layoutForChartBodySize:(CGSize)arg1 ;
-(CGRect)chartBodyFrame;
-(CGRect)legendFrame;
-(void)setLegendSize:(CGSize)arg1 ;
-(CGRect)chartAreaFrame;
-(void)layoutForChartAreaSize:(CGSize)arg1 ;
-(CGRect)boundsForResize;
-(void)layoutForResizingSize:(CGSize)arg1 ;
-(void)setForceOmitLegend:(char)arg1 ;
-(void)setForceOmitLabelPlacement:(char)arg1 ;
-(CGRect)outerLayoutFrame;
-(void)layoutForCircumscribingSize:(CGSize)arg1 ;
-(void)setChartInfo:(TSCHChartInfo *)arg1 ;
-(void)setForceTitleAtTop:(char)arg1 ;
-(id)renderersWithRep:(id)arg1 ;
-(CGRect)outerShadowFrame;
-(CGRect)convertChartLayoutSpaceRectToNaturalSpaceRect:(CGRect)arg1 ;
-(unsigned long long)dataSetIndex;
-(CGRect)legendModelGeometryFrame;
-(CGPoint)convertChartLayoutSpaceToNaturalSpace:(CGPoint)arg1 ;
-(CGRect)convertNaturalSpaceRectToChartLayoutSpaceRect:(CGRect)arg1 ;
-(void)setLegendModelGeometryFrame:(CGRect)arg1 ;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(const CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)legendDrawingFrame;
-(void)invalidateCachedOriginRelativeToChartAreaFrame;
-(CGRect)legendGeometryFrame;
-(void)setLegendGeometryFrame:(CGRect)arg1 ;
-(char)layoutFrameShouldEncloseInfoGeometry;
-(CGPoint)convertNaturalSpaceToChartLayoutSpace:(CGPoint)arg1 ;
-(void)takeSizeFromTracker:(id)arg1 ;
-(void)endResize;
-(CGAffineTransform)transformToConvertChartLayoutToNatural;
@end

