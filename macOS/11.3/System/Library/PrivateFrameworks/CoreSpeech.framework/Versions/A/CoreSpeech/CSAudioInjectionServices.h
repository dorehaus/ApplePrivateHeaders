/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSAudioInjectionServices : NSObject
+(void)pingpong:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)createAudioInjectionDeviceWithType:(long long)arg1 deviceName:(id)arg2 deviceID:(id)arg3 productID:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)connectDeviceWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)disconnectDeviceWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)primaryInputDeviceUUIDWithCompletion:(/*^block*/id)arg1 ;
+(char)audioInjectionEnabled;
+(id)getAudioInjectionXPCConnection;
+(void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 withfadingTimeWindowLength:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(char)setAudioInjectionMode:(char)arg1 ;
+(void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

