/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSRSpeakerRecognizerDelegate.h>
#import <libobjc.A.dylib/SSRVoiceActivityDetectorDelegate.h>

@protocol SSRSpeakerRecognitionOrchestratorDelegate, CSAudioFileWriter, SSRSpeakerRecognizer, OS_dispatch_queue, OS_os_transaction;
@class SSRSpeakerRecognitionContext, SSRVoiceActivityDetector, NSDictionary, NSObject, NSString;

@interface SSRSpeakerRecognitionOrchestrator : NSObject <SSRSpeakerRecognizerDelegate, SSRVoiceActivityDetectorDelegate> {

	double _lastScoreReportTimeStamp;
	double _lastSegmentStartTime;
	unsigned long long _segmentCounter;
	unsigned long long _numSamplesAddedToSpeakerRecognizers;
	char _endAudioCalled;
	char _startPointReported;
	SSRSpeakerRecognitionContext* _context;
	id<SSRSpeakerRecognitionOrchestratorDelegate> _delegate;
	id<CSAudioFileWriter> _ssrUttLogger;
	unsigned long long _myriadResult;
	id<SSRSpeakerRecognizer> _psrRecognizer;
	id<SSRSpeakerRecognizer> _satRecognizer;
	SSRVoiceActivityDetector* _vad;
	NSDictionary* _psrLastSpeakerInfo;
	NSDictionary* _satLastSpeakerInfo;
	NSDictionary* _combinedScores;
	NSDictionary* _psrFinalSpeakerInfo;
	NSDictionary* _satFinalSpeakerInfo;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _debugUtteranceAudioFilePath;
	NSString* _debugUtteranceJsonFilePath;
	NSObject*<OS_os_transaction> _transaction;
	NSString* _transDesc;

}

@property (nonatomic,retain) SSRSpeakerRecognitionContext * context;                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<SSRSpeakerRecognitionOrchestratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CSAudioFileWriter> ssrUttLogger;                                         //@synthesize ssrUttLogger=_ssrUttLogger - In the implementation block
@property (assign,nonatomic) unsigned long long myriadResult;                                            //@synthesize myriadResult=_myriadResult - In the implementation block
@property (nonatomic,retain) id<SSRSpeakerRecognizer> psrRecognizer;                                     //@synthesize psrRecognizer=_psrRecognizer - In the implementation block
@property (nonatomic,retain) id<SSRSpeakerRecognizer> satRecognizer;                                     //@synthesize satRecognizer=_satRecognizer - In the implementation block
@property (nonatomic,retain) SSRVoiceActivityDetector * vad;                                             //@synthesize vad=_vad - In the implementation block
@property (nonatomic,retain) NSDictionary * psrLastSpeakerInfo;                                          //@synthesize psrLastSpeakerInfo=_psrLastSpeakerInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * satLastSpeakerInfo;                                          //@synthesize satLastSpeakerInfo=_satLastSpeakerInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * combinedScores;                                              //@synthesize combinedScores=_combinedScores - In the implementation block
@property (nonatomic,retain) NSDictionary * psrFinalSpeakerInfo;                                         //@synthesize psrFinalSpeakerInfo=_psrFinalSpeakerInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * satFinalSpeakerInfo;                                         //@synthesize satFinalSpeakerInfo=_satFinalSpeakerInfo - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * debugUtteranceAudioFilePath;                                     //@synthesize debugUtteranceAudioFilePath=_debugUtteranceAudioFilePath - In the implementation block
@property (nonatomic,retain) NSString * debugUtteranceJsonFilePath;                                      //@synthesize debugUtteranceJsonFilePath=_debugUtteranceJsonFilePath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;                                   //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSString * transDesc;                                                       //@synthesize transDesc=_transDesc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SSRSpeakerRecognitionOrchestratorDelegate>)delegate;
-(void)setDelegate:(id<SSRSpeakerRecognitionOrchestratorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(SSRSpeakerRecognitionContext *)context;
-(void)setContext:(SSRSpeakerRecognitionContext *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)endAudio;
-(id)initWithContext:(id)arg1 withDelegate:(id)arg2 error:(id*)arg3 ;
-(id)resetWithContext:(id)arg1 ;
-(void)speakerRecognizer:(id)arg1 hasSpeakerIdInfo:(id)arg2 ;
-(void)speakerRecognizerFinishedProcessing:(id)arg1 withFinalSpeakerIdInfo:(id)arg2 ;
-(void)updateDebugFilePathsForSegment:(unsigned long long)arg1 ;
-(void)_resetWithContext:(id)arg1 ;
-(id)orchestratorScoresWithPSRScores:(id)arg1 withSATScores:(id)arg2 withSegmentStartTime:(double)arg3 ;
-(void)_logSpeakerIdProcessorScoreDelayWithScoreInfo:(id)arg1 hasFinished:(char)arg2 ;
-(void)SSRVoiceActivityDetector:(id)arg1 didDetectStartPointAt:(unsigned long long)arg2 ;
-(void)SSRVoiceActivityDetector:(id)arg1 didDetectEndPointAt:(unsigned long long)arg2 ;
-(void)processAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getLatestVoiceRecognitionInfo;
-(id<CSAudioFileWriter>)ssrUttLogger;
-(void)setSsrUttLogger:(id<CSAudioFileWriter>)arg1 ;
-(unsigned long long)myriadResult;
-(void)setMyriadResult:(unsigned long long)arg1 ;
-(id<SSRSpeakerRecognizer>)psrRecognizer;
-(void)setPsrRecognizer:(id<SSRSpeakerRecognizer>)arg1 ;
-(id<SSRSpeakerRecognizer>)satRecognizer;
-(void)setSatRecognizer:(id<SSRSpeakerRecognizer>)arg1 ;
-(SSRVoiceActivityDetector *)vad;
-(void)setVad:(SSRVoiceActivityDetector *)arg1 ;
-(NSDictionary *)psrLastSpeakerInfo;
-(void)setPsrLastSpeakerInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)satLastSpeakerInfo;
-(void)setSatLastSpeakerInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)combinedScores;
-(void)setCombinedScores:(NSDictionary *)arg1 ;
-(NSDictionary *)psrFinalSpeakerInfo;
-(void)setPsrFinalSpeakerInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)satFinalSpeakerInfo;
-(void)setSatFinalSpeakerInfo:(NSDictionary *)arg1 ;
-(NSString *)debugUtteranceAudioFilePath;
-(void)setDebugUtteranceAudioFilePath:(NSString *)arg1 ;
-(NSString *)debugUtteranceJsonFilePath;
-(void)setDebugUtteranceJsonFilePath:(NSString *)arg1 ;
-(NSString *)transDesc;
-(void)setTransDesc:(NSString *)arg1 ;
@end

