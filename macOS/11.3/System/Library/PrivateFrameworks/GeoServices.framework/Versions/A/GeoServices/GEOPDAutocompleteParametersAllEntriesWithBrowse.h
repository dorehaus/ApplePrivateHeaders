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

@class PBDataReader, PBUnknownFields, NSData, GEOPDAutocompleteEntry, NSString, GEOPDRetainedSearchMetadata, GEOPDVenueIdentifier, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE86* _supportedAutocompleteResultCellTypes;
	SCD_Struct_GE86* _supportedListTypes;
	NSData* _categorySuggestionEntryMetadata;
	GEOPDAutocompleteEntry* _categorySuggestionEntry;
	GEOPDAutocompleteEntry* _querySuggestionEntry;
	NSString* _query;
	GEOPDRetainedSearchMetadata* _retainedSearch;
	GEOPDVenueIdentifier* _venueIdentifier;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maxQueryBuilderSuggestions;
	int _maxResults;
	char _highlightDiff;
	char _interleaveCategorySuggestions;
	char _supportClientRankingFeatureMetadata;
	char _supportDirectionIntentSuggestions;
	char _supportRapAffordance;
	char _supportSectionHeader;
	char _supportUnresolvedDirectionIntent;
	struct {
		unsigned has_maxQueryBuilderSuggestions : 1;
		unsigned has_maxResults : 1;
		unsigned has_highlightDiff : 1;
		unsigned has_interleaveCategorySuggestions : 1;
		unsigned has_supportClientRankingFeatureMetadata : 1;
		unsigned has_supportDirectionIntentSuggestions : 1;
		unsigned has_supportRapAffordance : 1;
		unsigned has_supportSectionHeader : 1;
		unsigned has_supportUnresolvedDirectionIntent : 1;
		unsigned read_unknownFields : 1;
		unsigned read_supportedAutocompleteResultCellTypes : 1;
		unsigned read_supportedListTypes : 1;
		unsigned read_categorySuggestionEntryMetadata : 1;
		unsigned read_categorySuggestionEntry : 1;
		unsigned read_querySuggestionEntry : 1;
		unsigned read_query : 1;
		unsigned read_retainedSearch : 1;
		unsigned read_venueIdentifier : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) char hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (assign,nonatomic) char hasHighlightDiff; 
@property (assign,nonatomic) char highlightDiff; 
@property (nonatomic,readonly) char hasCategorySuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * categorySuggestionEntryMetadata; 
@property (nonatomic,readonly) char hasCategorySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * categorySuggestionEntry; 
@property (assign,nonatomic) char hasInterleaveCategorySuggestions; 
@property (assign,nonatomic) char interleaveCategorySuggestions; 
@property (nonatomic,readonly) char hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier; 
@property (assign,nonatomic) char hasSupportDirectionIntentSuggestions; 
@property (assign,nonatomic) char supportDirectionIntentSuggestions; 
@property (nonatomic,readonly) char hasRetainedSearch; 
@property (nonatomic,retain) GEOPDRetainedSearchMetadata * retainedSearch; 
@property (assign,nonatomic) char hasSupportUnresolvedDirectionIntent; 
@property (assign,nonatomic) char supportUnresolvedDirectionIntent; 
@property (nonatomic,readonly) unsigned long long supportedListTypesCount; 
@property (nonatomic,readonly) int* supportedListTypes; 
@property (nonatomic,readonly) char hasQuerySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * querySuggestionEntry; 
@property (assign,nonatomic) char hasSupportClientRankingFeatureMetadata; 
@property (assign,nonatomic) char supportClientRankingFeatureMetadata; 
@property (assign,nonatomic) char hasMaxQueryBuilderSuggestions; 
@property (assign,nonatomic) int maxQueryBuilderSuggestions; 
@property (assign,nonatomic) char hasSupportSectionHeader; 
@property (assign,nonatomic) char supportSectionHeader; 
@property (nonatomic,readonly) unsigned long long supportedAutocompleteResultCellTypesCount; 
@property (nonatomic,readonly) int* supportedAutocompleteResultCellTypes; 
@property (assign,nonatomic) char hasSupportRapAffordance; 
@property (assign,nonatomic) char supportRapAffordance; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
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
-(void)clearSensitiveFields;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setMaxResults:(int)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(int)maxResults;
-(void)setHasMaxResults:(char)arg1 ;
-(char)hasMaxResults;
-(char)hasViewportInfo;
-(void)setHighlightDiff:(char)arg1 ;
-(char)hasQuery;
-(char)highlightDiff;
-(void)setHasHighlightDiff:(char)arg1 ;
-(char)hasHighlightDiff;
-(NSData *)categorySuggestionEntryMetadata;
-(GEOPDAutocompleteEntry *)categorySuggestionEntry;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(GEOPDRetainedSearchMetadata *)retainedSearch;
-(GEOPDAutocompleteEntry *)querySuggestionEntry;
-(void)setCategorySuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setCategorySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setInterleaveCategorySuggestions:(char)arg1 ;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(void)setSupportDirectionIntentSuggestions:(char)arg1 ;
-(void)setRetainedSearch:(GEOPDRetainedSearchMetadata *)arg1 ;
-(void)setSupportUnresolvedDirectionIntent:(char)arg1 ;
-(void)addSupportedListType:(int)arg1 ;
-(void)setQuerySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setSupportClientRankingFeatureMetadata:(char)arg1 ;
-(void)setMaxQueryBuilderSuggestions:(int)arg1 ;
-(void)setSupportSectionHeader:(char)arg1 ;
-(void)addSupportedAutocompleteResultCellType:(int)arg1 ;
-(void)setSupportRapAffordance:(char)arg1 ;
-(char)hasCategorySuggestionEntry;
-(char)hasQuerySuggestionEntry;
-(unsigned long long)supportedListTypesCount;
-(void)clearSupportedListTypes;
-(int)supportedListTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedAutocompleteResultCellTypesCount;
-(void)clearSupportedAutocompleteResultCellTypes;
-(int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1 ;
-(char)hasCategorySuggestionEntryMetadata;
-(char)interleaveCategorySuggestions;
-(void)setHasInterleaveCategorySuggestions:(char)arg1 ;
-(char)hasInterleaveCategorySuggestions;
-(char)hasVenueIdentifier;
-(char)supportDirectionIntentSuggestions;
-(void)setHasSupportDirectionIntentSuggestions:(char)arg1 ;
-(char)hasSupportDirectionIntentSuggestions;
-(char)hasRetainedSearch;
-(char)supportUnresolvedDirectionIntent;
-(void)setHasSupportUnresolvedDirectionIntent:(char)arg1 ;
-(char)hasSupportUnresolvedDirectionIntent;
-(int*)supportedListTypes;
-(void)setSupportedListTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedListTypesAsString:(int)arg1 ;
-(int)StringAsSupportedListTypes:(id)arg1 ;
-(char)supportClientRankingFeatureMetadata;
-(void)setHasSupportClientRankingFeatureMetadata:(char)arg1 ;
-(char)hasSupportClientRankingFeatureMetadata;
-(int)maxQueryBuilderSuggestions;
-(void)setHasMaxQueryBuilderSuggestions:(char)arg1 ;
-(char)hasMaxQueryBuilderSuggestions;
-(char)supportSectionHeader;
-(void)setHasSupportSectionHeader:(char)arg1 ;
-(char)hasSupportSectionHeader;
-(int*)supportedAutocompleteResultCellTypes;
-(void)setSupportedAutocompleteResultCellTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedAutocompleteResultCellTypesAsString:(int)arg1 ;
-(int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1 ;
-(char)supportRapAffordance;
-(void)setHasSupportRapAffordance:(char)arg1 ;
-(char)hasSupportRapAffordance;
@end

