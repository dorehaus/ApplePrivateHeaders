/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CalendarStore.framework/Versions/A/CalendarStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarStore/CalendarStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, CalRecurrenceEnd;

@interface CalRecurrenceRule : NSObject <NSCopying> {

	id _objectID;
	void* _reserved;
	NSArray* _monthsOfTheYear;
	NSArray* _nthWeekDaysOfTheMonth;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheWeek;
	unsigned long long _firstDayOfTheWeek;
	unsigned long long _recurrenceInterval;
	int _recurrenceType;
	CalRecurrenceEnd* _recurrenceEnd;

}

@property (readonly) CalRecurrenceEnd * recurrenceEnd;                   //@synthesize recurrenceEnd=_recurrenceEnd - In the implementation block
@property (readonly) int recurrenceType;                                 //@synthesize recurrenceType=_recurrenceType - In the implementation block
@property (readonly) unsigned long long recurrenceInterval;              //@synthesize recurrenceInterval=_recurrenceInterval - In the implementation block
@property (readonly) unsigned long long firstDayOfTheWeek;               //@synthesize firstDayOfTheWeek=_firstDayOfTheWeek - In the implementation block
@property (readonly) NSArray * daysOfTheWeek;                            //@synthesize daysOfTheWeek=_daysOfTheWeek - In the implementation block
@property (readonly) NSArray * daysOfTheMonth;                           //@synthesize daysOfTheMonth=_daysOfTheMonth - In the implementation block
@property (readonly) NSArray * nthWeekDaysOfTheMonth;                    //@synthesize nthWeekDaysOfTheMonth=_nthWeekDaysOfTheMonth - In the implementation block
@property (readonly) NSArray * monthsOfTheYear;                          //@synthesize monthsOfTheYear=_monthsOfTheYear - In the implementation block
+(id)recurrenceRuleWithString:(id)arg1 ;
+(id)iCalendarValueFromRecurrenceType:(int)arg1 ;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(char)arg2 isFloating:(char)arg3 ;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)stringValueAsDateOnly:(char)arg1 isFloating:(char)arg2 ;
-(id)initRecurrenceWithType:(int)arg1 interval:(unsigned long long)arg2 forDaysOfTheWeek:(id)arg3 forDaysOfTheMonth:(id)arg4 forNthWeekDaysOfTheMonth:(id)arg5 forMonthsOfTheYear:(id)arg6 end:(id)arg7 ;
-(NSArray *)monthsOfTheYear;
-(NSArray *)nthWeekDaysOfTheMonth;
-(NSArray *)daysOfTheMonth;
-(NSArray *)daysOfTheWeek;
-(unsigned long long)recurrenceInterval;
-(int)recurrenceType;
-(CalRecurrenceEnd *)recurrenceEnd;
-(id)initDailyRecurrenceWithInterval:(unsigned long long)arg1 end:(id)arg2 ;
-(id)initWeeklyRecurrenceWithInterval:(unsigned long long)arg1 end:(id)arg2 ;
-(id)initWeeklyRecurrenceWithInterval:(unsigned long long)arg1 forDaysOfTheWeek:(id)arg2 end:(id)arg3 ;
-(id)initMonthlyRecurrenceWithInterval:(unsigned long long)arg1 end:(id)arg2 ;
-(id)initMonthlyRecurrenceWithInterval:(unsigned long long)arg1 forDaysOfTheMonth:(id)arg2 end:(id)arg3 ;
-(id)initMonthlyRecurrenceWithInterval:(unsigned long long)arg1 forDayOfTheWeek:(unsigned long long)arg2 forWeekOfTheMonth:(long long)arg3 end:(id)arg4 ;
-(id)initYearlyRecurrenceWithInterval:(unsigned long long)arg1 end:(id)arg2 ;
-(id)initYearlyRecurrenceWithInterval:(unsigned long long)arg1 forMonthsOfTheYear:(id)arg2 end:(id)arg3 ;
-(id)initYearlyRecurrenceWithInterval:(unsigned long long)arg1 forDayOfTheWeek:(unsigned long long)arg2 forWeekOfTheMonth:(long long)arg3 forMonthsOfTheYear:(id)arg4 end:(id)arg5 ;
-(unsigned long long)firstDayOfTheWeek;
@end

