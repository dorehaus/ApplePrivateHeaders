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

@class NSString, NSData;

@interface AWDNFCHardwareExceptionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _exceptionData;
	unsigned _hardwareType;
	unsigned _type;
	NSData* _uuidReference;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasExceptionData; 
@property (nonatomic,retain) NSString * exceptionData;                  //@synthesize exceptionData=_exceptionData - In the implementation block
@property (nonatomic,readonly) char hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) char hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                     //@synthesize hardwareType=_hardwareType - In the implementation block
-(void)setUuidReference:(NSData *)arg1 ;
-(char)hasUuidReference;
-(NSData *)uuidReference;
-(char)hasExceptionData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(void)setHasTimestamp:(char)arg1 ;
-(NSString *)exceptionData;
-(void)setExceptionData:(NSString *)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setHasHardwareType:(char)arg1 ;
-(char)hasHardwareType;
@end

