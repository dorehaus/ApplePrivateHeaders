/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/Versions/A/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUAudioFrequencyControllerDelegate.h>
#import <libobjc.A.dylib/TUMomentsControllerDelegate.h>
#import <libobjc.A.dylib/AVCRemoteVideoClientDelegate.h>

@class NSString;

@interface ConversationKit.ConversationController : NSObject <TUAudioFrequencyControllerDelegate, TUMomentsControllerDelegate, AVCRemoteVideoClientDelegate> {

	??? localParticipant;
	 remoteParticipants;
	 includeLocalParticipantInVisibleParticipants;
	 carPlayDisconnectRequiresLocalVideoEnable;
	 audioFrequencyController;
	 audioCallbackQueue;
	 $__lazy_storage_$_momentsController;
	 lastRegisteredMomentsProvider;
	 blockedCallerLookupQueue;
	 recentPresentationContexts;
	 pauseOnFirstFrame;
	 scheduledIsChangingMirroredVideoResetDates;
	 conversationState;
	 deviceOrientation;
	 broadcastingState;
	 didAddVisibleParticipant;
	 didRemoveVisibleParticipant;
	 didUpdateVisibleParticipant;
	 visibleParticipantDidBecomeActive;
	 didStartVideoForVisibleParticipant;
	 participantsMediaPrioritiesDidChange;
	 participantAudioPowerDidChange;
	 audioRouteDidChange;
	 cameraZoomAvailabiltyDidChange;
	 carPlayConnectedDidChange;
	 didUpdateLocalParticipant;
	 didUpdateRecordingLocalVideo;
	 didStartVideoForLocalParticipant;
	 conversationStateDidChange;
	 blockedParticipantsAdded;
	 blocklistCheckedHandles;
	 needsUserConfirmationForBlockedCaller;
	 enableVideoOnJoin;
	 participantMediaProviderCreator;
	 callCenter;
	 call;
	 blockedCallerChecker;
	??? conversationUUID;
	 localVideoRecordingTransactionID;

}

@property (readonly,nonatomic) NSString * description; 
-(void)momentsController:(id)arg1 didUpdateCapabilities:(id)arg2 forProvider:(id)arg3 ;
-(void)frequencyController:(id)arg1 audioPowerChanged:(float)arg2 forParticipantWithStreamToken:(long long)arg3 ;
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(char)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(char)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidSuspend:(char)arg2 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2 ;
-(void)handleLocalVideoPreviewFirstFrameArrived:(id)arg1 ;
-(void)handleSendingVideoChanged:(id)arg1 ;
-(void)handleCameraZoomBecameAvailable:(id)arg1 ;
-(void)handleCameraZoomBecameUnavailable:(id)arg1 ;
-(void)handleLocalPreviewChanged:(id)arg1 ;
-(void)handleScreenConnectionDidUpdate:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
@end

