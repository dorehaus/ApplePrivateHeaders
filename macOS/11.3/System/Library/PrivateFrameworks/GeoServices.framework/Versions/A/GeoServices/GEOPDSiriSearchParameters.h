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

@class PBDataReader, PBUnknownFields, GEOAddress, NSMutableArray, GEOPDIndexQueryNode, GEOPDRecentRouteInfo, NSString, GEOPDViewportInfo;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOAddress* _address;
	NSMutableArray* _businessCategoryFilters;
	GEOPDIndexQueryNode* _indexFilter;
	GEOPDRecentRouteInfo* _recentRouteInfo;
	NSString* _searchString;
	NSMutableArray* _searchSubstringDescriptors;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxResultCount;
	int _sortOrder;
	char _isStrictMapRegion;
	char _structuredSearch;
	struct {
		unsigned has_maxResultCount : 1;
		unsigned has_sortOrder : 1;
		unsigned has_isStrictMapRegion : 1;
		unsigned has_structuredSearch : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_businessCategoryFilters : 1;
		unsigned read_indexFilter : 1;
		unsigned read_recentRouteInfo : 1;
		unsigned read_searchString : 1;
		unsigned read_searchSubstringDescriptors : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasSortOrder; 
@property (assign,nonatomic) int sortOrder; 
@property (assign,nonatomic) char hasMaxResultCount; 
@property (assign,nonatomic) unsigned maxResultCount; 
@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) GEOAddress * address; 
@property (nonatomic,retain) NSMutableArray * businessCategoryFilters; 
@property (assign,nonatomic) char hasIsStrictMapRegion; 
@property (assign,nonatomic) char isStrictMapRegion; 
@property (assign,nonatomic) char hasStructuredSearch; 
@property (assign,nonatomic) char structuredSearch; 
@property (nonatomic,retain) NSMutableArray * searchSubstringDescriptors; 
@property (nonatomic,readonly) char hasIndexFilter; 
@property (nonatomic,retain) GEOPDIndexQueryNode * indexFilter; 
@property (nonatomic,readonly) char hasRecentRouteInfo; 
@property (nonatomic,retain) GEOPDRecentRouteInfo * recentRouteInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)businessCategoryFilterType;
+(Class)searchSubstringDescriptorType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOAddress *)address;
-(void)setAddress:(GEOAddress *)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasAddress;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(char)hasViewportInfo;
-(GEOPDRecentRouteInfo *)recentRouteInfo;
-(void)setRecentRouteInfo:(GEOPDRecentRouteInfo *)arg1 ;
-(char)hasRecentRouteInfo;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(void)setHasSortOrder:(char)arg1 ;
-(char)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(char)hasSearchString;
-(NSMutableArray *)businessCategoryFilters;
-(GEOPDIndexQueryNode *)indexFilter;
-(void)setMaxResultCount:(unsigned)arg1 ;
-(void)addBusinessCategoryFilter:(id)arg1 ;
-(void)setIsStrictMapRegion:(char)arg1 ;
-(void)setStructuredSearch:(char)arg1 ;
-(void)addSearchSubstringDescriptor:(id)arg1 ;
-(void)setIndexFilter:(GEOPDIndexQueryNode *)arg1 ;
-(unsigned long long)businessCategoryFiltersCount;
-(void)clearBusinessCategoryFilters;
-(id)businessCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchSubstringDescriptorsCount;
-(void)clearSearchSubstringDescriptors;
-(id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1 ;
-(unsigned)maxResultCount;
-(void)setHasMaxResultCount:(char)arg1 ;
-(char)hasMaxResultCount;
-(void)setBusinessCategoryFilters:(NSMutableArray *)arg1 ;
-(char)isStrictMapRegion;
-(void)setHasIsStrictMapRegion:(char)arg1 ;
-(char)hasIsStrictMapRegion;
-(char)structuredSearch;
-(void)setHasStructuredSearch:(char)arg1 ;
-(char)hasStructuredSearch;
-(NSMutableArray *)searchSubstringDescriptors;
-(void)setSearchSubstringDescriptors:(NSMutableArray *)arg1 ;
-(char)hasIndexFilter;
@end

