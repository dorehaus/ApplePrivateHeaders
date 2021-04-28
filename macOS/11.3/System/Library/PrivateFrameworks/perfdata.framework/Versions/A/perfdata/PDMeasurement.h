/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/perfdata.framework/Versions/A/perfdata
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSNumber, PDContainer;

@interface PDMeasurement : NSObject {

	char _largerBetter;
	char _summary;
	char _context;
	NSString* _metric;
	NSString* _unitString;
	NSDictionary* _variables;
	NSDictionary* _labels;
	unsigned long long _group;
	NSNumber* _value;
	NSNumber* _sampleCount;
	NSNumber* _mean;
	NSNumber* _standardDeviation;
	NSNumber* _minimum;
	NSNumber* _maximum;
	NSDictionary* _measurement;
	PDContainer* _container;
	NSString* _cachedMetricFilter;

}

@property (nonatomic,retain) NSDictionary * measurement;                             //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,retain) NSString * metric;                                      //@synthesize metric=_metric - In the implementation block
@property (nonatomic,retain) NSString * unitString;                                  //@synthesize unitString=_unitString - In the implementation block
@property (assign,nonatomic,__weak) PDContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSDictionary * variables;                               //@synthesize variables=_variables - In the implementation block
@property (nonatomic,retain) NSDictionary * labels;                                  //@synthesize labels=_labels - In the implementation block
@property (assign,nonatomic) char largerBetter;                                      //@synthesize largerBetter=_largerBetter - In the implementation block
@property (assign,nonatomic) unsigned long long group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSNumber * sampleCount;                                 //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,retain) NSNumber * mean;                                        //@synthesize mean=_mean - In the implementation block
@property (nonatomic,retain) NSNumber * standardDeviation;                           //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (nonatomic,retain) NSNumber * minimum;                                     //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,retain) NSNumber * maximum;                                     //@synthesize maximum=_maximum - In the implementation block
@property (assign,getter=isSummary,nonatomic) char summary;                          //@synthesize summary=_summary - In the implementation block
@property (assign,getter=isContext,nonatomic) char context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * cachedMetricFilter;                          //@synthesize cachedMetricFilter=_cachedMetricFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long histogramBucketCount; 
@property (nonatomic,readonly) unsigned long long percentileCount; 
-(id)description;
-(PDContainer *)container;
-(void)setGroup:(unsigned long long)arg1 ;
-(NSNumber *)value;
-(NSNumber *)sampleCount;
-(void)setSampleCount:(NSNumber *)arg1 ;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)minimum;
-(NSNumber *)maximum;
-(void)setMinimum:(NSNumber *)arg1 ;
-(void)setMaximum:(NSNumber *)arg1 ;
-(char)isLike:(id)arg1 ;
-(void)setContext:(char)arg1 ;
-(unsigned long long)group;
-(NSDictionary *)variables;
-(void)setVariables:(NSDictionary *)arg1 ;
-(NSDictionary *)measurement;
-(void)setMeasurement:(NSDictionary *)arg1 ;
-(void)setContainer:(PDContainer *)arg1 ;
-(NSString *)metric;
-(void)setMetric:(NSString *)arg1 ;
-(NSDictionary *)labels;
-(void)setLabels:(NSDictionary *)arg1 ;
-(NSNumber *)mean;
-(void)setMean:(NSNumber *)arg1 ;
-(NSNumber *)standardDeviation;
-(void)setStandardDeviation:(NSNumber *)arg1 ;
-(void)setUnitString:(NSString *)arg1 ;
-(NSString *)unitString;
-(void)setLargerBetter:(char)arg1 ;
-(void)setSummary:(char)arg1 ;
-(id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)isComparableTo:(id)arg1 ;
-(char)matchesVariables:(id)arg1 ignoringMissing:(char)arg2 ;
-(id)metricFilter;
-(id)metricFilterIgnoringVariables:(id)arg1 ;
-(char)largerBetter;
-(NSString *)cachedMetricFilter;
-(id)metricFilterIgnoringNullableVariables:(id)arg1 ;
-(void)setCachedMetricFilter:(NSString *)arg1 ;
-(char)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2 ;
-(char)matchesMetricFilter:(id)arg1 ;
-(char)isComparableTo:(id)arg1 ignoringVariables:(id)arg2 ;
-(unsigned long long)histogramBucketCount;
-(char)enumerateHistogramBucketsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)percentileCount;
-(char)enumeratePercentilesWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)isSummary;
-(char)isContext;
@end
