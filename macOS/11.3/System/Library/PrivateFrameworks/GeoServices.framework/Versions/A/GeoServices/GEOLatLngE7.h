/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOLatLngE7 : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _latE7;
	int _lngE7;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) GEOLatLng * latLng; 
@property (assign,nonatomic) int latE7; 
@property (assign,nonatomic) int lngE7; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOCoarseLocationLatLng)coordinate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(GEOLatLng *)latLng;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(id)initWithLatLng:(id)arg1 ;
-(void)setLatE7:(int)arg1 ;
-(void)setLngE7:(int)arg1 ;
-(int)latE7;
-(int)lngE7;
-(id)initWithE7Latitude:(int)arg1 longitude:(int)arg2 ;
@end

