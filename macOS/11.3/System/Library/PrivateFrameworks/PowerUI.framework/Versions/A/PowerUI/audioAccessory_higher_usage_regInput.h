/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface audioAccessory_higher_usage_regInput : NSObject <MLFeatureProvider> {

	double _classic_time_between_uses_med_dur_1;
	double _classic_time_between_uses_med_dur_2;
	double _classic_time_between_uses_med_dur_4;
	double _classic_time_between_uses_med_dur_24;
	double _classic_time_between_uses_std_dur_1;
	double _classic_time_between_uses_std_dur_2;
	double _classic_time_between_uses_std_dur_4;
	double _classic_time_between_uses_std_dur_24;
	double _hour;
	double _is_weekend;
	double _hour_plus_0;
	double _hour_plus_1;
	double _hour_plus_2;
	double _hour_plus_3;
	double _hour_plus_4;
	double _hour_plus_5;
	double _hours_until_use;
	double _meaningful_undercharge_rolling_average;

}

@property (assign,nonatomic) double classic_time_between_uses_med_dur_1;                 //@synthesize classic_time_between_uses_med_dur_1=_classic_time_between_uses_med_dur_1 - In the implementation block
@property (assign,nonatomic) double classic_time_between_uses_med_dur_2;                 //@synthesize classic_time_between_uses_med_dur_2=_classic_time_between_uses_med_dur_2 - In the implementation block
@property (assign,nonatomic) double classic_time_between_uses_med_dur_4;                 //@synthesize classic_time_between_uses_med_dur_4=_classic_time_between_uses_med_dur_4 - In the implementation block
@property (assign,nonatomic) double classic_time_between_uses_med_dur_24;                //@synthesize classic_time_between_uses_med_dur_24=_classic_time_between_uses_med_dur_24 - In the implementation block
@property (assign,nonatomic) double classic_time_between_uses_std_dur_1;                 //@synthesize classic_time_between_uses_std_dur_1=_classic_time_between_uses_std_dur_1 - In the implementation block
@property (assign,nonatomic) double classic_time_between_uses_std_dur_2;                 //@synthesize classic_time_between_uses_std_dur_2=_classic_time_between_uses_std_dur_2 - In the implementation block
@property (assign,nonatomic) double classic_time_between_uses_std_dur_4;                 //@synthesize classic_time_between_uses_std_dur_4=_classic_time_between_uses_std_dur_4 - In the implementation block
@property (assign,nonatomic) double classic_time_between_uses_std_dur_24;                //@synthesize classic_time_between_uses_std_dur_24=_classic_time_between_uses_std_dur_24 - In the implementation block
@property (assign,nonatomic) double hour;                                                //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) double is_weekend;                                          //@synthesize is_weekend=_is_weekend - In the implementation block
@property (assign,nonatomic) double hour_plus_0;                                         //@synthesize hour_plus_0=_hour_plus_0 - In the implementation block
@property (assign,nonatomic) double hour_plus_1;                                         //@synthesize hour_plus_1=_hour_plus_1 - In the implementation block
@property (assign,nonatomic) double hour_plus_2;                                         //@synthesize hour_plus_2=_hour_plus_2 - In the implementation block
@property (assign,nonatomic) double hour_plus_3;                                         //@synthesize hour_plus_3=_hour_plus_3 - In the implementation block
@property (assign,nonatomic) double hour_plus_4;                                         //@synthesize hour_plus_4=_hour_plus_4 - In the implementation block
@property (assign,nonatomic) double hour_plus_5;                                         //@synthesize hour_plus_5=_hour_plus_5 - In the implementation block
@property (assign,nonatomic) double hours_until_use;                                     //@synthesize hours_until_use=_hours_until_use - In the implementation block
@property (assign,nonatomic) double meaningful_undercharge_rolling_average;              //@synthesize meaningful_undercharge_rolling_average=_meaningful_undercharge_rolling_average - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(void)setHour:(double)arg1 ;
-(double)hour;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithClassic_time_between_uses_med_dur_1:(double)arg1 classic_time_between_uses_med_dur_2:(double)arg2 classic_time_between_uses_med_dur_4:(double)arg3 classic_time_between_uses_med_dur_24:(double)arg4 classic_time_between_uses_std_dur_1:(double)arg5 classic_time_between_uses_std_dur_2:(double)arg6 classic_time_between_uses_std_dur_4:(double)arg7 classic_time_between_uses_std_dur_24:(double)arg8 hour:(double)arg9 is_weekend:(double)arg10 hour_plus_0:(double)arg11 hour_plus_1:(double)arg12 hour_plus_2:(double)arg13 hour_plus_3:(double)arg14 hour_plus_4:(double)arg15 hour_plus_5:(double)arg16 hours_until_use:(double)arg17 meaningful_undercharge_rolling_average:(double)arg18 ;
-(double)classic_time_between_uses_med_dur_1;
-(void)setClassic_time_between_uses_med_dur_1:(double)arg1 ;
-(double)classic_time_between_uses_med_dur_2;
-(void)setClassic_time_between_uses_med_dur_2:(double)arg1 ;
-(double)classic_time_between_uses_med_dur_4;
-(void)setClassic_time_between_uses_med_dur_4:(double)arg1 ;
-(double)classic_time_between_uses_med_dur_24;
-(void)setClassic_time_between_uses_med_dur_24:(double)arg1 ;
-(double)classic_time_between_uses_std_dur_1;
-(void)setClassic_time_between_uses_std_dur_1:(double)arg1 ;
-(double)classic_time_between_uses_std_dur_2;
-(void)setClassic_time_between_uses_std_dur_2:(double)arg1 ;
-(double)classic_time_between_uses_std_dur_4;
-(void)setClassic_time_between_uses_std_dur_4:(double)arg1 ;
-(double)classic_time_between_uses_std_dur_24;
-(void)setClassic_time_between_uses_std_dur_24:(double)arg1 ;
-(double)is_weekend;
-(void)setIs_weekend:(double)arg1 ;
-(double)hour_plus_0;
-(void)setHour_plus_0:(double)arg1 ;
-(double)hour_plus_1;
-(void)setHour_plus_1:(double)arg1 ;
-(double)hour_plus_2;
-(void)setHour_plus_2:(double)arg1 ;
-(double)hour_plus_3;
-(void)setHour_plus_3:(double)arg1 ;
-(double)hour_plus_4;
-(void)setHour_plus_4:(double)arg1 ;
-(double)hour_plus_5;
-(void)setHour_plus_5:(double)arg1 ;
-(double)hours_until_use;
-(void)setHours_until_use:(double)arg1 ;
-(double)meaningful_undercharge_rolling_average;
-(void)setMeaningful_undercharge_rolling_average:(double)arg1 ;
@end

