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

@interface AWDWiFiMetricsManagerEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _reason;
	unsigned _status;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) unsigned status;                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) unsigned reason;                           //@synthesize reason=_reason - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)reason;
-(unsigned)status;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setReason:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setStatus:(unsigned)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasReason;
-(void)setHasReason:(char)arg1 ;
@end

