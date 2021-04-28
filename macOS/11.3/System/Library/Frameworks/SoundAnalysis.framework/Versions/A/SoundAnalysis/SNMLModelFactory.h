/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SNMLModelFactory : NSObject
+(id)sharedLockedVGGishFeatureExtractor;
+(id)sharedLockedVGGishNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1 ;
+(id)sharedLockedSoundPrint100kFeatureExtractor;
+(id)sharedLockedSoundPrint100kNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1 ;
+(id)sharedLockedModelWithKey:(id)arg1 orCreateNewModelWithWithFunction:(/*^block*/id)arg2 ;
+(id)createModelOfClass:(Class)arg1 ;
+(Class)vggishFeatureExtractorModelClass;
+(id)sharedLockedModelOfClass:(Class)arg1 ;
+(Class)vggishModelClassForSoundIdentifier:(id)arg1 ;
+(Class)soundPrint100kFeatureExtractorModelClass;
+(Class)soundprint100kModelClassForSoundIdentifier:(id)arg1 ;
+(id)createVGGishFeatureExtractor;
+(id)createVGGishNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1 ;
+(id)createSoundPrint100kFeatureExtractor;
+(id)createSoundPrint100kNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1 ;
@end

