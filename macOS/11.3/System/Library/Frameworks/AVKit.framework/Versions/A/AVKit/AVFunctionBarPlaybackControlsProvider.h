/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSResponder.h>
#import <AVKit/AVFunctionBarMediaSelectionViewControllerDelegate.h>
#import <libobjc.A.dylib/NSTouchBarDelegate.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>

@protocol AVFunctionBarPlaybackControlsControlling, AVFunctionBarMediaSelectionControllingAVFunctionBarPlaybackControlsControllingInternalAVFunctionBarTrackControllingAVTimeControlling;
@class NSTouchBar, AVPlayerView, NSCustomTouchBarItem, AVFunctionBarPlaybackControlsViewController, NSPopoverTouchBarItem, AVFunctionBarMediaSelectionViewController, NSString;

@interface AVFunctionBarPlaybackControlsProvider : NSResponder <AVFunctionBarMediaSelectionViewControllerDelegate, NSTouchBarDelegate, NSTouchBarProvider> {

	NSTouchBar* _functionBar;
	id<AVFunctionBarPlaybackControlsControlling> _playbackControlsController;
	id<AVFunctionBarMediaSelectionControlling><AVFunctionBarPlaybackControlsControllingInternal><AVFunctionBarTrackControlling><AVTimeControlling> _playerController;
	AVPlayerView* _playerView;
	NSCustomTouchBarItem* _playbackControlsFunctionBarItem;
	AVFunctionBarPlaybackControlsViewController* _functionBarPlaybackControlsViewController;
	NSPopoverTouchBarItem* _mediaSelectionButtonFunctionBarItem;
	NSCustomTouchBarItem* _mediaSelectionOptionsFunctionBarItem;
	AVFunctionBarMediaSelectionViewController* _functionBarMediaSelectionViewController;

}

@property (nonatomic,retain) id<AVFunctionBarMediaSelectionControlling><AVFunctionBarPlaybackControlsControllingInternal><AVFunctionBarTrackControlling><AVTimeControlling> playerController; 
@property (__weak) AVPlayerView * playerView; 
@property (readonly) NSTouchBar * touchBar; 
@property (retain) id<AVFunctionBarPlaybackControlsControlling> playbackControlsController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSTouchBar *)touchBar;
-(id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2 ;
-(id<AVFunctionBarPlaybackControlsControlling>)playbackControlsController;
-(void)setPlaybackControlsController:(id<AVFunctionBarPlaybackControlsControlling>)arg1 ;
-(AVPlayerView *)playerView;
-(void)setPlayerController:(id<AVFunctionBarMediaSelectionControlling><AVFunctionBarPlaybackControlsControllingInternal><AVFunctionBarTrackControlling><AVTimeControlling>)arg1 ;
-(id<AVFunctionBarMediaSelectionControlling><AVFunctionBarPlaybackControlsControllingInternal><AVFunctionBarTrackControlling><AVTimeControlling>)playerController;
-(void)setPlayerView:(AVPlayerView *)arg1 ;
-(void)functionBarMediaSelectionViewController:(id)arg1 didSelectAudioFunctionBarMediaSelectionOption:(id)arg2 ;
-(void)functionBarMediaSelectionViewController:(id)arg1 didSelectLegibleFunctionBarMediaSelectionOption:(id)arg2 ;
-(void)reloadThumbailsOrAudioAmplitudeSamples;
-(id)functionBarMediaSelectionViewController;
-(char)isFunctionBarMediaSelectionViewControllerLoaded;
-(id)functionBarPlaybackControlsViewController;
-(char)isFunctionBarPlaybackControlsViewControllerLoaded;
-(void)updateFunctionBarItemIdentifiersForFunctionBar:(id)arg1 ;
@end
