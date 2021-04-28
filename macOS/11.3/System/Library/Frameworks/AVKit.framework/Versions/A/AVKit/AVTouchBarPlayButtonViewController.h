/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol AVTouchBarPlaybackControlsControllingInternal;
@class AVObservationController, NSButton;

@interface AVTouchBarPlayButtonViewController : NSViewController {

	char _showsPlayButton;
	id<AVTouchBarPlaybackControlsControllingInternal> _playerController;
	/*^block*/id _playButtonLongPressAction;
	AVObservationController* _observationController;
	NSButton* _playButton;
	id _touchBarDidExitCustomizationObserver;

}

@property (retain) AVObservationController * observationController;                                 //@synthesize observationController=_observationController - In the implementation block
@property (retain) NSButton * playButton;                                                           //@synthesize playButton=_playButton - In the implementation block
@property (assign) char showsPlayButton;                                                            //@synthesize showsPlayButton=_showsPlayButton - In the implementation block
@property (retain) id touchBarDidExitCustomizationObserver;                                         //@synthesize touchBarDidExitCustomizationObserver=_touchBarDidExitCustomizationObserver - In the implementation block
@property (retain) id<AVTouchBarPlaybackControlsControllingInternal> playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,copy) id playButtonLongPressAction;                                            //@synthesize playButtonLongPressAction=_playButtonLongPressAction - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)setPlayerController:(id<AVTouchBarPlaybackControlsControllingInternal>)arg1 ;
-(void)updateShowsPlayButton;
-(id<AVTouchBarPlaybackControlsControllingInternal>)playerController;
-(char)showsPlayButton;
-(void)setShowsPlayButton:(char)arg1 ;
-(AVObservationController *)observationController;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)updatePlayButtonTitle;
-(void)playButtonTapped:(id)arg1 ;
-(void)playButtonLongPress:(id)arg1 ;
-(id)playButtonLongPressAction;
-(void)setPlayButtonLongPressAction:(id)arg1 ;
-(NSButton *)playButton;
-(void)setPlayButton:(NSButton *)arg1 ;
-(id)touchBarDidExitCustomizationObserver;
-(void)setTouchBarDidExitCustomizationObserver:(id)arg1 ;
@end

