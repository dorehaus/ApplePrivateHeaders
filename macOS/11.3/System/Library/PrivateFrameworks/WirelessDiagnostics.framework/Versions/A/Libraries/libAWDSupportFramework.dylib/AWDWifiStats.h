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

@interface AWDWifiStats : PBCodable <NSCopying> {

	unsigned long long _rxbytes;
	unsigned long long _txbytes;
	unsigned _averageCCA;
	unsigned _avgJitterRx;
	unsigned _avgLatencyTx;
	unsigned _avgRetx;
	int _avgRssi;
	unsigned _avgTimeBackoff;
	unsigned _dataTransferRateMpbs;
	unsigned _effectiveDataTransferRateMpbs;
	unsigned _effectiveLinkRateMpbs;
	unsigned _linkRateMbps;
	unsigned _phyType;
	unsigned _powerSaveDur;
	SCD_Struct_AW27 _has;

}

@property (assign,nonatomic) char hasPhyType; 
@property (assign,nonatomic) unsigned phyType;                                    //@synthesize phyType=_phyType - In the implementation block
@property (assign,nonatomic) char hasTxbytes; 
@property (assign,nonatomic) unsigned long long txbytes;                          //@synthesize txbytes=_txbytes - In the implementation block
@property (assign,nonatomic) char hasRxbytes; 
@property (assign,nonatomic) unsigned long long rxbytes;                          //@synthesize rxbytes=_rxbytes - In the implementation block
@property (assign,nonatomic) char hasAvgLatencyTx; 
@property (assign,nonatomic) unsigned avgLatencyTx;                               //@synthesize avgLatencyTx=_avgLatencyTx - In the implementation block
@property (assign,nonatomic) char hasAvgJitterRx; 
@property (assign,nonatomic) unsigned avgJitterRx;                                //@synthesize avgJitterRx=_avgJitterRx - In the implementation block
@property (assign,nonatomic) char hasAvgRssi; 
@property (assign,nonatomic) int avgRssi;                                         //@synthesize avgRssi=_avgRssi - In the implementation block
@property (assign,nonatomic) char hasAvgRetx; 
@property (assign,nonatomic) unsigned avgRetx;                                    //@synthesize avgRetx=_avgRetx - In the implementation block
@property (assign,nonatomic) char hasAvgTimeBackoff; 
@property (assign,nonatomic) unsigned avgTimeBackoff;                             //@synthesize avgTimeBackoff=_avgTimeBackoff - In the implementation block
@property (assign,nonatomic) char hasPowerSaveDur; 
@property (assign,nonatomic) unsigned powerSaveDur;                               //@synthesize powerSaveDur=_powerSaveDur - In the implementation block
@property (assign,nonatomic) char hasLinkRateMbps; 
@property (assign,nonatomic) unsigned linkRateMbps;                               //@synthesize linkRateMbps=_linkRateMbps - In the implementation block
@property (assign,nonatomic) char hasEffectiveLinkRateMpbs; 
@property (assign,nonatomic) unsigned effectiveLinkRateMpbs;                      //@synthesize effectiveLinkRateMpbs=_effectiveLinkRateMpbs - In the implementation block
@property (assign,nonatomic) char hasDataTransferRateMpbs; 
@property (assign,nonatomic) unsigned dataTransferRateMpbs;                       //@synthesize dataTransferRateMpbs=_dataTransferRateMpbs - In the implementation block
@property (assign,nonatomic) char hasEffectiveDataTransferRateMpbs; 
@property (assign,nonatomic) unsigned effectiveDataTransferRateMpbs;              //@synthesize effectiveDataTransferRateMpbs=_effectiveDataTransferRateMpbs - In the implementation block
@property (assign,nonatomic) char hasAverageCCA; 
@property (assign,nonatomic) unsigned averageCCA;                                 //@synthesize averageCCA=_averageCCA - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLinkRateMbps:(unsigned)arg1 ;
-(void)setHasLinkRateMbps:(char)arg1 ;
-(char)hasLinkRateMbps;
-(void)setEffectiveLinkRateMpbs:(unsigned)arg1 ;
-(void)setHasEffectiveLinkRateMpbs:(char)arg1 ;
-(char)hasEffectiveLinkRateMpbs;
-(void)setDataTransferRateMpbs:(unsigned)arg1 ;
-(void)setHasDataTransferRateMpbs:(char)arg1 ;
-(char)hasDataTransferRateMpbs;
-(void)setEffectiveDataTransferRateMpbs:(unsigned)arg1 ;
-(void)setHasEffectiveDataTransferRateMpbs:(char)arg1 ;
-(char)hasEffectiveDataTransferRateMpbs;
-(unsigned)linkRateMbps;
-(unsigned)effectiveLinkRateMpbs;
-(unsigned)dataTransferRateMpbs;
-(unsigned)effectiveDataTransferRateMpbs;
-(void)setAvgRssi:(int)arg1 ;
-(void)setHasAvgRssi:(char)arg1 ;
-(char)hasAvgRssi;
-(int)avgRssi;
-(void)setPhyType:(unsigned)arg1 ;
-(void)setHasPhyType:(char)arg1 ;
-(char)hasPhyType;
-(void)setTxbytes:(unsigned long long)arg1 ;
-(void)setHasTxbytes:(char)arg1 ;
-(char)hasTxbytes;
-(void)setRxbytes:(unsigned long long)arg1 ;
-(void)setHasRxbytes:(char)arg1 ;
-(char)hasRxbytes;
-(void)setAvgLatencyTx:(unsigned)arg1 ;
-(void)setHasAvgLatencyTx:(char)arg1 ;
-(char)hasAvgLatencyTx;
-(void)setAvgJitterRx:(unsigned)arg1 ;
-(void)setHasAvgJitterRx:(char)arg1 ;
-(char)hasAvgJitterRx;
-(void)setAvgRetx:(unsigned)arg1 ;
-(void)setHasAvgRetx:(char)arg1 ;
-(char)hasAvgRetx;
-(void)setAvgTimeBackoff:(unsigned)arg1 ;
-(void)setHasAvgTimeBackoff:(char)arg1 ;
-(char)hasAvgTimeBackoff;
-(void)setPowerSaveDur:(unsigned)arg1 ;
-(void)setHasPowerSaveDur:(char)arg1 ;
-(char)hasPowerSaveDur;
-(void)setAverageCCA:(unsigned)arg1 ;
-(void)setHasAverageCCA:(char)arg1 ;
-(char)hasAverageCCA;
-(unsigned)phyType;
-(unsigned long long)txbytes;
-(unsigned long long)rxbytes;
-(unsigned)avgLatencyTx;
-(unsigned)avgJitterRx;
-(unsigned)avgRetx;
-(unsigned)avgTimeBackoff;
-(unsigned)powerSaveDur;
-(unsigned)averageCCA;
@end

