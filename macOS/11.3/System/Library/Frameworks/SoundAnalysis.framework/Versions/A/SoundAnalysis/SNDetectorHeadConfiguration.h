/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNProcessorCreating, SNMLModel;
@class NSString;

@interface SNDetectorHeadConfiguration : NSObject {

	unsigned _windowLengthFrames;
	unsigned _stepSizeFrames;
	id<SNProcessorCreating> _featureExtractorConfiguration;
	id<SNMLModel> _model;
	NSString* _outputLabel;
	double _sampleRate;

}

@property (nonatomic,readonly) id<SNProcessorCreating> featureExtractorConfiguration;              //@synthesize featureExtractorConfiguration=_featureExtractorConfiguration - In the implementation block
@property (nonatomic,readonly) id<SNMLModel> model;                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * outputLabel;                                             //@synthesize outputLabel=_outputLabel - In the implementation block
@property (nonatomic,readonly) double sampleRate;                                                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) unsigned windowLengthFrames;                                        //@synthesize windowLengthFrames=_windowLengthFrames - In the implementation block
@property (nonatomic,readonly) unsigned stepSizeFrames;                                            //@synthesize stepSizeFrames=_stepSizeFrames - In the implementation block
-(double)sampleRate;
-(id<SNMLModel>)model;
-(NSString *)outputLabel;
-(unsigned)windowLengthFrames;
-(id<SNProcessorCreating>)featureExtractorConfiguration;
-(unsigned)stepSizeFrames;
-(id)initWithMLModel:(id)arg1 outputLabel:(id)arg2 sampleRate:(double)arg3 windowLengthFrames:(unsigned)arg4 stepSizeFrames:(unsigned)arg5 featureExtractorConfiguration:(id)arg6 ;
@end
