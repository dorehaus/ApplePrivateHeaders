/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SuddenChangeParameters, VCRateControlServerBag;

@interface VCRateControlBandwidthEstimator : NSObject {

	unsigned _totalBytesInProbingSequence;
	unsigned _totalPacketsInProbingSequence;
	double _lastPacketInProbingSequenceArrivalTime;
	double _referencePacketArrivalTime;
	double _earlyProbingPacketArrivalTime;
	unsigned _earlyBytesInProbingSequence;
	unsigned _earlyPacketsInProbingSequence;
	unsigned _referencePacketDataSize;
	BOOL _isInitialized;
	BOOL _isFirstBWEstimationReleased;
	unsigned _lastProbingSequenceTimestamp;
	unsigned _lastProbingSequenceReferenceTimestamp;
	double _firstDivergeTime;
	int _bandwidthDivergeCount;
	int _suddenChangeBandwidthBufferIndex;
	double _suddenChangeBandwidthBuffer[30];
	unsigned _overRangePacketsCount;
	double _totalBandwidth;
	SuddenChangeParameters* _suddenChangeParameters;
	unsigned _minPacketsCount;
	double _minEstimationWindowDuration;
	double _maxDetectableBandwidth;
	unsigned _maxOverRangePacketsCount;
	double _estimatedBandwidth;
	double _estimatedBandwidthUncapped;
	unsigned _radioAccessTechnology;
	unsigned _mode;
	int _bandwidthEstimationState;
	char _fastSuddenBandwidthDetectionEnabled;
	VCRateControlServerBag* _serverBag;
	unsigned _minProbingSequenceSize;
	void* _logBWEDump;

}

@property (assign,nonatomic) double estimatedBandwidth;                             //@synthesize estimatedBandwidth=_estimatedBandwidth - In the implementation block
@property (assign,nonatomic) double estimatedBandwidthUncapped;                     //@synthesize estimatedBandwidthUncapped=_estimatedBandwidthUncapped - In the implementation block
@property (assign,nonatomic) unsigned radioAccessTechnology;                        //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int bandwidthEstimationState;                        //@synthesize bandwidthEstimationState=_bandwidthEstimationState - In the implementation block
@property (assign,nonatomic) char fastSuddenBandwidthDetectionEnabled;              //@synthesize fastSuddenBandwidthDetectionEnabled=_fastSuddenBandwidthDetectionEnabled - In the implementation block
@property (nonatomic,retain) VCRateControlServerBag * serverBag;                    //@synthesize serverBag=_serverBag - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(VCRateControlServerBag *)serverBag;
-(unsigned)radioAccessTechnology;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setServerBag:(VCRateControlServerBag *)arg1 ;
-(void)enableBWELogDump:(void*)arg1 ;
-(void)setFastSuddenBandwidthDetectionEnabled:(char)arg1 ;
-(void)setEstimatedBandwidth:(double)arg1 ;
-(double)estimatedBandwidth;
-(int)bandwidthEstimationState;
-(double)estimatedBandwidthUncapped;
-(void)calculateBandwidthEstimationForBandwidthSample:(double)arg1 arrivalTime:(double)arg2 ;
-(void)calculateBandwidthEstimationAtTime:(double)arg1 mediaTimestamp:(unsigned)arg2 mediaDataSize:(unsigned)arg3 probingSequence:(char)arg4 probingSequenceID:(unsigned)arg5 ;
-(char)fastSuddenBandwidthDetectionEnabled;
-(void)updateQualificationParameters;
-(void)initializeBandwidthEstimationAtTime:(double)arg1 mediaTimestamp:(unsigned)arg2 probingSequence:(char)arg3 probingSequenceID:(unsigned)arg4 ;
-(char)isPacketProcessedLateWithArrivalTime:(double)arg1 ;
-(double)resetBandwidthWithParameters:(double)arg1 probingSequenceDuration:(double)arg2 probingSequenceSize:(unsigned)arg3 packetsInProbingSequence:(unsigned)arg4 ;
-(double)updateBandwidthEstimation:(double)arg1 arrivalTime:(double)arg2 ;
-(void)updateInitialBandwidthEstimationForCellularAtTime:(double)arg1 bandwidth:(double)arg2 ;
-(void)detectSuddenChangeWithBandwidth:(double)arg1 suddenChangeAbove:(char*)arg2 suddenChangeBelow:(char*)arg3 ;
-(void)compensateSuddenChangeBandwidths;
-(void)recordSuddenChangeBandwidth:(double)arg1 ;
-(char)isSuddenChangeDurationMetAtArrivalTime:(double)arg1 ;
-(void)updateBandwidthDivergeCountAtArrivalTime:(double)arg1 suddenChangeAbove:(char)arg2 suddenChangeBelow:(char)arg3 ;
-(void)setEstimatedBandwidthUncapped:(double)arg1 ;
@end

