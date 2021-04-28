/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCalendar, NSTimeZone, NSDate;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSCalendar * calendar; 
@property (copy) NSTimeZone * timeZone; 
@property (assign) long long era; 
@property (assign) long long year; 
@property (assign) long long month; 
@property (assign) long long day; 
@property (assign) long long hour; 
@property (assign) long long minute; 
@property (assign) long long second; 
@property (assign) long long nanosecond; 
@property (assign) long long weekday; 
@property (assign) long long weekdayOrdinal; 
@property (assign) long long quarter; 
@property (assign) long long weekOfMonth; 
@property (assign) long long weekOfYear; 
@property (assign) long long yearForWeekOfYear; 
@property (getter=isLeapMonth) char leapMonth; 
@property (copy,readonly) NSDate * date; 
@property (getter=isValidDate,readonly) char validDate; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setYear:(long long)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(void)setDay:(long long)arg1 ;
-(void)setHour:(long long)arg1 ;
-(void)setMinute:(long long)arg1 ;
-(void)setSecond:(long long)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(id)_initWithCFDateComponents:(_CFDateComponents*)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(long long)era;
-(void)setEra:(long long)arg1 ;
-(long long)year;
-(long long)quarter;
-(void)setQuarter:(long long)arg1 ;
-(long long)month;
-(long long)day;
-(long long)hour;
-(long long)minute;
-(long long)second;
-(long long)nanosecond;
-(void)setNanosecond:(long long)arg1 ;
-(long long)week;
-(void)setWeek:(long long)arg1 ;
-(long long)weekOfYear;
-(void)setWeekOfYear:(long long)arg1 ;
-(long long)weekOfMonth;
-(void)setWeekOfMonth:(long long)arg1 ;
-(long long)yearForWeekOfYear;
-(void)setYearForWeekOfYear:(long long)arg1 ;
-(long long)weekday;
-(void)setWeekday:(long long)arg1 ;
-(long long)weekdayOrdinal;
-(void)setWeekdayOrdinal:(long long)arg1 ;
-(char)isLeapMonthSet;
-(char)isLeapMonth;
-(void)setLeapMonth:(char)arg1 ;
-(_CFDateComponents*)_dateComponents;
-(void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2 ;
-(long long)valueForComponent:(unsigned long long)arg1 ;
-(char)isValidDate;
-(char)isValidDateInCalendar:(id)arg1 ;
@end

