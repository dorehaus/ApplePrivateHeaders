/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VCBasebandCodecNotifications.h>

@class NSString;

@interface VCAudioRelayIO : NSObject <NSCopying, VCBasebandCodecNotifications> {

	char _usePacketThread;
	PacketThread_sRef _packetThread;
	char _isRunning;
	unsigned _micTimestamp;
	AudioStreamBasicDescription _micFormat;
	/*function pointer*/void* _micCallback;
	void* _micCallbackContext;
	opaqueVCAudioBufferListRef _micBuffer;
	unsigned _speakerTimestamp;
	AudioStreamBasicDescription _speakerFormat;
	/*function pointer*/void* _speakerCallback;
	void* _speakerCallbackContext;
	opaqueVCAudioBufferListRef _speakerBuffer;
	/*function pointer*/void* _updateRemoteCodecInfoCallback;
	void* _updateRemoteCodecInfoContext;
	float _micPowerRMS;
	float _speakerPowerRMS;
	/*^block*/id _startCompletionHandler;
	VCRemoteCodecInfo _remoteCodecInfo;
	id _relay;

}

@property (assign) unsigned speakerTimestamp;                                            //@synthesize speakerTimestamp=_speakerTimestamp - In the implementation block
@property (assign) unsigned micTimestamp;                                                //@synthesize micTimestamp=_micTimestamp - In the implementation block
@property (readonly) PacketThread_sRef packetThread;                                     //@synthesize packetThread=_packetThread - In the implementation block
@property (assign) float micPowerRMS;                                                    //@synthesize micPowerRMS=_micPowerRMS - In the implementation block
@property (assign) float speakerPowerRMS;                                                //@synthesize speakerPowerRMS=_speakerPowerRMS - In the implementation block
@property (assign) id<VCBasebandCodecNotifications> relay; 
@property (nonatomic,readonly) char isRunning;                                           //@synthesize isRunning=_isRunning - In the implementation block
@property (assign) char usePacketThread;                                                 //@synthesize usePacketThread=_usePacketThread - In the implementation block
@property (copy) id startCompletionHandler;                                              //@synthesize startCompletionHandler=_startCompletionHandler - In the implementation block
@property (assign,nonatomic) const VCRemoteCodecInfo* remoteCodecInfo; 
@property (assign) AudioStreamBasicDescription micFormat;                                //@synthesize micFormat=_micFormat - In the implementation block
@property (assign) /*function pointer*/void* micCallback;                                //@synthesize micCallback=_micCallback - In the implementation block
@property (assign) void* micCallbackContext;                                             //@synthesize micCallbackContext=_micCallbackContext - In the implementation block
@property (nonatomic,readonly) opaqueVCAudioBufferListRef micBuffer;                     //@synthesize micBuffer=_micBuffer - In the implementation block
@property (assign) AudioStreamBasicDescription speakerFormat;                            //@synthesize speakerFormat=_speakerFormat - In the implementation block
@property (assign) /*function pointer*/void* speakerCallback;                            //@synthesize speakerCallback=_speakerCallback - In the implementation block
@property (assign) void* speakerCallbackContext;                                         //@synthesize speakerCallbackContext=_speakerCallbackContext - In the implementation block
@property (nonatomic,readonly) opaqueVCAudioBufferListRef speakerBuffer;                 //@synthesize speakerBuffer=_speakerBuffer - In the implementation block
@property (assign) /*function pointer*/void* updateRemoteCodecInfoCallback;              //@synthesize updateRemoteCodecInfoCallback=_updateRemoteCodecInfoCallback - In the implementation block
@property (assign) void* updateRemoteCodecInfoContext;                                   //@synthesize updateRemoteCodecInfoContext=_updateRemoteCodecInfoContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isRunning;
-(char)isInitialized;
-(void)setRelay:(id<VCBasebandCodecNotifications>)arg1 ;
-(id<VCBasebandCodecNotifications>)relay;
-(void)setMicCallback:(/*function pointer*/void*)arg1 ;
-(void)setMicCallbackContext:(void*)arg1 ;
-(void)setSpeakerCallback:(/*function pointer*/void*)arg1 ;
-(void)setSpeakerCallbackContext:(void*)arg1 ;
-(void)setMicFormat:(AudioStreamBasicDescription)arg1 ;
-(void)setSpeakerFormat:(AudioStreamBasicDescription)arg1 ;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(/*function pointer*/void*)micCallback;
-(/*function pointer*/void*)speakerCallback;
-(void)setUsePacketThread:(char)arg1 ;
-(void)setStartCompletionHandler:(id)arg1 ;
-(void)setUpdateRemoteCodecInfoContext:(void*)arg1 ;
-(void)setUpdateRemoteCodecInfoCallback:(/*function pointer*/void*)arg1 ;
-(void)setRemoteCodecInfo:(const VCRemoteCodecInfo*)arg1 ;
-(AudioStreamBasicDescription)micFormat;
-(AudioStreamBasicDescription)speakerFormat;
-(char)usePacketThread;
-(void*)micCallbackContext;
-(void*)speakerCallbackContext;
-(/*function pointer*/void*)updateRemoteCodecInfoCallback;
-(void*)updateRemoteCodecInfoContext;
-(void)destroyPacketThread;
-(void)closeRecordings;
-(void)createAudioBuffersWithIOBufferDuration:(double)arg1 ;
-(char)isEqualToRelayIO:(id)arg1 ;
-(const VCRemoteCodecInfo*)remoteCodecInfo;
-(char)createPacketThreadWithIOBufferDuration:(double)arg1 name:(id)arg2 error:(id*)arg3 ;
-(void)createRecordingsWithName:(id)arg1 ;
-(void)printStreamFormats;
-(opaqueVCAudioBufferListRef)micBuffer;
-(opaqueVCAudioBufferListRef)speakerBuffer;
-(unsigned)speakerTimestamp;
-(void)setSpeakerTimestamp:(unsigned)arg1 ;
-(unsigned)micTimestamp;
-(void)setMicTimestamp:(unsigned)arg1 ;
-(id)startCompletionHandler;
-(PacketThread_sRef)packetThread;
-(float)micPowerRMS;
-(void)setMicPowerRMS:(float)arg1 ;
-(float)speakerPowerRMS;
-(void)setSpeakerPowerRMS:(float)arg1 ;
@end

