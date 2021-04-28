/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRConfidenceThresholdProviding.h>

@class NSURL, NSArray, NSOrderedSet, NSNumber, NSString;

@interface CRRecognizerConfiguration : NSObject <CRConfidenceThresholdProviding> {

	char _cpuOnly;
	char _decodeWithLM;
	int _colorSpace;
	float _precisionThreshold;
	float _mediumConfidenceThreshold;
	float _highConfidenceThreshold;
	NSURL* _customModelURL;
	long long _batchSize;
	long long _maxConcurrentBatches;
	NSArray* _inputWidths;
	double _inputHeight;
	double _angleThresholdForRotatedCrops;
	long long _numTopStringCandidates;
	NSOrderedSet* _languages;
	NSArray* _customWords;
	NSNumber* _lexiconWeight;
	NSNumber* _characterLMWeight;
	NSNumber* _wordLMWeight;
	unsigned long long _minTitleLength;
	double _minTitleProb;

}

@property (assign) float mediumConfidenceThreshold;                     //@synthesize mediumConfidenceThreshold=_mediumConfidenceThreshold - In the implementation block
@property (assign) float highConfidenceThreshold;                       //@synthesize highConfidenceThreshold=_highConfidenceThreshold - In the implementation block
@property (readonly) int colorSpace;                                    //@synthesize colorSpace=_colorSpace - In the implementation block
@property (readonly) NSURL * customModelURL;                            //@synthesize customModelURL=_customModelURL - In the implementation block
@property (readonly) long long batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (readonly) long long maxConcurrentBatches;                    //@synthesize maxConcurrentBatches=_maxConcurrentBatches - In the implementation block
@property (readonly) NSArray * inputWidths;                             //@synthesize inputWidths=_inputWidths - In the implementation block
@property (readonly) double inputHeight;                                //@synthesize inputHeight=_inputHeight - In the implementation block
@property (readonly) double angleThresholdForRotatedCrops;              //@synthesize angleThresholdForRotatedCrops=_angleThresholdForRotatedCrops - In the implementation block
@property (readonly) char cpuOnly;                                      //@synthesize cpuOnly=_cpuOnly - In the implementation block
@property (readonly) char decodeWithLM;                                 //@synthesize decodeWithLM=_decodeWithLM - In the implementation block
@property (readonly) long long numTopStringCandidates;                  //@synthesize numTopStringCandidates=_numTopStringCandidates - In the implementation block
@property (readonly) NSOrderedSet * languages;                          //@synthesize languages=_languages - In the implementation block
@property (readonly) NSArray * customWords;                             //@synthesize customWords=_customWords - In the implementation block
@property (readonly) float precisionThreshold;                          //@synthesize precisionThreshold=_precisionThreshold - In the implementation block
@property (readonly) NSNumber * lexiconWeight;                          //@synthesize lexiconWeight=_lexiconWeight - In the implementation block
@property (readonly) NSNumber * characterLMWeight;                      //@synthesize characterLMWeight=_characterLMWeight - In the implementation block
@property (readonly) NSNumber * wordLMWeight;                           //@synthesize wordLMWeight=_wordLMWeight - In the implementation block
@property (readonly) unsigned long long minTitleLength;                 //@synthesize minTitleLength=_minTitleLength - In the implementation block
@property (readonly) double minTitleProb;                               //@synthesize minTitleProb=_minTitleProb - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedLanguagesForVersion:(long long)arg1 ;
+(id)languageSetFromInputLanguages:(id)arg1 supportedLanguages:(id)arg2 ;
-(int)colorSpace;
-(NSOrderedSet *)languages;
-(double)inputHeight;
-(long long)batchSize;
-(NSArray *)customWords;
-(NSURL *)customModelURL;
-(char)cpuOnly;
-(double)angleThresholdForRotatedCrops;
-(id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2 ;
-(float)mediumConfidenceThreshold;
-(float)highConfidenceThreshold;
-(double)minTitleProb;
-(unsigned long long)minTitleLength;
-(NSNumber *)lexiconWeight;
-(NSNumber *)characterLMWeight;
-(NSNumber *)wordLMWeight;
-(id)initV1DefaultConfig;
-(id)initV2DefaultConfigWithOptions:(id)arg1 ;
-(void)setConfidenceThresholdsForRevision:(unsigned long long)arg1 ;
-(void)loadLanguageModelWeightsForLanguageIdentifier:(id)arg1 rev:(unsigned long long)arg2 ;
-(char)usesAppleNeuralEngine;
-(long long)maxConcurrentBatches;
-(NSArray *)inputWidths;
-(char)decodeWithLM;
-(long long)numTopStringCandidates;
-(float)precisionThreshold;
-(void)setMediumConfidenceThreshold:(float)arg1 ;
-(void)setHighConfidenceThreshold:(float)arg1 ;
@end
