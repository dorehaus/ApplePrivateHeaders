/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph, PGSearchComputationCache;

@interface PGZeroKeywordComputer : NSObject {

	PGGraph* _graph;
	PGSearchComputationCache* _searchComputationCache;

}

@property (readonly) PGGraph * graph;                                                          //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) PGSearchComputationCache * searchComputationCache;              //@synthesize searchComputationCache=_searchComputationCache - In the implementation block
+(id)zeroKeywordLog;
-(PGGraph *)graph;
-(id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)arg1 ;
-(id)contextualPersonZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualSocialGroupZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualLocationNodesWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualHolidayZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualSeasonZeroKeywordsWithOptions:(id)arg1 ;
-(id)contextualSceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualMeaningAndTripZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualDateZeroKeywordsWithOptions:(id)arg1 ;
-(id)_locationBasedContextualLocationNodeWithLocation:(id)arg1 date:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_timeBasedContextualLocationNodeWithDate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2 ;
-(PGSearchComputationCache *)searchComputationCache;
-(id)zeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_zeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)peopleZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)socialGroupKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(char)_conflictBetweenLocationOrAreaNode:(id)arg1 andOtherLocationOrAreaNodes:(id)arg2 ;
-(id)locationZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)eventZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)sceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)tripZeroKeyword;
-(id)tripRankedKeyword;
-(id)_tripZeroKeywordWithScore:(out double*)arg1 ;
-(id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)arg1 collectionUUIDsToAvoid:(id)arg2 ;
-(id)densestCloseLocationNodeForNode:(id)arg1 locationMask:(unsigned long long)arg2 ;
@end

