/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEORouteTrafficDetail;

@interface GEOPDETA : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEORouteTrafficDetail* _routeTrafficDetail;
	unsigned _distance;
	unsigned _historicTravelTime;
	int _licensePlateRestrictionImpact;
	unsigned _time;
	int _transportType;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_licensePlateRestrictionImpact : 1;
		unsigned has_time : 1;
		unsigned has_transportType : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasTime; 
@property (assign,nonatomic) unsigned time; 
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) char hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) char hasRouteTrafficDetail; 
@property (nonatomic,retain) GEORouteTrafficDetail * routeTrafficDetail; 
@property (assign,nonatomic) char hasLicensePlateRestrictionImpact; 
@property (assign,nonatomic) int licensePlateRestrictionImpact; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)time;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
-(void)setTime:(unsigned)arg1 ;
-(void)setHasTime:(char)arg1 ;
-(char)hasTime;
-(void)setTransportType:(int)arg1 ;
-(unsigned)distance;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasTransportType;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(char)arg1 ;
-(char)hasDistance;
-(void)setHasTransportType:(char)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(unsigned)historicTravelTime;
-(char)hasHistoricTravelTime;
-(void)setLicensePlateRestrictionImpact:(int)arg1 ;
-(int)licensePlateRestrictionImpact;
-(void)setHasLicensePlateRestrictionImpact:(char)arg1 ;
-(char)hasLicensePlateRestrictionImpact;
-(id)licensePlateRestrictionImpactAsString:(int)arg1 ;
-(int)StringAsLicensePlateRestrictionImpact:(id)arg1 ;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(char)arg1 ;
-(GEORouteTrafficDetail *)routeTrafficDetail;
-(void)setRouteTrafficDetail:(GEORouteTrafficDetail *)arg1 ;
-(char)hasRouteTrafficDetail;
@end
