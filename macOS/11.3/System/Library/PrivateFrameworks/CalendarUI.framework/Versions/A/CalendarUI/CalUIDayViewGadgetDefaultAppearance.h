/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalUIDayViewGadgetAppearanceDelegate.h>

@class NSFont, NSColor, NSString, NSDate;

@interface CalUIDayViewGadgetDefaultAppearance : NSObject <CalUIDayViewGadgetAppearanceDelegate> {

	NSColor* _nowColor;
	NSColor* _hourLineColor;
	NSFont* _timelineFont;
	NSFont* _locationFont;
	NSFont* _titleFont;

}

@property (nonatomic,retain) NSFont * timelineFont;                                         //@synthesize timelineFont=_timelineFont - In the implementation block
@property (nonatomic,retain) NSFont * locationFont;                                         //@synthesize locationFont=_locationFont - In the implementation block
@property (nonatomic,retain) NSFont * titleFont;                                            //@synthesize titleFont=_titleFont - In the implementation block
@property (readonly) double heightBeforeFirstEvent; 
@property (readonly) double heightAfterLastEvent; 
@property (readonly) char shouldDisplayTimeline; 
@property (readonly) double timelineWidth; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_fontWithFontSize:(double)arg1 bold:(char)arg2 ;
-(id)init;
-(id)dateFormat;
-(NSFont *)titleFont;
-(void)setTitleFont:(NSFont *)arg1 ;
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
-(id)fontForEventOccurrencesWithWeight:(int)arg1 ;
-(char)shouldShowTime;
-(NSFont *)locationFont;
-(char)shouldDisplayTimeline;
-(double)numberOfSecondsBeforeFirstEvent;
-(double)numberOfSecondsAfterLastEvent;
-(double)hourLabelTopMargin;
-(double)hourLabelWidth;
-(id)nowLabelFormat;
-(void)setTimelineFont:(NSFont *)arg1 ;
-(void)setLocationFont:(NSFont *)arg1 ;
@end

