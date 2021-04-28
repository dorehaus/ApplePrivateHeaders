/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideoConferenceDelegate
@optional
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned)arg3 withUserInfo:(id)arg4 error:(id)arg5;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 isSendingAudio:(char)arg3 error:(id)arg4;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 didPauseAudio:(char)arg3 error:(id)arg4;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 didPauseVideo:(char)arg3 error:(id)arg4;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3 callMetadata:(id)arg4;
-(void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 remoteMediaStalled:(char)arg2 callID:(unsigned)arg3;
-(void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned)arg2;
-(void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 remoteAudioPaused:(char)arg2 callID:(unsigned)arg3;
-(void)videoConference:(id)arg1 remoteVideoPaused:(char)arg2 callID:(unsigned)arg3;
-(void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
-(void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
-(void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
-(void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
-(void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(char)arg2;
-(void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned)arg2 requestDict:(id)arg3;
-(void)videoConference:(id)arg1 sendRelayUpdate:(unsigned)arg2 updateDict:(id)arg3;
-(void)videoConference:(id)arg1 cancelRelayRequest:(unsigned)arg2 requestDict:(id)arg3;
-(void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned)arg2 isDegraded:(char)arg3 isRemote:(char)arg4;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 networkHint:(char)arg3;
-(void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned)arg2;
-(void)videoConference:(id)arg1 remoteAudioEnabled:(char)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 localAudioEnabled:(char)arg2 forCallID:(unsigned)arg3 error:(id)arg4;
-(void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 forCallID:(unsigned)arg3;
-(void)videoConference:(id)arg1 closeConnectionForCallID:(unsigned)arg2;
-(void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned)arg3;
-(void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned)arg3;

@required
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned)arg3 error:(id)arg4;

@end

