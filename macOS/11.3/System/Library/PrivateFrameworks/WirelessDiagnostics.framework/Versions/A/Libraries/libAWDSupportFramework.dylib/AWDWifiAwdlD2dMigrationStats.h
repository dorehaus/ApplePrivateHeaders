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

@interface AWDWifiAwdlD2dMigrationStats : PBCodable <NSCopying> {

	unsigned long long _rxBytes;
	unsigned long long _sessionDuration;
	unsigned long long _txBytes;
	unsigned _avgCCA;
	unsigned _channel;
	unsigned _migrationRole;
	int _peerRssi;
	unsigned _txFailureCount;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) char hasSessionDuration; 
@property (assign,nonatomic) unsigned long long sessionDuration;              //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) char hasChannel; 
@property (assign,nonatomic) unsigned channel;                                //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) char hasRxBytes; 
@property (assign,nonatomic) unsigned long long rxBytes;                      //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) char hasPeerRssi; 
@property (assign,nonatomic) int peerRssi;                                    //@synthesize peerRssi=_peerRssi - In the implementation block
@property (assign,nonatomic) char hasTxFailureCount; 
@property (assign,nonatomic) unsigned txFailureCount;                         //@synthesize txFailureCount=_txFailureCount - In the implementation block
@property (assign,nonatomic) char hasTxBytes; 
@property (assign,nonatomic) unsigned long long txBytes;                      //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) char hasMigrationRole; 
@property (assign,nonatomic) unsigned migrationRole;                          //@synthesize migrationRole=_migrationRole - In the implementation block
@property (assign,nonatomic) char hasAvgCCA; 
@property (assign,nonatomic) unsigned avgCCA;                                 //@synthesize avgCCA=_avgCCA - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)channel;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(char)arg1 ;
-(char)hasChannel;
-(void)setRxBytes:(unsigned long long)arg1 ;
-(void)setHasRxBytes:(char)arg1 ;
-(char)hasRxBytes;
-(void)setTxBytes:(unsigned long long)arg1 ;
-(void)setHasTxBytes:(char)arg1 ;
-(char)hasTxBytes;
-(void)setAvgCCA:(unsigned)arg1 ;
-(void)setHasAvgCCA:(char)arg1 ;
-(char)hasAvgCCA;
-(unsigned long long)rxBytes;
-(unsigned long long)txBytes;
-(unsigned)avgCCA;
-(void)setSessionDuration:(unsigned long long)arg1 ;
-(void)setHasSessionDuration:(char)arg1 ;
-(char)hasSessionDuration;
-(unsigned long long)sessionDuration;
-(void)setPeerRssi:(int)arg1 ;
-(void)setHasPeerRssi:(char)arg1 ;
-(char)hasPeerRssi;
-(void)setTxFailureCount:(unsigned)arg1 ;
-(void)setHasTxFailureCount:(char)arg1 ;
-(char)hasTxFailureCount;
-(void)setMigrationRole:(unsigned)arg1 ;
-(void)setHasMigrationRole:(char)arg1 ;
-(char)hasMigrationRole;
-(int)peerRssi;
-(unsigned)txFailureCount;
-(unsigned)migrationRole;
@end
