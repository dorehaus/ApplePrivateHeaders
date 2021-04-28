/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGMemoryController;

@interface PGMemoryGenerator : NSObject {

	char _isDebug;
	unsigned long long _duration;
	PGMemoryController* _controller;

}

@property (readonly) char canFallbackToDejunkAndDedupeForShowMore; 
@property (assign) char isDebug;                                                //@synthesize isDebug=_isDebug - In the implementation block
@property (assign) unsigned long long duration;                                 //@synthesize duration=_duration - In the implementation block
@property (__weak,readonly) PGMemoryController * controller;                    //@synthesize controller=_controller - In the implementation block
+(long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)arg1 ;
+(id)fetchedAssetsFromFetchResult:(id)arg1 prefetchOptions:(unsigned long long)arg2 ;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(PGMemoryController *)controller;
-(id)initWithController:(id)arg1 ;
-(char)isDebug;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForCuration;
-(unsigned long long)durationForExtendedCuration;
-(char)semanticalDedupingEnabledForExtendedCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(char)canFallbackToDejunkAndDedupeForShowMore;
-(id)keyAssetCurationOptions;
-(id)generateMemories:(unsigned long long)arg1 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg1 ;
-(id)curationOptionsWithKeyAsset:(id)arg1 ;
-(id)generateMemory;
-(id)generateAllMemories;
-(id)_generateMemoryForDryTesting;
-(char)semanticalDedupingEnabledForCuration;
-(char)movieDedupingEnabledForCuration;
-(char)movieDedupingEnabledForExtendedCuration;
-(id)extendedCurationOptionsWithCuratedAssets:(id)arg1 ;
-(id)extendedCuratedAssetsFromAssetCollection:(id)arg1 withCuratedAssets:(id)arg2 ;
-(id)extendedCuratedAssetsFromFeeder:(id)arg1 withCuratedAssets:(id)arg2 ;
-(char)computeMissingCurationsInMemory:(id)arg1 fromAssetCollection:(id)arg2 keyAssetCriteria:(id)arg3 ;
-(char)computeMissingCurationsInMemory:(id)arg1 fromFeeder:(id)arg2 keyAssetCriteria:(id)arg3 ;
-(char)_computeMissingCurationsInMemory:(id)arg1 fromFeeder:(id)arg2 keyAssetCriteria:(id)arg3 useMemoryGeneratorDefaultTricks:(char)arg4 ;
-(void)setDefaultValuesIfNeededOnNewMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateDefaultTitleAndSubtitleForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(char)_eventIsAcceptableForUpgrade:(id)arg1 ;
-(char)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)arg1 upgradedToWeekend:(char*)arg2 ;
-(char)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)arg1 didUpgradeToWeekend:(char)arg2 upgradedToMeaningfulEvent:(char*)arg3 ;
-(char)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)arg1 ;
-(void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg1 attemptUpgradesBeforeSorting:(char)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)_numberOfIndependentMomentNodesInMomentNodes:(id)arg1 ;
-(id)_additionalInfoKeywordsForPotentialMemory:(id)arg1 ;
-(id)assetCollectionWithAssetLocalIdentifiers:(id)arg1 ;
-(id)localIdentifiersFromAssets:(id)arg1 ;
-(void)addLocalIdentifiersFromAssets:(id)arg1 to:(id)arg2 ;
-(id)createMemoryWithPotentialMemory:(id)arg1 ;
-(void)setIsDebug:(char)arg1 ;
@end

