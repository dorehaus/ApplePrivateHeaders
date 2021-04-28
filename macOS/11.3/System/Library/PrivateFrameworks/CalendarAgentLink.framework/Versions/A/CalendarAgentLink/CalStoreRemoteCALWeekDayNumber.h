/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteObject.h>

@interface CalStoreRemoteCALWeekDayNumber : CalStoreRemoteObject {

	unsigned long long _day;
	long long _number;

}

@property (assign,nonatomic) unsigned long long day;              //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) long long number;                    //@synthesize number=_number - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDay:(unsigned long long)arg1 ;
-(unsigned long long)day;
-(long long)number;
-(void)setNumber:(long long)arg1 ;
@end
