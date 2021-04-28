/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVoiceDetector, VCPAudioClassifier, VCPLoudnessAnalyzer, VCPSongDetector;

@interface VCPAudioAnalyzer : NSObject {

	void* _inputBuffer;
	AudioTimeStamp _audioTimestamp;
	AudioBufferList* _audioBufferList;
	int _sampleBatchSize;
	VCPVoiceDetector* _voiceDetector;
	VCPAudioClassifier* _audioClassifier;
	VCPLoudnessAnalyzer* _loudnessAnalyzer;
	VCPSongDetector* _songDetector;
	int _bufferedSamples;
	char _initialized;

}
-(void)dealloc;
-(int)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC5*)arg1 ;
-(id)audioFormatRequirements;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 ;
-(id)voiceDetections;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(char)arg2 ;
-(int)analyzeAsset:(id)arg1 cancel:(/*^block*/id)arg2 results:(id*)arg3 ;
-(int)analyzeSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end
