/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSEndpointAnalyzerImpl.h>

@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate;
@class NSString;

@interface CSHybridEndpointAnalyzer : NSObject <CSEndpointAnalyzerImpl> {

	char _canProcessCurrentRequest;
	unsigned long long activeChannel;
	double automaticEndpointingSuspensionEndTime;
	double delay;
	id<CSEndpointAnalyzerDelegate> delegate;
	long long endpointStyle;
	double lastEndOfVoiceActivityTime;
	double lastStartOfVoiceActivityTime;
	double minimumDurationForEndpointer;
	double startWaitTime;
	id<CSEndpointAnalyzerImplDelegate> implDelegate;
	NSString* _endpointerModelVersion;

}

@property (nonatomic,retain) NSString * endpointerModelVersion;                                   //@synthesize endpointerModelVersion=_endpointerModelVersion - In the implementation block
@property (nonatomic,readonly) char canProcessCurrentRequest;                                     //@synthesize canProcessCurrentRequest=_canProcessCurrentRequest - In the implementation block
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImplDelegate> implDelegate; 
@property (assign,nonatomic) unsigned long long activeChannel; 
@property (nonatomic,readonly) double elapsedTimeWithNoSpeech; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSEndpointAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<CSEndpointAnalyzerDelegate>)arg1 ;
-(void)reset;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(unsigned long long)activeChannel;
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
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3 ;
-(void)processAudioSamplesAsynchronously:(id)arg1 ;
-(void)stopEndpointer;
-(void)recordingStoppedForReason:(long long)arg1 ;
-(id<CSEndpointAnalyzerImplDelegate>)implDelegate;
-(void)setImplDelegate:(id<CSEndpointAnalyzerImplDelegate>)arg1 ;
-(char)canProcessCurrentRequest;
-(void)processServerEndpointFeatures:(id)arg1 ;
-(void)updateEndpointerThreshold:(float)arg1 ;
-(void)updateEndpointerDelayedTrigger:(char)arg1 ;
-(NSString *)endpointerModelVersion;
-(void)setEndpointerModelVersion:(NSString *)arg1 ;
@end

