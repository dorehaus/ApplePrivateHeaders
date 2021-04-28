/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSRecurrencePatternBaseType.h>
#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSString;

@interface EWSRelativeYearlyRecurrencePatternType : EWSRecurrencePatternBaseType <XSDefinitionProvider> {

	long long _DaysOfWeek;
	long long _DayOfWeekIndex;
	long long _Month;

}

@property (assign,nonatomic) long long DaysOfWeek;                  //@synthesize DaysOfWeek=_DaysOfWeek - In the implementation block
@property (assign,nonatomic) long long DayOfWeekIndex;              //@synthesize DayOfWeekIndex=_DayOfWeekIndex - In the implementation block
@property (assign,nonatomic) long long Month;                       //@synthesize Month=_Month - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)setMonth:(long long)arg1 ;
-(void)setDaysOfWeek:(long long)arg1 ;
-(void)setDayOfWeekIndex:(long long)arg1 ;
-(long long)Month;
-(long long)DaysOfWeek;
-(long long)DayOfWeekIndex;
@end

