/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EARAudioResultsGeneratorDelegate, OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSMutableData, NSString, NSObject;

@interface EARAudioResultsGenerator : NSObject {

	shared_ptr<quasar::SyncPSRAudioProcessor>* _audioProcessor;
	SystemConfig* _sysConfig;
	unsigned long long _sampleRate;
	char _isAudioSessionLive;
	NSMutableData* _entireResultMatrix;
	unsigned long long _globalNumVectors;
	unsigned long long _vectorSize;
	unsigned long long _sessionFrameCount;
	id<EARAudioResultsGeneratorDelegate> _delegate;
	NSString* _configRoot;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<EARAudioResultsGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * configRoot;                                             //@synthesize configRoot=_configRoot - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
+(void)initialize;
-(id<EARAudioResultsGeneratorDelegate>)delegate;
-(void)setDelegate:(id<EARAudioResultsGeneratorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)endAudio;
-(void)addAudio:(id)arg1 ;
-(void)resetForNewRequest;
-(id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(NSString *)configRoot;
-(void)setConfigRoot:(NSString *)arg1 ;
-(id)audioResultMatrix;
-(id)audioResultLastVector;
@end

