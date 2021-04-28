/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <Geode/DGOperation.h>

@interface DGSlowMotionOperation : DGOperation {

	double _rate;
	SCD_Struct_DG3 _startTime;
	SCD_Struct_DG3 _endTime;

}

@property (assign,nonatomic) SCD_Struct_DG3 startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_DG3 endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double rate;                           //@synthesize rate=_rate - In the implementation block
+(id)attributes;
+(id)inputKeys;
+(id)outputKeys;
-(SCD_Struct_DG3)startTime;
-(void)setStartTime:(SCD_Struct_DG3)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)setEndTime:(SCD_Struct_DG3)arg1 ;
-(SCD_Struct_DG3)endTime;
-(id)settingsDictionary;
-(char)applySettingsDictionary:(id)arg1 ;
@end
