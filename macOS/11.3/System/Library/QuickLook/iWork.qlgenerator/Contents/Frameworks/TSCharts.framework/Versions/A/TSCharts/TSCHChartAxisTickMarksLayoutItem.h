/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartLayoutItem.h>

@interface TSCHChartAxisTickMarksLayoutItem : TSCHChartLayoutItem

@property (nonatomic,readonly) float majorTickmarkLength; 
@property (nonatomic,readonly) float minorTickmarkLength; 
-(int)location;
-(id)initWithParent:(id)arg1 ;
-(CGRect)calcDrawingRect;
-(CGAffineTransform)transformForRenderingOutElementSize:(CGSize*)arg1 outClipRect:(CGRect*)arg2 ;
-(float)majorTickmarkLength;
-(float)minorTickmarkLength;
-(CGSize)calcMinSize;
-(CGRect)p_effectiveRootedLayoutRect;
@end

