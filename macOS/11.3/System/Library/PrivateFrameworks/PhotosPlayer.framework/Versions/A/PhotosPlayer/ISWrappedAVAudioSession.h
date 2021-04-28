/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioSession, NSString;

@interface ISWrappedAVAudioSession : NSObject {

	char _didBeginObservingOutputVolume;
	/*^block*/id _outputVolumeChangeHandler;
	AVAudioSession* _audioSession;

}

@property (nonatomic,readonly) AVAudioSession * audioSession;              //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,copy) id outputVolumeChangeHandler;                   //@synthesize outputVolumeChangeHandler=_outputVolumeChangeHandler - In the implementation block
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) float outputVolume; 
+(id)auxiliarySession;
+(id)sharedAmbientInstance;
+(id)sharedPlaybackInstance;
+(void)sharedAmbientInstanceWithLoadHandler:(/*^block*/id)arg1 ;
+(void)sharedPlaybackInstanceWithLoadHandler:(/*^block*/id)arg1 ;
+(void)sharedPhotosOneUpInstanceWithLoadHandler:(/*^block*/id)arg1 ;
+(id)sharedPhotosOneUpInstance;
-(void)dealloc;
-(id)_init;
-(NSString *)category;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)setCategory:(id)arg1 error:(id*)arg2 ;
-(char)setActive:(char)arg1 error:(id*)arg2 ;
-(float)outputVolume;
-(AVAudioSession *)audioSession;
-(id)outputVolumeChangeHandler;
-(void)setOutputVolumeChangeHandler:(id)arg1 ;
-(void)_beginObservingOutputVolumeIfNeeded;
-(void)_endObservingOutputVolumeIfNeeded;
@end
