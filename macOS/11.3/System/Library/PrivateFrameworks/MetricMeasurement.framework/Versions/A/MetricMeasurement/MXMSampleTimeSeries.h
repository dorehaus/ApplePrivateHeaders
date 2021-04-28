/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/Versions/A/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMSampleTimeSeries : MXMSampleSet {

	MXMSampleTimeSeries* _time;

}

@property (nonatomic,retain,readonly) MXMSampleTimeSeries * timeIndex; 
-(id)init;
-(MXMSampleTimeSeries *)timeIndex;
-(void)_appendAbsoluteTime:(unsigned long long)arg1 ;
-(id)initWithAbsoluteTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithTimeSeries:(double*)arg1 unit:(id)arg2 length:(unsigned long long)arg3 ;
-(id)initWithContinuousTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2 ;
@end
