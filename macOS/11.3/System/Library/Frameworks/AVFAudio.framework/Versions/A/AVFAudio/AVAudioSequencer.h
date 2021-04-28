/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray, AVMusicTrack, NSDictionary;

@interface AVAudioSequencer : NSObject {

	void* _impl;

}

@property (assign,nonatomic) double currentPositionInSeconds; 
@property (assign,nonatomic) double currentPositionInBeats; 
@property (getter=isPlaying,nonatomic,readonly) char playing; 
@property (assign,nonatomic) float rate; 
@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) AVMusicTrack * tempoTrack; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(void)dealloc;
-(id)init;
-(NSDictionary *)userInfo;
-(void)stop;
-(char)isPlaying;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)prepareToPlay;
-(char)startAndReturnError:(id*)arg1 ;
-(id)initWithImpl:(AVAudioSequencerImpl*)arg1 ;
-(NSArray *)tracks;
-(id)initWithAudioEngine:(id)arg1 ;
-(unsigned long long)numberOfTracks;
-(void)cleanTracks;
-(void)setupTrackArray;
-(void)setupTracks;
-(char)loadFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)loadFromData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)writeToURL:(id)arg1 SMPTEResolution:(long long)arg2 replaceExisting:(char)arg3 error:(id*)arg4 ;
-(id)dataWithSMPTEResolution:(long long)arg1 error:(id*)arg2 ;
-(id)getTempoTrack;
-(double)secondsForBeats:(double)arg1 ;
-(double)beatsForSeconds:(double)arg1 ;
-(void)setTrackArray:(id)arg1 ;
-(id)trackArray;
-(void)setTempoTrack:(AVMusicTrack *)arg1 ;
-(AVMusicTrack *)tempoTrack;
-(double)currentPositionInSeconds;
-(unsigned long long)hostTimeForBeats:(double)arg1 error:(id*)arg2 ;
-(double)beatsForHostTime:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setCurrentPositionInSeconds:(double)arg1 ;
-(double)currentPositionInBeats;
-(void)setCurrentPositionInBeats:(double)arg1 ;
@end
