/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSIntervalRecurrencePatternBaseType.h>

@interface EWSRelativeMonthlyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType {

	long long _DaysOfWeek;
	long long _DayOfWeekIndex;

}

@property (assign,nonatomic) long long DaysOfWeek;                  //@synthesize DaysOfWeek=_DaysOfWeek - In the implementation block
@property (assign,nonatomic) long long DayOfWeekIndex;              //@synthesize DayOfWeekIndex=_DayOfWeekIndex - In the implementation block
+(id)definition;
-(void)setDaysOfWeek:(long long)arg1 ;
-(void)setDayOfWeekIndex:(long long)arg1 ;
-(long long)DaysOfWeek;
-(long long)DayOfWeekIndex;
@end
