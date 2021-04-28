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

@class GEOTFTrafficSnapshot;

@interface GEOETARequestExtension : PBCodable <NSCopying> {

	GEOTFTrafficSnapshot* _trafficSnapshot;
	char _needServerLatency;
	char _useLiveTrafficAsFallback;
	SCD_Struct_GE119 _flags;

}

@property (nonatomic,readonly) char hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) char hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) char useLiveTrafficAsFallback; 
@property (assign,nonatomic) char hasNeedServerLatency; 
@property (assign,nonatomic) char needServerLatency; 
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
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setUseLiveTrafficAsFallback:(char)arg1 ;
-(void)setNeedServerLatency:(char)arg1 ;
-(char)hasTrafficSnapshot;
-(char)useLiveTrafficAsFallback;
-(void)setHasUseLiveTrafficAsFallback:(char)arg1 ;
-(char)hasUseLiveTrafficAsFallback;
-(char)needServerLatency;
-(void)setHasNeedServerLatency:(char)arg1 ;
-(char)hasNeedServerLatency;
@end
