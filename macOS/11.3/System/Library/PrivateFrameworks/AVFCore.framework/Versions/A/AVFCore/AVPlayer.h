/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVPlayerInternal, NSArray, NSString, NSNumber, NSError;

@interface AVPlayer : NSObject {

	AVPlayerInternal* _player;

}

@property (assign,nonatomic) char preventsDisplaySleepDuringVideoPlayback; 
@property (setter=_setDisplaysUsedForPlayback:,nonatomic,copy) NSArray * _displaysUsedForPlayback; 
@property (nonatomic,readonly) long long _externalProtectionStatus; 
@property (getter=_isPIPModePossible,nonatomic,readonly) char PIPModePossible; 
@property (getter=isAudioPlaybackEnabledAtAllRates,nonatomic,readonly) char audioPlaybackEnabledAtAllRates; 
@property (assign) float minRateForAudioPlayback; 
@property (assign) float maxRateForAudioPlayback; 
@property (assign) char allowsPixelBufferPoolSharing; 
@property (assign) char disallowsAMRAudio; 
@property (assign) char appliesMediaSelectionCriteriaAutomatically; 
@property (copy) NSString * audioOutputDeviceUniqueID; 
@property (assign) char allowsOutOfBandTextTrackRendering; 
@property (copy) NSString * multichannelAudioStrategy; 
@property (nonatomic,copy) NSString * captionRenderingStrategy; 
@property (nonatomic,copy) NSString * captionPipelineStrategy; 
@property (assign,nonatomic) unsigned long long preferredVideoDecoderGPURegistryID; 
@property (nonatomic,retain) id<AVLoggingIdentifier> loggingIdentifier; 
@property (assign,setter=_setDisallowsAutoPauseOnRouteRemovalIfNoAudio:,getter=_disallowsAutoPauseOnRouteRemovalIfNoAudio,nonatomic) char disallowsAutoPauseOnRouteRemovalIfNoAudio; 
@property (setter=_setSTSLabel:,getter=_STSLabel,nonatomic,retain) NSString * STSLabel; 
@property (assign,nonatomic) char prefersPlayingSilentlyWhenConflictingWithOtherPlayback; 
@property (nonatomic,readonly) char isSilencedDueToConflictWithOtherPlayback; 
@property (assign,setter=_setSilencesOtherPlaybackDuringPIP:,getter=_silencesOtherPlaybackDuringPIP,nonatomic) char silencesOtherPlaybackDuringPIP; 
@property (nonatomic,readonly) NSNumber * mxSessionID; 
@property (nonatomic,readonly) NSArray * videoTargets; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(void)initialize;
+(id)playerWithURL:(id)arg1 ;
+(void)registerForScreenConnectionChanges;
+(char)worksAroundConcurrentKVOCrash;
+(id)makePlayerLoggingIdentifier;
+(int)_createFigPlayerWithType:(long long)arg1 options:(const CFDictionaryRef)arg2 player:(OpaqueFigPlayer*)arg3 ;
+(long long)availableHDRModes;
+(void)fireAvailableHDRModesDidChangeNotification;
+(void)fireEligibleForHDRPlaybackDidChangeNotification;
+(id)playerWithPlayerItem:(id)arg1 ;
+(id)playerWithFigPlayer:(OpaqueFigPlayerRef)arg1 ;
+(char)automaticallyNotifiesObserversOfCurrentItem;
+(char)automaticallyNotifiesObserversOfRate;
+(char)automaticallyNotifiesObserversOfUsesLegacyAutomaticWaitingBehavior;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingActionAtItemEnd;
+(id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+(char)automaticallyNotifiesObserversOfExternalPlaybackActive;
+(char)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+(char)automaticallyNotifiesObserversOfAirPlayVideoActive;
+(char)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+(void)checkForAvailableHDRModesChanges;
+(char)eligibleForHDRPlayback;
+(id)preferredVideoRangeForDisplays:(id)arg1 ;
+(char)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
-(void)dealloc;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSError *)error;
-(id)dispatchQueue;
-(float)volume;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)pause;
-(long long)status;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)currentItem;
-(void)play;
-(id)_weakReference;
-(id)_items;
-(SCD_Struct_CM3)currentTime;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(float)_rate;
-(void)setMuted:(char)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(char)_isMuted;
-(char)isMuted;
-(void)_updateClosedCaptionLayerBounds:(id)arg1 videoRelativeToViewport:(const CGRect*)arg2 captionsAvoidanceMargins:(const NSEdgeInsets*)arg3 ;
-(void)_removeLayer:(id)arg1 videoLayer:(id)arg2 closedCaptionLayer:(id)arg3 subtitleLayer:(id)arg4 interstitialLayer:(id)arg5 ;
-(void)_evaluateDisplaySizeOfAllAttachedLayers;
-(CGSize)_cachedPresentationSizeOfCurrentItem;
-(void)_removeLayer:(id)arg1 ;
-(void)_addLayer:(id)arg1 ;
-(void)_pixelBufferAttributesDidChangeForLayer:(id)arg1 ;
-(id)_performanceDictionary;
-(void)setPlayerRole:(id)arg1 synchronously:(char)arg2 ;
-(void)setShouldReduceResourceUsage:(char)arg1 ;
-(id<AVLoggingIdentifier>)loggingIdentifier;
-(id)_nameForLogging;
-(id)outputContext;
-(char)shouldReduceResourceUsage;
-(long long)resourceConservationLevelWhilePaused;
-(id)playerRole;
-(id)externalPlaybackVideoGravity;
-(long long)actionAtItemEnd;
-(float)minRateForAudioPlayback;
-(float)maxRateForAudioPlayback;
-(char)autoSwitchStreamVariants;
-(char)preparesItemsForPlaybackAsynchronously;
-(char)allowsOutOfBandTextTrackRendering;
-(char)appliesMediaSelectionCriteriaAutomatically;
-(char)allowsPixelBufferPoolSharing;
-(char)disallowsAMRAudio;
-(char)disallowsHardwareAcceleratedVideoDecoder;
-(char)preventsDisplaySleepDuringVideoPlayback;
-(char)allowsExternalPlayback;
-(char)usesExternalPlaybackWhileExternalScreenIsActive;
-(NSString *)captionPipelineStrategy;
-(NSString *)audioOutputDeviceUniqueID;
-(NSString *)multichannelAudioStrategy;
-(char)isDisplayingClosedCaptions;
-(char)outputObscuredDueToInsufficientExternalProtection;
-(char)automaticallyWaitsToMinimizeStalling;
-(long long)timeControlStatus;
-(id)reasonForWaitingToPlay;
-(unsigned long long)preferredVideoDecoderGPURegistryID;
-(id)videoRangeOverride;
-(NSArray *)videoTargets;
-(id)expectedAssetTypes;
-(NSString *)captionRenderingStrategy;
-(id)interstitialPlayer;
-(OpaqueFigPlayerInterstitialCoordinatorRef)interstitialEventCoordinator;
-(id)initWithPlayerItem:(id)arg1 ;
-(void)_addItemToLinkedList_invokeOnIvarAccessQueue:(id)arg1 afterItem:(id)arg2 ;
-(char)_runOnIvarAccessQueueOperationThatMayChangeCurrentItemWithPreflightBlock:(/*^block*/id)arg1 modificationBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)setAllowsExternalPlayback:(char)arg1 ;
-(void)setAppliesMediaSelectionCriteriaAutomatically:(char)arg1 ;
-(void)setAutomaticallyWaitsToMinimizeStalling:(char)arg1 ;
-(void)_addFPListeners;
-(id)initWithFigPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)_removeFPListeners;
-(void)_stopObservingPropertiesOfCurrentItem:(id)arg1 ;
-(void)_removeAllLayers;
-(void)_removeFPInterstitialCoordinatorListeners;
-(id)_stateDispatchQueue;
-(id)_rateDidChangeNotificationPayloadForAVFRateChangeReason:(id)arg1 rateChangeIdentifier:(id)arg2 ;
-(OpaqueFigPlayerRef)_copyFigPlayer;
-(void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(OpaqueFigPlayerRef)arg2 ;
-(void)_startObservingPropertiesOfCurrentItem:(id)arg1 ;
-(id)_synchronizeWithNewCurrentItem;
-(void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
-(long long)_inferredTimeControlStatusAndWaitingReason:(id*)arg1 forRate:(float)arg2 ;
-(void)_removeItem:(id)arg1 ;
-(void)_applyPlayQueueChangesToFigPlayerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateProxyTimebaseFromNewCurrentItem;
-(void)_removeItemFromLinkedList_invokeOnIvarAccessQueue:(id)arg1 ;
-(void)_createAndConfigureFigPlayerWithType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_pendingFigPlayerPropertyForKey:(id)arg1 ;
-(char)isExternalPlaybackActive;
-(char)_isPIPModePossible;
-(void)_setPendingFigPlayerProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_pendingFigPlayerProperties;
-(void)_attachVideoLayersToFigPlayer;
-(void)_attachClosedCaptionLayersToFigPlayer;
-(void)_attachFigPlayerToSubtitleLayers;
-(void)_setNeroVideoGravityOnFigPlayer;
-(void)_applyLinkedListOfItemsToFigPlayerUsingBlock:(/*^block*/id)arg1 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)_setCurrentItem:(id)arg1 ;
-(void)_enqueuePlayQueueModification_invokeOnIvarAccessQueue:(id)arg1 ;
-(id)_items_invokeOnIvarAccessQueue;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)_rateDidChangeNotificationPayloadForFigRateChangeReason:(int)arg1 rateChangeIdentifier:(id)arg2 ;
-(void)setRate:(float)arg1 withVolumeRampDuration:(SCD_Struct_CM3)arg2 playImmediately:(char)arg3 rateChangeReason:(int)arg4 ;
-(long long)_updateWaitingReasonAccordingToInterstitialEventCoordinator:(id*)arg1 forTimeControlStatus:(long long)arg2 ;
-(char)_usesLegacyAutomaticWaitingBehavior;
-(long long)_timeControlStatusAndWaitingReason:(id*)arg1 forPlaybackState:(int)arg2 ;
-(SCD_Struct_CM3)currentUnfoldedTime;
-(void)seekToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToTime:(SCD_Struct_CM3)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToTime:(SCD_Struct_CM3)arg1 toleranceBefore:(SCD_Struct_CM3)arg2 toleranceAfter:(SCD_Struct_CM3)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)_createPrerollID;
-(int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_unregisterAndReturnRetainedPrerollCompletionHandler;
-(CFStringRef)figPlayerActionForActionAtItemEnd:(long long)arg1 ;
-(void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(char)arg2 ;
-(char)isClosedCaptionDisplayEnabled;
-(char)_isAirPlayVideoActive;
-(void)_detachVideoLayersFromFigPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)_detachClosedCaptionLayersFromFigPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)_detachFigPlayerFromSubtitleLayers;
-(id)_closedCaptionLayers;
-(id)_avPlayerLayers;
-(CGSize)_maximumAVPlayerLayerDisplaySize;
-(id)_subtitleLayers;
-(id)_videoLayers;
-(void)_updatePixelBufferAttributesForLayer:(id)arg1 ;
-(void)setCaptionRenderingStrategy:(NSString *)arg1 ;
-(id)_externalPlaybackVideoGravity;
-(id)_fpNotificationNames;
-(id)_copyPerformanceDataForCurrentItem;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)_noteNewPresentationSizeForPlayerItem:(id)arg1 ;
-(char)_cachedNonForcedSubtitleDisplayEnabledForCurrentItem;
-(void)_noteNewNonForcedSubtitleDisplayEnabledForPlayerItem:(id)arg1 ;
-(void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(void)_advanceToNextItem;
-(void)prepareItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)setExpectedAssetTypes:(id)arg1 ;
-(void)_setAncillaryPerformanceInformationForDisplay:(id)arg1 ;
-(id)_ancillaryPerformanceInformationForDisplay;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(void)_removeAllItems;
-(void)setRate:(float)arg1 withVolumeRampDuration:(SCD_Struct_CM3)arg2 ;
-(void)playImmediatelyAtRate:(float)arg1 ;
-(long long)_timeControlStatusAndWaitingReason:(id*)arg1 ;
-(void)_setUsesLegacyAutomaticWaitingBehavior:(char)arg1 ;
-(void)seekToDate:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_CM3)arg1 ;
-(void)seekToTime:(SCD_Struct_CM3)arg1 toleranceBefore:(SCD_Struct_CM3)arg2 toleranceAfter:(SCD_Struct_CM3)arg3 ;
-(void)setRate:(float)arg1 time:(SCD_Struct_CM3)arg2 atHostTime:(SCD_Struct_CM3)arg3 ;
-(void)prerollAtRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelPendingPrerolls;
-(void)prerollOperationDidComplete:(char)arg1 notificationPayload:(CFDictionaryRef)arg2 ;
-(float)_playerVolume;
-(void)setClosedCaptionDisplayEnabled:(char)arg1 ;
-(char)_isDisplayingClosedCaptions;
-(void)setResourceConservationLevelWhilePaused:(long long)arg1 ;
-(void)setPlayerRole:(id)arg1 ;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(char)arg1 ;
-(char)_externalPlaybackActive;
-(long long)externalPlaybackType;
-(void)setOutputContext:(id)arg1 ;
-(char)allowsAirPlayVideo;
-(void)setAllowsAirPlayVideo:(char)arg1 ;
-(char)_airPlayVideoActive;
-(char)isAirPlayVideoActive;
-(char)usesAirPlayVideoWhileAirPlayScreenIsActive;
-(void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(char)arg1 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_CM3)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeTimeObserver:(id)arg1 ;
-(id)_pixelBufferAttributeMediator;
-(void)setExternalPlaybackVideoGravity:(id)arg1 ;
-(void)_addFPInterstitialCoordinatorListeners;
-(void)_setFigPlaybackItemToMakeCurrent:(OpaqueFigPlaybackItemRef)arg1 ;
-(char)_getDisplayVideoRange:(id*)arg1 displaySize:(CGSize*)arg2 refreshRate:(id*)arg3 ;
-(char)_shouldLogPerformanceData;
-(void)_logPerformanceDataForPreviousItem;
-(void)_logPerformanceDataForCurrentItem;
-(char)_suppressesAudioRendering;
-(void)_setSuppressesAudioRendering:(char)arg1 ;
-(void)setPreventsDisplaySleepDuringVideoPlayback:(char)arg1 ;
-(id)_playbackDisplaysForFigPlayer;
-(long long)_extractFPExternalProtectionStatus:(id)arg1 ;
-(NSArray *)_displaysUsedForPlayback;
-(void)_setDisplaysUsedForPlayback:(id)arg1 ;
-(void)setVideoRangeOverride:(id)arg1 ;
-(long long)_externalProtectionStatusCopiedFromFig;
-(long long)_externalProtectionStatus;
-(void)removeAudioPlaybackRateLimits;
-(char)isAudioPlaybackEnabledAtAllRates;
-(void)setMinRateForAudioPlayback:(float)arg1 ;
-(void)setMaxRateForAudioPlayback:(float)arg1 ;
-(void)setAllowsPixelBufferPoolSharing:(char)arg1 ;
-(void)setDisallowsAMRAudio:(char)arg1 ;
-(void)setDisallowsHardwareAcceleratedVideoDecoder:(char)arg1 ;
-(void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2 ;
-(id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1 ;
-(id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1 ;
-(void)setAudioOutputDeviceUniqueID:(NSString *)arg1 ;
-(void)setAutoSwitchStreamVariants:(char)arg1 ;
-(void)setPreparesItemsForPlaybackAsynchronously:(char)arg1 ;
-(void)setAllowsOutOfBandTextTrackRendering:(char)arg1 ;
-(void)setMultichannelAudioStrategy:(NSString *)arg1 ;
-(void)setCaptionPipelineStrategy:(NSString *)arg1 ;
-(void)setAudioSession:(id)arg1 ;
-(id)audioSession;
-(void)_setPreservesAudioSessionSampleRate:(char)arg1 ;
-(char)_preservesAudioSessionSampleRate;
-(void)setPreferredVideoDecoderGPURegistryID:(unsigned long long)arg1 ;
-(void)setLoggingIdentifier:(id<AVLoggingIdentifier>)arg1 ;
-(id)_STSLabel;
-(void)_setSTSLabel:(id)arg1 ;
-(void)_updateVideoTargetOnFigPlayer;
-(void)addVideoTarget:(OpaqueFigVideoTargetRef)arg1 ;
-(void)removeVideoTarget:(OpaqueFigVideoTargetRef)arg1 ;
-(char)interstitialPlaybackAllowed;
-(void)_setInterstitialPlayerOnQueue:(id)arg1 ;
-(void)_setInterstitialPlayer:(id)arg1 ;
-(void)_noteRemoteInterstitialEvents:(id)arg1 forItem:(id)arg2 ;
-(void)_noteCurrentRemoteInterstitialEvent:(id)arg1 ;
-(void)_allowInterstitialUnitTests;
@end

