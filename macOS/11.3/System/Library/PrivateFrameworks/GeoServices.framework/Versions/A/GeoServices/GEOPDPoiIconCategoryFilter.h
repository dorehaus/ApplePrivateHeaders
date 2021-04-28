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

@class PBDataReader, PBUnknownFields;

@interface GEOPDPoiIconCategoryFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _excludeCategoryFilters;
	SCD_Struct_GE17* _includeCategoryFilters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_excludeCategoryFilters : 1;
		unsigned read_includeCategoryFilters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long includeCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* includeCategoryFilters; 
@property (nonatomic,readonly) unsigned long long excludeCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* excludeCategoryFilters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
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
-(void)addIncludeCategoryFilter:(unsigned)arg1 ;
-(void)addExcludeCategoryFilter:(unsigned)arg1 ;
-(unsigned long long)includeCategoryFiltersCount;
-(void)clearIncludeCategoryFilters;
-(unsigned)includeCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)excludeCategoryFiltersCount;
-(void)clearExcludeCategoryFilters;
-(unsigned)excludeCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned*)includeCategoryFilters;
-(void)setIncludeCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)excludeCategoryFilters;
-(void)setExcludeCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

