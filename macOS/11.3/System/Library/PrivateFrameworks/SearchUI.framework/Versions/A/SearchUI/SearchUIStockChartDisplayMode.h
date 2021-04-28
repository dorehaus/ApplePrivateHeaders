/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSColor;

@interface SearchUIStockChartDisplayMode : NSObject <NSCopying> {

	NSString* _hash;
	char _showsVolume;
	char _HUDEnabled;
	char _showsPriceLabelForPreviousClose;
	char _usesDetailedAxisLabels;
	char _graphOverlapsYAxisLabels;
	long long _maxInterval;
	double _showsTitle;
	unsigned long long _yAxisLabelCount;
	unsigned long long _horizontalGridlineCount;
	double _volumeHeight;
	double _intervalRowHeight;
	double _lineWidth;
	NSColor* _lineColor;
	NSColor* _backgroundLinesColor;
	NSColor* _xAxisKeylineColor;
	NSColor* _axisLabelsColor;
	CGSize _chartSize;
	NSEdgeInsets _lineGraphInsets;

}

@property (assign,nonatomic) CGSize chartSize;                                        //@synthesize chartSize=_chartSize - In the implementation block
@property (assign,nonatomic) char showsVolume;                                        //@synthesize showsVolume=_showsVolume - In the implementation block
@property (assign,nonatomic) long long maxInterval;                                   //@synthesize maxInterval=_maxInterval - In the implementation block
@property (assign,nonatomic) char HUDEnabled;                                         //@synthesize HUDEnabled=_HUDEnabled - In the implementation block
@property (assign,nonatomic) double showsTitle;                                       //@synthesize showsTitle=_showsTitle - In the implementation block
@property (assign,nonatomic) unsigned long long yAxisLabelCount;                      //@synthesize yAxisLabelCount=_yAxisLabelCount - In the implementation block
@property (assign,nonatomic) unsigned long long horizontalGridlineCount;              //@synthesize horizontalGridlineCount=_horizontalGridlineCount - In the implementation block
@property (assign,nonatomic) char showsPriceLabelForPreviousClose;                    //@synthesize showsPriceLabelForPreviousClose=_showsPriceLabelForPreviousClose - In the implementation block
@property (assign,nonatomic) char usesDetailedAxisLabels;                             //@synthesize usesDetailedAxisLabels=_usesDetailedAxisLabels - In the implementation block
@property (assign,nonatomic) NSEdgeInsets lineGraphInsets;                            //@synthesize lineGraphInsets=_lineGraphInsets - In the implementation block
@property (assign,nonatomic) char graphOverlapsYAxisLabels;                           //@synthesize graphOverlapsYAxisLabels=_graphOverlapsYAxisLabels - In the implementation block
@property (assign,nonatomic) double volumeHeight;                                     //@synthesize volumeHeight=_volumeHeight - In the implementation block
@property (assign,nonatomic) double intervalRowHeight;                                //@synthesize intervalRowHeight=_intervalRowHeight - In the implementation block
@property (nonatomic,readonly) double gutterHeight; 
@property (nonatomic,readonly) double lineGraphBottomPadding; 
@property (assign,nonatomic) double lineWidth;                                        //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) NSColor * lineColor;                                     //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) NSColor * backgroundLinesColor;                          //@synthesize backgroundLinesColor=_backgroundLinesColor - In the implementation block
@property (nonatomic,retain) NSColor * xAxisKeylineColor;                             //@synthesize xAxisKeylineColor=_xAxisKeylineColor - In the implementation block
@property (nonatomic,retain) NSColor * axisLabelsColor;                               //@synthesize axisLabelsColor=_axisLabelsColor - In the implementation block
@property (nonatomic,readonly) CGGradientRef backgroundGradient; 
+(id)defaultDisplayMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(NSColor *)lineColor;
-(void)setLineColor:(NSColor *)arg1 ;
-(double)volumeHeight;
-(void)setShowsTitle:(double)arg1 ;
-(double)showsTitle;
-(CGGradientRef)backgroundGradient;
-(void)setShowsVolume:(char)arg1 ;
-(void)setVolumeHeight:(double)arg1 ;
-(void)setShowsPriceLabelForPreviousClose:(char)arg1 ;
-(double)lineGraphBottomPadding;
-(NSColor *)axisLabelsColor;
-(char)showsVolume;
-(double)gutterHeight;
-(NSColor *)backgroundLinesColor;
-(void)setBackgroundLinesColor:(NSColor *)arg1 ;
-(void)setXAxisKeylineColor:(NSColor *)arg1 ;
-(void)setAxisLabelsColor:(NSColor *)arg1 ;
-(void)setYAxisLabelCount:(unsigned long long)arg1 ;
-(void)setMaxInterval:(long long)arg1 ;
-(void)setIntervalRowHeight:(double)arg1 ;
-(CGSize)chartSize;
-(void)setChartSize:(CGSize)arg1 ;
-(long long)maxInterval;
-(char)HUDEnabled;
-(void)setHUDEnabled:(char)arg1 ;
-(unsigned long long)yAxisLabelCount;
-(unsigned long long)horizontalGridlineCount;
-(void)setHorizontalGridlineCount:(unsigned long long)arg1 ;
-(char)showsPriceLabelForPreviousClose;
-(char)usesDetailedAxisLabels;
-(void)setUsesDetailedAxisLabels:(char)arg1 ;
-(NSEdgeInsets)lineGraphInsets;
-(void)setLineGraphInsets:(NSEdgeInsets)arg1 ;
-(char)graphOverlapsYAxisLabels;
-(void)setGraphOverlapsYAxisLabels:(char)arg1 ;
-(double)intervalRowHeight;
-(NSColor *)xAxisKeylineColor;
@end

