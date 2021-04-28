/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/Versions/A/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NUMediaPlayer <NSObject>
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) SCD_Struct_NU0 mediaDuration; 
@property (nonatomic,readonly) SCD_Struct_NU0 currentTime; 
@property (readonly) NSArray * loadedTimeRanges; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) long long playbackMode; 
@property (assign,getter=isMuted,nonatomic) char muted; 
@required
-(void)pause;
-(void)removeObserver:(id)arg1;
-(void)play;
-(SCD_Struct_NU0)currentTime;
-(void)setMuted:(char)arg1;
-(char)isMuted;
-(void)seekToTime:(SCD_Struct_NU0)arg1;
-(void)seekToTime:(SCD_Struct_NU0)arg1 toleranceBefore:(SCD_Struct_NU0)arg2 toleranceAfter:(SCD_Struct_NU0)arg3;
-(NSArray *)loadedTimeRanges;
-(void)stepByCount:(long long)arg1;
-(double)playbackRate;
-(void)setPlaybackRate:(double)arg1;
-(long long)playbackState;
-(SCD_Struct_NU0)mediaDuration;
-(void)seekToTime:(SCD_Struct_NU0)arg1 exact:(char)arg2;
-(id)addPlaybackTimeObserver:(/*^block*/id)arg1;
-(id)addPlaybackStateObserver:(/*^block*/id)arg1;
-(long long)playbackMode;
-(void)seekToTime:(SCD_Struct_NU0)arg1 toleranceBefore:(SCD_Struct_NU0)arg2 toleranceAfter:(SCD_Struct_NU0)arg3 forceSeek:(char)arg4;
-(id)addExternalPlaybackObserver:(/*^block*/id)arg1;
-(void)setPlaybackMode:(long long)arg1;

@end

