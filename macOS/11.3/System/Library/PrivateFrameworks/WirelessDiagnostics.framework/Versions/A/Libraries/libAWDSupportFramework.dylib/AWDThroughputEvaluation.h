/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDThroughputEvaluation : PBCodable <NSCopying> {

	long long _wifiRssi;
	unsigned _actualHighBandwidth;
	unsigned _actualLowBandwidth;
	NSString* _appType;
	unsigned _badDecisionsCounterVIBE;
	unsigned _badDecisionsCounterVO;
	unsigned _bcnPer;
	int _btRssi;
	int _btWiFiCoexState;
	unsigned _bufferInterval;
	unsigned _cca;
	unsigned _cellARFCN;
	unsigned _cellBandInfo;
	unsigned _cellChannelBW;
	unsigned _cellEstimatedBW;
	int _cellLteRSRQ;
	unsigned _cellModelConfidenceLevel;
	unsigned _cellModelVersion;
	int _cellNrRSRP;
	int _cellNrRSRQ;
	int _cellNrSNR;
	int _cellRsrp;
	int _cellSinr;
	unsigned _cmDataSentCount;
	unsigned _cmDataSentDuration;
	unsigned _cmEstimatedBandwidth;
	unsigned _decisionVIBE;
	unsigned _decisionVO;
	int _deviation;
	unsigned _devicePointOfInterest;
	unsigned _estimatedHighBandwidth;
	unsigned _estimatedLowBandwidth;
	unsigned _estimatedSpeed;
	unsigned _event;
	unsigned _expectedThroughputVIBE;
	unsigned _expectedThroughputVO;
	unsigned _goodDecisionsCounterVIBE;
	unsigned _goodDecisionsCounterVO;
	unsigned _invalidDecisionsCounterVIBE;
	unsigned _invalidDecisionsCounterVO;
	int _isWfiCaptive;
	int _lqmScoreBT;
	int _lqmScoreWifi;
	int _lqmScorecellular;
	unsigned _lteMaxScheduledMimoLayersInACell;
	unsigned _maxDLCAConfigured;
	unsigned _maxOfActualLowBandwidth;
	unsigned _maxULCAConfigured;
	unsigned _mlPredictedCellBW;
	unsigned _mlPredictedWiFiBW;
	unsigned _movingAvgHighBandwidth;
	unsigned _movingAvgLowBandwidth;
	unsigned _nrConfiguredBw;
	unsigned _nrMaxDlModulation;
	unsigned _nrTotalScheduledMimoLayers;
	int _pActualLowBandwidth;
	unsigned _packetLifetimeVIBE;
	unsigned _packetLossRateVIBE;
	unsigned _phyRate;
	unsigned _pkgLifeTimeVO;
	unsigned _pktLifeTimeVO;
	unsigned _pktLossRateVO;
	unsigned _qbssLoad;
	NSString* _ratType;
	unsigned _ratioDupeBytes;
	unsigned _ratioOOBBytes;
	unsigned _rrcState;
	unsigned _rxRetransmissionRate;
	unsigned _rxRetry;
	unsigned _tcpRTTAvg;
	unsigned _tcpRTTmin;
	unsigned _tcpRTTvar;
	unsigned _totalConfiguredBw;
	unsigned _totalConfiguredMimoLayers;
	unsigned _txRetransmissionRate;
	unsigned _txber;
	unsigned _videoStreamingStallTime;
	unsigned _weightedAveragePhyrateRx;
	unsigned _weightedAveragePhyrateTx;
	unsigned _weightedAverageRssi;
	unsigned _weightedAverageSnr;
	unsigned _wifChannelBW;
	unsigned _wifChannelType;
	unsigned _wifiCapability;
	unsigned _wifiModelConfidenceLevel;
	unsigned _wifiModelVersion;
	int _wifiSinr;
	int _wifichannel;
	int _wifiguardinterval;
	int _wifilowDataMode;
	int _wifimcsindex;
	int _wifinumberOfSpatialStreams;
	unsigned _wrmRecommendedRAT;
	char _cellNsaEnabled;
	char _isFR1;
	SCD_Struct_AW42 _has;

}

@property (assign,nonatomic) char hasEvent; 
@property (assign,nonatomic) unsigned event;                                         //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) char hasBufferInterval; 
@property (assign,nonatomic) unsigned bufferInterval;                                //@synthesize bufferInterval=_bufferInterval - In the implementation block
@property (assign,nonatomic) char hasWifiRssi; 
@property (assign,nonatomic) long long wifiRssi;                                     //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) char hasPhyRate; 
@property (assign,nonatomic) unsigned phyRate;                                       //@synthesize phyRate=_phyRate - In the implementation block
@property (assign,nonatomic) char hasQbssLoad; 
@property (assign,nonatomic) unsigned qbssLoad;                                      //@synthesize qbssLoad=_qbssLoad - In the implementation block
@property (assign,nonatomic) char hasCca; 
@property (assign,nonatomic) unsigned cca;                                           //@synthesize cca=_cca - In the implementation block
@property (assign,nonatomic) char hasBcnPer; 
@property (assign,nonatomic) unsigned bcnPer;                                        //@synthesize bcnPer=_bcnPer - In the implementation block
@property (assign,nonatomic) char hasExpectedThroughputVO; 
@property (assign,nonatomic) unsigned expectedThroughputVO;                          //@synthesize expectedThroughputVO=_expectedThroughputVO - In the implementation block
@property (assign,nonatomic) char hasWifiSinr; 
@property (assign,nonatomic) int wifiSinr;                                           //@synthesize wifiSinr=_wifiSinr - In the implementation block
@property (assign,nonatomic) char hasPktLifeTimeVO; 
@property (assign,nonatomic) unsigned pktLifeTimeVO;                                 //@synthesize pktLifeTimeVO=_pktLifeTimeVO - In the implementation block
@property (assign,nonatomic) char hasPktLossRateVO; 
@property (assign,nonatomic) unsigned pktLossRateVO;                                 //@synthesize pktLossRateVO=_pktLossRateVO - In the implementation block
@property (assign,nonatomic) char hasLqmScoreWifi; 
@property (assign,nonatomic) int lqmScoreWifi;                                       //@synthesize lqmScoreWifi=_lqmScoreWifi - In the implementation block
@property (assign,nonatomic) char hasPacketLossRateVIBE; 
@property (assign,nonatomic) unsigned packetLossRateVIBE;                            //@synthesize packetLossRateVIBE=_packetLossRateVIBE - In the implementation block
@property (assign,nonatomic) char hasExpectedThroughputVIBE; 
@property (assign,nonatomic) unsigned expectedThroughputVIBE;                        //@synthesize expectedThroughputVIBE=_expectedThroughputVIBE - In the implementation block
@property (assign,nonatomic) char hasPacketLifetimeVIBE; 
@property (assign,nonatomic) unsigned packetLifetimeVIBE;                            //@synthesize packetLifetimeVIBE=_packetLifetimeVIBE - In the implementation block
@property (assign,nonatomic) char hasBadDecisionsCounterVO; 
@property (assign,nonatomic) unsigned badDecisionsCounterVO;                         //@synthesize badDecisionsCounterVO=_badDecisionsCounterVO - In the implementation block
@property (assign,nonatomic) char hasGoodDecisionsCounterVO; 
@property (assign,nonatomic) unsigned goodDecisionsCounterVO;                        //@synthesize goodDecisionsCounterVO=_goodDecisionsCounterVO - In the implementation block
@property (assign,nonatomic) char hasInvalidDecisionsCounterVO; 
@property (assign,nonatomic) unsigned invalidDecisionsCounterVO;                     //@synthesize invalidDecisionsCounterVO=_invalidDecisionsCounterVO - In the implementation block
@property (assign,nonatomic) char hasBadDecisionsCounterVIBE; 
@property (assign,nonatomic) unsigned badDecisionsCounterVIBE;                       //@synthesize badDecisionsCounterVIBE=_badDecisionsCounterVIBE - In the implementation block
@property (assign,nonatomic) char hasGoodDecisionsCounterVIBE; 
@property (assign,nonatomic) unsigned goodDecisionsCounterVIBE;                      //@synthesize goodDecisionsCounterVIBE=_goodDecisionsCounterVIBE - In the implementation block
@property (assign,nonatomic) char hasInvalidDecisionsCounterVIBE; 
@property (assign,nonatomic) unsigned invalidDecisionsCounterVIBE;                   //@synthesize invalidDecisionsCounterVIBE=_invalidDecisionsCounterVIBE - In the implementation block
@property (assign,nonatomic) char hasLqmScorecellular; 
@property (assign,nonatomic) int lqmScorecellular;                                   //@synthesize lqmScorecellular=_lqmScorecellular - In the implementation block
@property (nonatomic,readonly) char hasRatType; 
@property (nonatomic,retain) NSString * ratType;                                     //@synthesize ratType=_ratType - In the implementation block
@property (assign,nonatomic) char hasCellRsrp; 
@property (assign,nonatomic) int cellRsrp;                                           //@synthesize cellRsrp=_cellRsrp - In the implementation block
@property (assign,nonatomic) char hasCellSinr; 
@property (assign,nonatomic) int cellSinr;                                           //@synthesize cellSinr=_cellSinr - In the implementation block
@property (assign,nonatomic) char hasBtRssi; 
@property (assign,nonatomic) int btRssi;                                             //@synthesize btRssi=_btRssi - In the implementation block
@property (assign,nonatomic) char hasTxRetransmissionRate; 
@property (assign,nonatomic) unsigned txRetransmissionRate;                          //@synthesize txRetransmissionRate=_txRetransmissionRate - In the implementation block
@property (assign,nonatomic) char hasRxRetransmissionRate; 
@property (assign,nonatomic) unsigned rxRetransmissionRate;                          //@synthesize rxRetransmissionRate=_rxRetransmissionRate - In the implementation block
@property (assign,nonatomic) char hasLqmScoreBT; 
@property (assign,nonatomic) int lqmScoreBT;                                         //@synthesize lqmScoreBT=_lqmScoreBT - In the implementation block
@property (assign,nonatomic) char hasWrmRecommendedRAT; 
@property (assign,nonatomic) unsigned wrmRecommendedRAT;                             //@synthesize wrmRecommendedRAT=_wrmRecommendedRAT - In the implementation block
@property (assign,nonatomic) char hasActualLowBandwidth; 
@property (assign,nonatomic) unsigned actualLowBandwidth;                            //@synthesize actualLowBandwidth=_actualLowBandwidth - In the implementation block
@property (assign,nonatomic) char hasActualHighBandwidth; 
@property (assign,nonatomic) unsigned actualHighBandwidth;                           //@synthesize actualHighBandwidth=_actualHighBandwidth - In the implementation block
@property (assign,nonatomic) char hasEstimatedLowBandwidth; 
@property (assign,nonatomic) unsigned estimatedLowBandwidth;                         //@synthesize estimatedLowBandwidth=_estimatedLowBandwidth - In the implementation block
@property (assign,nonatomic) char hasEstimatedHighBandwidth; 
@property (assign,nonatomic) unsigned estimatedHighBandwidth;                        //@synthesize estimatedHighBandwidth=_estimatedHighBandwidth - In the implementation block
@property (assign,nonatomic) char hasMovingAvgLowBandwidth; 
@property (assign,nonatomic) unsigned movingAvgLowBandwidth;                         //@synthesize movingAvgLowBandwidth=_movingAvgLowBandwidth - In the implementation block
@property (assign,nonatomic) char hasMovingAvgHighBandwidth; 
@property (assign,nonatomic) unsigned movingAvgHighBandwidth;                        //@synthesize movingAvgHighBandwidth=_movingAvgHighBandwidth - In the implementation block
@property (assign,nonatomic) char hasDeviation; 
@property (assign,nonatomic) int deviation;                                          //@synthesize deviation=_deviation - In the implementation block
@property (assign,nonatomic) char hasMaxOfActualLowBandwidth; 
@property (assign,nonatomic) unsigned maxOfActualLowBandwidth;                       //@synthesize maxOfActualLowBandwidth=_maxOfActualLowBandwidth - In the implementation block
@property (assign,nonatomic) char hasPkgLifeTimeVO; 
@property (assign,nonatomic) unsigned pkgLifeTimeVO;                                 //@synthesize pkgLifeTimeVO=_pkgLifeTimeVO - In the implementation block
@property (assign,nonatomic) char hasDecisionVO; 
@property (assign,nonatomic) unsigned decisionVO;                                    //@synthesize decisionVO=_decisionVO - In the implementation block
@property (assign,nonatomic) char hasDecisionVIBE; 
@property (assign,nonatomic) unsigned decisionVIBE;                                  //@synthesize decisionVIBE=_decisionVIBE - In the implementation block
@property (assign,nonatomic) char hasVideoStreamingStallTime; 
@property (assign,nonatomic) unsigned videoStreamingStallTime;                       //@synthesize videoStreamingStallTime=_videoStreamingStallTime - In the implementation block
@property (assign,nonatomic) char hasTxber; 
@property (assign,nonatomic) unsigned txber;                                         //@synthesize txber=_txber - In the implementation block
@property (assign,nonatomic) char hasRxRetry; 
@property (assign,nonatomic) unsigned rxRetry;                                       //@synthesize rxRetry=_rxRetry - In the implementation block
@property (assign,nonatomic) char hasWeightedAveragePhyrateTx; 
@property (assign,nonatomic) unsigned weightedAveragePhyrateTx;                      //@synthesize weightedAveragePhyrateTx=_weightedAveragePhyrateTx - In the implementation block
@property (assign,nonatomic) char hasWeightedAveragePhyrateRx; 
@property (assign,nonatomic) unsigned weightedAveragePhyrateRx;                      //@synthesize weightedAveragePhyrateRx=_weightedAveragePhyrateRx - In the implementation block
@property (assign,nonatomic) char hasWeightedAverageRssi; 
@property (assign,nonatomic) unsigned weightedAverageRssi;                           //@synthesize weightedAverageRssi=_weightedAverageRssi - In the implementation block
@property (assign,nonatomic) char hasWeightedAverageSnr; 
@property (assign,nonatomic) unsigned weightedAverageSnr;                            //@synthesize weightedAverageSnr=_weightedAverageSnr - In the implementation block
@property (assign,nonatomic) char hasCmDataSentCount; 
@property (assign,nonatomic) unsigned cmDataSentCount;                               //@synthesize cmDataSentCount=_cmDataSentCount - In the implementation block
@property (assign,nonatomic) char hasCmDataSentDuration; 
@property (assign,nonatomic) unsigned cmDataSentDuration;                            //@synthesize cmDataSentDuration=_cmDataSentDuration - In the implementation block
@property (assign,nonatomic) char hasCmEstimatedBandwidth; 
@property (assign,nonatomic) unsigned cmEstimatedBandwidth;                          //@synthesize cmEstimatedBandwidth=_cmEstimatedBandwidth - In the implementation block
@property (assign,nonatomic) char hasDevicePointOfInterest; 
@property (assign,nonatomic) unsigned devicePointOfInterest;                         //@synthesize devicePointOfInterest=_devicePointOfInterest - In the implementation block
@property (assign,nonatomic) char hasRrcState; 
@property (assign,nonatomic) unsigned rrcState;                                      //@synthesize rrcState=_rrcState - In the implementation block
@property (assign,nonatomic) char hasMlPredictedWiFiBW; 
@property (assign,nonatomic) unsigned mlPredictedWiFiBW;                             //@synthesize mlPredictedWiFiBW=_mlPredictedWiFiBW - In the implementation block
@property (assign,nonatomic) char hasWifiModelVersion; 
@property (assign,nonatomic) unsigned wifiModelVersion;                              //@synthesize wifiModelVersion=_wifiModelVersion - In the implementation block
@property (assign,nonatomic) char hasWifiModelConfidenceLevel; 
@property (assign,nonatomic) unsigned wifiModelConfidenceLevel;                      //@synthesize wifiModelConfidenceLevel=_wifiModelConfidenceLevel - In the implementation block
@property (assign,nonatomic) char hasMlPredictedCellBW; 
@property (assign,nonatomic) unsigned mlPredictedCellBW;                             //@synthesize mlPredictedCellBW=_mlPredictedCellBW - In the implementation block
@property (assign,nonatomic) char hasCellModelVersion; 
@property (assign,nonatomic) unsigned cellModelVersion;                              //@synthesize cellModelVersion=_cellModelVersion - In the implementation block
@property (assign,nonatomic) char hasCellModelConfidenceLevel; 
@property (assign,nonatomic) unsigned cellModelConfidenceLevel;                      //@synthesize cellModelConfidenceLevel=_cellModelConfidenceLevel - In the implementation block
@property (assign,nonatomic) char hasCellEstimatedBW; 
@property (assign,nonatomic) unsigned cellEstimatedBW;                               //@synthesize cellEstimatedBW=_cellEstimatedBW - In the implementation block
@property (nonatomic,readonly) char hasAppType; 
@property (nonatomic,retain) NSString * appType;                                     //@synthesize appType=_appType - In the implementation block
@property (assign,nonatomic) char hasTcpRTTAvg; 
@property (assign,nonatomic) unsigned tcpRTTAvg;                                     //@synthesize tcpRTTAvg=_tcpRTTAvg - In the implementation block
@property (assign,nonatomic) char hasTcpRTTmin; 
@property (assign,nonatomic) unsigned tcpRTTmin;                                     //@synthesize tcpRTTmin=_tcpRTTmin - In the implementation block
@property (assign,nonatomic) char hasTcpRTTvar; 
@property (assign,nonatomic) unsigned tcpRTTvar;                                     //@synthesize tcpRTTvar=_tcpRTTvar - In the implementation block
@property (assign,nonatomic) char hasRatioDupeBytes; 
@property (assign,nonatomic) unsigned ratioDupeBytes;                                //@synthesize ratioDupeBytes=_ratioDupeBytes - In the implementation block
@property (assign,nonatomic) char hasRatioOOBBytes; 
@property (assign,nonatomic) unsigned ratioOOBBytes;                                 //@synthesize ratioOOBBytes=_ratioOOBBytes - In the implementation block
@property (assign,nonatomic) char hasCellARFCN; 
@property (assign,nonatomic) unsigned cellARFCN;                                     //@synthesize cellARFCN=_cellARFCN - In the implementation block
@property (assign,nonatomic) char hasCellChannelBW; 
@property (assign,nonatomic) unsigned cellChannelBW;                                 //@synthesize cellChannelBW=_cellChannelBW - In the implementation block
@property (assign,nonatomic) char hasCellBandInfo; 
@property (assign,nonatomic) unsigned cellBandInfo;                                  //@synthesize cellBandInfo=_cellBandInfo - In the implementation block
@property (assign,nonatomic) char hasMaxDLCAConfigured; 
@property (assign,nonatomic) unsigned maxDLCAConfigured;                             //@synthesize maxDLCAConfigured=_maxDLCAConfigured - In the implementation block
@property (assign,nonatomic) char hasMaxULCAConfigured; 
@property (assign,nonatomic) unsigned maxULCAConfigured;                             //@synthesize maxULCAConfigured=_maxULCAConfigured - In the implementation block
@property (assign,nonatomic) char hasWifChannelBW; 
@property (assign,nonatomic) unsigned wifChannelBW;                                  //@synthesize wifChannelBW=_wifChannelBW - In the implementation block
@property (assign,nonatomic) char hasWifChannelType; 
@property (assign,nonatomic) unsigned wifChannelType;                                //@synthesize wifChannelType=_wifChannelType - In the implementation block
@property (assign,nonatomic) char hasWifiCapability; 
@property (assign,nonatomic) unsigned wifiCapability;                                //@synthesize wifiCapability=_wifiCapability - In the implementation block
@property (assign,nonatomic) char hasEstimatedSpeed; 
@property (assign,nonatomic) unsigned estimatedSpeed;                                //@synthesize estimatedSpeed=_estimatedSpeed - In the implementation block
@property (assign,nonatomic) char hasCellNsaEnabled; 
@property (assign,nonatomic) char cellNsaEnabled;                                    //@synthesize cellNsaEnabled=_cellNsaEnabled - In the implementation block
@property (assign,nonatomic) char hasIsFR1; 
@property (assign,nonatomic) char isFR1;                                             //@synthesize isFR1=_isFR1 - In the implementation block
@property (assign,nonatomic) char hasCellNrRSRP; 
@property (assign,nonatomic) int cellNrRSRP;                                         //@synthesize cellNrRSRP=_cellNrRSRP - In the implementation block
@property (assign,nonatomic) char hasCellNrRSRQ; 
@property (assign,nonatomic) int cellNrRSRQ;                                         //@synthesize cellNrRSRQ=_cellNrRSRQ - In the implementation block
@property (assign,nonatomic) char hasCellNrSNR; 
@property (assign,nonatomic) int cellNrSNR;                                          //@synthesize cellNrSNR=_cellNrSNR - In the implementation block
@property (assign,nonatomic) char hasCellLteRSRQ; 
@property (assign,nonatomic) int cellLteRSRQ;                                        //@synthesize cellLteRSRQ=_cellLteRSRQ - In the implementation block
@property (assign,nonatomic) char hasPActualLowBandwidth; 
@property (assign,nonatomic) int pActualLowBandwidth;                                //@synthesize pActualLowBandwidth=_pActualLowBandwidth - In the implementation block
@property (assign,nonatomic) char hasWifimcsindex; 
@property (assign,nonatomic) int wifimcsindex;                                       //@synthesize wifimcsindex=_wifimcsindex - In the implementation block
@property (assign,nonatomic) char hasWifiguardinterval; 
@property (assign,nonatomic) int wifiguardinterval;                                  //@synthesize wifiguardinterval=_wifiguardinterval - In the implementation block
@property (assign,nonatomic) char hasWifinumberOfSpatialStreams; 
@property (assign,nonatomic) int wifinumberOfSpatialStreams;                         //@synthesize wifinumberOfSpatialStreams=_wifinumberOfSpatialStreams - In the implementation block
@property (assign,nonatomic) char hasWifichannel; 
@property (assign,nonatomic) int wifichannel;                                        //@synthesize wifichannel=_wifichannel - In the implementation block
@property (assign,nonatomic) char hasWifilowDataMode; 
@property (assign,nonatomic) int wifilowDataMode;                                    //@synthesize wifilowDataMode=_wifilowDataMode - In the implementation block
@property (assign,nonatomic) char hasIsWfiCaptive; 
@property (assign,nonatomic) int isWfiCaptive;                                       //@synthesize isWfiCaptive=_isWfiCaptive - In the implementation block
@property (assign,nonatomic) char hasBtWiFiCoexState; 
@property (assign,nonatomic) int btWiFiCoexState;                                    //@synthesize btWiFiCoexState=_btWiFiCoexState - In the implementation block
@property (assign,nonatomic) char hasTotalConfiguredBw; 
@property (assign,nonatomic) unsigned totalConfiguredBw;                             //@synthesize totalConfiguredBw=_totalConfiguredBw - In the implementation block
@property (assign,nonatomic) char hasNrConfiguredBw; 
@property (assign,nonatomic) unsigned nrConfiguredBw;                                //@synthesize nrConfiguredBw=_nrConfiguredBw - In the implementation block
@property (assign,nonatomic) char hasNrTotalScheduledMimoLayers; 
@property (assign,nonatomic) unsigned nrTotalScheduledMimoLayers;                    //@synthesize nrTotalScheduledMimoLayers=_nrTotalScheduledMimoLayers - In the implementation block
@property (assign,nonatomic) char hasTotalConfiguredMimoLayers; 
@property (assign,nonatomic) unsigned totalConfiguredMimoLayers;                     //@synthesize totalConfiguredMimoLayers=_totalConfiguredMimoLayers - In the implementation block
@property (assign,nonatomic) char hasLteMaxScheduledMimoLayersInACell; 
@property (assign,nonatomic) unsigned lteMaxScheduledMimoLayersInACell;              //@synthesize lteMaxScheduledMimoLayersInACell=_lteMaxScheduledMimoLayersInACell - In the implementation block
@property (assign,nonatomic) char hasNrMaxDlModulation; 
@property (assign,nonatomic) unsigned nrMaxDlModulation;                             //@synthesize nrMaxDlModulation=_nrMaxDlModulation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)event;
-(id)dictionaryRepresentation;
-(void)setEvent:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCca:(unsigned)arg1 ;
-(unsigned)cca;
-(void)setHasCca:(char)arg1 ;
-(char)hasCca;
-(void)setAppType:(NSString *)arg1 ;
-(NSString *)appType;
-(char)hasAppType;
-(char)hasEvent;
-(void)setHasEvent:(char)arg1 ;
-(void)setWifiRssi:(long long)arg1 ;
-(void)setHasWifiRssi:(char)arg1 ;
-(char)hasWifiRssi;
-(long long)wifiRssi;
-(void)setExpectedThroughputVIBE:(unsigned)arg1 ;
-(void)setHasExpectedThroughputVIBE:(char)arg1 ;
-(char)hasExpectedThroughputVIBE;
-(void)setPacketLifetimeVIBE:(unsigned)arg1 ;
-(void)setHasPacketLifetimeVIBE:(char)arg1 ;
-(char)hasPacketLifetimeVIBE;
-(void)setPacketLossRateVIBE:(unsigned)arg1 ;
-(void)setHasPacketLossRateVIBE:(char)arg1 ;
-(char)hasPacketLossRateVIBE;
-(void)setBtRssi:(int)arg1 ;
-(void)setHasBtRssi:(char)arg1 ;
-(char)hasBtRssi;
-(unsigned)expectedThroughputVIBE;
-(unsigned)packetLifetimeVIBE;
-(unsigned)packetLossRateVIBE;
-(int)btRssi;
-(void)setRatType:(NSString *)arg1 ;
-(void)setBufferInterval:(unsigned)arg1 ;
-(void)setHasBufferInterval:(char)arg1 ;
-(char)hasBufferInterval;
-(void)setPhyRate:(unsigned)arg1 ;
-(void)setHasPhyRate:(char)arg1 ;
-(char)hasPhyRate;
-(void)setQbssLoad:(unsigned)arg1 ;
-(void)setHasQbssLoad:(char)arg1 ;
-(char)hasQbssLoad;
-(void)setBcnPer:(unsigned)arg1 ;
-(void)setHasBcnPer:(char)arg1 ;
-(char)hasBcnPer;
-(void)setExpectedThroughputVO:(unsigned)arg1 ;
-(void)setHasExpectedThroughputVO:(char)arg1 ;
-(char)hasExpectedThroughputVO;
-(void)setWifiSinr:(int)arg1 ;
-(void)setHasWifiSinr:(char)arg1 ;
-(char)hasWifiSinr;
-(void)setPktLifeTimeVO:(unsigned)arg1 ;
-(void)setHasPktLifeTimeVO:(char)arg1 ;
-(char)hasPktLifeTimeVO;
-(void)setPktLossRateVO:(unsigned)arg1 ;
-(void)setHasPktLossRateVO:(char)arg1 ;
-(char)hasPktLossRateVO;
-(void)setLqmScoreWifi:(int)arg1 ;
-(void)setHasLqmScoreWifi:(char)arg1 ;
-(char)hasLqmScoreWifi;
-(void)setBadDecisionsCounterVO:(unsigned)arg1 ;
-(void)setHasBadDecisionsCounterVO:(char)arg1 ;
-(char)hasBadDecisionsCounterVO;
-(void)setGoodDecisionsCounterVO:(unsigned)arg1 ;
-(void)setHasGoodDecisionsCounterVO:(char)arg1 ;
-(char)hasGoodDecisionsCounterVO;
-(void)setInvalidDecisionsCounterVO:(unsigned)arg1 ;
-(void)setHasInvalidDecisionsCounterVO:(char)arg1 ;
-(char)hasInvalidDecisionsCounterVO;
-(void)setBadDecisionsCounterVIBE:(unsigned)arg1 ;
-(void)setHasBadDecisionsCounterVIBE:(char)arg1 ;
-(char)hasBadDecisionsCounterVIBE;
-(void)setGoodDecisionsCounterVIBE:(unsigned)arg1 ;
-(void)setHasGoodDecisionsCounterVIBE:(char)arg1 ;
-(char)hasGoodDecisionsCounterVIBE;
-(void)setInvalidDecisionsCounterVIBE:(unsigned)arg1 ;
-(void)setHasInvalidDecisionsCounterVIBE:(char)arg1 ;
-(char)hasInvalidDecisionsCounterVIBE;
-(void)setLqmScorecellular:(int)arg1 ;
-(void)setHasLqmScorecellular:(char)arg1 ;
-(char)hasLqmScorecellular;
-(char)hasRatType;
-(void)setCellRsrp:(int)arg1 ;
-(void)setHasCellRsrp:(char)arg1 ;
-(char)hasCellRsrp;
-(void)setCellSinr:(int)arg1 ;
-(void)setHasCellSinr:(char)arg1 ;
-(char)hasCellSinr;
-(void)setTxRetransmissionRate:(unsigned)arg1 ;
-(void)setHasTxRetransmissionRate:(char)arg1 ;
-(char)hasTxRetransmissionRate;
-(void)setRxRetransmissionRate:(unsigned)arg1 ;
-(void)setHasRxRetransmissionRate:(char)arg1 ;
-(char)hasRxRetransmissionRate;
-(void)setLqmScoreBT:(int)arg1 ;
-(void)setHasLqmScoreBT:(char)arg1 ;
-(char)hasLqmScoreBT;
-(void)setWrmRecommendedRAT:(unsigned)arg1 ;
-(void)setHasWrmRecommendedRAT:(char)arg1 ;
-(char)hasWrmRecommendedRAT;
-(void)setActualLowBandwidth:(unsigned)arg1 ;
-(void)setHasActualLowBandwidth:(char)arg1 ;
-(char)hasActualLowBandwidth;
-(void)setActualHighBandwidth:(unsigned)arg1 ;
-(void)setHasActualHighBandwidth:(char)arg1 ;
-(char)hasActualHighBandwidth;
-(void)setEstimatedLowBandwidth:(unsigned)arg1 ;
-(void)setHasEstimatedLowBandwidth:(char)arg1 ;
-(char)hasEstimatedLowBandwidth;
-(void)setEstimatedHighBandwidth:(unsigned)arg1 ;
-(void)setHasEstimatedHighBandwidth:(char)arg1 ;
-(char)hasEstimatedHighBandwidth;
-(void)setMovingAvgLowBandwidth:(unsigned)arg1 ;
-(void)setHasMovingAvgLowBandwidth:(char)arg1 ;
-(char)hasMovingAvgLowBandwidth;
-(void)setMovingAvgHighBandwidth:(unsigned)arg1 ;
-(void)setHasMovingAvgHighBandwidth:(char)arg1 ;
-(char)hasMovingAvgHighBandwidth;
-(void)setDeviation:(int)arg1 ;
-(void)setHasDeviation:(char)arg1 ;
-(char)hasDeviation;
-(void)setMaxOfActualLowBandwidth:(unsigned)arg1 ;
-(void)setHasMaxOfActualLowBandwidth:(char)arg1 ;
-(char)hasMaxOfActualLowBandwidth;
-(void)setPkgLifeTimeVO:(unsigned)arg1 ;
-(void)setHasPkgLifeTimeVO:(char)arg1 ;
-(char)hasPkgLifeTimeVO;
-(void)setDecisionVO:(unsigned)arg1 ;
-(void)setHasDecisionVO:(char)arg1 ;
-(char)hasDecisionVO;
-(void)setDecisionVIBE:(unsigned)arg1 ;
-(void)setHasDecisionVIBE:(char)arg1 ;
-(char)hasDecisionVIBE;
-(void)setVideoStreamingStallTime:(unsigned)arg1 ;
-(void)setHasVideoStreamingStallTime:(char)arg1 ;
-(char)hasVideoStreamingStallTime;
-(void)setTxber:(unsigned)arg1 ;
-(void)setHasTxber:(char)arg1 ;
-(char)hasTxber;
-(void)setRxRetry:(unsigned)arg1 ;
-(void)setHasRxRetry:(char)arg1 ;
-(char)hasRxRetry;
-(void)setWeightedAveragePhyrateTx:(unsigned)arg1 ;
-(void)setHasWeightedAveragePhyrateTx:(char)arg1 ;
-(char)hasWeightedAveragePhyrateTx;
-(void)setWeightedAveragePhyrateRx:(unsigned)arg1 ;
-(void)setHasWeightedAveragePhyrateRx:(char)arg1 ;
-(char)hasWeightedAveragePhyrateRx;
-(void)setWeightedAverageRssi:(unsigned)arg1 ;
-(void)setHasWeightedAverageRssi:(char)arg1 ;
-(char)hasWeightedAverageRssi;
-(void)setWeightedAverageSnr:(unsigned)arg1 ;
-(void)setHasWeightedAverageSnr:(char)arg1 ;
-(char)hasWeightedAverageSnr;
-(void)setCmDataSentCount:(unsigned)arg1 ;
-(void)setHasCmDataSentCount:(char)arg1 ;
-(char)hasCmDataSentCount;
-(void)setCmDataSentDuration:(unsigned)arg1 ;
-(void)setHasCmDataSentDuration:(char)arg1 ;
-(char)hasCmDataSentDuration;
-(void)setCmEstimatedBandwidth:(unsigned)arg1 ;
-(void)setHasCmEstimatedBandwidth:(char)arg1 ;
-(char)hasCmEstimatedBandwidth;
-(void)setDevicePointOfInterest:(unsigned)arg1 ;
-(void)setHasDevicePointOfInterest:(char)arg1 ;
-(char)hasDevicePointOfInterest;
-(void)setRrcState:(unsigned)arg1 ;
-(void)setHasRrcState:(char)arg1 ;
-(char)hasRrcState;
-(void)setMlPredictedWiFiBW:(unsigned)arg1 ;
-(void)setHasMlPredictedWiFiBW:(char)arg1 ;
-(char)hasMlPredictedWiFiBW;
-(void)setWifiModelVersion:(unsigned)arg1 ;
-(void)setHasWifiModelVersion:(char)arg1 ;
-(char)hasWifiModelVersion;
-(void)setWifiModelConfidenceLevel:(unsigned)arg1 ;
-(void)setHasWifiModelConfidenceLevel:(char)arg1 ;
-(char)hasWifiModelConfidenceLevel;
-(void)setMlPredictedCellBW:(unsigned)arg1 ;
-(void)setHasMlPredictedCellBW:(char)arg1 ;
-(char)hasMlPredictedCellBW;
-(void)setCellModelVersion:(unsigned)arg1 ;
-(void)setHasCellModelVersion:(char)arg1 ;
-(char)hasCellModelVersion;
-(void)setCellModelConfidenceLevel:(unsigned)arg1 ;
-(void)setHasCellModelConfidenceLevel:(char)arg1 ;
-(char)hasCellModelConfidenceLevel;
-(void)setCellEstimatedBW:(unsigned)arg1 ;
-(void)setHasCellEstimatedBW:(char)arg1 ;
-(char)hasCellEstimatedBW;
-(void)setTcpRTTAvg:(unsigned)arg1 ;
-(void)setHasTcpRTTAvg:(char)arg1 ;
-(char)hasTcpRTTAvg;
-(void)setTcpRTTmin:(unsigned)arg1 ;
-(void)setHasTcpRTTmin:(char)arg1 ;
-(char)hasTcpRTTmin;
-(void)setTcpRTTvar:(unsigned)arg1 ;
-(void)setHasTcpRTTvar:(char)arg1 ;
-(char)hasTcpRTTvar;
-(void)setRatioDupeBytes:(unsigned)arg1 ;
-(void)setHasRatioDupeBytes:(char)arg1 ;
-(char)hasRatioDupeBytes;
-(void)setRatioOOBBytes:(unsigned)arg1 ;
-(void)setHasRatioOOBBytes:(char)arg1 ;
-(char)hasRatioOOBBytes;
-(void)setCellARFCN:(unsigned)arg1 ;
-(void)setHasCellARFCN:(char)arg1 ;
-(char)hasCellARFCN;
-(void)setCellChannelBW:(unsigned)arg1 ;
-(void)setHasCellChannelBW:(char)arg1 ;
-(char)hasCellChannelBW;
-(void)setCellBandInfo:(unsigned)arg1 ;
-(void)setHasCellBandInfo:(char)arg1 ;
-(char)hasCellBandInfo;
-(void)setMaxDLCAConfigured:(unsigned)arg1 ;
-(void)setHasMaxDLCAConfigured:(char)arg1 ;
-(char)hasMaxDLCAConfigured;
-(void)setMaxULCAConfigured:(unsigned)arg1 ;
-(void)setHasMaxULCAConfigured:(char)arg1 ;
-(char)hasMaxULCAConfigured;
-(void)setWifChannelBW:(unsigned)arg1 ;
-(void)setHasWifChannelBW:(char)arg1 ;
-(char)hasWifChannelBW;
-(void)setWifChannelType:(unsigned)arg1 ;
-(void)setHasWifChannelType:(char)arg1 ;
-(char)hasWifChannelType;
-(void)setWifiCapability:(unsigned)arg1 ;
-(void)setHasWifiCapability:(char)arg1 ;
-(char)hasWifiCapability;
-(void)setEstimatedSpeed:(unsigned)arg1 ;
-(void)setHasEstimatedSpeed:(char)arg1 ;
-(char)hasEstimatedSpeed;
-(void)setCellNsaEnabled:(char)arg1 ;
-(void)setHasCellNsaEnabled:(char)arg1 ;
-(char)hasCellNsaEnabled;
-(void)setIsFR1:(char)arg1 ;
-(void)setHasIsFR1:(char)arg1 ;
-(char)hasIsFR1;
-(void)setCellNrRSRP:(int)arg1 ;
-(void)setHasCellNrRSRP:(char)arg1 ;
-(char)hasCellNrRSRP;
-(void)setCellNrRSRQ:(int)arg1 ;
-(void)setHasCellNrRSRQ:(char)arg1 ;
-(char)hasCellNrRSRQ;
-(void)setCellNrSNR:(int)arg1 ;
-(void)setHasCellNrSNR:(char)arg1 ;
-(char)hasCellNrSNR;
-(void)setCellLteRSRQ:(int)arg1 ;
-(void)setHasCellLteRSRQ:(char)arg1 ;
-(char)hasCellLteRSRQ;
-(void)setPActualLowBandwidth:(int)arg1 ;
-(void)setHasPActualLowBandwidth:(char)arg1 ;
-(char)hasPActualLowBandwidth;
-(void)setWifimcsindex:(int)arg1 ;
-(void)setHasWifimcsindex:(char)arg1 ;
-(char)hasWifimcsindex;
-(void)setWifiguardinterval:(int)arg1 ;
-(void)setHasWifiguardinterval:(char)arg1 ;
-(char)hasWifiguardinterval;
-(void)setWifinumberOfSpatialStreams:(int)arg1 ;
-(void)setHasWifinumberOfSpatialStreams:(char)arg1 ;
-(char)hasWifinumberOfSpatialStreams;
-(void)setWifichannel:(int)arg1 ;
-(void)setHasWifichannel:(char)arg1 ;
-(char)hasWifichannel;
-(void)setWifilowDataMode:(int)arg1 ;
-(void)setHasWifilowDataMode:(char)arg1 ;
-(char)hasWifilowDataMode;
-(void)setIsWfiCaptive:(int)arg1 ;
-(void)setHasIsWfiCaptive:(char)arg1 ;
-(char)hasIsWfiCaptive;
-(void)setBtWiFiCoexState:(int)arg1 ;
-(void)setHasBtWiFiCoexState:(char)arg1 ;
-(char)hasBtWiFiCoexState;
-(void)setTotalConfiguredBw:(unsigned)arg1 ;
-(void)setHasTotalConfiguredBw:(char)arg1 ;
-(char)hasTotalConfiguredBw;
-(void)setNrConfiguredBw:(unsigned)arg1 ;
-(void)setHasNrConfiguredBw:(char)arg1 ;
-(char)hasNrConfiguredBw;
-(void)setNrTotalScheduledMimoLayers:(unsigned)arg1 ;
-(void)setHasNrTotalScheduledMimoLayers:(char)arg1 ;
-(char)hasNrTotalScheduledMimoLayers;
-(void)setTotalConfiguredMimoLayers:(unsigned)arg1 ;
-(void)setHasTotalConfiguredMimoLayers:(char)arg1 ;
-(char)hasTotalConfiguredMimoLayers;
-(void)setLteMaxScheduledMimoLayersInACell:(unsigned)arg1 ;
-(void)setHasLteMaxScheduledMimoLayersInACell:(char)arg1 ;
-(char)hasLteMaxScheduledMimoLayersInACell;
-(void)setNrMaxDlModulation:(unsigned)arg1 ;
-(void)setHasNrMaxDlModulation:(char)arg1 ;
-(char)hasNrMaxDlModulation;
-(unsigned)bufferInterval;
-(unsigned)phyRate;
-(unsigned)qbssLoad;
-(unsigned)bcnPer;
-(unsigned)expectedThroughputVO;
-(int)wifiSinr;
-(unsigned)pktLifeTimeVO;
-(unsigned)pktLossRateVO;
-(int)lqmScoreWifi;
-(unsigned)badDecisionsCounterVO;
-(unsigned)goodDecisionsCounterVO;
-(unsigned)invalidDecisionsCounterVO;
-(unsigned)badDecisionsCounterVIBE;
-(unsigned)goodDecisionsCounterVIBE;
-(unsigned)invalidDecisionsCounterVIBE;
-(int)lqmScorecellular;
-(NSString *)ratType;
-(int)cellRsrp;
-(int)cellSinr;
-(unsigned)txRetransmissionRate;
-(unsigned)rxRetransmissionRate;
-(int)lqmScoreBT;
-(unsigned)wrmRecommendedRAT;
-(unsigned)actualLowBandwidth;
-(unsigned)actualHighBandwidth;
-(unsigned)estimatedLowBandwidth;
-(unsigned)estimatedHighBandwidth;
-(unsigned)movingAvgLowBandwidth;
-(unsigned)movingAvgHighBandwidth;
-(int)deviation;
-(unsigned)maxOfActualLowBandwidth;
-(unsigned)pkgLifeTimeVO;
-(unsigned)decisionVO;
-(unsigned)decisionVIBE;
-(unsigned)videoStreamingStallTime;
-(unsigned)txber;
-(unsigned)rxRetry;
-(unsigned)weightedAveragePhyrateTx;
-(unsigned)weightedAveragePhyrateRx;
-(unsigned)weightedAverageRssi;
-(unsigned)weightedAverageSnr;
-(unsigned)cmDataSentCount;
-(unsigned)cmDataSentDuration;
-(unsigned)cmEstimatedBandwidth;
-(unsigned)devicePointOfInterest;
-(unsigned)rrcState;
-(unsigned)mlPredictedWiFiBW;
-(unsigned)wifiModelVersion;
-(unsigned)wifiModelConfidenceLevel;
-(unsigned)mlPredictedCellBW;
-(unsigned)cellModelVersion;
-(unsigned)cellModelConfidenceLevel;
-(unsigned)cellEstimatedBW;
-(unsigned)tcpRTTAvg;
-(unsigned)tcpRTTmin;
-(unsigned)tcpRTTvar;
-(unsigned)ratioDupeBytes;
-(unsigned)ratioOOBBytes;
-(unsigned)cellARFCN;
-(unsigned)cellChannelBW;
-(unsigned)cellBandInfo;
-(unsigned)maxDLCAConfigured;
-(unsigned)maxULCAConfigured;
-(unsigned)wifChannelBW;
-(unsigned)wifChannelType;
-(unsigned)wifiCapability;
-(unsigned)estimatedSpeed;
-(char)cellNsaEnabled;
-(char)isFR1;
-(int)cellNrRSRP;
-(int)cellNrRSRQ;
-(int)cellNrSNR;
-(int)cellLteRSRQ;
-(int)pActualLowBandwidth;
-(int)wifimcsindex;
-(int)wifiguardinterval;
-(int)wifinumberOfSpatialStreams;
-(int)wifichannel;
-(int)wifilowDataMode;
-(int)isWfiCaptive;
-(int)btWiFiCoexState;
-(unsigned)totalConfiguredBw;
-(unsigned)nrConfiguredBw;
-(unsigned)nrTotalScheduledMimoLayers;
-(unsigned)totalConfiguredMimoLayers;
-(unsigned)lteMaxScheduledMimoLayersInACell;
-(unsigned)nrMaxDlModulation;
@end

