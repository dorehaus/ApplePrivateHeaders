/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSKeywordAnalyzerQuasarScoreDelegate.h>
#import <libobjc.A.dylib/CSSpeechManagerDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class CSSpeechManager, NSObject, CSAsset, CSKeywordAnalyzerQuasar, NSString;

@interface CSKeywordDetector : NSObject <CSKeywordAnalyzerQuasarScoreDelegate, CSSpeechManagerDelegate> {

	char _isRunningRecognizer;
	float _keywordThreshold;
	id<CSVoiceTriggerDelegate> _delegate;
	CSSpeechManager* _speechManager;
	NSObject*<OS_dispatch_queue> _queue;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerQuasar* _keywordAnalyzer;
	unsigned long long _analyzedSampleCount;
	unsigned long long _decisionWaitSampleCount;

}

@property (assign,nonatomic,__weak) CSSpeechManager * speechManager;                  //@synthesize speechManager=_speechManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                  //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerQuasar * keywordAnalyzer;               //@synthesize keywordAnalyzer=_keywordAnalyzer - In the implementation block
@property (assign,nonatomic) float keywordThreshold;                                  //@synthesize keywordThreshold=_keywordThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long analyzedSampleCount;                  //@synthesize analyzedSampleCount=_analyzedSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long decisionWaitSampleCount;              //@synthesize decisionWaitSampleCount=_decisionWaitSampleCount - In the implementation block
@property (assign,nonatomic) char isRunningRecognizer;                                //@synthesize isRunningRecognizer=_isRunningRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_reset;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAsset:(id)arg1 ;
-(CSKeywordAnalyzerQuasar *)keywordAnalyzer;
-(void)setKeywordAnalyzer:(CSKeywordAnalyzerQuasar *)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(CSAsset *)currentAsset;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(float)keywordThreshold;
-(void)setKeywordThreshold:(float)arg1 ;
-(unsigned long long)analyzedSampleCount;
-(void)setAnalyzedSampleCount:(unsigned long long)arg1 ;
-(void)setSpeechManager:(CSSpeechManager *)arg1 ;
-(CSSpeechManager *)speechManager;
-(void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3 ;
-(id)initWithManager:(id)arg1 asset:(id)arg2 ;
-(void)startDetectKeyword:(id)arg1 ;
-(void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2 ;
-(void)speechManagerDidStartForwarding:(id)arg1 successfully:(char)arg2 error:(id)arg3 ;
-(void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2 ;
-(unsigned long long)decisionWaitSampleCount;
-(void)setDecisionWaitSampleCount:(unsigned long long)arg1 ;
-(char)isRunningRecognizer;
-(void)setIsRunningRecognizer:(char)arg1 ;
@end

