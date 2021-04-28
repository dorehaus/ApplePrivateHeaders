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

@class PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOMiniCard;

@interface GEORouteAnnotation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _artwork;
	GEOMiniCard* _infoCard;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _deprecatedOffsetMeters;
	float _offsetMeters;
	struct {
		unsigned has_deprecatedOffsetMeters : 1;
		unsigned has_offsetMeters : 1;
		unsigned read_unknownFields : 1;
		unsigned read_artwork : 1;
		unsigned read_infoCard : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasDeprecatedOffsetMeters; 
@property (assign,nonatomic) unsigned deprecatedOffsetMeters; 
@property (nonatomic,readonly) char hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork; 
@property (nonatomic,readonly) char hasInfoCard; 
@property (nonatomic,retain) GEOMiniCard * infoCard; 
@property (assign,nonatomic) char hasOffsetMeters; 
@property (assign,nonatomic) float offsetMeters; 
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
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOMiniCard *)infoCard;
-(GEOPBTransitArtwork *)artwork;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(char)hasArtwork;
-(void)setDeprecatedOffsetMeters:(unsigned)arg1 ;
-(void)setInfoCard:(GEOMiniCard *)arg1 ;
-(void)setOffsetMeters:(float)arg1 ;
-(unsigned)deprecatedOffsetMeters;
-(void)setHasDeprecatedOffsetMeters:(char)arg1 ;
-(char)hasDeprecatedOffsetMeters;
-(char)hasInfoCard;
-(float)offsetMeters;
-(void)setHasOffsetMeters:(char)arg1 ;
-(char)hasOffsetMeters;
@end

