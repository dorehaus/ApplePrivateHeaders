/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLocale, NSTimeZone, NSDateFormatter;

@interface PLDateRangeFormatter : NSObject {

	os_unfair_lock_s _lock;
	long long _preset;
	NSLocale* _locale;
	char _useLocalDates;
	NSTimeZone* _timeZone;
	char _includeDayNumbers;
	char _includeDayNumbersWhenMonthsDiffer;
	char _useRelativeDayFormatting;
	char _useShortMonths;
	char _useShortDaysInRanges;
	char _useTime;
	char _yearOnly;
	char _monthOnly;
	char _timeOnly;
	char _omitYear;
	char _monthWithDelimiterAndYear;
	NSDateFormatter* _sameDayDateFormatter;
	NSDateFormatter* _sameDayNoYearDateFormatter;
	NSDateFormatter* _dayOfTheWeekDateFormatter;
	NSDateFormatter* _yearDateFormatter;
	NSDateFormatter* _monthDateFormatter;
	NSDateFormatter* _monthYearDateFormatter;
	NSDateFormatter* _relativeDateFormatter;
	UDateIntervalFormatRef _monthDayIntervalFormat;
	UDateIntervalFormatRef _monthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayIntervalFormat;
	UDateIntervalFormatRef _differentMonthDayNoYearIntervalFormat;
	UDateIntervalFormatRef _dayOfTheWeekIntervalFormat;
	UDateIntervalFormatRef _timeIntervalFormat;
	UDateIntervalFormatRef _monthIntervalFormat;
	UDateIntervalFormatRef _monthYearIntervalFormat;
	UDateIntervalFormatRef _yearIntervalFormat;

}

@property (assign,nonatomic) long long preset; 
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) char useLocalDates; 
+(id)autoupdatingFormatterWithPreset:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)localTimeZone;
-(id)stringFromDate:(id)arg1 ;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)_resetFormatters;
-(id)_relativeDateFormatter;
-(id)initWithPreset:(long long)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(void)setPreset:(long long)arg1 ;
-(long long)preset;
-(void)setUseLocalDates:(char)arg1 ;
-(char)useLocalDates;
-(id)_sameDayDateFormatter;
-(id)_sameDayNoYearDateFormatter;
-(id)_dayOfTheWeekDateFormatter;
-(id)_yearDateFormatter;
-(id)_monthDateFormatter;
-(id)_monthYearDateFormatter;
-(UDateIntervalFormatRef)_monthDayIntervalFormat;
-(UDateIntervalFormatRef)_monthDayNoYearIntervalFormat;
-(UDateIntervalFormatRef)_differentMonthDayIntervalFormat;
-(UDateIntervalFormatRef)_differentMonthDayNoYearIntervalFormat;
-(UDateIntervalFormatRef)_dayOfTheWeekIntervalFormat;
-(UDateIntervalFormatRef)_timeIntervalFormat;
-(UDateIntervalFormatRef)_monthIntervalFormat;
-(UDateIntervalFormatRef)_monthYearIntervalFormat;
-(UDateIntervalFormatRef)_yearIntervalFormat;
-(void)_systemTimeZoneDidChange:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(void)_handlePresetDidChange;
-(void)_handleUseLocalDatesDidChange;
-(id)_sameMonthTemplate;
-(id)_dayTemplate;
-(id)_dayDifferentMonthsTemplate;
-(id)_stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3 ;
-(id)stringFromDate:(id)arg1 toDate:(id)arg2 currentDate:(id)arg3 ;
@end
