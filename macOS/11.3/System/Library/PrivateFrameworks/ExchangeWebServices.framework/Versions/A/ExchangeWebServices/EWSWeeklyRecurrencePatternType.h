/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSIntervalRecurrencePatternBaseType.h>

@class NSIndexSet;

@interface EWSWeeklyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType {

	NSIndexSet* _DaysOfWeek;
	long long _FirstDayOfWeek;

}

@property (nonatomic,copy) NSIndexSet * DaysOfWeek;                 //@synthesize DaysOfWeek=_DaysOfWeek - In the implementation block
@property (assign,nonatomic) long long FirstDayOfWeek;              //@synthesize FirstDayOfWeek=_FirstDayOfWeek - In the implementation block
+(id)definition;
-(void)setFirstDayOfWeek:(long long)arg1 ;
-(void)setDaysOfWeek:(NSIndexSet *)arg1 ;
-(NSIndexSet *)DaysOfWeek;
-(long long)FirstDayOfWeek;
@end

