/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, GEOPDMapsIdentifier;

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _center;
	double _disambiguationRadiusMeters;
	double _distance;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _opaqueGeoId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _placeType;
	struct {
		unsigned has_disambiguationRadiusMeters : 1;
		unsigned has_distance : 1;
		unsigned has_opaqueGeoId : 1;
		unsigned has_placeType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_center : 1;
		unsigned read_mapsId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) char hasOpaqueGeoId; 
@property (assign,nonatomic) unsigned long long opaqueGeoId; 
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) double distance; 
@property (assign,nonatomic) char hasPlaceType; 
@property (assign,nonatomic) int placeType; 
@property (assign,nonatomic) char hasDisambiguationRadiusMeters; 
@property (assign,nonatomic) double disambiguationRadiusMeters; 
@property (nonatomic,readonly) char hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)distance;
-(int)placeType;
-(void)setPlaceType:(int)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasCenter;
-(void)setHasPlaceType:(char)arg1 ;
-(char)hasPlaceType;
-(id)placeTypeAsString:(int)arg1 ;
-(int)StringAsPlaceType:(id)arg1 ;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(char)hasMapsId;
-(void)setOpaqueGeoId:(unsigned long long)arg1 ;
-(void)setDistance:(double)arg1 ;
-(void)setDisambiguationRadiusMeters:(double)arg1 ;
-(unsigned long long)opaqueGeoId;
-(void)setHasOpaqueGeoId:(char)arg1 ;
-(char)hasOpaqueGeoId;
-(void)setHasDistance:(char)arg1 ;
-(char)hasDistance;
-(double)disambiguationRadiusMeters;
-(void)setHasDisambiguationRadiusMeters:(char)arg1 ;
-(char)hasDisambiguationRadiusMeters;
@end
