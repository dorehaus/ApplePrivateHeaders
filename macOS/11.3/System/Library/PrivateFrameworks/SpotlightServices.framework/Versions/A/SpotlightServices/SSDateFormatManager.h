/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCalendar, NSDateFormatter, NSDateIntervalFormatter;

@interface SSDateFormatManager : NSObject {

	NSCalendar* _calendar;
	NSDateFormatter* _shortRelativeDateFormatter;
	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _shortDateTimeFormatter;
	NSDateFormatter* _shortTimeFormatter;
	NSDateFormatter* _dateFormatter;
	NSDateIntervalFormatter* _shortDateTimeIntervalFormatter;
	NSDateIntervalFormatter* _mediumDayOfWeekDateTimeIntervalFormatter;
	NSDateIntervalFormatter* _shortDateIntervalFormatter;
	NSDateIntervalFormatter* _mediumDayOfWeekDateIntervalFormatter;
	NSDateIntervalFormatter* _allDayDateFormatter;
	NSDateIntervalFormatter* _dateIntervalFormatter;

}

@property (retain) NSCalendar * calendar;                                                           //@synthesize calendar=_calendar - In the implementation block
@property (retain) NSDateFormatter * shortRelativeDateFormatter;                                    //@synthesize shortRelativeDateFormatter=_shortRelativeDateFormatter - In the implementation block
@property (retain) NSDateFormatter * dayOfWeekFormatter;                                            //@synthesize dayOfWeekFormatter=_dayOfWeekFormatter - In the implementation block
@property (retain) NSDateFormatter * shortDateTimeFormatter;                                        //@synthesize shortDateTimeFormatter=_shortDateTimeFormatter - In the implementation block
@property (retain) NSDateFormatter * shortTimeFormatter;                                            //@synthesize shortTimeFormatter=_shortTimeFormatter - In the implementation block
@property (retain) NSDateFormatter * dateFormatter;                                                 //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * shortDateTimeIntervalFormatter;                        //@synthesize shortDateTimeIntervalFormatter=_shortDateTimeIntervalFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * mediumDayOfWeekDateTimeIntervalFormatter;              //@synthesize mediumDayOfWeekDateTimeIntervalFormatter=_mediumDayOfWeekDateTimeIntervalFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * shortDateIntervalFormatter;                            //@synthesize shortDateIntervalFormatter=_shortDateIntervalFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * mediumDayOfWeekDateIntervalFormatter;                  //@synthesize mediumDayOfWeekDateIntervalFormatter=_mediumDayOfWeekDateIntervalFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * allDayDateFormatter;                                   //@synthesize allDayDateFormatter=_allDayDateFormatter - In the implementation block
@property (retain) NSDateIntervalFormatter * dateIntervalFormatter;                                 //@synthesize dateIntervalFormatter=_dateIntervalFormatter - In the implementation block
+(void)initialize;
+(id)calendar;
+(id)dateFormatter;
+(id)dynamicDateTimeStringsFromDate:(id)arg1 ;
+(id)shortDateTimeStringFromDate:(id)arg1 ;
+(id)dynamicCompactStringFromDate:(id)arg1 ;
+(id)stringFromDate:(id)arg1 toDate:(id)arg2 isAllDay:(char)arg3 ;
+(id)dateIntervalFormatter;
+(char)isDate:(id)arg1 withinTimeInterval:(double)arg2 ;
+(id)shortDateTimeFormatter;
+(char)hasRelativeFormatForDate:(id)arg1 ;
+(char)isDateWithinWeeksTime:(id)arg1 ;
+(char)isDateWithinMonthsTime:(id)arg1 ;
+(id)allDayDateFormatter;
+(char)date:(id)arg1 isBetweenDate:(id)arg2 andDate:(id)arg3 ;
+(id)dyanmicStringFromDate:(id)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateIntervalFormatter *)dateIntervalFormatter;
-(NSDateFormatter *)dayOfWeekFormatter;
-(void)setupFormatters;
-(void)setupFormattersWithTemplate;
-(void)setShortRelativeDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setShortDateTimeFormatter:(NSDateFormatter *)arg1 ;
-(void)setShortTimeFormatter:(NSDateFormatter *)arg1 ;
-(void)setDayOfWeekFormatter:(NSDateFormatter *)arg1 ;
-(void)setShortDateTimeIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setMediumDayOfWeekDateTimeIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setShortDateIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setMediumDayOfWeekDateIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setAllDayDateFormatter:(NSDateIntervalFormatter *)arg1 ;
-(void)setDateIntervalFormatter:(NSDateIntervalFormatter *)arg1 ;
-(NSDateFormatter *)shortDateTimeFormatter;
-(NSDateFormatter *)shortRelativeDateFormatter;
-(NSDateFormatter *)shortTimeFormatter;
-(NSDateIntervalFormatter *)mediumDayOfWeekDateIntervalFormatter;
-(NSDateIntervalFormatter *)mediumDayOfWeekDateTimeIntervalFormatter;
-(NSDateIntervalFormatter *)shortDateIntervalFormatter;
-(NSDateIntervalFormatter *)shortDateTimeIntervalFormatter;
-(NSDateIntervalFormatter *)allDayDateFormatter;
@end

