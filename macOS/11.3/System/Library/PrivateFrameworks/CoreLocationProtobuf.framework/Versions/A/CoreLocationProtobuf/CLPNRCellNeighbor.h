/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/Versions/A/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPNRCellNeighbor : PBCodable <NSCopying> {

	int _ecn0;
	int _nrarfcn;
	int _pid;
	int _rscp;
	int _rssi;
	unsigned _saOrNsaNeighbor;
	unsigned _scs;
	SCD_Struct_CL8 _has;

}

@property (assign,nonatomic) char hasNrarfcn; 
@property (assign,nonatomic) int nrarfcn;                           //@synthesize nrarfcn=_nrarfcn - In the implementation block
@property (assign,nonatomic) char hasPid; 
@property (assign,nonatomic) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) char hasRssi; 
@property (assign,nonatomic) int rssi;                              //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) char hasEcn0; 
@property (assign,nonatomic) int ecn0;                              //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) char hasRscp; 
@property (assign,nonatomic) int rscp;                              //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) char hasScs; 
@property (assign,nonatomic) unsigned scs;                          //@synthesize scs=_scs - In the implementation block
@property (assign,nonatomic) char hasSaOrNsaNeighbor; 
@property (assign,nonatomic) unsigned saOrNsaNeighbor;              //@synthesize saOrNsaNeighbor=_saOrNsaNeighbor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)pid;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(char)arg1 ;
-(char)hasRssi;
-(int)rscp;
-(int)ecn0;
-(void)setRscp:(int)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(void)setHasPid:(char)arg1 ;
-(char)hasPid;
-(void)setHasEcn0:(char)arg1 ;
-(char)hasEcn0;
-(void)setHasRscp:(char)arg1 ;
-(char)hasRscp;
-(void)setNrarfcn:(int)arg1 ;
-(void)setHasNrarfcn:(char)arg1 ;
-(char)hasNrarfcn;
-(void)setScs:(unsigned)arg1 ;
-(void)setHasScs:(char)arg1 ;
-(char)hasScs;
-(void)setSaOrNsaNeighbor:(unsigned)arg1 ;
-(void)setHasSaOrNsaNeighbor:(char)arg1 ;
-(char)hasSaOrNsaNeighbor;
-(int)nrarfcn;
-(unsigned)scs;
-(unsigned)saOrNsaNeighbor;
@end

