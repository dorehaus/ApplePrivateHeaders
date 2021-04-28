/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
-(id)initWithDate:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(id)initWithDuration:(id)arg1 ;
-(void)fixAlarmTrigger;
-(char)isDurationBased;
-(id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2 ;
-(id)travelRelativeDuration;
@end

