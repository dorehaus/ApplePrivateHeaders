/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFAssistantUIService <NSObject>
@optional
-(void)assistantConnection:(id)arg1 startUIRequestWithText:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnection:(id)arg1 startUIRequestWithInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionRequestWillStart:(id)arg1;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
-(void)assistantConnectionRequestFinished:(id)arg1;
-(void)assistantConnection:(id)arg1 shouldSpeak:(char)arg2;
-(void)assistantConnectionWillStartAcousticIDRequest:(id)arg1;
-(void)assistantConnectionDidDetectMusic:(id)arg1;
-(void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(char)arg2;
-(void)assistantConnection:(id)arg1 setUserActivtiyInfoAndMakeCurrent:(id)arg2 webpageURL:(id)arg3;
-(void)assistantConnectionInvalidateCurrentUserActivity:(id)arg1;
-(void)assistantConnection:(id)arg1 wantsToCacheImage:(id)arg2;
-(void)assistantConnection:(id)arg1 extensionRequestWillStartForApplication:(id)arg2;
-(void)assistantConnection:(id)arg1 extensionRequestFinishedForApplication:(id)arg2 error:(id)arg3;
-(void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg1;
-(void)assistantConnectionAudioSessionDidEndInterruption:(id)arg1 shouldResume:(char)arg2;
-(void)assistantConnection:(id)arg1 willStartAudioPlaybackRequest:(id)arg2;
-(void)assistantConnection:(id)arg1 didStartAudioPlaybackRequest:(id)arg2;
-(void)assistantConnection:(id)arg1 didStopAudioPlaybackRequest:(id)arg2 error:(id)arg3;
-(void)assistantConnection:(id)arg1 willProcessStartPlayback:(long long)arg2 intent:(id)arg3 completion:(/*^block*/id)arg4;
-(void)assistantConnection:(id)arg1 willProcessStartPlayback:(long long)arg2;
-(void)assistantConnection:(id)arg1 startPlaybackDidFail:(long long)arg2;
-(void)assistantConnection:(id)arg1 audioSessionWillBecomeActive:(char)arg2;
-(void)assistantConnection:(id)arg1 audioSessionDidBecomeActive:(char)arg2;
-(void)assistantConnection:(id)arg1 willProcessAppLaunchWithBundleIdentifier:(id)arg2;
-(void)assistantConnection:(id)arg1 appLaunchFailedWithBundleIdentifier:(id)arg2;
-(void)assistantConnection:(id)arg1 openApplicationWithBundleID:(id)arg2 URL:(id)arg3 completion:(/*^block*/id)arg4;
-(void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionDismissAssistant:(id)arg1;
-(void)assistantConnection:(id)arg1 didHandleQuickStopWithAction:(unsigned long long)arg2;

@end

