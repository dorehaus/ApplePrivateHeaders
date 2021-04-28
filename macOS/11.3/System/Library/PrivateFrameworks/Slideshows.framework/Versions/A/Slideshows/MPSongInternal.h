/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSongInternal : NSObject {

	double duration;
	double startTime;
	double audioVolume;
	double fadeInDuration;
	double fadeOutDuration;
	char assetLogging;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) char assetLogging; 
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)audioVolume;
-(void)setAudioVolume:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(char)assetLogging;
-(void)setAssetLogging:(char)arg1 ;
@end

