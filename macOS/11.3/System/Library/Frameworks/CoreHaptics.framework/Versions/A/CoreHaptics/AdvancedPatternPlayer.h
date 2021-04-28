/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHHapticAdvancedPatternPlayerExtended.h>
#import <libobjc.A.dylib/PatternPlayerDetails.h>

@class CHHapticEngine, AVHapticSequence, NSArray, NSString;

@interface AdvancedPatternPlayer : NSObject <CHHapticAdvancedPatternPlayerExtended, PatternPlayerDetails> {

	CHHapticEngine* _engine;
	AVHapticSequence* _sequence;
	double _patternDuration;
	double _loopEnd;
	int _state;
	NSArray* _events;
	int _muteState;
	double _seekOffset;
	/*^block*/id _completionHandler;

}

@property (__weak) CHHapticEngine * engine;                         //@synthesize engine=_engine - In the implementation block
@property (readonly) double patternDuration; 
@property (assign) double seekOffset;                               //@synthesize seekOffset=_seekOffset - In the implementation block
@property (readonly) char running; 
@property (readonly) char paused; 
@property (assign) char loopEnabled; 
@property (assign) double loopEnd; 
@property (assign) float playbackRate; 
@property (assign) char isMuted; 
@property (copy) id completionHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(char)seekToOffset:(double)arg1 error:(id*)arg2 ;
-(char)running;
-(char)paused;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)resetState;
-(CHHapticEngine *)engine;
-(void)setEngine:(CHHapticEngine *)arg1 ;
-(void)setIsMuted:(char)arg1 ;
-(char)isMuted;
-(void)clearExternalResources:(id)arg1 ;
-(void)doSetMute:(char)arg1 ;
-(char)startAtTime:(double)arg1 error:(id*)arg2 ;
-(char)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(char)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(char)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(char)cancelAndReturnError:(id*)arg1 ;
-(double)patternDuration;
-(void)setSeekOffset:(double)arg1 ;
-(void)setLoopEnd:(double)arg1 ;
-(void)finishInit;
-(double)seekOffset;
-(void)setRunning;
-(char)resumeAtTime:(double)arg1 error:(id*)arg2 ;
-(char)doStartFromPausedAtTime:(double)arg1 error:(id*)arg2 ;
-(char)doStartFromStoppedAtTime:(double)arg1 error:(id*)arg2 ;
-(char)pauseAtTime:(double)arg1 error:(id*)arg2 ;
-(void)setPaused;
-(char)doResumeAtTime:(double)arg1 error:(id*)arg2 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(char)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(char)setVolume:(float)arg1 atTime:(double)arg2 error:(id*)arg3 ;
-(char)loopEnabled;
-(void)setLoopEnabled:(char)arg1 ;
-(double)loopEnd;
-(id)initWithPattern:(id)arg1 engine:(id)arg2 privileged:(char)arg3 error:(id*)arg4 ;
-(id)initWithRingtoneData:(id)arg1 engine:(id)arg2 error:(id*)arg3 ;
@end

