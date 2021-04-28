/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartAxisRenderer.h>

@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer {

	unsigned long long _editingLabelIndex;

}
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(id)valueAxisLayoutItem;
-(id)labelsLayoutItem;
@end

