/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartLabelsContainingSceneObject.h>

@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject
+(void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3 ;
+(CGSize)p_labelWrapSizeForScene:(id)arg1 returningSizeValue:(id*)arg2 ;
+(CGSize)labelWrapSizeForScene:(id)arg1 ;
+(char)setLabelWrapBounds:(const box<glm::detail::tvec2<float>>*)arg1 forScene:(id)arg2 ;
+(id)partWithChartInfo:(id)arg1 ;
-(void)renderLabels:(id)arg1 ;
-(void)renderAnnotatedLabels:(id)arg1 ;
-(id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2 ;
-(char)isAnnotated;
-(void)p_renderLabel:(id)arg1 ;
@end
