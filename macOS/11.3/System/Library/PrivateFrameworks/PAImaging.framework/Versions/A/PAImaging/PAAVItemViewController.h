/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <PAImaging/PAItemViewController.h>
#import <libobjc.A.dylib/AVPlayerViewSlowMotionDelegate.h>
#import <PAImaging/PAPlaybackSettingsEditReceiver.h>

@protocol OS_dispatch_queue, PAAVItemViewControllerDelegate;
@class NSObject, AVAsset, NSURL, AVPlayer, PAAVPlayerView, AVPlayerItem, NSString, IPAVideoPlaybackSettings;

@interface PAAVItemViewController : PAItemViewController <AVPlayerViewSlowMotionDelegate, PAPlaybackSettingsEditReceiver> {

	NSObject*<OS_dispatch_queue> _serializer;
	long long _currentState;
	/*^block*/id _loadCompletionBlock;
	AVAsset* _masterAsset;
	NSURL* _assetURL;
	AVPlayer* _player;
	PAAVPlayerView* _playerView;
	AVPlayerItem* _playerItem;
	char _observingPlayerItemStatus;
	char _observingReadyForDisplay;
	char _observingSlowMotionTimeRangeChanged;
	char _observingPlayerRate;
	char _addedPlaybackSettingsObserver;
	char _waitingForWindow;
	char _shouldAttemptStreamingVideoResource;
	char _streamingVideoResource;
	char _hasCloudPhotosDownloadInProgress;
	char _hidesPlayerControls;
	char _muted;
	id<PAAVItemViewControllerDelegate> _delegate;
	NSString* _videoGravity;
	IPAVideoPlaybackSettings* _streamingPlaybackSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isStreamingVideoResource,nonatomic) char streamingVideoResource;              //@synthesize streamingVideoResource=_streamingVideoResource - In the implementation block
@property (nonatomic,retain) IPAVideoPlaybackSettings * streamingPlaybackSettings;                     //@synthesize streamingPlaybackSettings=_streamingPlaybackSettings - In the implementation block
@property (__weak) id<PAAVItemViewControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldAttemptStreamingVideoResource;                                 //@synthesize shouldAttemptStreamingVideoResource=_shouldAttemptStreamingVideoResource - In the implementation block
@property (assign,nonatomic) char hasCloudPhotosDownloadInProgress;                                    //@synthesize hasCloudPhotosDownloadInProgress=_hasCloudPhotosDownloadInProgress - In the implementation block
@property (assign,nonatomic) char hidesPlayerControls;                                                 //@synthesize hidesPlayerControls=_hidesPlayerControls - In the implementation block
@property (assign,getter=isMuted,nonatomic) char muted;                                                //@synthesize muted=_muted - In the implementation block
@property (nonatomic,copy) NSString * videoGravity;                                                    //@synthesize videoGravity=_videoGravity - In the implementation block
+(id)_keysToLoadAndTest;
+(Class)itemViewClass;
+(id)calculateFixedImageAssetForType:(unsigned char)arg1 size:(CGSize)arg2 ;
-(void)dealloc;
-(id<PAAVItemViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PAAVItemViewControllerDelegate>)arg1 ;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isPaused;
-(void)play;
-(CGSize)itemSize;
-(long long)_currentState;
-(id)assetURL;
-(void)setMuted:(char)arg1 ;
-(char)isMuted;
-(NSString *)videoGravity;
-(void)setVideoGravity:(NSString *)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)playerView;
-(char)_enterState:(long long)arg1 ;
-(SCD_Struct_PA9)playerView:(id)arg1 playerItemDurationForSlowMotionTimeRange:(SCD_Struct_PA22)arg2 normalizedTime:(SCD_Struct_PA9)arg3 playerItemTime:(out SCD_Struct_PA9*)arg4 ;
-(SCD_Struct_PA9)playerView:(id)arg1 playerItemTimeForNormalizedTime:(SCD_Struct_PA9)arg2 ;
-(SCD_Struct_PA9)playerView:(id)arg1 playerItemTimeForUserInterfaceTime:(SCD_Struct_PA9)arg2 ;
-(SCD_Struct_PA9)playerView:(id)arg1 userInterfaceTimeForPlayerItemTime:(SCD_Struct_PA9)arg2 ;
-(char)showsFrameSteppingButtons;
-(void)setShowsFrameSteppingButtons:(char)arg1 ;
-(void)cancelTrim:(id)arg1 ;
-(void)rewind;
-(void)setActionMenu:(id)arg1 ;
-(char)isTrimmed;
-(id)_playbackSettings;
-(id)initWithItemController:(id)arg1 ;
-(id)_avObjectBuilderForAsset:(id)arg1 playbackSetting:(id)arg2 ;
-(id)scaledPlayerItemForAsset:(id)arg1 playbackSettings:(id)arg2 ;
-(char)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)_shouldAttemptStreamingFollowingReceivedAssetResponse:(id)arg1 ;
-(void)_didLoadAssetRequest:(id)arg1 response:(id)arg2 ;
-(void)_didLoad:(char)arg1 error:(id)arg2 ;
-(void)_setUpPlaybackOfAsset:(id)arg1 ;
-(void)_setCurrentPlayerItem:(id)arg1 playbackSettings:(id)arg2 ;
-(void)_configurePlayerItem:(id)arg1 forPlaybackSettings:(id)arg2 ;
-(void)_syncPlayerViewSlowMotionTimeRangeWithPlaybackSettings:(id)arg1 ;
-(void)_configureInterlacingForPlayerItem:(id)arg1 ;
-(void)_unregisterKVO;
-(void)_registerPlayerItemStatusKVO;
-(void)_unregisterPlayerItemStatusKVO;
-(void)_registerPlayerLayerReadyForDisplayKVO;
-(void)_unregisterPlayerLayerReadyForDisplayKVO;
-(void)_registerSlowMotionKVO;
-(void)_unregisterSlowMotionKVO;
-(void)_registerPlayerRateKVO;
-(void)_unregisterPlayerRateKVO;
-(void)_registerPlayerItemNotifications;
-(void)_unregisterPlayerItemNotifications;
-(void)_itemDidPlayToEndTime:(id)arg1 ;
-(void)_itemFailedToPlayToEndTime:(id)arg1 ;
-(id)_avItemController;
-(id)_avItem;
-(id)_avItemView;
-(CGImageRef)newUnsupportedThumbnail;
-(void)attachToCanvasView;
-(void)detachFromCanvasView;
-(void)configureForUnsupportedAsset;
-(void)_setPlaybackSettings:(id)arg1 ;
-(void)initiateTrim:(id)arg1 ;
-(void)_completeTrim;
-(void)resetTrim:(id)arg1 ;
-(char)inTrimMode;
-(void)_updateNormalizedSlomoTimeRange:(SCD_Struct_PA22)arg1 ;
-(char)isRewound;
-(void)_updatePlaybackHeadWithNaturalTime:(SCD_Struct_PA9)arg1 ;
-(void)setHidesPlayerControls:(char)arg1 ;
-(CGImageRef)_newFrameForNaturalTime:(SCD_Struct_PA9)arg1 ;
-(void)_submitRequestForFrameForNaturalTime:(SCD_Struct_PA9)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(SCD_Struct_PA9)_naturalTimeForScaledTime:(SCD_Struct_PA9)arg1 ;
-(CGImageRef)_newFrameForScaledTime:(SCD_Struct_PA9)arg1 ;
-(void)_submitRequestForFrameForScaledTime:(SCD_Struct_PA9)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)exportFrameToURL:(id)arg1 ;
-(void)setPosterFrameForCurrentTime;
-(CGImageRef)imageForCurrentFrame;
-(void)submitRequestForImageForCurrentFrameWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)shouldAttemptStreamingVideoResource;
-(void)setShouldAttemptStreamingVideoResource:(char)arg1 ;
-(char)isStreamingVideoResource;
-(void)setStreamingVideoResource:(char)arg1 ;
-(char)hasCloudPhotosDownloadInProgress;
-(void)setHasCloudPhotosDownloadInProgress:(char)arg1 ;
-(char)hidesPlayerControls;
-(IPAVideoPlaybackSettings *)streamingPlaybackSettings;
-(void)setStreamingPlaybackSettings:(IPAVideoPlaybackSettings *)arg1 ;
-(void)playbackSettingsChangedFrom:(id)arg1 to:(id)arg2 sourceChanged:(char)arg3 ;
-(char)_operationChangedFrom:(id)arg1 to:(id)arg2 ;
@end

