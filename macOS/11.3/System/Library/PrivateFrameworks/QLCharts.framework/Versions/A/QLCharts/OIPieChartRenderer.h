/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QLCharts.framework/Versions/A/QLCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OIPieSliceRenderer;
#import <QLCharts/QLCharts-Structs.h>
@interface OIPieChartRenderer : NSObject {

	id<OIPieSliceRenderer> _sliceRenderer;
	OIChartRef _chart;

}

@property (retain) id<OIPieSliceRenderer> sliceRenderer;              //@synthesize sliceRenderer=_sliceRenderer - In the implementation block
@property (assign) OIChartRef chart;                                  //@synthesize chart=_chart - In the implementation block
-(void)dealloc;
-(void)setChart:(OIChartRef)arg1 ;
-(OIChartRef)chart;
-(id)initWithChart:(OIChartRef)arg1 ;
-(void)renderThreeDimensional:(char)arg1 pieFromSeriesArray:(CFArrayRef)arg2 ;
-(void)setSliceRenderer:(id<OIPieSliceRenderer>)arg1 ;
-(id)initWithChart:(OIChartRef)arg1 sliceRenderer:(id)arg2 ;
-(id<OIPieSliceRenderer>)sliceRenderer;
@end

