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

@interface AWDIDSCloudLinkReEstablished : PBCodable <NSCopying> {

	unsigned long long _linkTimeDelta;
	unsigned long long _timestamp;
	unsigned _linkType;
	unsigned _priorLinkType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                             //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) char hasPriorLinkType; 
@property (assign,nonatomic) unsigned priorLinkType;                        //@synthesize priorLinkType=_priorLinkType - In the implementation block
@property (assign,nonatomic) char hasLinkTimeDelta; 
@property (assign,nonatomic) unsigned long long linkTimeDelta;              //@synthesize linkTimeDelta=_linkTimeDelta - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(unsigned)linkType;
-(void)setLinkType:(unsigned)arg1 ;
-(unsigned)priorLinkType;
-(void)setLinkTimeDelta:(unsigned long long)arg1 ;
-(void)setPriorLinkType:(unsigned)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasLinkType:(char)arg1 ;
-(char)hasLinkType;
-(void)setHasPriorLinkType:(char)arg1 ;
-(char)hasPriorLinkType;
-(void)setHasLinkTimeDelta:(char)arg1 ;
-(char)hasLinkTimeDelta;
-(unsigned long long)linkTimeDelta;
@end
