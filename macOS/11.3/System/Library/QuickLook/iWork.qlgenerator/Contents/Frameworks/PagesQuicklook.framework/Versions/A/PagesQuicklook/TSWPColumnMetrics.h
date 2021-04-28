/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSWPPadding;


@protocol TSWPColumnMetrics
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) char alwaysStartsNewTarget; 
@property (nonatomic,readonly) char shrinkTextToFit; 
@property (nonatomic,readonly) char columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
@optional
-(double)textScaleFactor;
-(id)layoutMarginsForTarget:(id)arg1;

@required
-(unsigned long long)columnCount;
-(TSWPPadding *)layoutMargins;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
-(char)alwaysStartsNewTarget;
-(char)shrinkTextToFit;
-(char)columnsAreLeftToRight;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
-(CGSize*)adjustedInsetsForTarget:(id)arg1;

@end

