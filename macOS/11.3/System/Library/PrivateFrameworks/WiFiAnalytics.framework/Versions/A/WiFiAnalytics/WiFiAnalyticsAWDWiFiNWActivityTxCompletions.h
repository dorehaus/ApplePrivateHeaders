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

@interface WiFiAnalyticsAWDWiFiNWActivityTxCompletions : PBCodable <NSCopying> {

	unsigned _chipmodeerror;
	unsigned _expired;
	unsigned _internalerror;
	unsigned _ioerror;
	unsigned _mbfree;
	unsigned _noack;
	unsigned _nobuf;
	unsigned _noremotepeer;
	unsigned _noresources;
	unsigned _success;
	unsigned _txfailure;
	SCD_Struct_Wi10 _has;

}

@property (assign,nonatomic) char hasSuccess; 
@property (assign,nonatomic) unsigned success;                    //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) char hasExpired; 
@property (assign,nonatomic) unsigned expired;                    //@synthesize expired=_expired - In the implementation block
@property (assign,nonatomic) char hasNobuf; 
@property (assign,nonatomic) unsigned nobuf;                      //@synthesize nobuf=_nobuf - In the implementation block
@property (assign,nonatomic) char hasNoack; 
@property (assign,nonatomic) unsigned noack;                      //@synthesize noack=_noack - In the implementation block
@property (assign,nonatomic) char hasTxfailure; 
@property (assign,nonatomic) unsigned txfailure;                  //@synthesize txfailure=_txfailure - In the implementation block
@property (assign,nonatomic) char hasNoresources; 
@property (assign,nonatomic) unsigned noresources;                //@synthesize noresources=_noresources - In the implementation block
@property (assign,nonatomic) char hasIoerror; 
@property (assign,nonatomic) unsigned ioerror;                    //@synthesize ioerror=_ioerror - In the implementation block
@property (assign,nonatomic) char hasMbfree; 
@property (assign,nonatomic) unsigned mbfree;                     //@synthesize mbfree=_mbfree - In the implementation block
@property (assign,nonatomic) char hasChipmodeerror; 
@property (assign,nonatomic) unsigned chipmodeerror;              //@synthesize chipmodeerror=_chipmodeerror - In the implementation block
@property (assign,nonatomic) char hasNoremotepeer; 
@property (assign,nonatomic) unsigned noremotepeer;               //@synthesize noremotepeer=_noremotepeer - In the implementation block
@property (assign,nonatomic) char hasInternalerror; 
@property (assign,nonatomic) unsigned internalerror;              //@synthesize internalerror=_internalerror - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)success;
-(char)hasExpired;
-(unsigned)expired;
-(void)setSuccess:(unsigned)arg1 ;
-(void)setExpired:(unsigned)arg1 ;
-(char)hasSuccess;
-(void)setHasSuccess:(char)arg1 ;
-(void)setHasExpired:(char)arg1 ;
-(void)setNobuf:(unsigned)arg1 ;
-(void)setHasNobuf:(char)arg1 ;
-(char)hasNobuf;
-(void)setNoack:(unsigned)arg1 ;
-(void)setHasNoack:(char)arg1 ;
-(char)hasNoack;
-(void)setTxfailure:(unsigned)arg1 ;
-(void)setHasTxfailure:(char)arg1 ;
-(char)hasTxfailure;
-(void)setNoresources:(unsigned)arg1 ;
-(void)setHasNoresources:(char)arg1 ;
-(char)hasNoresources;
-(void)setIoerror:(unsigned)arg1 ;
-(void)setHasIoerror:(char)arg1 ;
-(char)hasIoerror;
-(void)setMbfree:(unsigned)arg1 ;
-(void)setHasMbfree:(char)arg1 ;
-(char)hasMbfree;
-(void)setChipmodeerror:(unsigned)arg1 ;
-(void)setHasChipmodeerror:(char)arg1 ;
-(char)hasChipmodeerror;
-(void)setNoremotepeer:(unsigned)arg1 ;
-(void)setHasNoremotepeer:(char)arg1 ;
-(char)hasNoremotepeer;
-(void)setInternalerror:(unsigned)arg1 ;
-(void)setHasInternalerror:(char)arg1 ;
-(char)hasInternalerror;
-(unsigned)nobuf;
-(unsigned)noack;
-(unsigned)txfailure;
-(unsigned)noresources;
-(unsigned)ioerror;
-(unsigned)mbfree;
-(unsigned)chipmodeerror;
-(unsigned)noremotepeer;
-(unsigned)internalerror;
@end
