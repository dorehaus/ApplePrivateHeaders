/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVValueTiming, NSArray, AVFunctionBarMediaSelectionOption, NSURL;


@protocol AVFunctionBarPlaybackControlsControlling <NSObject>
@property (readonly) double contentDuration; 
@property (readonly) AVValueTiming * timing; 
@property (getter=isSeeking,readonly) char seeking; 
@property (readonly) double seekToTime; 
@property (readonly) char hasEnabledAudio; 
@property (readonly) char hasEnabledVideo; 
@property (getter=isPlaying) char playing; 
@property (readonly) char canTogglePlayback; 
@property (readonly) NSArray * seekableTimeRanges; 
@property (readonly) NSArray * audioFunctionBarMediaSelectionOptions; 
@property (retain) AVFunctionBarMediaSelectionOption * currentAudioFunctionBarMediaSelectionOption; 
@property (readonly) NSArray * legibleFunctionBarMediaSelectionOptions; 
@property (retain) AVFunctionBarMediaSelectionOption * currentLegibleFunctionBarMediaSelectionOption; 
@property (readonly) char canBeginFunctionBarScrubbing; 
@property (readonly) NSURL * assetURL; 
@optional
-(char)isPlaying;
-(NSURL *)assetURL;
-(NSArray *)seekableTimeRanges;
-(void)setPlaying:(char)arg1;
-(char)canTogglePlayback;
-(void)togglePlayback;
-(void)controlsViewWillAppear;
-(void)controlsViewDidDisappear;
-(void)cancelThumbnailAndAudioAmplitudeSampleGeneration;
-(NSArray *)audioFunctionBarMediaSelectionOptions;
-(AVFunctionBarMediaSelectionOption *)currentAudioFunctionBarMediaSelectionOption;
-(void)setCurrentAudioFunctionBarMediaSelectionOption:(id)arg1;
-(NSArray *)legibleFunctionBarMediaSelectionOptions;
-(AVFunctionBarMediaSelectionOption *)currentLegibleFunctionBarMediaSelectionOption;
-(void)setCurrentLegibleFunctionBarMediaSelectionOption:(id)arg1;
-(void)beginFunctionBarScrubbing;
-(void)endFunctionBarScrubbing;
-(char)canBeginFunctionBarScrubbing;
-(void)generateFunctionBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)generateFunctionBarThumbnailsForTimes:(id)arg1 size:(CGSize)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(AVValueTiming *)timing;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(double)contentDuration;
-(char)isSeeking;
-(double)seekToTime;

@end

