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

@interface AWDLBEndpointsFetchReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _connectionCellularFallbackCount;
	int _endpointsFetchTaskBadReplyCount;
	int _endpointsFetchTaskCount;
	int _endpointsFetchTaskFailureCount;
	int _endpointsFetchTaskSuccessCount;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasEndpointsFetchTaskCount; 
@property (assign,nonatomic) int endpointsFetchTaskCount;                          //@synthesize endpointsFetchTaskCount=_endpointsFetchTaskCount - In the implementation block
@property (assign,nonatomic) char hasEndpointsFetchTaskSuccessCount; 
@property (assign,nonatomic) int endpointsFetchTaskSuccessCount;                   //@synthesize endpointsFetchTaskSuccessCount=_endpointsFetchTaskSuccessCount - In the implementation block
@property (assign,nonatomic) char hasEndpointsFetchTaskFailureCount; 
@property (assign,nonatomic) int endpointsFetchTaskFailureCount;                   //@synthesize endpointsFetchTaskFailureCount=_endpointsFetchTaskFailureCount - In the implementation block
@property (assign,nonatomic) char hasEndpointsFetchTaskBadReplyCount; 
@property (assign,nonatomic) int endpointsFetchTaskBadReplyCount;                  //@synthesize endpointsFetchTaskBadReplyCount=_endpointsFetchTaskBadReplyCount - In the implementation block
@property (assign,nonatomic) char hasConnectionCellularFallbackCount; 
@property (assign,nonatomic) int connectionCellularFallbackCount;                  //@synthesize connectionCellularFallbackCount=_connectionCellularFallbackCount - In the implementation block
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
-(void)setHasTimestamp:(char)arg1 ;
-(void)setConnectionCellularFallbackCount:(int)arg1 ;
-(void)setHasConnectionCellularFallbackCount:(char)arg1 ;
-(char)hasConnectionCellularFallbackCount;
-(int)connectionCellularFallbackCount;
-(void)setEndpointsFetchTaskCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskCount:(char)arg1 ;
-(char)hasEndpointsFetchTaskCount;
-(void)setEndpointsFetchTaskSuccessCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskSuccessCount:(char)arg1 ;
-(char)hasEndpointsFetchTaskSuccessCount;
-(void)setEndpointsFetchTaskFailureCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskFailureCount:(char)arg1 ;
-(char)hasEndpointsFetchTaskFailureCount;
-(void)setEndpointsFetchTaskBadReplyCount:(int)arg1 ;
-(void)setHasEndpointsFetchTaskBadReplyCount:(char)arg1 ;
-(char)hasEndpointsFetchTaskBadReplyCount;
-(int)endpointsFetchTaskCount;
-(int)endpointsFetchTaskSuccessCount;
-(int)endpointsFetchTaskFailureCount;
-(int)endpointsFetchTaskBadReplyCount;
@end

