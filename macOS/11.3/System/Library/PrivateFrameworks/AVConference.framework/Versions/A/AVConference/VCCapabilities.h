/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface VCCapabilities : NSObject <NSCoding> {

	char isAudioEnabled;
	char isAudioPausedToStart;
	char isVideoEnabled;
	char isVideoPausedToStart;
	char isVideoSourceScreen;
	char isDuplexAudioOnly;
	char isDuplexVideoOnly;
	char isHalfDuplexAudio;
	char isKeyExchangeEnabled;
	char isRelayEnabled;
	char isRelayForced;
	char requiresWifi;
	char isDTLSEnabled;
	unsigned preferredAudioCodec;
	unsigned actualAudioCodec;
	unsigned preferredVideoCodec;
	unsigned actualVideoCodec;
	int deviceRole;

}

@property (assign) char isAudioEnabled; 
@property (assign) char isAudioPausedToStart; 
@property (assign) char isVideoEnabled; 
@property (assign) char isVideoPausedToStart; 
@property (assign) char isVideoSourceScreen; 
@property (assign) char isDuplexVideoOnly; 
@property (assign) char isDuplexAudioOnly; 
@property (assign) char isHalfDuplexAudio; 
@property (assign) char isKeyExchangeEnabled; 
@property (assign) char isRelayEnabled; 
@property (assign) char isRelayForced; 
@property (assign) char requiresWifi; 
@property (assign) char isDTLSEnabled; 
@property (assign) unsigned preferredAudioCodec; 
@property (assign) unsigned actualAudioCodec; 
@property (assign) unsigned preferredVideoCodec; 
@property (assign) unsigned actualVideoCodec; 
@property (assign) int deviceRole; 
+(id)DataOnlyVCCapabilities;
+(id)AudioOnlyVCCapabilities;
+(id)VideoOnlyVCCapabilities;
+(id)screenSharingVCCapabilities;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsAudioEnabled:(char)arg1 ;
-(char)isAudioEnabled;
-(char)isVideoEnabled;
-(void)setIsVideoEnabled:(char)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(id)newEncodedDictionary;
-(char)isAudioPausedToStart;
-(char)isVideoPausedToStart;
-(char)isRelayEnabled;
-(char)requiresWifi;
-(void)setRequiresWifi:(char)arg1 ;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(unsigned)preferredAudioCodec;
-(void)setPreferredAudioCodec:(unsigned)arg1 ;
-(char)isDuplexAudioOnly;
-(char)isKeyExchangeEnabled;
-(char)isDTLSEnabled;
-(unsigned)actualAudioCodec;
-(void)setActualAudioCodec:(unsigned)arg1 ;
-(unsigned)preferredVideoCodec;
-(void)setPreferredVideoCodec:(unsigned)arg1 ;
-(unsigned)actualVideoCodec;
-(void)setActualVideoCodec:(unsigned)arg1 ;
-(char)isRelayForced;
-(void)setIsDTLSEnabled:(char)arg1 ;
-(char)isDuplexVideoOnly;
-(void)setIsDuplexAudioOnly:(char)arg1 ;
-(void)setIsDuplexVideoOnly:(char)arg1 ;
-(void)setIsVideoPausedToStart:(char)arg1 ;
-(void)setIsVideoSourceScreen:(char)arg1 ;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(char)isVideoSourceScreen;
-(void)setIsKeyExchangeEnabled:(char)arg1 ;
-(void)setIsAudioPausedToStart:(char)arg1 ;
-(void)setIsRelayEnabled:(char)arg1 ;
-(void)setIsRelayForced:(char)arg1 ;
-(char)isHalfDuplexAudio;
-(void)setIsHalfDuplexAudio:(char)arg1 ;
@end

