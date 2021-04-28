/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@interface MPAuthoringUtilities : NSObject
+(unsigned long long)randomSeedFromOptions:(id)arg1 ;
+(unsigned long long)presentationOrderFromOptions:(id)arg1 ;
+(NSRange)videoPathsRangeFromOptions:(id)arg1 ;
+(long long)minimumNumberOfDynamicSlidesToAddFromOptions:(id)arg1 ;
+(char)ignoreClusteringForImages:(id)arg1 withOptions:(id)arg2 ;
+(char)replaceAudioPlaylistFromOptions:(id)arg1 ;
+(char)useDefaultAudioFromOptions:(id)arg1 ;
+(char)alignToBeatsFromOptions:(id)arg1 ;
+(char)createBeatsFromOptions:(id)arg1 ;
+(unsigned long long)audioScalingModeFromOptions:(id)arg1 ;
+(long long)numberOfLayersFromOptions:(id)arg1 ;
+(char)isLayerEffectAuthoredFromOptions:(id)arg1 ;
+(char)useTitleEffectFromOptions:(id)arg1 ;
+(id)subtitlesFromOptions:(id)arg1 ;
+(char)collectVersionInformationFromOptions:(id)arg1 ;
+(id)styleFromOptions:(id)arg1 ;
+(id)colorSchemeFromOptions:(id)arg1 ;
+(CGColorRef)backgroundColorFromOptions:(id)arg1 ;
+(id)exportTransitionIDFromOptions:(id)arg1 ;
+(double)exportTransitionDurationFromOptions:(id)arg1 ;
+(char)shouldComputeLoopTransitionFromOptions:(id)arg1 ;
+(double)transitionDurationFromOptions:(id)arg1 ;
+(char)useIntroTransition:(id)arg1 ;
+(id)introEffectIDFromOptions:(id)arg1 ;
+(double)introDurationFromOptions:(id)arg1 ;
+(id)outroEffectIDFromOptions:(id)arg1 ;
+(double)outroDurationFromOptions:(id)arg1 ;
+(char)layerHasImagesFromOptions:(id)arg1 ;
+(long long)layerIndexFromOptions:(id)arg1 ;
+(id)effectListFromOptions:(id)arg1 ;
+(char)canRepeatEffectWithPreset:(id)arg1 ;
+(char)canRepeatPreset:(id)arg1 ;
+(char)useLargestEffectsFromOptions:(id)arg1 ;
+(char)matchEffectsUsingTagsFromOptions:(id)arg1 ;
+(id)titleEffectFromOptions:(id)arg1 ;
+(char)useImageOnlyTitleEffectFromOptions:(id)arg1 ;
+(char)pickEffectsEvenlyByIDWithOptions:(id)arg1 ;
+(id)lastPresetFromOptions:(id)arg1 ;
+(id)idFromPresetID:(id)arg1 ;
+(double)aspectRatioFromOptions:(id)arg1 ;
+(unsigned long long)screenSizeFromOptions:(id)arg1 ;
+(char)useTransitionLayoutTagsWithOptions:(id)arg1 ;
+(char)layerCanSkipScaleCalculation:(id)arg1 withOptions:(id)arg2 ;
+(double)audioDurationFromOptions:(id)arg1 ;
+(double)audioDurationFactorFromOptions:(id)arg1 ;
+(double)durationPerEffectFromOptions:(id)arg1 ;
+(double)layerTimeScaleFromOptions:(id)arg1 ;
+(double)minimumTransitionDurationFromOptions:(id)arg1 ;
+(double)minimumEffectDurationFromOptions:(id)arg1 ;
+(char)matchPhasesWithTransitionFromOptions:(id)arg1 ;
+(char)useUniformDurations:(id)arg1 ;
+(char)scaleOutroEffectFromOptions:(id)arg1 ;
+(char)scaleEffectsForPanoramasFromOptions:(id)arg1 ;
+(double)breakDurationScaleFromOptions:(id)arg1 ;
+(double)portraitBreakDurationScaleFromOptions:(id)arg1 ;
+(id)customDurationsFromOptions:(id)arg1 ;
+(double)baseBreakAspectRatioFromOptions:(id)arg1 ;
+(double)basePortraitBreakAspectRatioFromOptions:(id)arg1 ;
+(id)layerDescriptionForLayerWithZIndex:(long long)arg1 forStyle:(id)arg2 ;
+(double)maximumTransitionDurationFromOptions:(id)arg1 ;
+(char)lockTransitionDurationFromOptions:(id)arg1 ;
+(char)canAdjustPhaseDurations:(id)arg1 ;
+(NSRange)reconfigureRangeFromOptions:(id)arg1 ;
+(char)shouldComputeSlideFiltersFromOptions:(id)arg1 ;
+(char)shouldComputeTransitionsFromOptions:(id)arg1 ;
+(char)canHaveTransitionsFromOptions:(id)arg1 ;
+(double)layerOffsetFromOptions:(id)arg1 ;
+(char)shouldComputeFramesFromOptions:(id)arg1 ;
+(double)movieVolumeFromOptions:(id)arg1 ;
+(char)shouldDuckMoviesFromOptions:(id)arg1 ;
+(char)repeatTransitionsFromOptions:(id)arg1 ;
+(char)useBestAspectRatioFromOptions:(id)arg1 ;
+(double)effectPadding:(id)arg1 ;
+(char)padTextOnlyEffects:(id)arg1 ;
+(char)fitMoviesWhenPossibleFromOptions:(id)arg1 ;
+(char)needsFitMovieAttributeFromOptions:(id)arg1 ;
+(char)effectNeedsPreviousAttributesFromOptions:(id)arg1 ;
+(id)transitionListFromOptions:(id)arg1 ;
+(char)pickTransitionsEvenlyByIDWithOptions:(id)arg1 ;
+(double)multilineSizeFactorFromOptions:(id)arg1 ;
+(id)gapInformationFromOptions:(id)arg1 ;
+(id)loopTransitionIDFromOptions:(id)arg1 ;
+(id)presetIDFromPresetID:(id)arg1 ;
+(char)fadeOutAudioFromOptions:(id)arg1 ;
+(char)effectDecidesTransitionFromOptions:(id)arg1 ;
+(id)ignoreTransitionListFromOptions:(id)arg1 ;
+(char)aspectRatioMatchesDefault:(id)arg1 withOptions:(id)arg2 ;
+(unsigned long long)reorderModeFromOptions:(id)arg1 ;
+(char)requestGeneratedImagesFromOptions:(id)arg1 ;
+(id)urlsFromPaths:(id)arg1 ;
+(unsigned long long)croppingModeFromOptions:(id)arg1 ;
+(unsigned long long)croppingModeForFitMoviesFromOptions:(id)arg1 ;
+(double)kenBurnsLikelihoodFromOptions:(id)arg1 ;
+(double)maxKenBurnsZoomFromOptions:(id)arg1 ;
+(double)kenBurnsPanFactorFromOptions:(id)arg1 ;
+(double)kenBurnsStartZoomLevelFromOptions:(id)arg1 ;
+(double)kenBurnsEndZoomLevelFromOptions:(id)arg1 ;
+(char)kenBurnsAlwaysZoomInFromOptions:(id)arg1 ;
+(char)kenBurnsBreaksFromOptions:(id)arg1 ;
+(char)easeKenBurnsPanFromOptions:(id)arg1 ;
+(long long)kenBurnsLevelFromOptions:(id)arg1 ;
+(long long)kenBurnsOffsetTypeFromOptions:(id)arg1 ;
+(double)beatFactorFromOptions:(id)arg1 ;
+(char)useROIFromOptions:(id)arg1 ;
+(double)kenBurnsZoomFactorFromOptions:(id)arg1 ;
+(long long)maxNumberOfSlidesToPreloadFromOptions:(id)arg1 ;
+(char)useROIAspectRatioFromOptions:(id)arg1 ;
+(char)alwaysIncludeLastTransitionFromOptions:(id)arg1 ;
+(id)layerTypeFromOptions:(id)arg1 ;
+(unsigned long long)regionOfInterestPickModeFromOptions:(id)arg1 ;
+(char)performFaceDetectionFromOptions:(id)arg1 ;
+(double)fadeOutDurationFromOptions:(id)arg1 ;
+(CGRect)rectToFitIn:(CGRect)arg1 withAspectRatio:(double)arg2 ;
+(CGPoint)kbCenterPointFromRect:(CGRect)arg1 ;
+(double)distanceBetween:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
@end
