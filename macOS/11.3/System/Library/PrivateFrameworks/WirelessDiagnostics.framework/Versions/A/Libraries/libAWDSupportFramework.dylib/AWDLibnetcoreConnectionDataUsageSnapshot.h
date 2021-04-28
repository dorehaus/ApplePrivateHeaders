/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _multipathBytesInCell;
	unsigned long long _multipathBytesInInitial;
	unsigned long long _multipathBytesInWiFi;
	unsigned long long _multipathBytesOutCell;
	unsigned long long _multipathBytesOutInitial;
	unsigned long long _multipathBytesOutWiFi;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) char hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                               //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) char hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                              //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) char hasMultipathBytesInCell; 
@property (assign,nonatomic) unsigned long long multipathBytesInCell;                  //@synthesize multipathBytesInCell=_multipathBytesInCell - In the implementation block
@property (assign,nonatomic) char hasMultipathBytesOutCell; 
@property (assign,nonatomic) unsigned long long multipathBytesOutCell;                 //@synthesize multipathBytesOutCell=_multipathBytesOutCell - In the implementation block
@property (assign,nonatomic) char hasMultipathBytesInWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesInWiFi;                  //@synthesize multipathBytesInWiFi=_multipathBytesInWiFi - In the implementation block
@property (assign,nonatomic) char hasMultipathBytesOutWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesOutWiFi;                 //@synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi - In the implementation block
@property (assign,nonatomic) char hasMultipathBytesInInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesInInitial;               //@synthesize multipathBytesInInitial=_multipathBytesInInitial - In the implementation block
@property (assign,nonatomic) char hasMultipathBytesOutInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesOutInitial;              //@synthesize multipathBytesOutInitial=_multipathBytesOutInitial - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(char)arg1 ;
-(char)hasBytesIn;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasBytesOut:(char)arg1 ;
-(char)hasBytesOut;
-(void)setMultipathBytesInCell:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInCell:(char)arg1 ;
-(char)hasMultipathBytesInCell;
-(void)setMultipathBytesOutCell:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutCell:(char)arg1 ;
-(char)hasMultipathBytesOutCell;
-(void)setMultipathBytesInWiFi:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInWiFi:(char)arg1 ;
-(char)hasMultipathBytesInWiFi;
-(void)setMultipathBytesOutWiFi:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutWiFi:(char)arg1 ;
-(char)hasMultipathBytesOutWiFi;
-(void)setMultipathBytesInInitial:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInInitial:(char)arg1 ;
-(char)hasMultipathBytesInInitial;
-(void)setMultipathBytesOutInitial:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutInitial:(char)arg1 ;
-(char)hasMultipathBytesOutInitial;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(unsigned long long)multipathBytesInCell;
-(unsigned long long)multipathBytesOutCell;
-(unsigned long long)multipathBytesInWiFi;
-(unsigned long long)multipathBytesOutWiFi;
-(unsigned long long)multipathBytesInInitial;
-(unsigned long long)multipathBytesOutInitial;
@end

