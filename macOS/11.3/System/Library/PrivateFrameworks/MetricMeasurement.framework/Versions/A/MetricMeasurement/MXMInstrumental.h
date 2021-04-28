/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/Versions/A/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MXMInstrumental <NSCopying>
@optional
-(void)willStartAtEstimatedTime:(unsigned long long)arg1;
-(char)prepareWithOptions:(id)arg1 error:(id*)arg2;
-(void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
-(void)didStartAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 startDate:(id)arg3;
-(void)willStop;
-(void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
-(void)didStopAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 stopDate:(id)arg3;

@required
-(char)harvestData:(id*)arg1 error:(id*)arg2;

@end

