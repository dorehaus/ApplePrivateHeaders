/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetricKit.framework/Versions/A/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement, MXAverage;

@interface MXMemoryMetric : MXMetric {

	NSMeasurement* _peakMemoryUsage;
	MXAverage* _averageSuspendedMemory;

}

@property (readonly) NSMeasurement * peakMemoryUsage;                 //@synthesize peakMemoryUsage=_peakMemoryUsage - In the implementation block
@property (readonly) MXAverage * averageSuspendedMemory;              //@synthesize averageSuspendedMemory=_averageSuspendedMemory - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithPeakMemoryUsageMeasurement:(id)arg1 averageMemoryUsageMeasurement:(id)arg2 ;
-(NSMeasurement *)peakMemoryUsage;
-(MXAverage *)averageSuspendedMemory;
@end
