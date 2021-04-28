/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class NSString, MCKeyboardInput, MCAcceptCandidateInput, TIWordSearchCandidateResultSet, NSArray, TIMecabraIMLogger, TIKeyboardCandidate, TIWordSearch;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {

	char _predictionEnabled;
	char _reanalysisMode;
	char _hardwareKeyboardMode;
	NSString* _inputString;
	MCKeyboardInput* _keyboardInput;
	MCAcceptCandidateInput* _lastAcceptCandidateInput;
	TIWordSearchCandidateResultSet* _results;
	id _target;
	SEL _action;
	unsigned long long _segmentBreakIndex;
	unsigned long long _autocapitalizationType;
	NSArray* _geometryModelData;
	TIMecabraIMLogger* _logger;
	TIKeyboardCandidate* _candidateAfterSegmentBreak;
	TIWordSearch* _wordSearch;

}

@property (nonatomic,retain) TIWordSearchCandidateResultSet * results;                         //@synthesize results=_results - In the implementation block
@property (retain) TIWordSearch * wordSearch;                                                  //@synthesize wordSearch=_wordSearch - In the implementation block
@property (nonatomic,readonly) NSString * inputString;                                         //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,readonly) MCKeyboardInput * keyboardInput;                                //@synthesize keyboardInput=_keyboardInput - In the implementation block
@property (nonatomic,readonly) MCAcceptCandidateInput * lastAcceptCandidateInput;              //@synthesize lastAcceptCandidateInput=_lastAcceptCandidateInput - In the implementation block
@property (nonatomic,readonly) id target;                                                      //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long segmentBreakIndex;                             //@synthesize segmentBreakIndex=_segmentBreakIndex - In the implementation block
@property (nonatomic,readonly) char predictionEnabled;                                         //@synthesize predictionEnabled=_predictionEnabled - In the implementation block
@property (nonatomic,readonly) char reanalysisMode;                                            //@synthesize reanalysisMode=_reanalysisMode - In the implementation block
@property (nonatomic,readonly) unsigned long long autocapitalizationType;                      //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) NSArray * geometryModelData;                                    //@synthesize geometryModelData=_geometryModelData - In the implementation block
@property (nonatomic,readonly) char hardwareKeyboardMode;                                      //@synthesize hardwareKeyboardMode=_hardwareKeyboardMode - In the implementation block
@property (nonatomic,readonly) TIMecabraIMLogger * logger;                                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidateAfterSegmentBreak;                 //@synthesize candidateAfterSegmentBreak=_candidateAfterSegmentBreak - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)action;
-(TIWordSearchCandidateResultSet *)results;
-(void)setResults:(TIWordSearchCandidateResultSet *)arg1 ;
-(TIMecabraIMLogger *)logger;
-(void)perform;
-(MCKeyboardInput *)keyboardInput;
-(NSString *)inputString;
-(char)hardwareKeyboardMode;
-(unsigned long long)autocapitalizationType;
-(char)predictionEnabled;
-(NSArray *)geometryModelData;
-(TIWordSearch *)wordSearch;
-(void)setWordSearch:(TIWordSearch *)arg1 ;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 predictionEnabled:(char)arg5 reanalysisMode:(char)arg6 autocapitalizationType:(unsigned long long)arg7 target:(id)arg8 action:(SEL)arg9 geometryModelData:(id)arg10 hardwareKeyboardMode:(char)arg11 logger:(id)arg12 ;
-(void)checkForCachedResults;
-(void)completeSearchOnMainThreadWithResults:(id)arg1 ;
-(MCAcceptCandidateInput *)lastAcceptCandidateInput;
-(unsigned long long)segmentBreakIndex;
-(void)setSegmentBreakIndex:(unsigned long long)arg1 ;
-(char)reanalysisMode;
-(TIKeyboardCandidate *)candidateAfterSegmentBreak;
-(void)setCandidateAfterSegmentBreak:(TIKeyboardCandidate *)arg1 ;
@end

