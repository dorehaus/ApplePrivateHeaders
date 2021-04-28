/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSDictionary, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCStatisticsHistory, VCStatisticsCollectorQueue, VCRateControlServerBag;

@interface AVCStatisticsCollector : NSObject {

	NSMutableDictionary* _statistics;
	tagVCStatisticsCollection* _statisticsCollection;
	NSMutableDictionary* _statisticChangeHandlerDictionary;
	NSDictionary* _statisticChangeHandlerDictionaryCache;
	char _isStatisticChangeHandlerDictionaryModified;
	VCRateControlBandwidthEstimatorMap* _bandwidthEstimatorMap;
	VCRateControlOWRDEstimator* _owrdEstimator;
	VCStatisticsHistory* _history;
	VCStatisticsCollectorQueue* _queue;
	int _forceQueueWaitTimeMs;
	double _previousProcessTime;
	unsigned _radioAccessTechnology;
	unsigned _mode;
	char _useExternalThread;
	unsigned _sharedEstimatedBandwidth;
	unsigned _sharedEstimatedBandwidthUncapped;
	unsigned _sharedRemoteEstimatedBandwidth;
	unsigned _maxVideoLocalBurstyLoss;
	unsigned _maxAudioLocalBurstyLoss;
	unsigned _remotePacketReceivedAudio;
	unsigned _remotePacketReceivedVideo;
	unsigned _estimatedBandwidthCap;
	unsigned _expectedBitrate;
	unsigned char _mediaControlInfoFECFeedbackVersion;
	char _fastSuddenBandwidthDetectionEnabled;
	VCRateControlServerBag* _serverBag;
	double _packetReceivedOWRD;
	opaque_pthread_rwlock_t _statisticsCollectionLock;

}

@property (assign,nonatomic) unsigned radioAccessTechnology;                                //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned sharedEstimatedBandwidth;                           //@synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth - In the implementation block
@property (nonatomic,readonly) unsigned sharedEstimatedBandwidthUncapped;                   //@synthesize sharedEstimatedBandwidthUncapped=_sharedEstimatedBandwidthUncapped - In the implementation block
@property (nonatomic,readonly) unsigned sharedRemoteEstimatedBandwidth;                     //@synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth - In the implementation block
@property (assign,nonatomic) unsigned estimatedBandwidthCap;                                //@synthesize estimatedBandwidthCap=_estimatedBandwidthCap - In the implementation block
@property (assign,nonatomic) unsigned expectedBitrate;                                      //@synthesize expectedBitrate=_expectedBitrate - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;              //@synthesize mediaControlInfoFECFeedbackVersion=_mediaControlInfoFECFeedbackVersion - In the implementation block
@property (assign,nonatomic) char fastSuddenBandwidthDetectionEnabled;                      //@synthesize fastSuddenBandwidthDetectionEnabled=_fastSuddenBandwidthDetectionEnabled - In the implementation block
@property (nonatomic,retain) VCRateControlServerBag * serverBag;                            //@synthesize serverBag=_serverBag - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setMode:(unsigned)arg1 ;
-(void)start;
-(void)stop;
-(unsigned)mode;
-(void)setStatistics:(id)arg1 ;
-(VCRateControlServerBag *)serverBag;
-(unsigned)radioAccessTechnology;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setServerBag:(VCRateControlServerBag *)arg1 ;
-(id)initForSimulation:(char)arg1 useExternalThread:(char)arg2 ;
-(void)setVCStatistics:(SCD_Struct_AV33)arg1 ;
-(void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)unregisterAllStatisticsChangeHandlers;
-(unsigned)sharedRemoteEstimatedBandwidth;
-(unsigned)sharedEstimatedBandwidthUncapped;
-(unsigned)sharedEstimatedBandwidth;
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(void)setEstimatedBandwidthCap:(unsigned)arg1 ;
-(void)setExpectedBitrate:(unsigned)arg1 ;
-(void)enableBWELogDump:(void*)arg1 ;
-(void)setFastSuddenBandwidthDetectionEnabled:(char)arg1 ;
-(unsigned)estimatedBandwidthCap;
-(unsigned)expectedBitrate;
-(SCD_Struct_AV33)getVCStatisticsWithType:(int)arg1 time:(double)arg2 ;
-(void)processVCStatisticsInternal:(SCD_Struct_AV33)arg1 ;
-(char)shouldProcessAtTime:(double)arg1 ;
-(void)drainAndProcessVCStatistics:(SCD_Struct_AV33)arg1 ;
-(void)addStatisticsHistory:(SCD_Struct_AV33*)arg1 ;
-(void)computeOtherStatistics:(SCD_Struct_AV33*)arg1 ;
-(void)addEntriesFromStatistics:(SCD_Struct_AV33)arg1 ;
-(void)updateStatisticChangeHandlerDictionaryCache;
-(void)updateMaxLocalBurstyLoss:(unsigned)arg1 isAudio:(char)arg2 ;
-(void)updatePacketReceivedCount:(SCD_Struct_AV33*)arg1 ;
-(void)computeBWEstimation:(SCD_Struct_AV33*)arg1 ;
-(void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(SCD_Struct_AV33*)arg1 ;
-(void)updateLocalEstimatedBandwidth;
-(void)computeOWRDEstimation:(SCD_Struct_AV33*)arg1 ;
-(void)addPacketLossInfo:(SCD_Struct_AV33*)arg1 ;
-(void)addActualBitrateInfo:(SCD_Struct_AV33*)arg1 ;
-(void)addRoundTripTimeInfo:(SCD_Struct_AV33*)arg1 ;
-(void)addMostBurstyLossInfo:(SCD_Struct_AV33*)arg1 ;
-(id)getStatistics:(id)arg1 ;
-(void)setMediaControlInfoFECFeedbackVersion:(unsigned char)arg1 ;
-(char)fastSuddenBandwidthDetectionEnabled;
@end
