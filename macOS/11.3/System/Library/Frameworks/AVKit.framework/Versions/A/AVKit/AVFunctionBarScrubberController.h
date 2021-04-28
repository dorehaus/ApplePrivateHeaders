/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <AVKit/AVFunctionBarScrubberDelegateInternal.h>

@protocol AVFunctionBarScrubberControllingAVFunctionBarTrackControllingAVTimeControlling;
@class AVFunctionBarTrackViewController, NSMutableArray, AVPlayerLayer, AVPlayerControllerTimeResolver, AVFunctionBarScrubberInternal, NSString;

@interface AVFunctionBarScrubberController : NSViewController <AVFunctionBarScrubberDelegateInternal> {

	id<AVFunctionBarScrubberControlling><AVFunctionBarTrackControlling><AVTimeControlling> _playerController;
	AVFunctionBarTrackViewController* _functionBarTrackViewController;
	NSMutableArray* _bindings;
	id _scrubberBoundsObserver;
	long long _previousAssetPreviewRequest;
	double _previousAssetPreviewRequestDuration;
	double _previousAssetPreviewRequestMinTime;
	double _previousAssetPreviewRequestMaxTime;
	char _isVisible;
	id _applicationWillBecomeActiveObserverToken;
	id _applicationDidResignActiveObserverToken;
	char _hasRoundedCorners;
	AVPlayerLayer* _scrubPlayerLayer;
	AVPlayerControllerTimeResolver* _timeResolver;

}

@property (retain) AVPlayerControllerTimeResolver * timeResolver;                                                                                  //@synthesize timeResolver=_timeResolver - In the implementation block
@property (nonatomic,retain) id<AVFunctionBarScrubberControlling><AVFunctionBarTrackControlling><AVTimeControlling> playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) AVFunctionBarScrubberInternal * scrubber; 
@property (assign) char hasRoundedCorners;                                                                                                         //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * scrubPlayerLayer;                                                                                     //@synthesize scrubPlayerLayer=_scrubPlayerLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear;
-(void)viewDidDisappear;
-(AVFunctionBarScrubberInternal *)scrubber;
-(void)setPlayerController:(id<AVFunctionBarScrubberControlling><AVFunctionBarTrackControlling><AVTimeControlling>)arg1 ;
-(void)bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5 ;
-(void)unbindAllObjects;
-(id<AVFunctionBarScrubberControlling><AVFunctionBarTrackControlling><AVTimeControlling>)playerController;
-(AVPlayerLayer *)scrubPlayerLayer;
-(void)setScrubPlayerLayer:(AVPlayerLayer *)arg1 ;
-(char)hasRoundedCorners;
-(void)setHasRoundedCorners:(char)arg1 ;
-(void)reloadThumbailsOrAudioAmplitudeSamples;
-(void)_startOrStopUpdatingPlayheadApplicationIsActive:(char)arg1 ;
-(void)_reloadThumbnailsForVideoTrackView:(id)arg1 ;
-(void)unbindObject:(id)arg1 ;
-(AVPlayerControllerTimeResolver *)timeResolver;
-(void)setTimeResolver:(AVPlayerControllerTimeResolver *)arg1 ;
-(char)willStartTrackingForFunctionBarScrubber:(id)arg1 ;
-(void)didStopTrackingForFunctionBarScrubber:(id)arg1 ;
-(void)_reloadThumbailsOrAudioAmplitudeSamplesIfNeeded;
-(void)_reloadAudioAmplitudeSamplesForAudioTrackView:(id)arg1 ;
-(void)_cancelThumbnailAndAudioAmplitudeSampleGeneration;
@end
