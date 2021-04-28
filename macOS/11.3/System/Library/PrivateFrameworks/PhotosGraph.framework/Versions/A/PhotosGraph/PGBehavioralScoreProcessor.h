/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph, NSSet, NSDictionary;

@interface PGBehavioralScoreProcessor : NSObject {

	PGGraph* _graph;
	NSSet* _previousGoldAssetUUIDs;
	long long _algorithm;
	NSDictionary* _algorithmData;

}

@property (nonatomic,retain) PGGraph * graph;                             //@synthesize graph=_graph - In the implementation block
@property (nonatomic,retain) NSSet * previousGoldAssetUUIDs;              //@synthesize previousGoldAssetUUIDs=_previousGoldAssetUUIDs - In the implementation block
@property (assign,nonatomic) long long algorithm;                         //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,retain) NSDictionary * algorithmData;                //@synthesize algorithmData=_algorithmData - In the implementation block
+(id)assetPropertySetsForUserBehavioralProcessing;
-(long long)algorithm;
-(PGGraph *)graph;
-(void)setAlgorithm:(long long)arg1 ;
-(void)setGraph:(PGGraph *)arg1 ;
-(id)goldAssetUUIDs;
-(id)sceneFeatures;
-(id)initWithGraphManager:(id)arg1 algorithm:(long long)arg2 ;
-(id)_previousResults;
-(id)peopleFeatures;
-(void)_persistNewGoldAssetsUUIDs:(id)arg1 processorData:(id)arg2 ;
-(void)processBehavioralScoresWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_writeBehavioralScoresToPhotosDatabase:(id)arg1 assets:(id)arg2 ;
-(char)needBehavioralScoreReprocessingUsingCurrentGoldAssetsUUIDs:(id)arg1 previousGoldAssetUUIDs:(id)arg2 ;
-(id)_newBehavioralProcessorForAlgorithm:(long long)arg1 goldAssets:(id)arg2 graph:(id)arg3 ;
-(id)_behavioralProcessorForAlgorithm:(long long)arg1 goldAssets:(id)arg2 graph:(id)arg3 persistedData:(id)arg4 ;
-(id)behavioralScoreByAssetUUIDForAssets:(id)arg1 algorithmProcessor:(id)arg2 personalHighAestheticsThreshold:(double)arg3 personalGoodAestheticsThreshold:(double)arg4 ;
-(float)behavioralScoreFromBaseScore:(float)arg1 semanticScore:(float)arg2 ;
-(float)semanticScoreFromBehavioralScore:(float)arg1 ;
-(NSSet *)previousGoldAssetUUIDs;
-(void)setPreviousGoldAssetUUIDs:(NSSet *)arg1 ;
-(NSDictionary *)algorithmData;
-(void)setAlgorithmData:(NSDictionary *)arg1 ;
@end
