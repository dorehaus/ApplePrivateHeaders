/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAssistantUIService.h>
#import <libobjc.A.dylib/AFSpeechDelegate.h>
#import <libobjc.A.dylib/SVXSpeechSynthesisListening.h>
#import <libobjc.A.dylib/SVXTaskTrackingCenterDelegate.h>
#import <libobjc.A.dylib/SVXAudioSessionProviding.h>

@protocol SVXPerforming, SVXSessionDelegate, AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, AFRelinquishableAssertion;
@class AFConnection, NSUUID, SVXActivationContext, SVXDeactivationContext, AFSpeechRequestOptions, NSMutableArray, AFAnalyticsTurnBasedInstrumentationContext, SVXTaskTrackingCenter, NSMutableSet, AFXPCWrapper, SVXServiceCommandHandler, SVXSpeechSynthesizer, AFInstanceContext, AFPreferences, AFAnalytics, AFExperiment, SASetApplicationContext, SVXDeviceProblemsState, SVXDeviceSetupContext, AFClockAlarmSnapshot, AFClockTimerSnapshot, NSMutableDictionary, NSUserActivity, NSString;

@interface SVXSession : NSObject <AFAssistantUIService, AFSpeechDelegate, SVXSpeechSynthesisListening, SVXTaskTrackingCenterDelegate, SVXAudioSessionProviding> {

	AFConnection* _connection;
	long long _currentState;
	long long _activityState;
	NSUUID* _activityUUID;
	/*^block*/id _postResignActiveBlock;
	SVXActivationContext* _currentActivationContext;
	SVXDeactivationContext* _currentDeactivationContext;
	NSUUID* _currentRequestUUID;
	AFSpeechRequestOptions* _currentSpeechRequestOptions;
	/*^block*/id _currentSpeechRequestDidStartBlock;
	NSMutableArray* _currentSpeechRequestPendingBlocks;
	char _currentRequestWillPresentUUFR;
	char _currentRequestDidPresentUUFR;
	AFAnalyticsTurnBasedInstrumentationContext* _previousRequestInstrumentationContext;
	AFAnalyticsTurnBasedInstrumentationContext* _currentRequestInstrumentationContext;
	SVXTaskTrackingCenter* _taskTrackingCenter;
	NSMutableSet* _sessionIdleAssertions;
	AFXPCWrapper* _inputAudioPowerWrapper;
	AFXPCWrapper* _outputAudioPowerWrapper;
	NSMutableSet* _audioSessionAssertions;
	id<SVXPerforming> _performer;
	SVXServiceCommandHandler* _serviceCommandHandler;
	SVXSpeechSynthesizer* _speechSynthesizer;
	AFInstanceContext* _instanceContext;
	AFPreferences* _preferences;
	AFAnalytics* _analytics;
	id<SVXSessionDelegate> _delegate;
	int _currentInstrumentationUIState;
	NSMutableArray* _pendingRequestBarriers;
	AFExperiment*<AFExperimentForSiriVOXSounds> _experimentForSiriVOXSounds;
	AFExperiment*<AFExperimentForSiriVOXTapToSiriBehavior> _experimentForSiriVOXTapToSiriBehavior;
	char _isMostRecentRequestStartingMediaPlaybackLocally;
	char _isMostRecentRequestSuppressedError;
	SASetApplicationContext* _setApplicationContext;
	long long _nowPlayingAppPlaybackState;
	SVXDeviceProblemsState* _deviceProblemsState;
	SVXDeviceSetupContext* _deviceSetupContext;
	AFClockAlarmSnapshot* _clockAlarmSnapshot;
	AFClockTimerSnapshot* _clockTimerSnapshot;
	unsigned long long _homeAnnouncementState;
	float _mediaPlaybackVolume;
	id _myriadToken;
	long long _myriadState;
	NSMutableArray* _pendingMyriadDecisionHandlers;
	NSMutableDictionary* _playbackRequestInfo;
	NSUserActivity* _userActivity;
	id<AFRelinquishableAssertion> _audioDuckingCoordinationAssertion;
	NSUUID* _sessionUUID;

}

@property (nonatomic,readonly) NSUUID * sessionUUID;                //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
-(void)_clearContext;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)dismiss;
-(void)cancelRequest;
-(void)assistantConnection:(id)arg1 startUIRequestWithText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnection:(id)arg1 startUIRequestWithInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnectionRequestWillStart:(id)arg1 ;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3 ;
-(void)assistantConnectionRequestFinished:(id)arg1 ;
-(void)assistantConnection:(id)arg1 shouldSpeak:(char)arg2 ;
-(void)assistantConnection:(id)arg1 setUserActivtiyInfoAndMakeCurrent:(id)arg2 webpageURL:(id)arg3 ;
-(void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg1 ;
-(void)assistantConnectionAudioSessionDidEndInterruption:(id)arg1 shouldResume:(char)arg2 ;
-(void)assistantConnection:(id)arg1 willStartAudioPlaybackRequest:(id)arg2 ;
-(void)assistantConnection:(id)arg1 didStartAudioPlaybackRequest:(id)arg2 ;
-(void)assistantConnection:(id)arg1 didStopAudioPlaybackRequest:(id)arg2 error:(id)arg3 ;
-(void)assistantConnection:(id)arg1 willProcessStartPlayback:(long long)arg2 intent:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)assistantConnection:(id)arg1 startPlaybackDidFail:(long long)arg2 ;
-(void)assistantConnection:(id)arg1 audioSessionWillBecomeActive:(char)arg2 ;
-(void)assistantConnection:(id)arg1 audioSessionDidBecomeActive:(char)arg2 ;
-(void)assistantConnection:(id)arg1 speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg2 ;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)arg1 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2 ;
-(void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1 ;
-(void)assistantConnection:(id)arg1 speechRecordingPerformTwoShotPromptWithType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)assistantConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)assistantConnection:(id)arg1 speechRecognized:(id)arg2 ;
-(void)assistantConnection:(id)arg1 recognizedAdditionalSpeechInterpretation:(id)arg2 refId:(id)arg3 ;
-(void)assistantConnection:(id)arg1 recognitionUpdateWithPhrases:(id)arg2 utterances:(id)arg3 refId:(id)arg4 ;
-(void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2 ;
-(void)assistantConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)stopAudioPlaybackRequest:(id)arg1 immediately:(char)arg2 ;
-(void)preheatWithStyle:(long long)arg1 ;
-(void)stopSpeech;
-(void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)assistantConnectionDismissAssistant:(id)arg1 ;
-(void)assistantConnection:(id)arg1 didHandleQuickStopWithAction:(unsigned long long)arg2 ;
-(void)_invalidateConnection;
-(void)getStateWithCompletion:(/*^block*/id)arg1 ;
-(NSUUID *)sessionUUID;
-(void)_dismiss;
-(void)_setCurrentState:(long long)arg1 ;
-(void)_handleCommand:(id)arg1 taskTracker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)speechSynthesizerDidBecomeBusy:(id)arg1 ;
-(void)speechSynthesizerDidBecomeIdle:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 willEnqueueRequest:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 willStartRequest:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 didStartRequest:(id)arg2 record:(id)arg3 taskTracker:(id)arg4 ;
-(void)speechSynthesizer:(id)arg1 didFinishRequest:(id)arg2 utteranceInfo:(id)arg3 record:(id)arg4 taskTracker:(id)arg5 ;
-(void)speechSynthesizer:(id)arg1 didCancelRequest:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 didInterruptRequest:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizer:(id)arg1 didFailRequest:(id)arg2 taskTracker:(id)arg3 error:(id)arg4 ;
-(void)deactivateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prewarmWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)activateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transitSpeechToAutomaticEndpointing;
-(void)getAlarmAndTimerFiringContextWithCompletion:(/*^block*/id)arg1 ;
-(void)endWaitingForMyriadDecisionWithToken:(id)arg1 result:(char)arg2 ;
-(void)updateNowPlayingAppPlaybackState:(long long)arg1 ;
-(void)updateClockAlarmSnapshot:(id)arg1 ;
-(void)updateClockTimerSnapshot:(id)arg1 ;
-(void)updateHomeAnnouncementState:(unsigned long long)arg1 ;
-(id)initWithPerformer:(id)arg1 serviceCommandHandler:(id)arg2 speechSynthesizer:(id)arg3 experimentContext:(id)arg4 instanceContext:(id)arg5 preferences:(id)arg6 analytics:(id)arg7 delegate:(id)arg8 ;
-(void)updateDeviceProblemsState:(id)arg1 ;
-(void)updateDeviceSetupContext:(id)arg1 ;
-(void)_deactivateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getActivityStateWithCompletion:(/*^block*/id)arg1 ;
-(id)activateWithContext:(id)arg1 options:(unsigned long long)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 deviceProblemsState:(id)arg6 homeAnnouncementState:(unsigned long long)arg7 nowPlayingAppPlaybackState:(long long)arg8 mediaPlaybackVolume:(float)arg9 speechSynthesisRecord:(id)arg10 speechSynthesisState:(long long)arg11 speechRecordingAlertPolicy:(id)arg12 completion:(/*^block*/id)arg13 ;
-(void)getAudioPowerWithType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)beginWaitingForMyriadDecision;
-(void)acquireAudioSessionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)taskTrackingCenterWillBecomeBusy:(id)arg1 ;
-(void)taskTrackingCenter:(id)arg1 didBeginTrackingTaskWithContext:(id)arg2 ;
-(void)taskTrackingCenter:(id)arg1 didEndTrackingTaskWithContext:(id)arg2 ;
-(void)taskTrackingCenterDidBecomeIdle:(id)arg1 ;
-(void)handleCommand:(id)arg1 taskTracker:(id)arg2 ;
-(void)_preheatWithStyle:(long long)arg1 ;
-(void)_activateWithContext:(id)arg1 options:(unsigned long long)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 deviceProblemsState:(id)arg6 homeAnnouncementState:(unsigned long long)arg7 nowPlayingAppPlaybackState:(long long)arg8 mediaPlaybackVolume:(float)arg9 speechSynthesisRecord:(id)arg10 speechSynthesisState:(long long)arg11 speechRecordingAlertPolicy:(id)arg12 taskTracker:(id)arg13 completion:(/*^block*/id)arg14 ;
-(void)_stopSpeech;
-(void)_transitSpeechToAutomaticEndpointing;
-(void)_transitSpeechToManualEndpointing;
-(void)_cancelRequestWithOptions:(unsigned long long)arg1 keepTaskTracker:(id)arg2 ;
-(void)_resignActiveForReason:(id)arg1 ;
-(void)_getAlarmAndTimerFiringContextWithCompletion:(/*^block*/id)arg1 ;
-(id)_connection:(char)arg1 ;
-(void)_addRequestBarrier:(/*^block*/id)arg1 ;
-(void)_startSpeechRequestWithOptions:(id)arg1 clearsContext:(char)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 deviceProblemsState:(id)arg6 homeAnnouncementState:(unsigned long long)arg7 nowPlayingAppPlaybackState:(long long)arg8 taskTracker:(id)arg9 completion:(/*^block*/id)arg10 ;
-(void)_handleSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 ;
-(void)_handleSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1 ;
-(void)_handleSpeechRecordingDidChangeAVRecordRoute:(id)arg1 ;
-(void)_handleSpeechRecordingDidDetectStartpoint;
-(void)_handleSpeechRecordingPerformTwoShotPromptWithType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSpeechRecordingDidEnd;
-(void)_handleSpeechRecordingDidCancel;
-(void)_handleSpeechRecordingDidFailWithError:(id)arg1 ;
-(void)_handleSpeechRecognitionDidFailWithError:(id)arg1 ;
-(void)_handleSpeechRecognized:(id)arg1 ;
-(void)_handleSpeechRecognizedPartialResult:(id)arg1 ;
-(void)_handleRequestWillStart;
-(void)_handleDismissAssistant;
-(void)_handleRequestFinished;
-(void)_handleReceivedCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRequestFailedWithError:(id)arg1 ;
-(void)_handleShouldSpeak:(char)arg1 ;
-(void)_handleAudioSessionDidBeginInterruption;
-(void)_handleAudioSessionDidEndInterruption:(char)arg1 ;
-(void)_handleWillStartAudioPlaybackRequest:(id)arg1 ;
-(void)_handleDidStartAudioPlaybackRequest:(id)arg1 ;
-(void)_handleDidStopAudioPlaybackRequest:(id)arg1 error:(id)arg2 ;
-(void)_handleDidHandleQuickStopWithActions:(unsigned long long)arg1 ;
-(void)_handleWillProcessStartPlaybackWithDestination:(long long)arg1 intent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleDidFailStartPlaybackWithDestination:(long long)arg1 ;
-(void)_handleAudioSessionWillBecomeActive:(char)arg1 ;
-(void)_handleAudioSessionDidBecomeActive:(char)arg1 ;
-(void)_handleSpeechSynthesizerWillBecomeBusy;
-(void)_handleSpeechSynthesizerDidBecomeIdle;
-(void)_handleSpeechSynthesizerWillStartRequest:(id)arg1 taskTracker:(id)arg2 ;
-(void)_handleSpeechSynthesizerDidStartRequest:(id)arg1 record:(id)arg2 taskTracker:(id)arg3 ;
-(void)_handleSpeechSynthesizerDidFinishRequest:(id)arg1 record:(id)arg2 taskTracker:(id)arg3 ;
-(void)_handleSpeechSynthesizerDidCancelRequest:(id)arg1 taskTracker:(id)arg2 ;
-(void)_handleSpeechSynthesizerDidInterruptRequest:(id)arg1 taskTracker:(id)arg2 ;
-(void)_handleSpeechSynthesizerDidFailRequest:(id)arg1 taskTracker:(id)arg2 error:(id)arg3 ;
-(void)_stopSessionIdleTimer;
-(void)_resetMyriadDecision;
-(void)_requestWillBeginWithTaskTracker:(id)arg1 ;
-(void)_performBlockAfterResignActive:(/*^block*/id)arg1 ;
-(void)_presentError:(id)arg1 taskTracker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_waitForMyriadDecisionUsingHandler:(/*^block*/id)arg1 ;
-(void)_requestDidEndWithOptions:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_startActiveAudioSessionRequestForType:(long long)arg1 taskTracker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startSpeechSynthesisRequest:(id)arg1 languageCode:(id)arg2 voiceName:(id)arg3 gender:(long long)arg4 introductionSoundID:(long long)arg5 conclusionSoundID:(long long)arg6 taskTracker:(id)arg7 postActivationHandler:(/*^block*/id)arg8 completion:(/*^block*/id)arg9 ;
-(void)_startRequestWithInfo:(id)arg1 clearsContext:(char)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 taskTracker:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_startSessionIdleTimerWithTimeInterval:(double)arg1 ;
-(void)_stopSpeechWithCurrentSpeechRequestOptions;
-(void)_performBlockAfterContinueBlock:(/*^block*/id)arg1 ;
-(void)_updateSpeechEndpointerOperationMode:(long long)arg1 ;
-(void)_forceAudioSessionActiveWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_beginWaitingForMyriadDecisionWithToken:(id)arg1 ;
-(void)_endWaitingForMyriadDecisionWithToken:(id)arg1 state:(long long)arg2 ;
-(void)_willChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_didChangeFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_performNextPendingRequestBarrier;
-(void)_forceAudioSessionInactiveWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkIsActiveWithCompletion:(/*^block*/id)arg1 ;
-(void)_discardPendingRequestBarriers;
-(void)_continuePendingSpeechRequest:(char)arg1 ;
-(void)_setInputAudioPowerWrapper:(id)arg1 ;
-(void)_setOutputAudioPowerWrapper:(id)arg1 ;
-(void)_beginThinking;
-(void)_endThinking;
-(void)_sessionIdleFiredWithAssertion:(id)arg1 ;
-(void)transitSpeechToManualEndpointing;
-(void)addRequestBarrier:(/*^block*/id)arg1 ;
-(void)updateMediaPlaybackVolume:(float)arg1 ;
-(void)activateWithSpeechRequestOptions:(id)arg1 options:(unsigned long long)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 deviceProblemsState:(id)arg6 homeAnnouncementState:(unsigned long long)arg7 nowPlayingAppPlaybackState:(long long)arg8 completion:(/*^block*/id)arg9 ;
-(void)_setApplicationContext:(id)arg1 ;
@end

