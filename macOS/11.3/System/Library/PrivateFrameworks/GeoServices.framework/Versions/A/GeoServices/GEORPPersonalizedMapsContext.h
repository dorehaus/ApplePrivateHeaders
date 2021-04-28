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

@class PBUnknownFields;

@interface GEORPPersonalizedMapsContext : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _addressType;
	int _placeType;
	struct {
		unsigned has_addressType : 1;
		unsigned has_placeType : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasAddressType; 
@property (assign,nonatomic) int addressType; 
@property (assign,nonatomic) char hasPlaceType; 
@property (assign,nonatomic) int placeType; 
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
-(int)placeType;
-(void)setPlaceType:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setAddressType:(int)arg1 ;
-(int)addressType;
-(void)setHasAddressType:(char)arg1 ;
-(char)hasAddressType;
-(id)addressTypeAsString:(int)arg1 ;
-(int)StringAsAddressType:(id)arg1 ;
-(void)setHasPlaceType:(char)arg1 ;
-(char)hasPlaceType;
-(id)placeTypeAsString:(int)arg1 ;
-(int)StringAsPlaceType:(id)arg1 ;
@end

