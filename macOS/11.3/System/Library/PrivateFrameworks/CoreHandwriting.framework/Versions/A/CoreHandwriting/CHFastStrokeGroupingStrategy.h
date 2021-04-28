/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingStrategy.h>

@class NSArray, CHStrokeClutterFilter;

@interface CHFastStrokeGroupingStrategy : CHStrokeGroupingStrategy {

	NSArray* _locales;
	CHStrokeClutterFilter* _clutterFilter;

}
-(void)dealloc;
-(id)strategyIdentifier;
-(id)initWithStrokeProvider:(id)arg1 locales:(id)arg2 clutterFilter:(id)arg3 ;
-(id)groupingResultUsingStrokes:(id)arg1 distanceMetric:(int)arg2 mergingDistanceThreshold:(double)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)clustersForStrokes:(id)arg1 shouldMakeSingleCluster:(char)arg2 ;
-(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)_agglomerativeClusteringUsingInitialClusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)arg1 distanceMetric:(int)arg2 maxDistanceThreshold:(float)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(id)fastGroupingResultWithFastGroupingClusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)arg1 clusteredStrokes:(id)arg2 ;
-(float)_maxDistanceThresholdForTokenizationLevel:(long long)arg1 ;
-(void)_filterClusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)arg1 usingContextStrokes:(id)arg2 clusteredStrokes:(id)arg3 ;
-(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)_wordClustersForInitialClusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)arg1 ;
-(id)_strokeIdentifiersForContextStrokes:(id)arg1 clusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster>>*)arg2 clusteredStrokes:(id)arg3 tokenizationLevel:(long long)arg4 fastGroupingResult:(id)arg5 ;
-(id)lineGroupingResultUsingStrokes:(id)arg1 shouldCancel:(/*^block*/id)arg2 ;
-(id)groupingResultForContextStrokes:(id)arg1 clusteredStrokes:(id)arg2 fastGroupingResult:(id)arg3 point:(CGPoint)arg4 tokenizationLevel:(long long)arg5 ;
@end

