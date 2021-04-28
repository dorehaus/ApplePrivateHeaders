/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPSize, LPAudioPlayButtonTheme;

@interface LPAudioPlayButtonStyle : NSObject {

	LPSize* _size;
	LPAudioPlayButtonTheme* _defaultTheme;
	LPAudioPlayButtonTheme* _appleMusicTheme;
	LPAudioPlayButtonTheme* _podcastsTheme;
	LPAudioPlayButtonTheme* _audioBookTheme;
	LPAudioPlayButtonTheme* _lyricExcerptTheme;

}

@property (nonatomic,retain) LPSize * size;                                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,retain,readonly) LPAudioPlayButtonTheme * defaultTheme;                   //@synthesize defaultTheme=_defaultTheme - In the implementation block
@property (nonatomic,retain,readonly) LPAudioPlayButtonTheme * appleMusicTheme;                //@synthesize appleMusicTheme=_appleMusicTheme - In the implementation block
@property (nonatomic,retain,readonly) LPAudioPlayButtonTheme * podcastsTheme;                  //@synthesize podcastsTheme=_podcastsTheme - In the implementation block
@property (nonatomic,retain,readonly) LPAudioPlayButtonTheme * audioBookTheme;                 //@synthesize audioBookTheme=_audioBookTheme - In the implementation block
@property (nonatomic,retain,readonly) LPAudioPlayButtonTheme * lyricExcerptTheme;              //@synthesize lyricExcerptTheme=_lyricExcerptTheme - In the implementation block
-(LPSize *)size;
-(id)init;
-(void)setSize:(LPSize *)arg1 ;
-(LPAudioPlayButtonTheme *)defaultTheme;
-(LPAudioPlayButtonTheme *)appleMusicTheme;
-(LPAudioPlayButtonTheme *)podcastsTheme;
-(LPAudioPlayButtonTheme *)audioBookTheme;
-(LPAudioPlayButtonTheme *)lyricExcerptTheme;
@end

