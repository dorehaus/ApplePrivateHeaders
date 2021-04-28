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

@class NSData;

@interface AWDWiFiMetricsManagerLeakyAPStats : PBCodable <NSCopying> {

	unsigned long long _hashCode;
	unsigned long long _timestamp;
	unsigned long long _version;
	unsigned _leakyApDecision;
	NSData* _leakyApStats;
	NSData* _oui;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned long long version;                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasOui; 
@property (nonatomic,retain) NSData * oui;                              //@synthesize oui=_oui - In the implementation block
@property (nonatomic,readonly) char hasLeakyApStats; 
@property (nonatomic,retain) NSData * leakyApStats;                     //@synthesize leakyApStats=_leakyApStats - In the implementation block
@property (assign,nonatomic) char hasLeakyApDecision; 
@property (assign,nonatomic) unsigned leakyApDecision;                  //@synthesize leakyApDecision=_leakyApDecision - In the implementation block
@property (assign,nonatomic) char hasHashCode; 
@property (assign,nonatomic) unsigned long long hashCode;               //@synthesize hashCode=_hashCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(char)hasVersion;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasVersion:(char)arg1 ;
-(void)setOui:(NSData *)arg1 ;
-(char)hasOui;
-(NSData *)oui;
-(void)setHashCode:(unsigned long long)arg1 ;
-(char)hasHashCode;
-(unsigned long long)hashCode;
-(void)setLeakyApStats:(NSData *)arg1 ;
-(char)hasLeakyApStats;
-(void)setLeakyApDecision:(unsigned)arg1 ;
-(void)setHasLeakyApDecision:(char)arg1 ;
-(char)hasLeakyApDecision;
-(void)setHasHashCode:(char)arg1 ;
-(NSData *)leakyApStats;
-(unsigned)leakyApDecision;
@end

