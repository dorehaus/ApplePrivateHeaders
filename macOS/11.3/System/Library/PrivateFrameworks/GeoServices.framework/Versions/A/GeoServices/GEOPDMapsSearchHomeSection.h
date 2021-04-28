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

@class PBDataReader, PBUnknownFields, GEOPDCollectionSuggestionResult, NSString, GEOPDPublisherSuggestionResult, GEOPDSearchBrowseCategorySuggestionResult;

@interface GEOPDMapsSearchHomeSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDCollectionSuggestionResult* _collectionSuggestionResult;
	NSString* _name;
	GEOPDPublisherSuggestionResult* _publisherSuggestionResult;
	GEOPDSearchBrowseCategorySuggestionResult* _searchBrowseCategorySuggestionResult;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _sectionType;
	struct {
		unsigned has_sectionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_collectionSuggestionResult : 1;
		unsigned read_name : 1;
		unsigned read_publisherSuggestionResult : 1;
		unsigned read_searchBrowseCategorySuggestionResult : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasSectionType; 
@property (assign,nonatomic) int sectionType; 
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) char hasSearchBrowseCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionResult * searchBrowseCategorySuggestionResult; 
@property (nonatomic,readonly) char hasCollectionSuggestionResult; 
@property (nonatomic,retain) GEOPDCollectionSuggestionResult * collectionSuggestionResult; 
@property (nonatomic,readonly) char hasPublisherSuggestionResult; 
@property (nonatomic,retain) GEOPDPublisherSuggestionResult * publisherSuggestionResult; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(int)sectionType;
-(char)hasCollectionSuggestionResult;
-(GEOPDCollectionSuggestionResult *)collectionSuggestionResult;
-(GEOPDPublisherSuggestionResult *)publisherSuggestionResult;
-(void)setPublisherSuggestionResult:(GEOPDPublisherSuggestionResult *)arg1 ;
-(char)hasPublisherSuggestionResult;
-(void)setSectionType:(int)arg1 ;
-(void)setCollectionSuggestionResult:(GEOPDCollectionSuggestionResult *)arg1 ;
-(void)setHasSectionType:(char)arg1 ;
-(char)hasSectionType;
-(id)sectionTypeAsString:(int)arg1 ;
-(int)StringAsSectionType:(id)arg1 ;
-(GEOPDSearchBrowseCategorySuggestionResult *)searchBrowseCategorySuggestionResult;
-(void)setSearchBrowseCategorySuggestionResult:(GEOPDSearchBrowseCategorySuggestionResult *)arg1 ;
-(char)hasSearchBrowseCategorySuggestionResult;
@end

