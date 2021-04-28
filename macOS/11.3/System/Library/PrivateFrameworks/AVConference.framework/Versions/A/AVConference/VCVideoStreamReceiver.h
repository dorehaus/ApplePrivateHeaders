/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoReceiverBase.h>
#import <libobjc.A.dylib/VCMediaStreamSyncDestination.h>

@protocol OS_dispatch_queue;
@class VCVideoStreamRateAdaptation, NSObject, VideoAttributes, VCMediaStreamSynchronizer, VCMediaStreamStats, NSString;

@interface VCVideoStreamReceiver : VCVideoReceiverBase <VCMediaStreamSyncDestination> {

	tagHANDLE* _hRTP;
	OpaqueCMMemoryPoolRef _blockBufferMemoryPool;
	CFAllocatorRef _blockBufferMemoryPoolAllocator;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	char _receivedFirstPacket;
	char _receivedFirstRemoteFrame;
	unsigned short _lastSequenceNumber;
	int _sequenceNumberOutOfOrder;
	unsigned char _firSequenceNumber;
	double _lastFIRArrivalTime;
	VCVideoStreamRateAdaptation* _rateAdaptation;
	opaqueCMBufferQueueRef _videoQueue;
	unsigned _mostRecentTimestamp;
	unsigned _lastVideoTimestamp;
	unsigned _videoTimestampWrapCount;
	opaqueCMFormatDescriptionRef _formatDescription;
	NSObject*<OS_dispatch_queue> _videoStreamReceiverQueue;
	OpaqueFigThreadRef _networkReceiveThread;
	char _runNetworkReceiveThread;
	int _sRecvReset;
	VideoPacketBuffer_tRef _videoPacketBuffer;
	VideoAttributes* _remoteVideoAttributes;
	VCMediaStreamSynchronizer* _mediaStreamSynchronizer;
	int _remoteVideoCamera;
	char _remoteVideoMirrored;
	char _enableCVO;
	unsigned long long _cvoExtensionID;
	unsigned long long _lastKeyFrameSampleBufferSize;
	SCD_Struct_VC87 _lastFrameTime;
	SCD_Struct_VC87 _lastDisplayTime;
	VCMediaStreamStats* _stats;
	double _reportingIntervalStartTime;
	double _reportingLastUpdateTime;
	unsigned _receivedBytes;
	unsigned _videoStallDurationMillis;
	double _videoStallStartTime;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingModuleID;
	char _enableReceiveBitstreamDump;
	OpaqueVCTransportStreamRunLoopRef _runLoop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)gatherRealtimeStats:(CFDictionaryRef)arg1 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(char)startSynchronization:(id)arg1 ;
-(void)stopSynchronization;
-(int)stopNetworkReceiveThread;
-(void)teardownDecodeSession:(char)arg1 ;
-(void)setEnableRateAdaptation:(char)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(int)startNetworkReceiveThread;
-(void)setSyncSource:(id)arg1 ;
-(id)syncSource;
-(void)handleAlarmForTimeStamp:(unsigned)arg1 ;
-(int)processVideoRTP;
-(int)processVideoRTCP;
-(void)updateVideoStallStatus:(char)arg1 ;
-(int)scheduleDecodeForFrameWithBuffer:(VCVideoReceiverSampleBuffer_t*)arg1 timestamp:(unsigned)arg2 hostTime:(double)arg3 showFrame:(char)arg4 ;
-(void)scheduleDecodeForTimestamp:(unsigned)arg1 ;
-(void)scheduleVideoDecode:(unsigned*)arg1 schedule_n:(int)arg2 ;
-(void)updateSequenceNumber:(unsigned short)arg1 ;
-(void)processReceptionReportBlock:(tagRTCP_RRB*)arg1 blockCount:(unsigned)arg2 arrivalNTPTime:(tagNTP)arg3 ;
-(int)decodeFrame:(opaqueCMSampleBufferRef)arg1 showFrame:(char)arg2 ;
-(void)createDecodeSession:(opaqueCMFormatDescriptionRef)arg1 ;
-(char)canDequeue:(opaqueCMBufferQueueRef)arg1 forTimestamp:(unsigned)arg2 ;
-(void)dequeueAndDecodeForTimestamp:(unsigned)arg1 ;
-(char)handleRemoteVideoAttributesChange:(CVBufferRef)arg1 ;
-(id)initWithRTP:(tagHANDLE*)arg1 delegate:(id)arg2 reportingAgent:(opaqueRTCReportingRef)arg3 dumpID:(unsigned)arg4 reportingParentID:(int)arg5 statisticsCollector:(id)arg6 useTransportStreamRunLoop:(char)arg7 ;
-(void)setEnableCVO:(char)arg1 cvoExtensionID:(unsigned long long)arg2 ;
-(void)pauseVideo;
-(void)updateSourcePlayoutTimestamp:(SCD_Struct_VC87*)arg1 ;
-(void*)networkReceivePackets;
-(void)rtcpSendIntervalElapsed;
-(int)showDecodedFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_VC87)arg2 ;
@end

