/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, EARCaesuraSilencePosteriorGeneratorDelegate;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString, NSObject;

@interface EARCaesuraSilencePosteriorGenerator : NSObject {

	shared_ptr<quasar::SilencePosteriorGenerator>* _silenceGenerator;
	NSString* _configFile;
	unsigned long long _samplingRate;
	NSObject*<OS_dispatch_queue> _spgQueue;
	id<EARCaesuraSilencePosteriorGeneratorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EARCaesuraSilencePosteriorGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id<EARCaesuraSilencePosteriorGeneratorDelegate>)delegate;
-(void)setDelegate:(id<EARCaesuraSilencePosteriorGeneratorDelegate>)arg1 ;
-(long long)getFrameDurationMs;
-(void)endAudio;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)resetForNewRequest;
-(void)_startComputeTask;
-(id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 ;
-(id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 queue:(id)arg3 ;
-(id)initWithConfigFile:(id)arg1 ;
@end

