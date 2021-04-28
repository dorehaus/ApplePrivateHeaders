/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitVehiclePosition.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOLatLng, GEOPBTransitShield, GEOStyleAttributes;

@interface GEOPBTransitVehiclePosition : PBCodable <GEOTransitVehiclePosition, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _artwork;
	NSString* _color;
	NSString* _directionName;
	NSString* _headsign;
	GEOLatLng* _latLng;
	GEOPBTransitShield* _modeShield;
	GEOStyleAttributes* _styleAttributes;
	unsigned long long _time;
	unsigned long long _tripId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _bearing;
	float _speed;
	struct {
		unsigned has_time : 1;
		unsigned has_tripId : 1;
		unsigned has_bearing : 1;
		unsigned has_speed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_artwork : 1;
		unsigned read_color : 1;
		unsigned read_directionName : 1;
		unsigned read_headsign : 1;
		unsigned read_latLng : 1;
		unsigned read_modeShield : 1;
		unsigned read_styleAttributes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long tripID; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSString * direction; 
@property (nonatomic,copy,readonly) NSString * headsign; 
@property (nonatomic,copy,readonly) NSString * colorHexString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasTripId; 
@property (assign,nonatomic) unsigned long long tripId; 
@property (nonatomic,readonly) char hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng; 
@property (assign,nonatomic) char hasTime; 
@property (assign,nonatomic) unsigned long long time; 
@property (assign,nonatomic) char hasBearing; 
@property (assign,nonatomic) float bearing; 
@property (assign,nonatomic) char hasSpeed; 
@property (assign,nonatomic) float speed; 
@property (nonatomic,readonly) char hasDirectionName; 
@property (nonatomic,retain) NSString * directionName; 
@property (nonatomic,readonly) char hasHeadsign; 
@property (nonatomic,retain) NSString * headsign; 
@property (nonatomic,readonly) char hasModeShield; 
@property (nonatomic,retain) GEOPBTransitShield * modeShield; 
@property (nonatomic,readonly) char hasColor; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,readonly) char hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) char hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(id)transitVehiclePositionForPlaceData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)timestamp;
-(GEOCoarseLocationLatLng)coordinate;
-(unsigned long long)time;
-(NSString *)direction;
-(void)setSpeed:(float)arg1 ;
-(float)speed;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(char)hasColor;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTime:(unsigned long long)arg1 ;
-(void)setHasTime:(char)arg1 ;
-(char)hasTime;
-(void)setHasSpeed:(char)arg1 ;
-(char)hasSpeed;
-(GEOLatLng *)latLng;
-(GEOStyleAttributes *)styleAttributes;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(unsigned long long)tripID;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(char)hasLatLng;
-(double)heading;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(NSString *)headsign;
-(void)setHeadsign:(NSString *)arg1 ;
-(char)hasStyleAttributes;
-(char)hasHeadsign;
-(GEOPBTransitArtwork *)artwork;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(char)hasArtwork;
-(NSString *)directionName;
-(GEOPBTransitShield *)modeShield;
-(void)setTripId:(unsigned long long)arg1 ;
-(void)setBearing:(float)arg1 ;
-(void)setDirectionName:(NSString *)arg1 ;
-(void)setModeShield:(GEOPBTransitShield *)arg1 ;
-(unsigned long long)tripId;
-(void)setHasTripId:(char)arg1 ;
-(char)hasTripId;
-(float)bearing;
-(void)setHasBearing:(char)arg1 ;
-(char)hasBearing;
-(char)hasDirectionName;
-(char)hasModeShield;
-(NSString *)colorHexString;
-(id<GEOTransitArtworkDataSource>)artworkDataSource;
@end

