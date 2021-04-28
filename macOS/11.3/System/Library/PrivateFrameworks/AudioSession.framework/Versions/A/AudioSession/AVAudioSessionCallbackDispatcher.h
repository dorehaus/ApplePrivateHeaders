/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SessionManagerXPCServerCallbackProtocol.h>

@class AVAudioSessionManager, AVAudioHardwareSystem;

@interface AVAudioSessionCallbackDispatcher : NSObject <SessionManagerXPCServerCallbackProtocol> {

	AVAudioSessionManager* mSessionManager;
	AVAudioHardwareSystem* mHardwareSystem;

}
-(void)interruptionMessageForSession:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)sessionStoppedForAppStateChange:(unsigned)arg1 ;
-(void)session:(unsigned)arg1 hasProxies:(char)arg2 ;
-(void)sessionNeedsStateSync:(unsigned)arg1 ;
-(void)serverConfigurationChange:(id)arg1 ;
-(void)serverDefaultRouteChange:(id)arg1 ;
-(void)controlValueChanged:(id)arg1 ;
-(id)initWithSessionManager:(id)arg1 hardwareSystem:(id)arg2 ;
@end

