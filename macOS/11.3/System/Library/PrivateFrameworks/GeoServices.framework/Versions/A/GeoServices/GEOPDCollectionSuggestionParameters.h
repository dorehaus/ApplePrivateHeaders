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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDViewportInfo;

@interface GEOPDCollectionSuggestionParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _categoryIds;
	NSMutableArray* _geoIds;
	NSMutableArray* _publisherIds;
	double _requestLocalTimestamp;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_categoryIds : 1;
		unsigned read_geoIds : 1;
		unsigned read_publisherIds : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) char hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (nonatomic,retain) NSMutableArray * publisherIds; 
@property (nonatomic,retain) NSMutableArray * geoIds; 
@property (nonatomic,retain) NSMutableArray * categoryIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)publisherIdType;
+(Class)geoIdType;
+(Class)categoryIdType;
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
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(NSMutableArray *)geoIds;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(char)hasViewportInfo;
-(void)addPublisherId:(id)arg1 ;
-(unsigned long long)publisherIdsCount;
-(void)clearPublisherIds;
-(id)publisherIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)publisherIds;
-(void)setPublisherIds:(NSMutableArray *)arg1 ;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(double)requestLocalTimestamp;
-(void)setHasRequestLocalTimestamp:(char)arg1 ;
-(char)hasRequestLocalTimestamp;
-(NSMutableArray *)categoryIds;
-(void)addGeoId:(id)arg1 ;
-(void)addCategoryId:(id)arg1 ;
-(id)geoIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)categoryIdsCount;
-(void)clearCategoryIds;
-(id)categoryIdAtIndex:(unsigned long long)arg1 ;
-(void)setGeoIds:(NSMutableArray *)arg1 ;
-(void)setCategoryIds:(NSMutableArray *)arg1 ;
@end

