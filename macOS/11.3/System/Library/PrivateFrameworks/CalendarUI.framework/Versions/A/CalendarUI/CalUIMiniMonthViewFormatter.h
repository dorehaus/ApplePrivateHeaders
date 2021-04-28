/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarUI/CalendarUI-Structs.h>
@class NSFont, NSColor, NSImage;

@interface CalUIMiniMonthViewFormatter : NSObject {

	char _showsNeighboringDays;
	char _showsNavigation;
	char _showsMonthName;
	char _showsWeekdayNames;
	char _showsActiveDateHighlighted;
	char _showsTodayHighlighted;
	char _showsTodayBackground;
	char _showsWeekendBackground;
	char _showsWeekNumbers;
	char _dayBackgroundSizeIsStatic;
	char _useExtraShortWeekdaySymbols;
	char _drawWeekdayNameSeparator;
	char _drawWeekNumbersSeparator;
	char _dayBackgroundHasRoundedCorners;
	char _dayBackgroundIsCircle;
	NSFont* _monthNameFont;
	NSColor* _monthNameColor;
	double _monthNameHeight;
	long long _monthNameTextAlignment;
	NSFont* _todayHighlightFont;
	NSColor* _todayHighlightColor;
	NSColor* _todayBackgroundColor;
	NSFont* _activeDateHighlightFont;
	NSColor* _activeDateHighlightColor;
	NSColor* _activeDateBackgroundColor;
	NSColor* _todayAndActiveHighlightColor;
	NSColor* _todayAndActiveBackgroundColor;
	NSColor* _weekendBackgroundColor;
	NSFont* _weekdayTextFont;
	NSColor* _weekdayTextColor;
	double _weekdayHeight;
	long long _weekdayTextAlignment;
	NSColor* _weekdayNameSeparatorColor;
	double _heightBetweenWeekdaysAndDayNumbers;
	double _heightBetweenMonthAndDayNumbers;
	NSFont* _dayNumberTextFont;
	NSColor* _dayNumberTextColor;
	long long _dayNumberTextAlignment;
	NSFont* _previousAndNextMonthDayNumberFont;
	NSColor* _previousAndNextMonthDayNumberColor;
	NSColor* _weekendDayNumberColor;
	NSImage* _previousMonthNavigationImage;
	NSImage* _previousMonthNavigationAlternateImage;
	double _previousMonthNavigationXOffset;
	double _previousMonthNavigationYOffset;
	double _previousMonthNavigationBorder;
	NSImage* _nextMonthNavigationImage;
	NSImage* _nextMonthNavigationAlternateImage;
	double _nextMonthNavigationXOffset;
	double _nextMonthNavigationYOffset;
	double _nextMonthNavigationBorder;
	double _leftInteriorPadding;
	double _rightInteriorPadding;
	double _weekNumbersWidth;
	double _weekNumbersHeight;
	NSFont* _weekNumbersFont;
	NSColor* _weekNumbersColor;
	long long _weekNumbersHorizontalAlignment;
	double _weekNumbersXOffset;
	double _weekNumbersYOffset;
	NSColor* _weekNumberSeparatorColor;
	double _weekNumberSeparatorTopInset;
	double _weekNumberSeparatorBottomInset;
	NSColor* _dayNumberBackgroundHoverColor;
	double _dayNumberBackgroundXOffset;
	double _dayNumberBackgroundYOffset;
	long long _minimumNumberOfRows;
	CGSize _dayBackgroundRectSize;
	CGSize _dayCellSpacing;

}

@property (assign) char showsNeighboringDays;                                    //@synthesize showsNeighboringDays=_showsNeighboringDays - In the implementation block
@property (assign) char showsNavigation;                                         //@synthesize showsNavigation=_showsNavigation - In the implementation block
@property (assign) char showsMonthName;                                          //@synthesize showsMonthName=_showsMonthName - In the implementation block
@property (assign) char showsWeekdayNames;                                       //@synthesize showsWeekdayNames=_showsWeekdayNames - In the implementation block
@property (assign) char showsActiveDateHighlighted;                              //@synthesize showsActiveDateHighlighted=_showsActiveDateHighlighted - In the implementation block
@property (assign) char showsTodayHighlighted;                                   //@synthesize showsTodayHighlighted=_showsTodayHighlighted - In the implementation block
@property (assign) char showsTodayBackground;                                    //@synthesize showsTodayBackground=_showsTodayBackground - In the implementation block
@property (assign) char showsWeekendBackground;                                  //@synthesize showsWeekendBackground=_showsWeekendBackground - In the implementation block
@property (assign) char showsWeekNumbers;                                        //@synthesize showsWeekNumbers=_showsWeekNumbers - In the implementation block
@property (assign) char dayBackgroundSizeIsStatic;                               //@synthesize dayBackgroundSizeIsStatic=_dayBackgroundSizeIsStatic - In the implementation block
@property (retain) NSFont * monthNameFont;                                       //@synthesize monthNameFont=_monthNameFont - In the implementation block
@property (retain) NSColor * monthNameColor;                                     //@synthesize monthNameColor=_monthNameColor - In the implementation block
@property (assign) double monthNameHeight;                                       //@synthesize monthNameHeight=_monthNameHeight - In the implementation block
@property (assign) long long monthNameTextAlignment;                             //@synthesize monthNameTextAlignment=_monthNameTextAlignment - In the implementation block
@property (retain) NSFont * todayHighlightFont;                                  //@synthesize todayHighlightFont=_todayHighlightFont - In the implementation block
@property (retain) NSColor * todayHighlightColor;                                //@synthesize todayHighlightColor=_todayHighlightColor - In the implementation block
@property (retain) NSColor * todayBackgroundColor;                               //@synthesize todayBackgroundColor=_todayBackgroundColor - In the implementation block
@property (retain) NSFont * activeDateHighlightFont;                             //@synthesize activeDateHighlightFont=_activeDateHighlightFont - In the implementation block
@property (retain) NSColor * activeDateHighlightColor;                           //@synthesize activeDateHighlightColor=_activeDateHighlightColor - In the implementation block
@property (retain) NSColor * activeDateBackgroundColor;                          //@synthesize activeDateBackgroundColor=_activeDateBackgroundColor - In the implementation block
@property (retain) NSColor * todayAndActiveHighlightColor;                       //@synthesize todayAndActiveHighlightColor=_todayAndActiveHighlightColor - In the implementation block
@property (retain) NSColor * todayAndActiveBackgroundColor;                      //@synthesize todayAndActiveBackgroundColor=_todayAndActiveBackgroundColor - In the implementation block
@property (retain) NSColor * weekendBackgroundColor;                             //@synthesize weekendBackgroundColor=_weekendBackgroundColor - In the implementation block
@property (retain) NSFont * weekdayTextFont;                                     //@synthesize weekdayTextFont=_weekdayTextFont - In the implementation block
@property (retain) NSColor * weekdayTextColor;                                   //@synthesize weekdayTextColor=_weekdayTextColor - In the implementation block
@property (assign) double weekdayHeight;                                         //@synthesize weekdayHeight=_weekdayHeight - In the implementation block
@property (assign) long long weekdayTextAlignment;                               //@synthesize weekdayTextAlignment=_weekdayTextAlignment - In the implementation block
@property (assign) char useExtraShortWeekdaySymbols;                             //@synthesize useExtraShortWeekdaySymbols=_useExtraShortWeekdaySymbols - In the implementation block
@property (assign) char drawWeekdayNameSeparator;                                //@synthesize drawWeekdayNameSeparator=_drawWeekdayNameSeparator - In the implementation block
@property (retain) NSColor * weekdayNameSeparatorColor;                          //@synthesize weekdayNameSeparatorColor=_weekdayNameSeparatorColor - In the implementation block
@property (assign) double heightBetweenWeekdaysAndDayNumbers;                    //@synthesize heightBetweenWeekdaysAndDayNumbers=_heightBetweenWeekdaysAndDayNumbers - In the implementation block
@property (assign) double heightBetweenMonthAndDayNumbers;                       //@synthesize heightBetweenMonthAndDayNumbers=_heightBetweenMonthAndDayNumbers - In the implementation block
@property (retain) NSFont * dayNumberTextFont;                                   //@synthesize dayNumberTextFont=_dayNumberTextFont - In the implementation block
@property (retain) NSColor * dayNumberTextColor;                                 //@synthesize dayNumberTextColor=_dayNumberTextColor - In the implementation block
@property (assign) long long dayNumberTextAlignment;                             //@synthesize dayNumberTextAlignment=_dayNumberTextAlignment - In the implementation block
@property (retain) NSFont * previousAndNextMonthDayNumberFont;                   //@synthesize previousAndNextMonthDayNumberFont=_previousAndNextMonthDayNumberFont - In the implementation block
@property (retain) NSColor * previousAndNextMonthDayNumberColor;                 //@synthesize previousAndNextMonthDayNumberColor=_previousAndNextMonthDayNumberColor - In the implementation block
@property (retain) NSColor * weekendDayNumberColor;                              //@synthesize weekendDayNumberColor=_weekendDayNumberColor - In the implementation block
@property (retain) NSImage * previousMonthNavigationImage;                       //@synthesize previousMonthNavigationImage=_previousMonthNavigationImage - In the implementation block
@property (retain) NSImage * previousMonthNavigationAlternateImage;              //@synthesize previousMonthNavigationAlternateImage=_previousMonthNavigationAlternateImage - In the implementation block
@property (assign) double previousMonthNavigationXOffset;                        //@synthesize previousMonthNavigationXOffset=_previousMonthNavigationXOffset - In the implementation block
@property (assign) double previousMonthNavigationYOffset;                        //@synthesize previousMonthNavigationYOffset=_previousMonthNavigationYOffset - In the implementation block
@property (assign) double previousMonthNavigationBorder;                         //@synthesize previousMonthNavigationBorder=_previousMonthNavigationBorder - In the implementation block
@property (retain) NSImage * nextMonthNavigationImage;                           //@synthesize nextMonthNavigationImage=_nextMonthNavigationImage - In the implementation block
@property (retain) NSImage * nextMonthNavigationAlternateImage;                  //@synthesize nextMonthNavigationAlternateImage=_nextMonthNavigationAlternateImage - In the implementation block
@property (assign) double nextMonthNavigationXOffset;                            //@synthesize nextMonthNavigationXOffset=_nextMonthNavigationXOffset - In the implementation block
@property (assign) double nextMonthNavigationYOffset;                            //@synthesize nextMonthNavigationYOffset=_nextMonthNavigationYOffset - In the implementation block
@property (assign) double nextMonthNavigationBorder;                             //@synthesize nextMonthNavigationBorder=_nextMonthNavigationBorder - In the implementation block
@property (assign) double leftInteriorPadding;                                   //@synthesize leftInteriorPadding=_leftInteriorPadding - In the implementation block
@property (assign) double rightInteriorPadding;                                  //@synthesize rightInteriorPadding=_rightInteriorPadding - In the implementation block
@property (assign) double weekNumbersWidth;                                      //@synthesize weekNumbersWidth=_weekNumbersWidth - In the implementation block
@property (assign) double weekNumbersHeight;                                     //@synthesize weekNumbersHeight=_weekNumbersHeight - In the implementation block
@property (retain) NSFont * weekNumbersFont;                                     //@synthesize weekNumbersFont=_weekNumbersFont - In the implementation block
@property (retain) NSColor * weekNumbersColor;                                   //@synthesize weekNumbersColor=_weekNumbersColor - In the implementation block
@property (assign) long long weekNumbersHorizontalAlignment;                     //@synthesize weekNumbersHorizontalAlignment=_weekNumbersHorizontalAlignment - In the implementation block
@property (assign) double weekNumbersXOffset;                                    //@synthesize weekNumbersXOffset=_weekNumbersXOffset - In the implementation block
@property (assign) double weekNumbersYOffset;                                    //@synthesize weekNumbersYOffset=_weekNumbersYOffset - In the implementation block
@property (assign) char drawWeekNumbersSeparator;                                //@synthesize drawWeekNumbersSeparator=_drawWeekNumbersSeparator - In the implementation block
@property (retain) NSColor * weekNumberSeparatorColor;                           //@synthesize weekNumberSeparatorColor=_weekNumberSeparatorColor - In the implementation block
@property (assign) double weekNumberSeparatorTopInset;                           //@synthesize weekNumberSeparatorTopInset=_weekNumberSeparatorTopInset - In the implementation block
@property (assign) double weekNumberSeparatorBottomInset;                        //@synthesize weekNumberSeparatorBottomInset=_weekNumberSeparatorBottomInset - In the implementation block
@property (retain) NSColor * dayNumberBackgroundHoverColor;                      //@synthesize dayNumberBackgroundHoverColor=_dayNumberBackgroundHoverColor - In the implementation block
@property (assign) double dayNumberBackgroundXOffset;                            //@synthesize dayNumberBackgroundXOffset=_dayNumberBackgroundXOffset - In the implementation block
@property (assign) double dayNumberBackgroundYOffset;                            //@synthesize dayNumberBackgroundYOffset=_dayNumberBackgroundYOffset - In the implementation block
@property (assign) char dayBackgroundHasRoundedCorners;                          //@synthesize dayBackgroundHasRoundedCorners=_dayBackgroundHasRoundedCorners - In the implementation block
@property (assign) char dayBackgroundIsCircle;                                   //@synthesize dayBackgroundIsCircle=_dayBackgroundIsCircle - In the implementation block
@property (assign) CGSize dayBackgroundRectSize;                                 //@synthesize dayBackgroundRectSize=_dayBackgroundRectSize - In the implementation block
@property (assign) CGSize dayCellSpacing;                                        //@synthesize dayCellSpacing=_dayCellSpacing - In the implementation block
@property (assign) long long minimumNumberOfRows;                                //@synthesize minimumNumberOfRows=_minimumNumberOfRows - In the implementation block
+(id)formatter;
+(id)fontWithFontSize:(double)arg1 bold:(char)arg2 ;
+(id)colorWithsRGBRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3 ;
-(id)init;
-(void)setShowsNeighboringDays:(char)arg1 ;
-(void)setShowsNavigation:(char)arg1 ;
-(void)setShowsMonthName:(char)arg1 ;
-(void)setShowsWeekdayNames:(char)arg1 ;
-(void)setShowsActiveDateHighlighted:(char)arg1 ;
-(void)setShowsTodayHighlighted:(char)arg1 ;
-(void)setShowsTodayBackground:(char)arg1 ;
-(void)setShowsWeekNumbers:(char)arg1 ;
-(void)setShowsWeekendBackground:(char)arg1 ;
-(void)setMonthNameFont:(NSFont *)arg1 ;
-(void)setMonthNameColor:(NSColor *)arg1 ;
-(void)setMonthNameHeight:(double)arg1 ;
-(void)setMonthNameTextAlignment:(long long)arg1 ;
-(void)setTodayHighlightFont:(NSFont *)arg1 ;
-(void)setTodayHighlightColor:(NSColor *)arg1 ;
-(void)setTodayBackgroundColor:(NSColor *)arg1 ;
-(void)setActiveDateHighlightFont:(NSFont *)arg1 ;
-(void)setActiveDateHighlightColor:(NSColor *)arg1 ;
-(void)setActiveDateBackgroundColor:(NSColor *)arg1 ;
-(void)setTodayAndActiveHighlightColor:(NSColor *)arg1 ;
-(void)setWeekendBackgroundColor:(NSColor *)arg1 ;
-(void)setWeekdayTextFont:(NSFont *)arg1 ;
-(void)setWeekdayTextColor:(NSColor *)arg1 ;
-(void)setWeekdayHeight:(double)arg1 ;
-(void)setWeekdayTextAlignment:(long long)arg1 ;
-(void)setUseExtraShortWeekdaySymbols:(char)arg1 ;
-(void)setDrawWeekdayNameSeparator:(char)arg1 ;
-(void)setWeekdayNameSeparatorColor:(NSColor *)arg1 ;
-(void)setHeightBetweenWeekdaysAndDayNumbers:(double)arg1 ;
-(void)setDayNumberTextFont:(NSFont *)arg1 ;
-(void)setDayNumberTextColor:(NSColor *)arg1 ;
-(void)setDayNumberTextAlignment:(long long)arg1 ;
-(void)setPreviousAndNextMonthDayNumberFont:(NSFont *)arg1 ;
-(void)setPreviousAndNextMonthDayNumberColor:(NSColor *)arg1 ;
-(NSColor *)dayNumberTextColor;
-(void)setWeekendDayNumberColor:(NSColor *)arg1 ;
-(void)setPreviousMonthNavigationImage:(NSImage *)arg1 ;
-(void)setNextMonthNavigationImage:(NSImage *)arg1 ;
-(void)setPreviousMonthNavigationXOffset:(double)arg1 ;
-(void)setPreviousMonthNavigationYOffset:(double)arg1 ;
-(void)setPreviousMonthNavigationBorder:(double)arg1 ;
-(void)setNextMonthNavigationXOffset:(double)arg1 ;
-(void)setNextMonthNavigationYOffset:(double)arg1 ;
-(void)setNextMonthNavigationBorder:(double)arg1 ;
-(void)setLeftInteriorPadding:(double)arg1 ;
-(void)setRightInteriorPadding:(double)arg1 ;
-(void)setWeekNumbersWidth:(double)arg1 ;
-(void)setWeekNumbersHeight:(double)arg1 ;
-(void)setWeekNumbersFont:(NSFont *)arg1 ;
-(void)setWeekNumbersColor:(NSColor *)arg1 ;
-(void)setWeekNumbersHorizontalAlignment:(long long)arg1 ;
-(void)setWeekNumbersXOffset:(double)arg1 ;
-(void)setWeekNumbersYOffset:(double)arg1 ;
-(void)setDrawWeekNumbersSeparator:(char)arg1 ;
-(void)setWeekNumberSeparatorColor:(NSColor *)arg1 ;
-(void)setDayNumberBackgroundHoverColor:(NSColor *)arg1 ;
-(void)setDayNumberBackgroundXOffset:(double)arg1 ;
-(void)setDayNumberBackgroundYOffset:(double)arg1 ;
-(void)setDayBackgroundHasRoundedCorners:(char)arg1 ;
-(void)setDayBackgroundSizeIsStatic:(char)arg1 ;
-(void)setDayBackgroundRectSize:(CGSize)arg1 ;
-(void)setDayCellSpacing:(CGSize)arg1 ;
-(char)showsNeighboringDays;
-(char)showsNavigation;
-(char)showsMonthName;
-(char)showsWeekdayNames;
-(char)showsActiveDateHighlighted;
-(char)showsTodayHighlighted;
-(char)showsTodayBackground;
-(char)showsWeekendBackground;
-(char)showsWeekNumbers;
-(char)dayBackgroundSizeIsStatic;
-(NSFont *)monthNameFont;
-(NSColor *)monthNameColor;
-(double)monthNameHeight;
-(long long)monthNameTextAlignment;
-(NSFont *)todayHighlightFont;
-(NSColor *)todayHighlightColor;
-(NSColor *)todayBackgroundColor;
-(NSFont *)activeDateHighlightFont;
-(NSColor *)activeDateHighlightColor;
-(NSColor *)activeDateBackgroundColor;
-(NSColor *)todayAndActiveHighlightColor;
-(NSColor *)todayAndActiveBackgroundColor;
-(void)setTodayAndActiveBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)weekendBackgroundColor;
-(NSFont *)weekdayTextFont;
-(NSColor *)weekdayTextColor;
-(double)weekdayHeight;
-(long long)weekdayTextAlignment;
-(char)useExtraShortWeekdaySymbols;
-(char)drawWeekdayNameSeparator;
-(NSColor *)weekdayNameSeparatorColor;
-(double)heightBetweenWeekdaysAndDayNumbers;
-(double)heightBetweenMonthAndDayNumbers;
-(void)setHeightBetweenMonthAndDayNumbers:(double)arg1 ;
-(NSFont *)dayNumberTextFont;
-(long long)dayNumberTextAlignment;
-(NSFont *)previousAndNextMonthDayNumberFont;
-(NSColor *)previousAndNextMonthDayNumberColor;
-(NSColor *)weekendDayNumberColor;
-(NSImage *)previousMonthNavigationImage;
-(NSImage *)previousMonthNavigationAlternateImage;
-(void)setPreviousMonthNavigationAlternateImage:(NSImage *)arg1 ;
-(double)previousMonthNavigationXOffset;
-(double)previousMonthNavigationYOffset;
-(double)previousMonthNavigationBorder;
-(NSImage *)nextMonthNavigationImage;
-(NSImage *)nextMonthNavigationAlternateImage;
-(void)setNextMonthNavigationAlternateImage:(NSImage *)arg1 ;
-(double)nextMonthNavigationXOffset;
-(double)nextMonthNavigationYOffset;
-(double)nextMonthNavigationBorder;
-(double)leftInteriorPadding;
-(double)rightInteriorPadding;
-(double)weekNumbersWidth;
-(double)weekNumbersHeight;
-(NSFont *)weekNumbersFont;
-(NSColor *)weekNumbersColor;
-(long long)weekNumbersHorizontalAlignment;
-(double)weekNumbersXOffset;
-(double)weekNumbersYOffset;
-(char)drawWeekNumbersSeparator;
-(NSColor *)weekNumberSeparatorColor;
-(double)weekNumberSeparatorTopInset;
-(void)setWeekNumberSeparatorTopInset:(double)arg1 ;
-(double)weekNumberSeparatorBottomInset;
-(void)setWeekNumberSeparatorBottomInset:(double)arg1 ;
-(NSColor *)dayNumberBackgroundHoverColor;
-(double)dayNumberBackgroundXOffset;
-(double)dayNumberBackgroundYOffset;
-(char)dayBackgroundHasRoundedCorners;
-(char)dayBackgroundIsCircle;
-(void)setDayBackgroundIsCircle:(char)arg1 ;
-(CGSize)dayBackgroundRectSize;
-(CGSize)dayCellSpacing;
-(long long)minimumNumberOfRows;
-(void)setMinimumNumberOfRows:(long long)arg1 ;
@end

