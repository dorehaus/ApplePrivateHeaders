/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/Versions/A/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class DEExtension, NSString;

@interface AirPlayReceiverPlatform : NSObject {

	AirPlayReceiverServerPrivate* _server;
	CFSetRef _mediaAudioSessions;
	CFSetRef _mediaVideoSessions;
	CFSetRef _screenSessions;
	CFSetRef _auxAudioSessions;
	int _uiErrorNotifyToken;
	int _hijackIDChangedNotifyToken;
	unsigned char _playbackPrevented;
	int _playbackAllowNotifyToken;
	int _playbackPreventNotifyToken;
	int _prefChangedNotifyToken;
	int _managedDefaultsChangedNotificationToken;
	int _systemBufferSamples;
	int _systemSampleRate;
	unsigned char _voiceForSiri;
	unsigned char _voiceForTelephony;
	unsigned char _isMuted;
	float _volumeSliderValueBeforeMute;
	DEExtension* _wifiDiagnosticExtension;
	NSString* _wifiDECaptureUUID;
	unsigned long long _stalledSessionCount;
	unsigned char _isAmbientAudioActive;
	unsigned char _isMediaAudioActive;
	unsigned char _isVideoActive;
	unsigned char _isScreenActive;
	unsigned long long _receiverSessionCount;

}

@property (assign,nonatomic) unsigned long long receiverSessionCount;              //@synthesize receiverSessionCount=_receiverSessionCount - In the implementation block
@property (assign,nonatomic) unsigned char isAmbientAudioActive;                   //@synthesize isAmbientAudioActive=_isAmbientAudioActive - In the implementation block
@property (assign,nonatomic) unsigned char isMediaAudioActive;                     //@synthesize isMediaAudioActive=_isMediaAudioActive - In the implementation block
@property (assign,nonatomic) unsigned char isVideoActive;                          //@synthesize isVideoActive=_isVideoActive - In the implementation block
@property (assign,nonatomic) unsigned char isScreenActive;                         //@synthesize isScreenActive=_isScreenActive - In the implementation block
-(unsigned char)isVideoActive;
-(void)updateActiveSessionRegistration:(AirPlayReceiverSessionPrivate*)arg1 regType:(int)arg2 regOp:(int)arg3 ;
-(void)setReceiverSessionCount:(unsigned long long)arg1 ;
-(void)setIsAmbientAudioActive:(unsigned char)arg1 ;
-(void)setIsMediaAudioActive:(unsigned char)arg1 ;
-(void)setIsVideoActive:(unsigned char)arg1 ;
-(void)setIsScreenActive:(unsigned char)arg1 ;
-(unsigned long long)receiverSessionCount;
-(unsigned char)isAmbientAudioActive;
-(unsigned char)isMediaAudioActive;
-(unsigned char)isScreenActive;
@end
