/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/Versions/A/CoreSpeechFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSAudioUnitMeterClipping;

@interface CSAudioPowerMeter : NSObject {

	int _averagePowerI;
	double _averagePowerF;
	char _instantaneousMode;
	double _peak;
	double _maxPeak;
	double _decay;
	double _peakDecay;
	double _averagePowerPeak;
	int _peakHoldCount;
	double _sampleRate;
	int _previousBlockSize;
	double _decay1;
	double _peakDecay1;
	CSAudioUnitMeterClipping* _clipping;

}
-(void)_scaleDecayConstants:(int)arg1 ;
-(void)_savePeaks:(int)arg1 averagePower:(int)arg2 maxSample:(int)arg3 ;
-(void)_zapgremlins:(double*)arg1 ;
-(double)_linearToDB:(double)arg1 ;
-(double)_ampToDB:(double)arg1 ;
-(void)reset;
-(void)_reset;
-(void)processFloatBuffer:(const float*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3 ;
-(void)processShortBuffer:(const short*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3 ;
-(double)getPeakPowerDB;
-(double)getAveragePowerDB;
-(id)initWithSampleRate:(float)arg1 ;
@end

