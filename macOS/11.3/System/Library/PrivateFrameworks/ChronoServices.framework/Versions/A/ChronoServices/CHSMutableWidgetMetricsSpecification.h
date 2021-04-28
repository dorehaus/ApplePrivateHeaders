/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/Versions/A/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <ChronoServices/CHSWidgetMetricsSpecification.h>

@class NSMutableDictionary;

@interface CHSMutableWidgetMetricsSpecification : CHSWidgetMetricsSpecification

@property (nonatomic,copy,readonly) NSMutableDictionary * metricsByFamily; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMetricsByFamily:(id)arg1 ;
-(NSMutableDictionary *)metricsByFamily;
-(void)setMetrics:(id)arg1 forFamily:(long long)arg2 ;
@end

