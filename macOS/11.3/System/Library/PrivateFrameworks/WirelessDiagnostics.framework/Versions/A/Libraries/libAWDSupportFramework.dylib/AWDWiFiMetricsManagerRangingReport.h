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

@class NSMutableArray;

@interface AWDWiFiMetricsManagerRangingReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _awdlLatency;
	unsigned _numMeasurements;
	unsigned _peerMasterChannel;
	unsigned _peerPreferredChannel;
	unsigned _peerPreferredChannelFlags;
	unsigned _protocolVersion;
	unsigned _rangingBandwidth;
	unsigned _rangingChannel;
	unsigned _rangingChannelQuality;
	unsigned _rangingLatency;
	unsigned _resultFlags;
	unsigned _resultStatus;
	NSMutableArray* _rttSamples;
	unsigned _selfMasterChannel;
	unsigned _selfPreferredChannel;
	unsigned _selfPreferredChannelFlags;
	unsigned _validCount;
	SCD_Struct_AW30 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasSelfPreferredChannel; 
@property (assign,nonatomic) unsigned selfPreferredChannel;                   //@synthesize selfPreferredChannel=_selfPreferredChannel - In the implementation block
@property (assign,nonatomic) char hasSelfPreferredChannelFlags; 
@property (assign,nonatomic) unsigned selfPreferredChannelFlags;              //@synthesize selfPreferredChannelFlags=_selfPreferredChannelFlags - In the implementation block
@property (assign,nonatomic) char hasSelfMasterChannel; 
@property (assign,nonatomic) unsigned selfMasterChannel;                      //@synthesize selfMasterChannel=_selfMasterChannel - In the implementation block
@property (assign,nonatomic) char hasPeerPreferredChannel; 
@property (assign,nonatomic) unsigned peerPreferredChannel;                   //@synthesize peerPreferredChannel=_peerPreferredChannel - In the implementation block
@property (assign,nonatomic) char hasPeerPreferredChannelFlags; 
@property (assign,nonatomic) unsigned peerPreferredChannelFlags;              //@synthesize peerPreferredChannelFlags=_peerPreferredChannelFlags - In the implementation block
@property (assign,nonatomic) char hasPeerMasterChannel; 
@property (assign,nonatomic) unsigned peerMasterChannel;                      //@synthesize peerMasterChannel=_peerMasterChannel - In the implementation block
@property (assign,nonatomic) char hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) char hasRangingChannel; 
@property (assign,nonatomic) unsigned rangingChannel;                         //@synthesize rangingChannel=_rangingChannel - In the implementation block
@property (assign,nonatomic) char hasRangingBandwidth; 
@property (assign,nonatomic) unsigned rangingBandwidth;                       //@synthesize rangingBandwidth=_rangingBandwidth - In the implementation block
@property (assign,nonatomic) char hasResultFlags; 
@property (assign,nonatomic) unsigned resultFlags;                            //@synthesize resultFlags=_resultFlags - In the implementation block
@property (assign,nonatomic) char hasResultStatus; 
@property (assign,nonatomic) unsigned resultStatus;                           //@synthesize resultStatus=_resultStatus - In the implementation block
@property (assign,nonatomic) char hasValidCount; 
@property (assign,nonatomic) unsigned validCount;                             //@synthesize validCount=_validCount - In the implementation block
@property (assign,nonatomic) char hasNumMeasurements; 
@property (assign,nonatomic) unsigned numMeasurements;                        //@synthesize numMeasurements=_numMeasurements - In the implementation block
@property (assign,nonatomic) char hasAwdlLatency; 
@property (assign,nonatomic) unsigned awdlLatency;                            //@synthesize awdlLatency=_awdlLatency - In the implementation block
@property (assign,nonatomic) char hasRangingLatency; 
@property (assign,nonatomic) unsigned rangingLatency;                         //@synthesize rangingLatency=_rangingLatency - In the implementation block
@property (nonatomic,retain) NSMutableArray * rttSamples;                     //@synthesize rttSamples=_rttSamples - In the implementation block
@property (assign,nonatomic) char hasRangingChannelQuality; 
@property (assign,nonatomic) unsigned rangingChannelQuality;                  //@synthesize rangingChannelQuality=_rangingChannelQuality - In the implementation block
+(Class)rttSamplesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(unsigned)protocolVersion;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasProtocolVersion:(char)arg1 ;
-(char)hasProtocolVersion;
-(void)setRttSamples:(NSMutableArray *)arg1 ;
-(void)addRttSamples:(id)arg1 ;
-(unsigned long long)rttSamplesCount;
-(void)clearRttSamples;
-(id)rttSamplesAtIndex:(unsigned long long)arg1 ;
-(void)setSelfPreferredChannel:(unsigned)arg1 ;
-(void)setHasSelfPreferredChannel:(char)arg1 ;
-(char)hasSelfPreferredChannel;
-(void)setSelfPreferredChannelFlags:(unsigned)arg1 ;
-(void)setHasSelfPreferredChannelFlags:(char)arg1 ;
-(char)hasSelfPreferredChannelFlags;
-(void)setSelfMasterChannel:(unsigned)arg1 ;
-(void)setHasSelfMasterChannel:(char)arg1 ;
-(char)hasSelfMasterChannel;
-(void)setPeerPreferredChannel:(unsigned)arg1 ;
-(void)setHasPeerPreferredChannel:(char)arg1 ;
-(char)hasPeerPreferredChannel;
-(void)setPeerPreferredChannelFlags:(unsigned)arg1 ;
-(void)setHasPeerPreferredChannelFlags:(char)arg1 ;
-(char)hasPeerPreferredChannelFlags;
-(void)setPeerMasterChannel:(unsigned)arg1 ;
-(void)setHasPeerMasterChannel:(char)arg1 ;
-(char)hasPeerMasterChannel;
-(void)setRangingChannel:(unsigned)arg1 ;
-(void)setHasRangingChannel:(char)arg1 ;
-(char)hasRangingChannel;
-(void)setRangingBandwidth:(unsigned)arg1 ;
-(void)setHasRangingBandwidth:(char)arg1 ;
-(char)hasRangingBandwidth;
-(void)setResultFlags:(unsigned)arg1 ;
-(void)setHasResultFlags:(char)arg1 ;
-(char)hasResultFlags;
-(void)setResultStatus:(unsigned)arg1 ;
-(void)setHasResultStatus:(char)arg1 ;
-(char)hasResultStatus;
-(void)setValidCount:(unsigned)arg1 ;
-(void)setHasValidCount:(char)arg1 ;
-(char)hasValidCount;
-(void)setNumMeasurements:(unsigned)arg1 ;
-(void)setHasNumMeasurements:(char)arg1 ;
-(char)hasNumMeasurements;
-(void)setAwdlLatency:(unsigned)arg1 ;
-(void)setHasAwdlLatency:(char)arg1 ;
-(char)hasAwdlLatency;
-(void)setRangingLatency:(unsigned)arg1 ;
-(void)setHasRangingLatency:(char)arg1 ;
-(char)hasRangingLatency;
-(void)setRangingChannelQuality:(unsigned)arg1 ;
-(void)setHasRangingChannelQuality:(char)arg1 ;
-(char)hasRangingChannelQuality;
-(unsigned)selfPreferredChannel;
-(unsigned)selfPreferredChannelFlags;
-(unsigned)selfMasterChannel;
-(unsigned)peerPreferredChannel;
-(unsigned)peerPreferredChannelFlags;
-(unsigned)peerMasterChannel;
-(unsigned)rangingChannel;
-(unsigned)rangingBandwidth;
-(unsigned)resultFlags;
-(unsigned)resultStatus;
-(unsigned)validCount;
-(unsigned)numMeasurements;
-(unsigned)awdlLatency;
-(unsigned)rangingLatency;
-(NSMutableArray *)rttSamples;
-(unsigned)rangingChannelQuality;
@end

