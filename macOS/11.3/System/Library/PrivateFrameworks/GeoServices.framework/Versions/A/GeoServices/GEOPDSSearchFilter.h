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

@class PBDataReader, PBUnknownFields, GEOPDSBrandFilter, GEOPDSCategoryFilter, GEOPDPoiIconCategoryFilter, GEOPDSSearchVenueFilter;

@interface GEOPDSSearchFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDSBrandFilter* _brandFilter;
	GEOPDSCategoryFilter* _categoryFilter;
	GEOPDPoiIconCategoryFilter* _poiIconCategoryFilter;
	GEOPDSSearchVenueFilter* _venueFilter;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _searchIntentFilter;
	struct {
		unsigned has_searchIntentFilter : 1;
		unsigned read_unknownFields : 1;
		unsigned read_brandFilter : 1;
		unsigned read_categoryFilter : 1;
		unsigned read_poiIconCategoryFilter : 1;
		unsigned read_venueFilter : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasVenueFilter; 
@property (nonatomic,retain) GEOPDSSearchVenueFilter * venueFilter; 
@property (nonatomic,readonly) char hasCategoryFilter; 
@property (nonatomic,retain) GEOPDSCategoryFilter * categoryFilter; 
@property (nonatomic,readonly) char hasBrandFilter; 
@property (nonatomic,retain) GEOPDSBrandFilter * brandFilter; 
@property (assign,nonatomic) char hasSearchIntentFilter; 
@property (assign,nonatomic) int searchIntentFilter; 
@property (nonatomic,readonly) char hasPoiIconCategoryFilter; 
@property (nonatomic,retain) GEOPDPoiIconCategoryFilter * poiIconCategoryFilter; 
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
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(char)hasPoiIconCategoryFilter;
-(GEOPDSSearchVenueFilter *)venueFilter;
-(void)setVenueFilter:(GEOPDSSearchVenueFilter *)arg1 ;
-(char)hasVenueFilter;
-(GEOPDSCategoryFilter *)categoryFilter;
-(GEOPDSBrandFilter *)brandFilter;
-(void)setCategoryFilter:(GEOPDSCategoryFilter *)arg1 ;
-(void)setBrandFilter:(GEOPDSBrandFilter *)arg1 ;
-(void)setSearchIntentFilter:(int)arg1 ;
-(char)hasCategoryFilter;
-(char)hasBrandFilter;
-(int)searchIntentFilter;
-(void)setHasSearchIntentFilter:(char)arg1 ;
-(char)hasSearchIntentFilter;
-(id)searchIntentFilterAsString:(int)arg1 ;
-(int)StringAsSearchIntentFilter:(id)arg1 ;
@end

