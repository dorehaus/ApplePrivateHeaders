/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMiCalItem.h>

@class NSDate;

@interface _AMiCalDisplayAlarm : _AMiCalItem

@property (assign) long long triggerInterval; 
@property (copy) NSDate * triggerDate; 
-(NSDate *)triggerDate;
-(void)setTriggerDate:(NSDate *)arg1 ;
-(long long)triggerInterval;
-(void)setTriggerInterval:(long long)arg1 ;
@end

