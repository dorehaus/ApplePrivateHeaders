/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/Contents/MacOS/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFServiceHelper <NSObject>
@optional
-(id)endpointInfo;
-(id)instanceInfo;
-(id)speechInfo;
-(void)fetchContextsForKeys:(id)arg1 includesNearbyDevices:(char)arg2 completion:(/*^block*/id)arg3;

@required
-(char)isDeviceInStarkMode;
-(void)dismissAssistant;
-(void)prepareForAudioHandoffWithCompletion:(/*^block*/id)arg1;
-(void)prepareForAudioHandoffFailedWithCompletion:(/*^block*/id)arg1;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(char)openSensitiveURL:(id)arg1;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
-(char)isDeviceLockedWithPasscode;
-(char)isDeviceInCarDND;
-(char)isTimeoutSuspended;
-(id)peerInfoForCurrentCommand;

@end

