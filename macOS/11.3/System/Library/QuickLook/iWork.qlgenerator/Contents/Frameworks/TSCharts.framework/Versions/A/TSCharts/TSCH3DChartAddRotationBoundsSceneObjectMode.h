/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartAddBoundsSceneObjectMode.h>

@interface TSCH3DChartAddRotationBoundsSceneObjectMode : TSCH3DChartAddBoundsSceneObjectMode {

	int _rotationType;

}

@property (assign,nonatomic) int rotationType;              //@synthesize rotationType=_rotationType - In the implementation block
-(void)getBounds:(id)arg1 ;
-(double)p_radiusFromBounds:(const box<glm::detail::tvec3<float>>*)arg1 pivot:(const tvec3<float>*)arg2 ;
-(void)p_submitGeometryForChartBounds:(const box<glm::detail::tvec3<float>>*)arg1 pivot:(const tvec3<float>*)arg2 thicknessIndex:(unsigned long long)arg3 pipeline:(id)arg4 ;
-(int)rotationType;
-(void)setRotationType:(int)arg1 ;
@end

