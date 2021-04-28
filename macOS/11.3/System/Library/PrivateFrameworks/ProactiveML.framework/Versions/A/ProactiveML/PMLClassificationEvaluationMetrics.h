/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PMLClassificationEvaluationMetrics : NSObject
+(float)precision:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(float)recall:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(float)f1Score:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)truePositives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)falsePositives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)trueNegatives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)falseNegatives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(void)addScoresForOutcomes:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 metrics:(id)arg4 ;
+(float)roundFloatToSigFigs:(float)arg1 sigFigs:(int)arg2 ;
+(void)setReportSamplingRate:(unsigned)arg1 ;
@end

