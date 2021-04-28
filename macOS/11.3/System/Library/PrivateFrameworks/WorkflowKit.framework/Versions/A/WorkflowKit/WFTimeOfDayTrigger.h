/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, NSArray, NSNumber;

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding> {

	unsigned long long _event;
	unsigned long long _timeOffset;
	NSDateComponents* _time;
	unsigned long long _mode;
	NSArray* _daysOfWeek;
	NSNumber* _dayOfMonth;

}

@property (assign,nonatomic) unsigned long long event;                   //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) unsigned long long timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (nonatomic,retain) NSDateComponents * time;                    //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * daysOfWeek;                         //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (nonatomic,copy) NSNumber * dayOfMonth;                        //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
+(char)supportsSecureCoding;
+(id)dateFormatter;
+(id)localizedDisplayName;
+(char)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
+(id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg1 dayOfMonth:(id)arg2 mode:(unsigned long long)arg3 ;
+(id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2 ;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)event;
-(NSNumber *)dayOfMonth;
-(NSDateComponents *)time;
-(unsigned long long)mode;
-(void)setTimeOffset:(unsigned long long)arg1 ;
-(void)setEvent:(unsigned long long)arg1 ;
-(void)setTime:(NSDateComponents *)arg1 ;
-(unsigned long long)timeOffset;
-(void)setDayOfMonth:(NSNumber *)arg1 ;
-(NSArray *)daysOfWeek;
-(void)setDaysOfWeek:(NSArray *)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(char)hasValidConfiguration;
@end

