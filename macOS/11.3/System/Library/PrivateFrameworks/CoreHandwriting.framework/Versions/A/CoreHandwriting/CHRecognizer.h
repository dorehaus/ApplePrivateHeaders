/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/CHRecognizing.h>

@protocol OS_dispatch_queue;
@class NSLocale, NSCharacterSet, CHRecognitionInsightRequest, CHRecognitionInsight, NSArray, CHStrokeTransitionModel, CHCutpointModel, CHCTCRecognitionModel, CVNLPCTCTextDecoder, NSObject, CHPatternNetwork, CHRecognizerConfiguration, NSDictionary, NSMutableDictionary, CHSpellChecker, NSURL, CHDrawing, NSString, NSMutableIndexSet, CHPostProcessingManager;

@interface CHRecognizer : NSObject <CHRecognizing> {

	CHRecognitionInsightRequest* _nextRecognitionInsightRequest;
	CHRecognitionInsight* _activeRecognitionInsight;
	NSArray* _whitelistMecabraRareCharacters;
	char _saveDrawingUntilNextCandidateAccepted;
	int _recognitionType;
	unsigned long long _maxRecognitionResultCount;
	NSCharacterSet* _activeCharacterSet;
	CHNeuralNetwork* _engine;
	CHNeuralNetwork* _freeformEngine;
	CHStrokeTransitionModel* _strokeTransitionModel;
	CHCutpointModel* _cutpointModel;
	CHCTCRecognitionModel* _recognitionModel;
	CVNLPCTCTextDecoder* _textDecoder;
	NSObject*<OS_dispatch_queue> _recognitionQueue;
	Network* _radicalClusterFST;
	Network* _formatGrammarFST;
	CHPatternNetwork* _patternFST;
	CHPatternNetwork* _postProcessingFST;
	CHRecognizerConfiguration* _configuration;
	void* _languageModel;
	void* _lmVocabulary;
	void* _characterLanguageModel;
	MecabraRef _mecabra;
	void* _cjkStaticLexicon;
	void* _cjkDynamicLexicon;
	LXLexiconRef _staticLexicon;
	LXLexiconRef _phraseLexicon;
	LXLexiconRef _customLexicon;
	LXLexiconRef _customPhraseLexicon;
	NSDictionary* _textReplacements;
	NSMutableDictionary* _textReplacementLowercasedKeyMapping;
	CHSpellChecker* _spellChecker;
	CFBurstTrieRef _ovsTrie;
	NSURL* _learningDictionaryURL;
	CHDrawing* _savedDrawing;
	NSString* _savedTop1CandidateString;
	CHDrawing* _cachedDrawing;
	VariantMap* _transliterationVariantMap;
	void* _icuTransliterator;
	unsigned long long _lastCharacterSegmentCount;
	NSMutableIndexSet* _lastCharacterSegmentIndexes;
	CHPostProcessingManager* _postProcessor;
	CHPostProcessingManager* _ovsCleanupPostProcessor;
	CGSize _minimumDrawingSize;
	map<std::__1::set<long, std::__1::less<long>, std::__1::allocator<long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>, std::__1::less<std::__1::set<long, std::__1::less<long>, std::__1::allocator<long>>>, std::__1::allocator<std::__1::pair<const std::__1::set<long, std::__1::less<long>, std::__1::allocator<long>>, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>>>>* _cachedResults;
	map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>* _characterIDMap;

}

@property (nonatomic,readonly) CHRecognitionInsight * recordedInsightFromLastRequest; 
@property (assign,nonatomic) CHNeuralNetwork* engine;                                                          //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) CHNeuralNetwork* freeformEngine;                                                  //@synthesize freeformEngine=_freeformEngine - In the implementation block
@property (nonatomic,retain) CHStrokeTransitionModel * strokeTransitionModel;                                  //@synthesize strokeTransitionModel=_strokeTransitionModel - In the implementation block
@property (nonatomic,retain) CHCutpointModel * cutpointModel;                                                  //@synthesize cutpointModel=_cutpointModel - In the implementation block
@property (nonatomic,retain) CHCTCRecognitionModel * recognitionModel;                                         //@synthesize recognitionModel=_recognitionModel - In the implementation block
@property (nonatomic,retain) CVNLPCTCTextDecoder * textDecoder;                                                //@synthesize textDecoder=_textDecoder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recognitionQueue;                                    //@synthesize recognitionQueue=_recognitionQueue - In the implementation block
@property (assign,nonatomic) Network* radicalClusterFST;                                                       //@synthesize radicalClusterFST=_radicalClusterFST - In the implementation block
@property (assign,nonatomic) Network* formatGrammarFST;                                                        //@synthesize formatGrammarFST=_formatGrammarFST - In the implementation block
@property (nonatomic,retain) CHPatternNetwork * patternFST;                                                    //@synthesize patternFST=_patternFST - In the implementation block
@property (nonatomic,retain) CHPatternNetwork * postProcessingFST;                                             //@synthesize postProcessingFST=_postProcessingFST - In the implementation block
@property (setter=_setConfiguration:,nonatomic,retain) CHRecognizerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) void* languageModel;                                                              //@synthesize languageModel=_languageModel - In the implementation block
@property (assign,nonatomic) void* lmVocabulary;                                                               //@synthesize lmVocabulary=_lmVocabulary - In the implementation block
@property (assign,nonatomic) void* characterLanguageModel;                                                     //@synthesize characterLanguageModel=_characterLanguageModel - In the implementation block
@property (assign,nonatomic) MecabraRef mecabra;                                                               //@synthesize mecabra=_mecabra - In the implementation block
@property (assign,nonatomic) void* cjkStaticLexicon;                                                           //@synthesize cjkStaticLexicon=_cjkStaticLexicon - In the implementation block
@property (assign,nonatomic) void* cjkDynamicLexicon;                                                          //@synthesize cjkDynamicLexicon=_cjkDynamicLexicon - In the implementation block
@property (assign,nonatomic) LXLexiconRef staticLexicon;                                                       //@synthesize staticLexicon=_staticLexicon - In the implementation block
@property (assign,nonatomic) LXLexiconRef phraseLexicon;                                                       //@synthesize phraseLexicon=_phraseLexicon - In the implementation block
@property (assign,nonatomic) LXLexiconRef customLexicon;                                                       //@synthesize customLexicon=_customLexicon - In the implementation block
@property (assign,nonatomic) LXLexiconRef customPhraseLexicon;                                                 //@synthesize customPhraseLexicon=_customPhraseLexicon - In the implementation block
@property (nonatomic,retain) NSDictionary * textReplacements;                                                  //@synthesize textReplacements=_textReplacements - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * textReplacementLowercasedKeyMapping;                        //@synthesize textReplacementLowercasedKeyMapping=_textReplacementLowercasedKeyMapping - In the implementation block
@property (nonatomic,retain) CHSpellChecker * spellChecker;                                                    //@synthesize spellChecker=_spellChecker - In the implementation block
@property (assign,nonatomic) CFBurstTrieRef ovsTrie;                                                           //@synthesize ovsTrie=_ovsTrie - In the implementation block
@property (nonatomic,retain) NSURL * learningDictionaryURL;                                                    //@synthesize learningDictionaryURL=_learningDictionaryURL - In the implementation block
@property (nonatomic,copy) CHDrawing * savedDrawing;                                                           //@synthesize savedDrawing=_savedDrawing - In the implementation block
@property (nonatomic,copy) NSString * savedTop1CandidateString;                                                //@synthesize savedTop1CandidateString=_savedTop1CandidateString - In the implementation block
@property (assign,nonatomic) char saveDrawingUntilNextCandidateAccepted;                                       //@synthesize saveDrawingUntilNextCandidateAccepted=_saveDrawingUntilNextCandidateAccepted - In the implementation block
@property (nonatomic,copy) CHDrawing * cachedDrawing;                                                          //@synthesize cachedDrawing=_cachedDrawing - In the implementation block
@property (assign,nonatomic) map<std::__1::set<long cachedResults;                                             //@synthesize cachedResults=_cachedResults - In the implementation block
@property (assign,nonatomic) map<unsigned int characterIDMap;                                                  //@synthesize characterIDMap=_characterIDMap - In the implementation block
@property (assign,nonatomic) VariantMap* transliterationVariantMap;                                            //@synthesize transliterationVariantMap=_transliterationVariantMap - In the implementation block
@property (assign,nonatomic) void* icuTransliterator;                                                          //@synthesize icuTransliterator=_icuTransliterator - In the implementation block
@property (assign,nonatomic) unsigned long long lastCharacterSegmentCount;                                     //@synthesize lastCharacterSegmentCount=_lastCharacterSegmentCount - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * lastCharacterSegmentIndexes;                                  //@synthesize lastCharacterSegmentIndexes=_lastCharacterSegmentIndexes - In the implementation block
@property (nonatomic,retain) CHPostProcessingManager * postProcessor;                                          //@synthesize postProcessor=_postProcessor - In the implementation block
@property (nonatomic,retain) CHPostProcessingManager * ovsCleanupPostProcessor;                                //@synthesize ovsCleanupPostProcessor=_ovsCleanupPostProcessor - In the implementation block
@property (assign,nonatomic) int recognitionMode; 
@property (nonatomic,copy) NSLocale * locale; 
@property (assign,nonatomic) int recognitionType;                                                              //@synthesize recognitionType=_recognitionType - In the implementation block
@property (assign,nonatomic) char enableCachingIfAvailable; 
@property (assign,nonatomic) char enableGen2ModelIfAvailable; 
@property (assign,nonatomic) char enableGen2CharacterLMIfAvailable; 
@property (assign,nonatomic) int contentType; 
@property (assign,nonatomic) int autoCapitalizationMode; 
@property (assign,nonatomic) int autoCorrectionMode; 
@property (assign,nonatomic) unsigned long long maxRecognitionResultCount;                                     //@synthesize maxRecognitionResultCount=_maxRecognitionResultCount - In the implementation block
@property (nonatomic,retain) NSCharacterSet * activeCharacterSet;                                              //@synthesize activeCharacterSet=_activeCharacterSet - In the implementation block
@property (assign,nonatomic) CGSize minimumDrawingSize;                                                        //@synthesize minimumDrawingSize=_minimumDrawingSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isLocaleSupported:(id)arg1 withMode:(int)arg2 ;
+(unsigned long long)_encodeTempDelayedSegmentID:(unsigned long long)arg1 ;
+(double)_computeEditPenalizationFromString:(id)arg1 toReferenceString:(id)arg2 withSuffix:(id)arg3 withCaseSensitivity:(char)arg4 withFirstLetterCaseSensitivity:(char)arg5 withDiacriticSensitivity:(char)arg6 withDiacriticsCharSet:(id)arg7 withConsumableStrokesCharSet:(id)arg8 outputSuffix:(id*)arg9 lexiconExtraCharacters:(id*)arg10 firstLetterCaseFlipped:(char*)arg11 ;
+(unsigned long long)_decodeTempDelayedSegmentID:(unsigned long long)arg1 ;
+(void)_updatePrecedingAndTrailingSeparatorsForTopCandidate:(id)arg1 history:(id)arg2 textAfter:(id)arg3 locale:(id)arg4 outTrailingSeparator:(id*)arg5 inFirstTokenHasPrecedingSpace:(char)arg6 outFirstTokenHasPrecedingSpace:(char*)arg7 ;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(int)contentType;
-(void)setContentType:(int)arg1 ;
-(CHRecognizerConfiguration *)configuration;
-(CHNeuralNetwork*)engine;
-(void)setEngine:(CHNeuralNetwork*)arg1 ;
-(void*)characterLanguageModel;
-(void*)languageModel;
-(map<std::__1::set<long)cachedResults;
-(void)setCachedResults:(map<std::__1::set<long)arg1 ;
-(char)enableCachingIfAvailable;
-(void)setEnableCachingIfAvailable:(char)arg1 ;
-(char)enableGen2ModelIfAvailable;
-(void)setEnableGen2ModelIfAvailable:(char)arg1 ;
-(char)enableGen2CharacterLMIfAvailable;
-(void)setEnableGen2CharacterLMIfAvailable:(char)arg1 ;
-(id)initWithMode:(int)arg1 locale:(id)arg2 learningDictionaryURL:(id)arg3 recognizerOptions:(id)arg4 ;
-(void)_reloadEngineAndResources;
-(id)initWithType:(int)arg1 mode:(int)arg2 locale:(CFLocaleRef)arg3 learningDictionaryURL:(id)arg4 ;
-(id)_defaultPunctuationStringsOutputScores:(id*)arg1 maxCandidateCount:(long long)arg2 ;
-(char)_isInappropriateString:(id)arg1 ;
-(char)_isInappropriateLexiconEntry:(LXEntryRef)arg1 ;
-(id)obfuscateString:(id)arg1 ;
-(char)_isInappropriateString:(id)arg1 withLexicon:(LXLexiconRef)arg2 ;
-(char)_isInappropriateString:(id)arg1 withTrie:(CFBurstTrieRef)arg2 ;
-(id)_transliterationVariantsForString:(id)arg1 ;
-(id)_alternativeInterpretationsForString:(id)arg1 ;
-(void)_unloadEngineAndResources;
-(id)whitelistMecabraRareCharacters;
-(void)_initializeTextDecoder;
-(void)_initializePostProcessor;
-(void)_loadMecabraIfNeeded;
-(void)logCandidateIfAppropriate:(void*)arg1 ;
-(id)initWithType:(int)arg1 mode:(int)arg2 locale:(CFLocaleRef)arg3 ;
-(id)sketchDescriptionForCode:(int)arg1 ;
-(id)sketchCodeForDescription:(id)arg1 ;
-(unsigned long long)_effectiveMaxRecognitionResultCount;
-(id)chatBubbleCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 rejectionResult:(id*)arg3 ;
-(id)ellipseCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)rectangleCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)triangleCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)starCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)lineCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 rejectionResult:(id*)arg3 ;
-(id)heartCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)pentagonCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)outlineArrowCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)manhattanLineCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 rejectionResult:(id*)arg3 ;
-(id)cloudCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 rejectionResult:(id*)arg3 ;
-(CGRect)_initialContextRectFromRecognizerOptions:(id)arg1 ;
-(void)_refineChineseCharacterCandidates:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 drawing:(id)arg2 ;
-(void)_rescoreCandidatesWithLanguageModel:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 history:(id)arg2 ;
-(void)_applyTransliterationAndSyntheticCandidates:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 ;
-(char)isRareChineseEntry:(id)arg1 ;
-(id)_resolvedStrokeIndexes:(id)arg1 segmentGroup:(id)arg2 segmentOffset:(long long)arg3 substrokeCount:(long long*)arg4 ;
-(id)mecabraRareWordIndexes:(id)arg1 wordRanges:(id)arg2 ;
-(id)_textReplacementResultForLegacyRecognitionResult:(id)arg1 ;
-(void)_removeOVSResults:(id)arg1 withHistory:(id)arg2 ;
-(double)_calculateJointWordLMScoreForString:(id)arg1 wordRanges:(id)arg2 wordIDs:(id)arg3 patternEntries:(id)arg4 history:(unsigned*)arg5 historyLength:(unsigned long long)arg6 ;
-(id)_tokensUsingLMTokenizerForString:(id)arg1 wordRanges:(id)arg2 nonWordPatterns:(id)arg3 outTokenIDs:(id*)arg4 ;
-(id)tokenizedTextResultForRomanLatticePaths:(const vector<LatticePath, std::__1::allocator<LatticePath>>*)arg1 history:(id)arg2 activeHistoryRange:(NSRange)arg3 isMultiWordsPath:(char)arg4 isNoSpacePath:(char)arg5 maximumPathCount:(unsigned long long)arg6 startNode:(long long)arg7 segmentGroup:(id)arg8 precedingSpaceBehavior:(long long)arg9 totalStrokeCount:(long long)arg10 totalSubstrokeCount:(long long)arg11 ;
-(id)tokenizedTextResultForChineseLatticePaths:(const vector<LatticePath, std::__1::allocator<LatticePath>>*)arg1 maximumPathCount:(unsigned long long)arg2 network:(Network*)arg3 mecabraIDs:(vector<int, std::__1::allocator<int>>*)arg4 startNode:(long long)arg5 endNode:(long long)arg6 segmentGroup:(id)arg7 ;
-(id)tokenizedTextResultForRomanNoSpaceLatticePaths:(const vector<LatticePath, std::__1::allocator<LatticePath>>*)arg1 maximumResultCount:(unsigned long long)arg2 activeHistoryRange:(NSRange)arg3 precedingSpaceBehavior:(long long)arg4 totalStrokeCount:(long long)arg5 totalSubstrokeCount:(long long)arg6 ;
-(id)tokenizedTextResultForRomanMultiWordsLatticePaths:(const vector<LatticePath, std::__1::allocator<LatticePath>>*)arg1 maximumResultCount:(unsigned long long)arg2 history:(id)arg3 activeHistoryRange:(NSRange)arg4 startNode:(long long)arg5 segmentGroup:(id)arg6 precedingSpaceBehavior:(long long)arg7 ;
-(id)tokenizedTextResultForRomanSingleWordLatticePaths:(const vector<LatticePath, std::__1::allocator<LatticePath>>*)arg1 history:(id)arg2 activeHistoryRange:(NSRange)arg3 startNode:(long long)arg4 segmentGroup:(id)arg5 ;
-(id)_lexiconCorrectionsForToken:(id)arg1 withLexicon:(LXLexiconRef)arg2 textReplacements:(id)arg3 consumableStrokesSet:(id)arg4 minimumTokenScore:(double)arg5 activeHistoryRange:(NSRange)arg6 outBestTokenScore:(double*)arg7 shouldCapitalizeWord:(char)arg8 shouldSkipEntryCorrection:(char)arg9 allowFullCapsCorrections:(char)arg10 minimalLengthForLowConfidenceCorrections:(long long)arg11 lowConfidenceThreshold:(double)arg12 minimalLengthForCustomCapitalizationCorrections:(long long)arg13 outBestTokenIndex:(long long*)arg14 outFoundTokenInLexicon:(char*)arg15 outFoundCaseMatchingTokenInLexicon:(char*)arg16 outCorrectionFromOutOfContextEntry:(char*)arg17 ;
-(id)_applySentenceTransliterationCandidates:(unsigned short*)arg1 codesLen:(int)arg2 codesMax:(int)arg3 ;
-(id)_tokenizedTextResultFromResults:(id)arg1 segmentGroup:(id)arg2 offsetSegment:(long long)arg3 decodedStrokeSets:(char)arg4 spaceBehavior:(long long)arg5 ;
-(unsigned)_tokenIDForString:(id)arg1 withLexicon:(LXLexiconRef)arg2 outIsInappropriate:(char*)arg3 ;
-(id)_spellCheckerCorrectionsForToken:(id)arg1 ;
-(char)_shouldCapitalizeGivenHistory:(id)arg1 ;
-(char)_updateResults:(id)arg1 string:(id)arg2 score:(double)arg3 recognitionScore:(double)arg4 lexicalEntry:(char)arg5 patternEntry:(char)arg6 isInappropriateWord:(char)arg7 wordID:(unsigned)arg8 wordStrokeSet:(id)arg9 ;
-(void)_filterNonHumanFriendlyCandidates:(id)arg1 ;
-(void)_adjustResultsForConfusableCharacters:(id)arg1 ;
-(void)setCachedDrawing:(CHDrawing *)arg1 ;
-(id)_historyStringFromRecognizerOptions:(id)arg1 ;
-(long long)_precedingSpaceBehaviorFromRecognizerOptions:(id)arg1 ;
-(id)recognitionResultsForSingleCharacterDrawing:(id)arg1 segmentGroup:(id)arg2 options:(id)arg3 history:(id)arg4 ;
-(void)_cachingWithMatchingStrokeRange:(NSRange)arg1 drawing:(id)arg2 ;
-(vector<long, std::__1::allocator<long>>*)_sortedIndexesForSegmentGroup:(id)arg1 drawing:(id)arg2 ;
-(Network*)_candidateNetworkFromSegmentationNetwork:(Network*)arg1 segmentGroup:(id)arg2 drawing:(id)arg3 boundsAtNode:(vector<CGRect, std::__1::allocator<CGRect>>*)arg4 matchingStrokeRange:(NSRange)arg5 sortedSegmentIndexes:(vector<long, std::__1::allocator<long>>*)arg6 shouldCancel:(/*^block*/id)arg7 ;
-(id)_textResultWithNetworkComposeFromCandidateNetwork:(Network*)arg1 segmentGroup:(id)arg2 drawing:(id)arg3 maxRecognitionResultCount:(unsigned long long)arg4 history:(id)arg5 totalStrokeCount:(long long)arg6 totalSubstrokeCount:(long long)arg7 ;
-(id)_textResultWithLexiconExpansionFromCandidateNetwork:(Network*)arg1 history:(id)arg2 prefix:(id)arg3 activeHistoryRange:(NSRange)arg4 rootStaticCursor:(LXCursorRef)arg5 rootCustomCursor:(LXCursorRef)arg6 rootPatternCursor:(id)arg7 segmentGroup:(id)arg8 maxRecognitionResultCount:(unsigned long long)arg9 precedingSpaceBehavior:(long long)arg10 shouldPerformNoSpaceRecognition:(char)arg11 inLatticePaths:(vector<LatticePath, std::__1::allocator<LatticePath>>*)arg12 outLatticePaths:(vector<LatticePath, std::__1::allocator<LatticePath>>*)arg13 totalStrokeCount:(long long)arg14 totalSubstrokeCount:(long long)arg15 shouldCancel:(/*^block*/id)arg16 ;
-(void)_calculateBestTranscriptionPaths:(id*)arg1 scores:(id*)arg2 fromTokenizedResult:(id)arg3 pathCount:(long long)arg4 history:(id)arg5 skipLMRescoring:(char)arg6 ;
-(id)_addAlternativeCandidatesForTokenizedResult:(id)arg1 ;
-(id)_contextTokenIDsFromHistory:(id)arg1 maxCharacterLength:(unsigned long long)arg2 maxTokenCount:(unsigned long long)arg3 ;
-(unsigned*)_createNetworkTruncatedPrefixStringUsingPrefix:(id)arg1 fullHistoryStringLength:(long long)arg2 hasLexiconCursor:(char)arg3 prefixStringLength:(unsigned long long*)arg4 hasComplexChars:(BOOL*)arg5 activeHistoryRange:(NSRange*)arg6 ;
-(unsigned long long)_mininmumPathCount;
-(id)bestPathsFromNetwork:(Network*)arg1 pathCount:(unsigned long long)arg2 staticLexiconCursor:(LXCursorRef)arg3 customLexiconCursor:(LXCursorRef)arg4 patternCursor:(id)arg5 history:(id)arg6 activeHistoryRange:(NSRange)arg7 mecabraIDs:(vector<int, std::__1::allocator<int>>*)arg8 segmentGroup:(id)arg9 precedingSpaceBehavior:(long long)arg10 effectiveContentType:(int)arg11 shouldAllowSpaceInsertion:(char)arg12 inLatticePaths:(vector<LatticePath, std::__1::allocator<LatticePath>>*)arg13 outLatticePaths:(vector<LatticePath, std::__1::allocator<LatticePath>>*)arg14 totalStrokeCount:(long long)arg15 totalSubstrokeCount:(long long)arg16 ;
-(void)_adjustCandidatesForConfusableCharacters:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 ;
-(void)_adjustCandidatesForChinesePunctuation:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 segmentDrawing:(id)arg2 completeDrawing:(id)arg3 ;
-(void)_adjustCandidatesForRomanPunctuation:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 segmentDrawing:(id)arg2 ;
-(void)_addEdgesFromCandidates:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 toEdges:(vector<NetworkEdge, std::__1::allocator<NetworkEdge>>*)arg2 referenceEdge:(const NetworkEdge*)arg3 network:(Network*)arg4 consumedSegmentCount:(long long)arg5 delayedSegmentIDs:(vector<long, std::__1::allocator<long>>*)arg6 numSubstrokes:(long long)arg7 ;
-(double)_candidateLatticePruningThresholdForEdgeType:(char)arg1 ;
-(CGRect)_computeLocalFrameWithLeftBounds:(CGRect)arg1 rightBounds:(CGRect)arg2 delayedStrokeDrawingsLocalBounds:(vector<CGRect, std::__1::allocator<CGRect>>*)arg3 delayedStrokeDrawings:(id)arg4 ;
-(long long)_classifyEdgeDrawingsFromContexts:(id)arg1 allEdges:(vector<NetworkEdge, std::__1::allocator<NetworkEdge>>*)arg2 segmentationNetwork:(Network*)arg3 candidateNetwork:(Network*)arg4 cachedEdgeSet:(set<std::__1::set<long, std::__1::less<long>, std::__1::allocator<long>>, std::__1::less<std::__1::set<long, std::__1::less<long>, std::__1::allocator<long>>>, std::__1::allocator<std::__1::set<long, std::__1::less<long>, std::__1::allocator<long>>>>*)arg5 completeDrawing:(id)arg6 allowSmallerFinalBatch:(char)arg7 shouldCancel:(/*^block*/id)arg8 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>)_stringForCode:(unsigned)arg1 ;
-(double)_calculateJointWordLMScoreForTokenPath:(id)arg1 tokenizedResult:(id)arg2 history:(unsigned*)arg3 historyLength:(unsigned long long)arg4 pathTranscription:(id*)arg5 ;
-(double)_lmRescoringWeightForPath:(id)arg1 ;
-(id)_tokenFromLegacyResult:(id)arg1 wordIndex:(unsigned long long)arg2 strokeSet:(id)arg3 substrokeCount:(long long)arg4 ;
-(id)_inferenceCacheFromRecognizerOptions:(id)arg1 ;
-(id)_activationMatrixFromInferenceCache:(id)arg1 forDrawing:(id)arg2 outStrokeEndings:(vector<long, std::__1::allocator<long>>*)arg3 ;
-(CGPoint)_drawingAnchorPointFromRecognizerOptions:(id)arg1 ;
-(CHCTCRecognitionModel *)recognitionModel;
-(id)recognitionEngineCachingKey;
-(id)_tokenizedTextResultFromTextDecodingResult:(id)arg1 options:(id)arg2 strokeEndings:(vector<long, std::__1::allocator<long>>*)arg3 drawing:(id)arg4 ;
-(id)_textAfterFromRecognizerOptions:(id)arg1 ;
-(void)setSavedTop1CandidateString:(NSString *)arg1 ;
-(NSString *)savedTop1CandidateString;
-(CHStrokeTransitionModel *)strokeTransitionModel;
-(CHCutpointModel *)cutpointModel;
-(set<long, std::__1::less<long>, std::__1::allocator<long>>*)_correctedDelayedStrokeIDs:(const set<long, std::__1::less<long>, std::__1::allocator<long>>*)arg1 inDrawing:(id)arg2 segmentationPoints:(id)arg3 correctedSegmentationPoints:(id*)arg4 ;
-(id)_segmentWordRangesForSegments:(id)arg1 ;
-(id)_recognitionResultsForMultipleCharacterDrawing:(id)arg1 segmentGroups:(id)arg2 options:(id)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(id)_resultUsingNextGenerationPipelineWithDrawing:(id)arg1 options:(id)arg2 ;
-(id)_resultUsingSegmentAndDecodePipelineWithDrawing:(id)arg1 insight:(id)arg2 options:(id)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(char)inGraphite;
-(void)setSavedDrawing:(CHDrawing *)arg1 ;
-(void)_initializeOVSCleanupPostProcessor;
-(void)_setupRecognitionInsightRecording;
-(void)setSaveDrawingUntilNextCandidateAccepted:(char)arg1 ;
-(char)_shouldReturnDefaultResultsForDrawing:(id)arg1 ;
-(id)_defaultPunctuationResultWithStrokeCount:(unsigned long long)arg1 ;
-(id)_tokenizedTextRecognitionResultForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(/*^block*/id)arg3 ;
-(id)_defaultLegacyPunctuationResultsWithStrokeCount:(unsigned long long)arg1 ;
-(id)recognitionResultsForSketchDrawing:(id)arg1 options:(id)arg2 ;
-(id)_legacyTextRecognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(/*^block*/id)arg3 ;
-(id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(/*^block*/id)arg3 ;
-(void)_refineCandidates:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 withAllowedCandidateCodes:(const vector<unsigned int, std::__1::allocator<unsigned int>>*)arg2 ;
-(void)_penalizeCandidatesForRomanPunctuation:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult>>*)arg1 punctuationStrokeCount:(long long)arg2 ;
-(unsigned)_tokenIDForUNKCharacterString:(id)arg1 ;
-(int)autoCapitalizationMode;
-(int)autoCorrectionMode;
-(void)_setConfiguration:(id)arg1 ;
-(id)initWithMode:(int)arg1 locale:(id)arg2 ;
-(int)recognitionMode;
-(void)setAutoCapitalizationMode:(int)arg1 ;
-(void)setAutoCorrectionMode:(int)arg1 ;
-(unsigned long long)maxRecognitionResultCount;
-(void)setMaxRecognitionResultCount:(unsigned long long)arg1 ;
-(NSCharacterSet *)activeCharacterSet;
-(void)setActiveCharacterSet:(NSCharacterSet *)arg1 ;
-(CGSize)minimumDrawingSize;
-(void)setMinimumDrawingSize:(CGSize)arg1 ;
-(id)initWithMode:(int)arg1 locale:(id)arg2 recognizerOptions:(id)arg3 ;
-(id)initWithMode:(int)arg1 locale:(id)arg2 learningDictionaryURL:(id)arg3 ;
-(id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3 ;
-(char)isOVSString:(id)arg1 ;
-(id)transliterationVariantsForString:(id)arg1 ;
-(char)_isLocaleSupported:(id)arg1 ;
-(void)updateAddressBookLexicon:(id)arg1 ;
-(void)updateUserDictionaryLexicon:(id)arg1 ;
-(void)updateMecabraWithRegionalOTAAssets:(id)arg1 nonRegionalOTAAssets:(id)arg2 ;
-(void)setCustomLexicon:(LXLexiconRef)arg1 customVocabulary:(void*)arg2 ;
-(void)setCustomPhraseLexicon:(LXLexiconRef)arg1 ;
-(void)setTextReplacements:(NSDictionary *)arg1 ;
-(void)candidatesCleared;
-(void)candidateAccepted:(void*)arg1 ;
-(vector<const void *, std::__1::allocator<const void *>>*)completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(unsigned long long)arg3 ;
-(vector<const void *, std::__1::allocator<const void *>>*)completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(unsigned long long)arg4 ;
-(id)strokeIndexesForLastCharacter;
-(id)initWithType:(int)arg1 mode:(int)arg2 ;
-(id)supportedCharacterSet;
-(id)supportedStrings;
-(id)characterSetForStrings:(id)arg1 ;
-(void)endpointsForDrawing:(id)arg1 startLocation:(CGPoint*)arg2 endLocation:(CGPoint*)arg3 ;
-(id)bestTranscriptionPathsForTokenizedResult:(id)arg1 scores:(id*)arg2 history:(id)arg3 ;
-(id)_ovsCleanupRecognitionResult:(id)arg1 options:(id)arg2 ;
-(id)segmentationPointsForDrawing:(id)arg1 ;
-(id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(/*^block*/id)arg3 ;
-(id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 ;
-(void)setRecognitionType:(int)arg1 ;
-(void)setRecognitionMode:(int)arg1 ;
-(int)recognitionType;
-(CHNeuralNetwork*)freeformEngine;
-(void)setFreeformEngine:(CHNeuralNetwork*)arg1 ;
-(void)setStrokeTransitionModel:(CHStrokeTransitionModel *)arg1 ;
-(void)setCutpointModel:(CHCutpointModel *)arg1 ;
-(void)setRecognitionModel:(CHCTCRecognitionModel *)arg1 ;
-(CVNLPCTCTextDecoder *)textDecoder;
-(void)setTextDecoder:(CVNLPCTCTextDecoder *)arg1 ;
-(NSObject*<OS_dispatch_queue>)recognitionQueue;
-(void)setRecognitionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(Network*)radicalClusterFST;
-(void)setRadicalClusterFST:(Network*)arg1 ;
-(Network*)formatGrammarFST;
-(void)setFormatGrammarFST:(Network*)arg1 ;
-(CHPatternNetwork *)patternFST;
-(void)setPatternFST:(CHPatternNetwork *)arg1 ;
-(CHPatternNetwork *)postProcessingFST;
-(void)setPostProcessingFST:(CHPatternNetwork *)arg1 ;
-(void)setLanguageModel:(void*)arg1 ;
-(void*)lmVocabulary;
-(void)setLmVocabulary:(void*)arg1 ;
-(void)setCharacterLanguageModel:(void*)arg1 ;
-(MecabraRef)mecabra;
-(void)setMecabra:(MecabraRef)arg1 ;
-(void*)cjkStaticLexicon;
-(void)setCjkStaticLexicon:(void*)arg1 ;
-(void*)cjkDynamicLexicon;
-(void)setCjkDynamicLexicon:(void*)arg1 ;
-(LXLexiconRef)staticLexicon;
-(void)setStaticLexicon:(LXLexiconRef)arg1 ;
-(LXLexiconRef)phraseLexicon;
-(void)setPhraseLexicon:(LXLexiconRef)arg1 ;
-(LXLexiconRef)customLexicon;
-(void)setCustomLexicon:(LXLexiconRef)arg1 ;
-(LXLexiconRef)customPhraseLexicon;
-(NSDictionary *)textReplacements;
-(NSMutableDictionary *)textReplacementLowercasedKeyMapping;
-(void)setTextReplacementLowercasedKeyMapping:(NSMutableDictionary *)arg1 ;
-(CHSpellChecker *)spellChecker;
-(void)setSpellChecker:(CHSpellChecker *)arg1 ;
-(CFBurstTrieRef)ovsTrie;
-(void)setOvsTrie:(CFBurstTrieRef)arg1 ;
-(NSURL *)learningDictionaryURL;
-(void)setLearningDictionaryURL:(NSURL *)arg1 ;
-(CHDrawing *)savedDrawing;
-(char)saveDrawingUntilNextCandidateAccepted;
-(CHDrawing *)cachedDrawing;
-(map<unsigned int)characterIDMap;
-(void)setCharacterIDMap:(map<unsigned int)arg1 ;
-(VariantMap*)transliterationVariantMap;
-(void)setTransliterationVariantMap:(VariantMap*)arg1 ;
-(void*)icuTransliterator;
-(void)setIcuTransliterator:(void*)arg1 ;
-(unsigned long long)lastCharacterSegmentCount;
-(void)setLastCharacterSegmentCount:(unsigned long long)arg1 ;
-(NSMutableIndexSet *)lastCharacterSegmentIndexes;
-(void)setLastCharacterSegmentIndexes:(NSMutableIndexSet *)arg1 ;
-(CHPostProcessingManager *)postProcessor;
-(void)setPostProcessor:(CHPostProcessingManager *)arg1 ;
-(CHPostProcessingManager *)ovsCleanupPostProcessor;
-(void)setOvsCleanupPostProcessor:(CHPostProcessingManager *)arg1 ;
-(void)recordInsightWithRequest:(id)arg1 ;
-(CHRecognitionInsight *)recordedInsightFromLastRequest;
@end

