/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartStackedColumnSceneObject.h>

@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject
+(char)isStacked;
+(char)isHorizontalChart;
+(id)chartSeriesType;
+(id)partWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS0)arg2 ;
-(void)updateLightingEffectsState:(id)arg1 scene:(id)arg2 ;
-(tvec2<float>)labelObjectSpacePosition:(unsigned)arg1 axisValue:(double)arg2 intercept:(double)arg3 ;
@end

