/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface RTVisitPipelineModuleStats : NSObject {

	NSMutableDictionary* _iterationDurations;
	NSMutableDictionary* _iterationLocationCounts;
	NSMutableDictionary* _iterationLocationIntervals;
	NSMutableDictionary* _iterationMaxLocationOutageIntervals;
	NSMutableDictionary* _iterationVistCount;
	NSDate* _startDate;

}
-(id)description;
-(id)init;
-(double)cumulativeProcessingDuration;
-(void)startIterationWithVisitClusters:(id)arg1 ;
-(void)stopIterationWithVisitClusters:(id)arg1 ;
-(unsigned long long)lastLocationCount;
-(unsigned long long)lastLocationCountForDirection:(id)arg1 ;
-(unsigned long long)cumulativeLocationCountForDirection:(id)arg1 ;
-(unsigned long long)maxLocationCountForDirection:(id)arg1 ;
-(double)lastLocationIntervalForDirection:(id)arg1 ;
-(double)cumulativeLocationIntervalForDirection:(id)arg1 ;
-(double)maxLocationIntervalForDirection:(id)arg1 ;
-(double)lastMaxLocationOutageIntervalForDirection:(id)arg1 ;
-(double)cumulativeMaxLocationOutageIntervalForDirection:(id)arg1 ;
-(double)maxLocationOutageIntervalForDirection:(id)arg1 ;
-(unsigned long long)lastVisitCountForDirection:(id)arg1 ;
-(unsigned long long)cumulativeVisitCountForDirection:(id)arg1 ;
-(unsigned long long)maxVisitCountForDirection:(id)arg1 ;
-(double)lastProcessingDuration;
-(double)maxProcessingDuration;
-(void)setLocationCountForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(void)setLocationIntervalForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(void)setMaxLocationOutageIntervalForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(void)setVisitCountForVisitCluster:(id)arg1 direction:(id)arg2 ;
@end

