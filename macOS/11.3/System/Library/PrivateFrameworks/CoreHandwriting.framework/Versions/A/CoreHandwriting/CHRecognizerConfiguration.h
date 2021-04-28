/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSLocale;

@interface CHRecognizerConfiguration : NSObject {

	unsigned long long _language;
	unsigned long long _script;
	char _enableCachingIfAvailable;
	char _enableGen2ModelIfAvailable;
	char _enableGen2CharacterLMIfAvailable;
	int _mode;
	int _contentType;
	int _autoCapitalizationMode;
	int _autoCorrectionMode;
	NSLocale* _locale;

}

@property (nonatomic,readonly) int mode;                                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) int contentType;                                    //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) int contentTypeForNoSpaceRecognition; 
@property (nonatomic,readonly) int autoCapitalizationMode;                         //@synthesize autoCapitalizationMode=_autoCapitalizationMode - In the implementation block
@property (nonatomic,readonly) int autoCorrectionMode;                             //@synthesize autoCorrectionMode=_autoCorrectionMode - In the implementation block
@property (nonatomic,readonly) char enableCachingIfAvailable;                      //@synthesize enableCachingIfAvailable=_enableCachingIfAvailable - In the implementation block
@property (nonatomic,readonly) char enableGen2ModelIfAvailable;                    //@synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable - In the implementation block
@property (nonatomic,readonly) char enableGen2CharacterLMIfAvailable;              //@synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable - In the implementation block
+(id)defaultLocaleForRecognitionType:(int)arg1 withMode:(int)arg2 ;
+(int)validateRecognitionMode:(int)arg1 ;
+(char)isLocaleSupported:(id)arg1 withMode:(int)arg2 ;
+(id)stringForRecognitionMode:(int)arg1 ;
+(CGSize)defaultMinimumDrawingSize;
+(char)shouldApplyLatinSpacingForLocale:(id)arg1 ;
+(id)modelNameChinese;
+(id)stringForRecognitionContentType:(int)arg1 ;
+(id)stringForAutoCapitalizationMode:(int)arg1 ;
+(id)stringForAutoCorrectionMode:(int)arg1 ;
+(long long)drawingStrokeLimitForLocale:(id)arg1 ;
+(id)recognitionEngineCachingKeyForRecognitionLocale:(id)arg1 ;
+(id)modelNameEPFIGS;
+(id)forcedGen2ModelLocaleForLocale:(id)arg1 ;
+(void)_decodeLocale:(id)arg1 supportedLanguage:(unsigned long long*)arg2 supportedScript:(unsigned long long*)arg3 ;
+(id)_stringForRecognitionLanguage:(unsigned long long)arg1 ;
+(id)_stringForRecognitionScript:(unsigned long long)arg1 ;
+(unsigned long long)supportedScriptForLocale:(id)arg1 ;
+(unsigned long long)supportedLanguageForLocale:(id)arg1 ;
+(char)isLanguageSupported:(unsigned long long)arg1 withMode:(int)arg2 ;
+(id)effectiveTextInputRecognitionLocales:(id)arg1 ;
+(char)shouldSwapTopTwoResults:(id)arg1 locales:(id)arg2 ;
+(char)shouldPerformStrictCandidateFiltering:(id)arg1 ;
+(id)spellCheckingLocaleForRecognitionLocale:(id)arg1 string:(id)arg2 ;
+(char)shouldRemoveSpaceBetweenPreviousChar:(id)arg1 andNextChar:(id)arg2 inLocale:(id)arg3 ;
+(char)shouldInsertSpaceBetweenPreviousChar:(id)arg1 andNextChar:(id)arg2 inLocale:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSLocale *)locale;
-(int)contentType;
-(int)mode;
-(char)enableCachingIfAvailable;
-(char)enableGen2ModelIfAvailable;
-(char)enableGen2CharacterLMIfAvailable;
-(id)initWithMode:(int)arg1 locale:(id)arg2 contentType:(int)arg3 autoCapitalizationMode:(int)arg4 autoCorrectionMode:(int)arg5 enableCachingIfAvailable:(char)arg6 enableGen2ModelIfAvailable:(char)arg7 enableGen2CharacterLMIfAvailable:(char)arg8 ;
-(unsigned)requiredInappropriateFilteringFlags;
-(char)shouldGenerateDigitLetterAlternatives;
-(char)shouldEnforceGrammarOnTransliterations;
-(int)mecabraInputMethodType;
-(CHNeuralNetwork*)newRecognitionEngine;
-(CHNeuralNetwork*)newFreeFormEngine;
-(void*)newLanguageModel;
-(id)newSpellChecker;
-(const LXLexiconRef)newStaticLexicon:(id*)arg1 ;
-(const LXLexiconRef)newPhraseLexicon:(id*)arg1 ;
-(void*)newCJKStaticLexicon;
-(CFBurstTrieRef)newOVSTrie;
-(id)newPatternFST;
-(id)newPostProcessingFST;
-(Network*)newGrammarFST;
-(Network*)newRadicalClusterFST;
-(VariantMap*)newTransliterationVariantMap;
-(void*)newCharacterLanguageModelAndMap:(map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>*)arg1 force:(char)arg2 ;
-(id)newStrokeTransitionModel;
-(id)newCutpointModel;
-(id)newCTCRecognitionModel;
-(id)newPostProcessorWithStaticLexicon:(LXLexiconRef)arg1 customLexicon:(LXLexiconRef)arg2 phraseLexicon:(LXLexiconRef)arg3 customPhraseLexicon:(LXLexiconRef)arg4 characterLM:(id)arg5 recognizer:(id)arg6 textReplacements:(id)arg7 postProcessingFST:(id)arg8 languageModel:(void*)arg9 ;
-(id)newOVSCleanupPostProcessorWithRecognizer:(id)arg1 ;
-(id)newCTCTextDecoderWithStaticLexicon:(LXLexiconRef)arg1 customLexicon:(LXLexiconRef)arg2 wordLanguageModel:(void*)arg3 ;
-(char)shouldForwardMecabraOTAAssetsUpdate;
-(char)shouldRefineChineseCharacterCandidates;
-(char)shouldApplyLMRescoring;
-(char)shouldTransliterateAndSynthetizeCandidates;
-(char)shouldPromoteChineseCommonCharacters;
-(char)shouldTransformCharacterProbabilitiesIntoLogScores;
-(char)shouldPerformGlobalBestSearch;
-(char)shouldPerformGlobalBestSearchWithSmallLattice;
-(char)shouldPerformIntegratedLexiconExpansion;
-(char)shouldPenalizeLetterInsertion;
-(char)shouldPerformMultiWordsExpansion;
-(char)shouldApplyLexicalPenalty;
-(char)shouldExpandNonSpaceSeparators;
-(char)shouldComputeStrokePenalties;
-(char)shouldExpandCodePoints;
-(char)shouldPenalizePrefixes;
-(char)shouldApplyRomanPostProcessing;
-(char)shouldApplyChinesePostProcessing;
-(char)shouldAutoCapitalize;
-(char)shouldUseTokenPrecedingSpaces;
-(char)shouldTransliterateSentences;
-(char)shouldApplyDiacriticSensitivity;
-(char)shouldUseCaching;
-(unsigned long long)supportedSegmentationStrategy;
-(char)shouldPerformRegularSpaceRecognition;
-(char)shouldPerformNoSpaceRecognition;
-(char)shouldFallbackOnSingleCharacterExpansion;
-(char)shouldComposeLexiconWithNetwork;
-(char)shouldExpandLexiconInNetwork;
-(int)contentTypeForNoSpaceRecognition;
-(char)shouldKeepDuplicateTokenIDs;
-(char)shouldKeepOutOfPatternCandidates;
-(char)shouldDetectChinesePunctuation;
-(char)shouldDetectRomanPunctuation;
-(long long)engineCandidateCount;
-(char)shouldApplyCandidatesThresholding;
-(char)shouldRelaxFinalCandidatesThresholding;
-(char)shouldApplyLMSorting;
-(/*^block*/id)decodingCommitActionBlock;
-(char)shouldRunNextGenRecognizer;
-(char)shouldTreatAllSmallStrokesAsPunctuation;
-(char)shouldApplyCharacterLMRescoring;
-(char)shouldReplaceInvalidTokenIDs;
-(long long)precedingSpaceDefaultBehavior;
-(long long)maxRecognitionResultDefaultCount;
-(int)autoCapitalizationMode;
-(int)autoCorrectionMode;
-(char)isEqualToRecognizerConfiguration:(id)arg1 ;
-(char)hasSameResourcesAsConfiguration:(id)arg1 ;
-(char)hasSamePostProcessingAsConfiguration:(id)arg1 ;
-(id)configurationKey;
-(char)shouldRunNextGenCharacterLM;
-(unsigned long long)effectiveEngineLanguage;
-(char)shouldTransliterateHalfWidthPunctuations;
-(char)shouldApplySemanticTokenization;
-(char)shouldIdentifyChangeableColumns;
-(char)shouldMergeNoPrecedingWhiteSpaceColumns;
-(char)shouldAutoCorrect;
-(id)linguisticResourcesFallbackLocale;
-(char)shouldReorderSCTCConfusion;
-(char)shouldTransliterateConfusableCharacters;
-(char)shouldRefineCandidates;
-(char)shouldMarkMultiWordOVS;
-(char)shouldTransliterateFrenchLigatures;
-(id)languageResourceBundleWithStaticLexicon:(LXLexiconRef)arg1 customLexicon:(LXLexiconRef)arg2 wordLanguageModel:(void*)arg3 ;
-(double)decodingLexiconWeight;
-(double)decodingCharacterLMWeight;
-(double)characterLMLowerBoundLogProbability;
-(double)decodingWordLMWeight;
-(char)shouldPreserveLegacyTranscriptionPaths;
@end

