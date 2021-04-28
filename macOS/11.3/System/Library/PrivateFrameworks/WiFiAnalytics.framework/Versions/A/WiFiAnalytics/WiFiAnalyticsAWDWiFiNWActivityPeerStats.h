/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityTxCompletions, NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityPeerStats : PBCodable <NSCopying> {

	NSMutableArray* _acCompletions;
	NSMutableArray* _bytes;
	unsigned _ccaValue;
	NSMutableArray* _ccas;
	WiFiAnalyticsAWDWiFiNWActivityTxCompletions* _completions;
	NSString* _hashID;
	unsigned _ibssCCA;
	unsigned _interferenceCCA;
	int _nfValue;
	unsigned _obssCCA;
	unsigned _ofdmDesense;
	NSMutableArray* _packets;
	unsigned _qbssCCA;
	unsigned _qbssSTACount;
	int _role;
	int _rssiValue;
	NSMutableArray* _rssis;
	int _snrValue;
	NSMutableArray* _snrs;
	NSMutableArray* _txLatencyBEs;
	NSMutableArray* _txLatencyBKs;
	NSMutableArray* _txLatencyVIs;
	NSMutableArray* _txLatencyVOs;
	SCD_Struct_Wi10 _has;

}

@property (assign,nonatomic) char hasRole; 
@property (assign,nonatomic) int role;                                                               //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) char hasHashID; 
@property (nonatomic,retain) NSString * hashID;                                                      //@synthesize hashID=_hashID - In the implementation block
@property (nonatomic,retain) NSMutableArray * rssis;                                                 //@synthesize rssis=_rssis - In the implementation block
@property (nonatomic,retain) NSMutableArray * ccas;                                                  //@synthesize ccas=_ccas - In the implementation block
@property (nonatomic,retain) NSMutableArray * snrs;                                                  //@synthesize snrs=_snrs - In the implementation block
@property (nonatomic,retain) NSMutableArray * packets;                                               //@synthesize packets=_packets - In the implementation block
@property (nonatomic,retain) NSMutableArray * bytes;                                                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyBKs;                                          //@synthesize txLatencyBKs=_txLatencyBKs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyBEs;                                          //@synthesize txLatencyBEs=_txLatencyBEs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyVOs;                                          //@synthesize txLatencyVOs=_txLatencyVOs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyVIs;                                          //@synthesize txLatencyVIs=_txLatencyVIs - In the implementation block
@property (nonatomic,readonly) char hasCompletions; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityTxCompletions * completions;              //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSMutableArray * acCompletions;                                         //@synthesize acCompletions=_acCompletions - In the implementation block
@property (assign,nonatomic) char hasRssiValue; 
@property (assign,nonatomic) int rssiValue;                                                          //@synthesize rssiValue=_rssiValue - In the implementation block
@property (assign,nonatomic) char hasSnrValue; 
@property (assign,nonatomic) int snrValue;                                                           //@synthesize snrValue=_snrValue - In the implementation block
@property (assign,nonatomic) char hasCcaValue; 
@property (assign,nonatomic) unsigned ccaValue;                                                      //@synthesize ccaValue=_ccaValue - In the implementation block
@property (assign,nonatomic) char hasNfValue; 
@property (assign,nonatomic) int nfValue;                                                            //@synthesize nfValue=_nfValue - In the implementation block
@property (assign,nonatomic) char hasOfdmDesense; 
@property (assign,nonatomic) unsigned ofdmDesense;                                                   //@synthesize ofdmDesense=_ofdmDesense - In the implementation block
@property (assign,nonatomic) char hasIbssCCA; 
@property (assign,nonatomic) unsigned ibssCCA;                                                       //@synthesize ibssCCA=_ibssCCA - In the implementation block
@property (assign,nonatomic) char hasObssCCA; 
@property (assign,nonatomic) unsigned obssCCA;                                                       //@synthesize obssCCA=_obssCCA - In the implementation block
@property (assign,nonatomic) char hasInterferenceCCA; 
@property (assign,nonatomic) unsigned interferenceCCA;                                               //@synthesize interferenceCCA=_interferenceCCA - In the implementation block
@property (assign,nonatomic) char hasQbssCCA; 
@property (assign,nonatomic) unsigned qbssCCA;                                                       //@synthesize qbssCCA=_qbssCCA - In the implementation block
@property (assign,nonatomic) char hasQbssSTACount; 
@property (assign,nonatomic) unsigned qbssSTACount;                                                  //@synthesize qbssSTACount=_qbssSTACount - In the implementation block
+(Class)packetsType;
+(Class)bytesType;
+(Class)rssiType;
+(Class)ccaType;
+(Class)snrType;
+(Class)txLatencyBKType;
+(Class)txLatencyBEType;
+(Class)txLatencyVOType;
+(Class)txLatencyVIType;
+(Class)acCompletionsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)bytes;
-(id)bytesAtIndex:(unsigned long long)arg1 ;
-(int)role;
-(WiFiAnalyticsAWDWiFiNWActivityTxCompletions *)completions;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRole:(int)arg1 ;
-(int)rssiValue;
-(void)setCompletions:(WiFiAnalyticsAWDWiFiNWActivityTxCompletions *)arg1 ;
-(void)setHasRole:(char)arg1 ;
-(char)hasRole;
-(id)roleAsString:(int)arg1 ;
-(int)StringAsRole:(id)arg1 ;
-(void)setBytes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)packets;
-(void)setPackets:(NSMutableArray *)arg1 ;
-(void)addPackets:(id)arg1 ;
-(void)addBytes:(id)arg1 ;
-(unsigned long long)packetsCount;
-(void)clearPackets;
-(id)packetsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bytesCount;
-(void)clearBytes;
-(void)setHashID:(NSString *)arg1 ;
-(void)setRssis:(NSMutableArray *)arg1 ;
-(void)setCcas:(NSMutableArray *)arg1 ;
-(void)setSnrs:(NSMutableArray *)arg1 ;
-(void)setTxLatencyBKs:(NSMutableArray *)arg1 ;
-(void)setTxLatencyBEs:(NSMutableArray *)arg1 ;
-(void)setTxLatencyVOs:(NSMutableArray *)arg1 ;
-(void)setTxLatencyVIs:(NSMutableArray *)arg1 ;
-(void)setAcCompletions:(NSMutableArray *)arg1 ;
-(void)addRssi:(id)arg1 ;
-(void)addCca:(id)arg1 ;
-(void)addSnr:(id)arg1 ;
-(void)addTxLatencyBK:(id)arg1 ;
-(void)addTxLatencyBE:(id)arg1 ;
-(void)addTxLatencyVO:(id)arg1 ;
-(void)addTxLatencyVI:(id)arg1 ;
-(void)addAcCompletions:(id)arg1 ;
-(unsigned long long)rssisCount;
-(void)clearRssis;
-(id)rssiAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ccasCount;
-(void)clearCcas;
-(id)ccaAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)snrsCount;
-(void)clearSnrs;
-(id)snrAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyBKsCount;
-(void)clearTxLatencyBKs;
-(id)txLatencyBKAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyBEsCount;
-(void)clearTxLatencyBEs;
-(id)txLatencyBEAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyVOsCount;
-(void)clearTxLatencyVOs;
-(id)txLatencyVOAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyVIsCount;
-(void)clearTxLatencyVIs;
-(id)txLatencyVIAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)acCompletionsCount;
-(void)clearAcCompletions;
-(id)acCompletionsAtIndex:(unsigned long long)arg1 ;
-(char)hasHashID;
-(char)hasCompletions;
-(void)setRssiValue:(int)arg1 ;
-(void)setHasRssiValue:(char)arg1 ;
-(char)hasRssiValue;
-(void)setSnrValue:(int)arg1 ;
-(void)setHasSnrValue:(char)arg1 ;
-(char)hasSnrValue;
-(void)setCcaValue:(unsigned)arg1 ;
-(void)setHasCcaValue:(char)arg1 ;
-(char)hasCcaValue;
-(void)setNfValue:(int)arg1 ;
-(void)setHasNfValue:(char)arg1 ;
-(char)hasNfValue;
-(void)setOfdmDesense:(unsigned)arg1 ;
-(void)setHasOfdmDesense:(char)arg1 ;
-(char)hasOfdmDesense;
-(void)setIbssCCA:(unsigned)arg1 ;
-(void)setHasIbssCCA:(char)arg1 ;
-(char)hasIbssCCA;
-(void)setObssCCA:(unsigned)arg1 ;
-(void)setHasObssCCA:(char)arg1 ;
-(char)hasObssCCA;
-(void)setInterferenceCCA:(unsigned)arg1 ;
-(void)setHasInterferenceCCA:(char)arg1 ;
-(char)hasInterferenceCCA;
-(void)setQbssCCA:(unsigned)arg1 ;
-(void)setHasQbssCCA:(char)arg1 ;
-(char)hasQbssCCA;
-(void)setQbssSTACount:(unsigned)arg1 ;
-(void)setHasQbssSTACount:(char)arg1 ;
-(char)hasQbssSTACount;
-(NSString *)hashID;
-(NSMutableArray *)rssis;
-(NSMutableArray *)ccas;
-(NSMutableArray *)snrs;
-(NSMutableArray *)txLatencyBKs;
-(NSMutableArray *)txLatencyBEs;
-(NSMutableArray *)txLatencyVOs;
-(NSMutableArray *)txLatencyVIs;
-(NSMutableArray *)acCompletions;
-(int)snrValue;
-(unsigned)ccaValue;
-(int)nfValue;
-(unsigned)ofdmDesense;
-(unsigned)ibssCCA;
-(unsigned)obssCCA;
-(unsigned)interferenceCCA;
-(unsigned)qbssCCA;
-(unsigned)qbssSTACount;
@end

