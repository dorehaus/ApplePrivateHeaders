/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTouchBarPlaybackControlsControllingInternal <NSObject>
@property (getter=isPlaying) char playing; 
@property (readonly) char canTogglePlayback; 
@property (assign) double defaultPlaybackRate; 
@property (readonly) char allowsPictureInPicturePlayback; 
@property (getter=isPictureInPictureActive,readonly) char pictureInPictureActive; 
@property (readonly) char canTogglePictureInPicture; 
@property (readonly) char canScanForward; 
@property (readonly) char canScanBackward; 
@property (readonly) char hasLiveStreamingContent; 
@required
-(char)isPlaying;
-(double)defaultPlaybackRate;
-(void)setDefaultPlaybackRate:(double)arg1;
-(void)setPlaying:(char)arg1;
-(void)togglePlayback:(id)arg1;
-(char)hasLiveStreamingContent;
-(void)skipBackwardThirtySeconds:(id)arg1;
-(void)gotoEndOfSeekableRanges:(id)arg1;
-(char)canScanForward;
-(char)canScanBackward;
-(char)canTogglePlayback;
-(void)controlsViewWillAppear;
-(void)controlsViewDidDisappear;
-(char)allowsPictureInPicturePlayback;
-(char)isPictureInPictureActive;
-(char)canTogglePictureInPicture;
-(void)togglePictureInPicture:(id)arg1;
-(void)scanForward:(id)arg1;
-(void)scanBackward:(id)arg1;

@end
