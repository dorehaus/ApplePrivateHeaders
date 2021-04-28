/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSEndpointAnalyzerDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzerImplDelegate.h>
#import <libobjc.A.dylib/CSEndpointAnalyzer.h>

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImpl;
@class CSAudioRecordContext, NSString;

@interface CSEndpointerProxy : NSObject <CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, CSEndpointAnalyzer> {

	char _recordingDidStop;
	id<CSEndpointAnalyzerDelegate> _endpointerDelegate;
	id<CSEndpointAnalyzerImpl> _hybridEndpointer;
	id<CSEndpointAnalyzerImpl> _nnvadEndpointer;
	id<CSEndpointAnalyzerImpl> _activeEndpointer;
	CSAudioRecordContext* _recordContext;

}

@property (nonatomic,retain) id<CSEndpointAnalyzerImpl> hybridEndpointer;                           //@synthesize hybridEndpointer=_hybridEndpointer - In the implementation block
@property (nonatomic,retain) id<CSEndpointAnalyzerImpl> nnvadEndpointer;                            //@synthesize nnvadEndpointer=_nnvadEndpointer - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImpl> activeEndpointer;                    //@synthesize activeEndpointer=_activeEndpointer - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * recordContext;                                  //@synthesize recordContext=_recordContext - In the implementation block
@property (assign,nonatomic) char recordingDidStop;                                                 //@synthesize recordingDidStop=_recordingDidStop - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> endpointerDelegate;              //@synthesize endpointerDelegate=_endpointerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long endpointStyle; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double startWaitTime; 
@property (assign,nonatomic) double automaticEndpointingSuspensionEndTime; 
@property (assign,nonatomic) double minimumDurationForEndpointer; 
@property (nonatomic,readonly) double lastEndOfVoiceActivityTime; 
@property (nonatomic,readonly) double lastStartOfVoiceActivityTime; 
@property (assign,nonatomic) double bypassSamples; 
@property (assign,nonatomic) long long endpointMode; 
@property (assign,nonatomic) double interspeechWaitTime; 
@property (assign,nonatomic) double endWaitTime; 
@property (assign,nonatomic) char saveSamplesSeenInReset; 
-(id)init;
-(void)reset;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 ;
-(void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(void)endpointer:(id)arg1 detectedTwoShotAtTime:(double)arg2 ;
-(void)preheat;
-(long long)endpointStyle;
-(void)setEndpointStyle:(long long)arg1 ;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(double)automaticEndpointingSuspensionEndTime;
-(void)setAutomaticEndpointingSuspensionEndTime:(double)arg1 ;
-(double)minimumDurationForEndpointer;
-(void)setMinimumDurationForEndpointer:(double)arg1 ;
-(double)lastEndOfVoiceActivityTime;
-(double)lastStartOfVoiceActivityTime;
-(long long)endpointMode;
-(void)setEndpointMode:(long long)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
-(char)saveSamplesSeenInReset;
-(void)setSaveSamplesSeenInReset:(char)arg1 ;
-(void)processAudioSamplesAsynchronously:(id)arg1 ;
-(void)stopEndpointer;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(double)trailingSilenceDurationAtEndpoint;
-(void)processServerEndpointFeatures:(id)arg1 ;
-(void)updateEndpointerThreshold:(float)arg1 ;
-(void)updateEndpointerDelayedTrigger:(char)arg1 ;
-(void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(/*^block*/id)arg2 ;
-(id)endpointerModelVersion;
-(double)elapsedTimeWithNoSpeech;
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3 voiceTriggerInfo:(id)arg4 ;
-(void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1 ;
-(unsigned long long)endPointAnalyzerType;
-(void)setEndpointerDelegate:(id<CSEndpointAnalyzerDelegate>)arg1 ;
-(void)setRecordContext:(CSAudioRecordContext *)arg1 ;
-(CSAudioRecordContext *)recordContext;
-(void)_setupNNVADEndpointer;
-(char)isWatchRTSTriggered;
-(void)logHybridEndpointFeaturesWithEvent:(id)arg1 locale:(id)arg2 ;
-(id<CSEndpointAnalyzerDelegate>)endpointerDelegate;
-(id<CSEndpointAnalyzerImpl>)hybridEndpointer;
-(void)setHybridEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
-(id<CSEndpointAnalyzerImpl>)nnvadEndpointer;
-(void)setNnvadEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
-(id<CSEndpointAnalyzerImpl>)activeEndpointer;
-(void)setActiveEndpointer:(id<CSEndpointAnalyzerImpl>)arg1 ;
-(char)recordingDidStop;
-(void)setRecordingDidStop:(char)arg1 ;
@end

