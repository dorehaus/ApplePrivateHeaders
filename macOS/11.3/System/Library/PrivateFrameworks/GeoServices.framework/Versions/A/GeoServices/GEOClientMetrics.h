/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOClientNetworkMetrics;

@interface GEOClientMetrics : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOClientNetworkMetrics* _networkMetrics;
	int _offlineReason;
	int _responseSource;
	SCD_Struct_GE119 _flags;

}

@property (assign,nonatomic) char hasResponseSource; 
@property (assign,nonatomic) int responseSource; 
@property (nonatomic,readonly) char hasNetworkMetrics; 
@property (nonatomic,retain) GEOClientNetworkMetrics * networkMetrics; 
@property (assign,nonatomic) char hasOfflineReason; 
@property (assign,nonatomic) int offlineReason; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(int)responseSource;
-(GEOClientNetworkMetrics *)networkMetrics;
-(void)setResponseSource:(int)arg1 ;
-(void)setNetworkMetrics:(GEOClientNetworkMetrics *)arg1 ;
-(void)setOfflineReason:(int)arg1 ;
-(void)setHasResponseSource:(char)arg1 ;
-(char)hasResponseSource;
-(id)responseSourceAsString:(int)arg1 ;
-(int)StringAsResponseSource:(id)arg1 ;
-(char)hasNetworkMetrics;
-(int)offlineReason;
-(void)setHasOfflineReason:(char)arg1 ;
-(char)hasOfflineReason;
-(id)offlineReasonAsString:(int)arg1 ;
-(int)StringAsOfflineReason:(id)arg1 ;
@end

