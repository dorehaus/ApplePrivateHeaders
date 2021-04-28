/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventSetTrait.h>

@interface PGMeaningfulEventSceneSetTrait : PGMeaningfulEventSetTrait {

	char _accumulateHighConfidenceAssetCounts;
	unsigned long long _minimumNumberOfHighConfidenceAssets;
	unsigned long long _minimumNumberOfNegativeHighConfidenceAssets;
	double _minimumRatioOfHighConfidenceAssets;

}

@property (assign,nonatomic) unsigned long long minimumNumberOfHighConfidenceAssets;                      //@synthesize minimumNumberOfHighConfidenceAssets=_minimumNumberOfHighConfidenceAssets - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfNegativeHighConfidenceAssets;              //@synthesize minimumNumberOfNegativeHighConfidenceAssets=_minimumNumberOfNegativeHighConfidenceAssets - In the implementation block
@property (assign,nonatomic) double minimumRatioOfHighConfidenceAssets;                                   //@synthesize minimumRatioOfHighConfidenceAssets=_minimumRatioOfHighConfidenceAssets - In the implementation block
@property (assign,nonatomic) char accumulateHighConfidenceAssetCounts;                                    //@synthesize accumulateHighConfidenceAssetCounts=_accumulateHighConfidenceAssetCounts - In the implementation block
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(id)initWithNodes:(id)arg1 ;
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(unsigned long long)minimumNumberOfHighConfidenceAssets;
-(void)setMinimumNumberOfHighConfidenceAssets:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfNegativeHighConfidenceAssets;
-(void)setMinimumNumberOfNegativeHighConfidenceAssets:(unsigned long long)arg1 ;
-(double)minimumRatioOfHighConfidenceAssets;
-(void)setMinimumRatioOfHighConfidenceAssets:(double)arg1 ;
-(char)accumulateHighConfidenceAssetCounts;
-(void)setAccumulateHighConfidenceAssetCounts:(char)arg1 ;
@end

