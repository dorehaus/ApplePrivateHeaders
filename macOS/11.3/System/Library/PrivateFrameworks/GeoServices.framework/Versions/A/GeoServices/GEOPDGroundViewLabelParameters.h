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

@class PBUnknownFields, GEOLocation;

@interface GEOPDGroundViewLabelParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _locationId;
	GEOLocation* _location;
	struct {
		unsigned has_locationId : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasLocationId; 
@property (assign,nonatomic) unsigned long long locationId; 
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)clearSensitiveFields;
-(char)hasLocation;
-(void)setLocationId:(unsigned long long)arg1 ;
-(unsigned long long)locationId;
-(void)setHasLocationId:(char)arg1 ;
-(char)hasLocationId;
@end

