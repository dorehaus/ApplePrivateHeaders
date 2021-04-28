/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOLatLng, NSData;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOHighlight* _textHighlights;
	unsigned long long _textHighlightsCount;
	unsigned long long _textHighlightsSpace;
	NSString* _calloutTitle;
	NSMutableArray* _displayLines;
	NSString* _iconID;
	GEOLatLng* _latlng;
	NSMutableArray* _namedFeatures;
	NSString* _searchQueryDisplayString;
	NSData* _suggestionEntryMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_textHighlights : 1;
		unsigned read_calloutTitle : 1;
		unsigned read_displayLines : 1;
		unsigned read_iconID : 1;
		unsigned read_latlng : 1;
		unsigned read_namedFeatures : 1;
		unsigned read_searchQueryDisplayString : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * displayLines; 
@property (nonatomic,readonly) unsigned long long textHighlightsCount; 
@property (nonatomic,readonly) GEOHighlight* textHighlights; 
@property (nonatomic,readonly) char hasIconID; 
@property (nonatomic,retain) NSString * iconID; 
@property (nonatomic,readonly) char hasLatlng; 
@property (nonatomic,retain) GEOLatLng * latlng; 
@property (nonatomic,readonly) char hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (nonatomic,readonly) char hasSearchQueryDisplayString; 
@property (nonatomic,retain) NSString * searchQueryDisplayString; 
@property (nonatomic,readonly) char hasCalloutTitle; 
@property (nonatomic,retain) NSString * calloutTitle; 
@property (nonatomic,retain) NSMutableArray * namedFeatures; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)displayLineType;
+(Class)namedFeatureType;
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
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(char)hasSuggestionEntryMetadata;
-(NSString *)calloutTitle;
-(NSMutableArray *)displayLines;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(GEOLatLng *)latlng;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(void)addNamedFeature:(id)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(void)clearNamedFeatures;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)namedFeatures;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)clearTextHighlights;
-(NSString *)iconID;
-(NSString *)searchQueryDisplayString;
-(void)addTextHighlights:(GEOHighlight)arg1 ;
-(void)setIconID:(NSString *)arg1 ;
-(void)setSearchQueryDisplayString:(NSString *)arg1 ;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(unsigned long long)textHighlightsCount;
-(GEOHighlight)textHighlightsAtIndex:(unsigned long long)arg1 ;
-(GEOHighlight*)textHighlights;
-(void)setTextHighlights:(GEOHighlight*)arg1 count:(unsigned long long)arg2 ;
-(char)hasIconID;
-(char)hasLatlng;
-(char)hasSearchQueryDisplayString;
-(char)hasCalloutTitle;
@end

