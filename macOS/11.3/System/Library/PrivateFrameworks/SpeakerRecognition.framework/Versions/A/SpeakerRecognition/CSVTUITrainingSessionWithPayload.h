/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/Versions/A/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeakerRecognition/CSVTUITrainingSession.h>
#import <libobjc.A.dylib/SFSpeechRecognitionTaskDelegate.h>
#import <libobjc.A.dylib/CSVTUIAudioSessionDelegate.h>
#import <libobjc.A.dylib/CSVTUIEndPointDelegate.h>

@class NSDictionary, NSString;

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate> {

	char _detectBOS;
	char _ASRResultReceived;
	char _reportedStopListening;
	char _utteranceStored;
	unsigned long long _numSamplesFed;
	unsigned long long _bestTriggerSampleStart;
	unsigned long long _extraSamplesAtStart;
	NSDictionary* _voiceTriggerEventInfo;

}

@property (nonatomic,retain) NSDictionary * voiceTriggerEventInfo;              //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(char)arg2 ;
-(void)startTraining;
-(void)audioSessionDidStartRecording:(char)arg1 error:(id)arg2 ;
-(void)audioSessionDidStopRecording:(long long)arg1 ;
-(void)audioSessionRecordBufferAvailable:(id)arg1 ;
-(void)audioSessionErrorDidOccur:(id)arg1 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)didDetectBeginOfSpeech;
-(void)didDetectEndOfSpeech:(long long)arg1 ;
-(void)_firedVoiceTriggerTimeout;
-(char)shouldHandleSession;
-(char)shouldMatchPayload;
-(void)closeSessionWithStatus:(int)arg1 successfully:(char)arg2 ;
-(void)_firedEndPointTimeout;
-(void)_registerVoiceTriggerTimeout;
-(void)handleAudioInput:(id)arg1 ;
-(void)_reportStopListening;
-(void)_registerEndPointTimeout;
-(void)_registerForceEndPointTimeout;
-(void)matchRecognitionResult:(id)arg1 withMatchedBlock:(/*^block*/id)arg2 withNonMatchedBlock:(/*^block*/id)arg3 ;
@end

