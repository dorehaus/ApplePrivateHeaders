/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSFont, NSColor, NSString, NSDate;


@protocol CalUIDayViewGadgetAppearanceDelegate <NSObject>
@property (readonly) double heightBeforeFirstEvent; 
@property (readonly) double heightAfterLastEvent; 
@property (readonly) char shouldDisplayTimeline; 
@property (readonly) double timelineWidth; 
@property (nonatomic,readonly) NSFont * timelineFont; 
@property (nonatomic,readonly) unsigned long long numberOfEmptyHoursDisplayed; 
@property (readonly) double hourHeight; 
@property (readonly) double hourLineOutdent; 
@property (readonly) double verticalOffset; 
@property (readonly) double horizontalOffset; 
@property (readonly) double hourLabelOutdent; 
@property (readonly) NSColor * hourLineColor; 
@property (readonly) NSColor * nowLineColor; 
@property (readonly) double nowLineHeight; 
@property (readonly) double nowCircleRadius; 
@property (readonly) NSString * truncatedNowLabelFormat; 
@property (readonly) long long displayType; 
@property (readonly) NSDate * displayStart; 
@property (readonly) NSDate * displayEnd; 
@property (readonly) char isHourHeightFixed; 
@property (readonly) char shouldDrawAllDaySeparator; 
@property (readonly) double allDaySeparatorHeight; 
@property (readonly) NSColor * allDaySeparatorColor; 
@property (readonly) char shouldAlwaysDrawAllDayArea; 
@property (readonly) char shouldDisplayCurrentTime; 
@property (readonly) char shouldDisplayPreviewEventsAsTentative; 
@property (readonly) char shouldAllDayEventsShowColorBar; 
@optional
-(long long)displayType;
-(NSDate *)displayEnd;
-(NSDate *)displayStart;
-(char)shouldDrawAllDaySeparator;
-(double)allDaySeparatorHeight;
-(NSColor *)allDaySeparatorColor;
-(char)shouldAlwaysDrawAllDayArea;
-(char)isHourHeightFixed;
-(char)shouldDisplayCurrentTime;
-(char)shouldDisplayPreviewEventsAsTentative;
-(char)shouldAllDayEventsShowColorBar;
-(double)allDayEventHeight;
-(double)allDayInsetBetweenEvents;
-(double)allDayTopInset;
-(double)allDayBottomInset;

@required
-(id)titleFont;
-(long long)backgroundStyle;
-(double)verticalOffset;
-(double)heightBeforeFirstEvent;
-(double)heightAfterLastEvent;
-(double)hourHeight;
-(double)timelineWidth;
-(double)nowLineHeight;
-(double)horizontalOffset;
-(NSColor *)hourLineColor;
-(NSFont *)timelineFont;
-(NSColor *)nowLineColor;
-(double)nowCircleRadius;
-(double)hourLineOutdent;
-(NSString *)truncatedNowLabelFormat;
-(unsigned long long)numberOfEmptyHoursDisplayed;
-(double)hourLabelOutdent;
-(id)fontForEventOccurrencesWithWeight:(int)arg1;
-(char)shouldShowTime;
-(id)locationFont;
-(char)shouldDisplayTimeline;

@end

