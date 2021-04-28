/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCSECRSAuthorize : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	NSData* _aid;
	unsigned _method;
	unsigned _status;
	NSData* _uuidReference;
	char _activated;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasMethod; 
@property (assign,nonatomic) unsigned method;                                        //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) char hasActivated; 
@property (assign,nonatomic) char activated;                                         //@synthesize activated=_activated - In the implementation block
@property (nonatomic,readonly) char hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (nonatomic,readonly) char hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) char hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(void)setUuidReference:(NSData *)arg1 ;
-(char)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(char)arg1 ;
-(char)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(char)hasAid;
-(void)setHasActivated:(char)arg1 ;
-(char)hasActivated;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)status;
-(id)dictionaryRepresentation;
-(unsigned)method;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMethod:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)activated;
-(char)hasTimestamp;
-(void)setStatus:(unsigned)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasMethod:(char)arg1 ;
-(char)hasMethod;
-(void)setActivated:(char)arg1 ;
-(NSData *)aid;
-(void)setAid:(NSData *)arg1 ;
@end
