/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>
#import <libobjc.A.dylib/VCConnectionChangedHandler.h>

@class VCPacketBundler, VCAudioRedBuilder, VCRedundancyControllerAudio, VCAudioTierPicker, VCAudioTier, AVCStatisticsCollector, NSMutableArray, VCAudioPayload, VCTransportSession, NSArray, VCAudioPayloadConfig, NSDictionary, NSString;

@interface VCAudioTransmitter : NSObject <VCAudioIOSink, VCConnectionChangedHandler> {

	VCPacketBundler* _audioBundler;
	VCAudioRedBuilder* _redBuilder;
	VCRedundancyControllerAudio* _redundancyController;
	opaqueVCAudioBufferListRef _encodeBuffer;
	char _lastIsTalking;
	double _lastTierSwitch;
	double _audioInterval;
	int _audioTierChangeRequestCount;
	int _audioTxBitrate;
	int _actualAudioSendingBitrate;
	unsigned _lastSentAudioSampleTime;
	unsigned _sampleRate;
	unsigned _samplesPerFrame;
	unsigned char _inputMeter;
	long long _blockSize;
	float _blockSeconds;
	double _lastUpdateQualityIndicator;
	int _qualityIndicator;
	VCAudioTierPicker* _audioTierPicker;
	VCAudioTier* _currentAudioTier;
	VCAudioTier* _requestedAudioTier;
	char* _lastInputSampleBuffer;
	unsigned _lastInputSampleBufferSize;
	int _audioHeaderSize;
	char _audioTierHysteresis;
	void* _packetThread;
	unsigned _targetBitrate;
	unsigned _rateChangeCounter;
	unsigned _currentTargetBitrate;
	unsigned _currentDuplication;
	unsigned _redundancyPercentage;
	double _redundancyInterval;
	unsigned _redundancyControllerNumPayloads;
	unsigned _redundancyControllerMaxDelay20ms;
	AVCStatisticsCollector* _statisticsCollector;
	char _isAudioStalled;
	unsigned _sentAudioBytes;
	unsigned _encodedBytes;
	unsigned _totalTxAudioBytes;
	unsigned _estimateTxAudioBytes;
	unsigned _audioFrameCounter;
	unsigned _silenceFrameCounter;
	unsigned _vadSegmentCounter;
	tagHANDLE* _rtpHandle;
	tagHANDLE* _afrc;
	tagHANDLE* _mediaQueue;
	tagHANDLE* _rtpVideo;
	void* _controlInfoGenerator;
	char _useRateControl;
	char _isUseCaseWatchContinuity;
	char _allowAudioSwitching;
	char _supportsAdaptation;
	char _needsPacketThread;
	char _isLocalCellular_LowestConnectionQuality;
	char _isRemoteCellular_LowestConnectionQuality;
	char _isConnectedOnIPv6_LowestConnectionQuality;
	char _isRedEnabled;
	char _includeRedSequenceOffset;
	unsigned _redNumPayloads;
	unsigned _redMaxDelay20ms;
	char _transmitROC;
	NSMutableArray* _audioPayloads;
	VCAudioPayload* _currentDTXPayload;
	VCAudioPayload* _currentAudioPayload;
	int _currentRedPayloadType;
	unsigned _currentAudioCap;
	AudioStreamBasicDescription _inputFormat;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingModuleID;
	int _operatingMode;
	VCTransportSession* _transportSession;
	id _delegate;
	char _ignoreSilence;
	unsigned _tierNetworkBitrate;
	char _sendActiveVoiceOnly;
	unsigned _qualityIndex;
	double _lastReportingCallbackTime;
	SCD_Struct_VC190 _currentChannelMetrics;
	SCD_Struct_VC192 _idsChannelDataFormat;
	unsigned _maxIDSStreamIdCount;
	NSArray* _supportedNumRedundantPayload;
	char _currentDTXEnable;
	unsigned char _mediaControlInfoVersion;
	char _alwaysOnAudioRedundancyEnabled;
	char _cellularAllowRedLowBitratesEnabled;
	char _wifiAllowRedLowBitratesEnabled;
	tagVCMemoryPool* _audioBundlePool;
	unsigned long long _remoteIDSParticipantID;
	char _useChannelDataFormat;
	char _useWiFiTiers;
	unsigned _rtpTimestampBase;
	char _shouldApplyRedAsBoolean;

}

@property (nonatomic,readonly) VCAudioPayloadConfig * currentAudioPayloadConfig; 
@property (nonatomic,readonly) VCPacketBundler * audioBundler;                                //@synthesize audioBundler=_audioBundler - In the implementation block
@property (nonatomic,readonly) VCAudioTier * currentAudioTier;                                //@synthesize currentAudioTier=_currentAudioTier - In the implementation block
@property (nonatomic,readonly) int audioTxBitrate;                                            //@synthesize audioTxBitrate=_audioTxBitrate - In the implementation block
@property (nonatomic,readonly) int actualAudioSendingBitrate;                                 //@synthesize actualAudioSendingBitrate=_actualAudioSendingBitrate - In the implementation block
@property (nonatomic,readonly) unsigned lastSentAudioSampleTime;                              //@synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime - In the implementation block
@property (nonatomic,readonly) unsigned sentAudioBytes; 
@property (nonatomic,readonly) unsigned encodedBytes; 
@property (nonatomic,readonly) unsigned redNumPayloads; 
@property (nonatomic,readonly) unsigned redMaxDelay20ms; 
@property (nonatomic,readonly) NSDictionary * dtxMetrics; 
@property (assign,nonatomic) int operatingMode;                                               //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign) unsigned char inputMeter;                                                  //@synthesize inputMeter=_inputMeter - In the implementation block
@property (assign) id<VCAudioTransmitterDelegate> delegate; 
@property (nonatomic,readonly) char isRedEnabled;                                             //@synthesize isRedEnabled=_isRedEnabled - In the implementation block
@property (nonatomic,readonly) char ignoreSilence;                                            //@synthesize ignoreSilence=_ignoreSilence - In the implementation block
@property (assign,nonatomic) unsigned targetBitrate;                                          //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (assign,nonatomic) unsigned rateChangeCounter;                                      //@synthesize rateChangeCounter=_rateChangeCounter - In the implementation block
@property (assign,nonatomic) SCD_Struct_VC190 currentChannelMetrics;                          //@synthesize currentChannelMetrics=_currentChannelMetrics - In the implementation block
@property (assign,nonatomic) char isAudioStalled;                                             //@synthesize isAudioStalled=_isAudioStalled - In the implementation block
@property (assign,nonatomic) int qualityIndicator;                                            //@synthesize qualityIndicator=_qualityIndicator - In the implementation block
@property (assign,nonatomic) unsigned maxIDSStreamIdCount;                                    //@synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount - In the implementation block
@property (nonatomic,retain) NSArray * supportedNumRedundantPayload;                          //@synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload - In the implementation block
@property (assign,nonatomic) char sendActiveVoiceOnly;                                        //@synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly - In the implementation block
@property (assign,getter=isCurrentDTXEnabled,nonatomic) char currentDTXEnable;                //@synthesize currentDTXEnable=_currentDTXEnable - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoVersion;                           //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
@property (assign,nonatomic) char useWiFiTiers;                                               //@synthesize useWiFiTiers=_useWiFiTiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<VCAudioTransmitterDelegate>)delegate;
-(void)setDelegate:(id<VCAudioTransmitterDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(int)qualityIndicator;
-(void)setQualityIndicator:(int)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(unsigned)targetBitrate;
-(unsigned)rateChangeCounter;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(char)isRedEnabled;
-(void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned)arg2 ;
-(void)gatherRealtimeStats:(CFDictionaryRef)arg1 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(VCAudioPayloadConfig *)currentAudioPayloadConfig;
-(char)isCurrentDTXEnabled;
-(void)setCurrentDTXEnable:(char)arg1 ;
-(char)setupAudio:(id*)arg1 ;
-(void)setStreamIDs:(id)arg1 ;
-(unsigned)maxIDSStreamIdCount;
-(void)setMaxIDSStreamIdCount:(unsigned)arg1 ;
-(NSArray *)supportedNumRedundantPayload;
-(void)setSupportedNumRedundantPayload:(NSArray *)arg1 ;
-(void)setSendActiveVoiceOnly:(char)arg1 ;
-(void)setRateChangeCounter:(unsigned)arg1 ;
-(int)actualAudioSendingBitrate;
-(int)audioTxBitrate;
-(VCPacketBundler *)audioBundler;
-(unsigned)redNumPayloads;
-(unsigned)redMaxDelay20ms;
-(char)handleCodecRateModeChange:(unsigned char)arg1 withBitrate:(unsigned)arg2 ;
-(SCD_Struct_VC190)currentChannelMetrics;
-(char)sendActiveVoiceOnly;
-(unsigned)lastSentAudioSampleTime;
-(void)setMediaControlInfoVersion:(unsigned char)arg1 ;
-(unsigned char)mediaControlInfoVersion;
-(void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2 ;
-(void)setUseWiFiTiers:(char)arg1 ;
-(void)setInputMeter:(unsigned char)arg1 ;
-(unsigned char)inputMeter;
-(VCAudioTier *)currentAudioTier;
-(NSDictionary *)dtxMetrics;
-(void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned)arg4 ;
-(char)isAudioStalled;
-(void)setIsAudioStalled:(char)arg1 ;
-(void)registerReportingTask;
-(char)ignoreSilence;
-(void)initAudioValues;
-(unsigned)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(char)arg2 ;
-(void)setupAudioHeaderSize;
-(char)setupAudioTierPicker;
-(void)logTierInfo:(int)arg1 ;
-(char)setupAudioEncoders;
-(unsigned)maximumSamplesPerFrame;
-(char)allocateLastInputSampleBuffer:(unsigned)arg1 ;
-(unsigned)sentAudioBytes;
-(unsigned)encodedBytes;
-(id)usedAudioPayloadForType:(int)arg1 ;
-(void)removeUnusedAudioPayloads;
-(int)encodeAudio:(opaqueVCAudioBufferListRef)arg1 numInputSamples:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 withPayload:(int*)arg5 isTalking:(char)arg6 ;
-(int)bundleAndSendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hasNewSamples:(char)arg6 voiceActivity:(char)arg7 priority:(unsigned char)arg8 ;
-(void)encodeBundleAndSendAudio:(opaqueVCAudioBufferListRef)arg1 sampleCount:(unsigned)arg2 ;
-(char)shouldUseDtx;
-(void)useAudioPayload:(id)arg1 withBitrate:(unsigned)arg2 ;
-(void)updateAudioTxBitrate;
-(void)useAudioTier:(id)arg1 ;
-(void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2 ;
-(void)reportRedundancyConfigChange;
-(int)sendAudioPacket:(char*)arg1 payloadLength:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 priority:(unsigned char)arg5 marker:(int)arg6 nextInterval:(float)arg7 padding:(char*)arg8 paddingLength:(unsigned char)arg9 sendReport:(int)arg10 ;
-(char)chooseAudioNetworkBitrate;
-(float)nextAudioInterval:(int)arg1 ;
-(int)sendAudioBundle:(char)arg1 atTimeStamp:(unsigned)arg2 nextInterval:(float)arg3 ;
-(char)sendAudioPacketImpl:(tagAudioPacketData*)arg1 bytesSent:(int*)arg2 ;
-(void*)generateControlInfo;
-(int)sendAudioPacket:(tagAudioPacketData)arg1 ;
-(void)setCurrentChannelMetrics:(SCD_Struct_VC190)arg1 ;
-(char)useWiFiTiers;
@end
