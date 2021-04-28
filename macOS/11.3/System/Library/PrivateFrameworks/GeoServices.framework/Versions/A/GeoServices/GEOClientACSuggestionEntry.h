/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOSubactionMetaData, NSString;

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _contactRelevanceScore;
	double _distanceToSuggestionFromViewportCenter;
	double _fractionOfMatch;
	double _mapsSuggestionsContactRevelanceScore;
	double _mapsSuggestionsIsTouristScore;
	double _mapsSuggestionsPoiRevelanceScore;
	GEOSubactionMetaData* _subactionMetaData;
	NSString* _suggestionSectionType;
	double _timeSinceLastInteractedSeconds;
	double _timeSinceMapViewportChangedSeconds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _age;
	int _autocompleteResultCellType;
	int _distanceToSuggestion;
	int _peopleSuggesterRank;
	int _poiOpenState;
	int _serverEntryType;
	int _serverItemIndexInSection;
	int _serverSectionIndex;
	int _suggestionType;
	int _tapBehavior;
	char _discreteFeatureValuesAvailable;
	char _isContainedInViewport;
	char _isFavorite;
	char _isProminentResult;
	char _matchedUsingAddress;
	char _matchedUsingEventName;
	char _matchedUsingLabel;
	char _matchedUsingName;
	char _matchedUsingOrganization;
	char _shownToUser;
	struct {
		unsigned has_contactRelevanceScore : 1;
		unsigned has_distanceToSuggestionFromViewportCenter : 1;
		unsigned has_fractionOfMatch : 1;
		unsigned has_mapsSuggestionsContactRevelanceScore : 1;
		unsigned has_mapsSuggestionsIsTouristScore : 1;
		unsigned has_mapsSuggestionsPoiRevelanceScore : 1;
		unsigned has_timeSinceLastInteractedSeconds : 1;
		unsigned has_timeSinceMapViewportChangedSeconds : 1;
		unsigned has_age : 1;
		unsigned has_autocompleteResultCellType : 1;
		unsigned has_distanceToSuggestion : 1;
		unsigned has_peopleSuggesterRank : 1;
		unsigned has_poiOpenState : 1;
		unsigned has_serverEntryType : 1;
		unsigned has_serverItemIndexInSection : 1;
		unsigned has_serverSectionIndex : 1;
		unsigned has_suggestionType : 1;
		unsigned has_tapBehavior : 1;
		unsigned has_discreteFeatureValuesAvailable : 1;
		unsigned has_isContainedInViewport : 1;
		unsigned has_isFavorite : 1;
		unsigned has_isProminentResult : 1;
		unsigned has_matchedUsingAddress : 1;
		unsigned has_matchedUsingEventName : 1;
		unsigned has_matchedUsingLabel : 1;
		unsigned has_matchedUsingName : 1;
		unsigned has_matchedUsingOrganization : 1;
		unsigned has_shownToUser : 1;
		unsigned read_subactionMetaData : 1;
		unsigned read_suggestionSectionType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasSuggestionType; 
@property (assign,nonatomic) int suggestionType; 
@property (assign,nonatomic) char hasShownToUser; 
@property (assign,nonatomic) char shownToUser; 
@property (assign,nonatomic) char hasFractionOfMatch; 
@property (assign,nonatomic) double fractionOfMatch; 
@property (assign,nonatomic) char hasDistanceToSuggestion; 
@property (assign,nonatomic) int distanceToSuggestion; 
@property (assign,nonatomic) char hasContactRelevanceScore; 
@property (assign,nonatomic) double contactRelevanceScore; 
@property (assign,nonatomic) char hasMatchedUsingName; 
@property (assign,nonatomic) char matchedUsingName; 
@property (assign,nonatomic) char hasMatchedUsingOrganization; 
@property (assign,nonatomic) char matchedUsingOrganization; 
@property (assign,nonatomic) char hasMatchedUsingAddress; 
@property (assign,nonatomic) char matchedUsingAddress; 
@property (assign,nonatomic) char hasMatchedUsingLabel; 
@property (assign,nonatomic) char matchedUsingLabel; 
@property (assign,nonatomic) char hasMatchedUsingEventName; 
@property (assign,nonatomic) char matchedUsingEventName; 
@property (assign,nonatomic) char hasPeopleSuggesterRank; 
@property (assign,nonatomic) int peopleSuggesterRank; 
@property (assign,nonatomic) char hasAge; 
@property (assign,nonatomic) int age; 
@property (assign,nonatomic) char hasServerEntryType; 
@property (assign,nonatomic) int serverEntryType; 
@property (assign,nonatomic) char hasIsFavorite; 
@property (assign,nonatomic) char isFavorite; 
@property (assign,nonatomic) char hasPoiOpenState; 
@property (assign,nonatomic) int poiOpenState; 
@property (assign,nonatomic) char hasMapsSuggestionsContactRevelanceScore; 
@property (assign,nonatomic) double mapsSuggestionsContactRevelanceScore; 
@property (assign,nonatomic) char hasMapsSuggestionsPoiRevelanceScore; 
@property (assign,nonatomic) double mapsSuggestionsPoiRevelanceScore; 
@property (assign,nonatomic) char hasMapsSuggestionsIsTouristScore; 
@property (assign,nonatomic) double mapsSuggestionsIsTouristScore; 
@property (assign,nonatomic) char hasDiscreteFeatureValuesAvailable; 
@property (assign,nonatomic) char discreteFeatureValuesAvailable; 
@property (nonatomic,readonly) char hasSuggestionSectionType; 
@property (nonatomic,retain) NSString * suggestionSectionType; 
@property (assign,nonatomic) char hasIsProminentResult; 
@property (assign,nonatomic) char isProminentResult; 
@property (nonatomic,readonly) char hasSubactionMetaData; 
@property (nonatomic,retain) GEOSubactionMetaData * subactionMetaData; 
@property (assign,nonatomic) char hasAutocompleteResultCellType; 
@property (assign,nonatomic) int autocompleteResultCellType; 
@property (assign,nonatomic) char hasServerSectionIndex; 
@property (assign,nonatomic) int serverSectionIndex; 
@property (assign,nonatomic) char hasServerItemIndexInSection; 
@property (assign,nonatomic) int serverItemIndexInSection; 
@property (assign,nonatomic) char hasTapBehavior; 
@property (assign,nonatomic) int tapBehavior; 
@property (assign,nonatomic) char hasDistanceToSuggestionFromViewportCenter; 
@property (assign,nonatomic) double distanceToSuggestionFromViewportCenter; 
@property (assign,nonatomic) char hasTimeSinceLastInteractedSeconds; 
@property (assign,nonatomic) double timeSinceLastInteractedSeconds; 
@property (assign,nonatomic) char hasIsContainedInViewport; 
@property (assign,nonatomic) char isContainedInViewport; 
@property (assign,nonatomic) char hasTimeSinceMapViewportChangedSeconds; 
@property (assign,nonatomic) double timeSinceMapViewportChangedSeconds; 
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
-(int)suggestionType;
-(int)age;
-(void)setAge:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setSuggestionType:(int)arg1 ;
-(void)setHasSuggestionType:(char)arg1 ;
-(char)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(void)setHasAge:(char)arg1 ;
-(char)hasAge;
-(void)setAutocompleteResultCellType:(int)arg1 ;
-(int)autocompleteResultCellType;
-(void)setHasAutocompleteResultCellType:(char)arg1 ;
-(char)hasAutocompleteResultCellType;
-(id)autocompleteResultCellTypeAsString:(int)arg1 ;
-(int)StringAsAutocompleteResultCellType:(id)arg1 ;
-(void)setTapBehavior:(int)arg1 ;
-(int)tapBehavior;
-(void)setHasTapBehavior:(char)arg1 ;
-(char)hasTapBehavior;
-(id)tapBehaviorAsString:(int)arg1 ;
-(int)StringAsTapBehavior:(id)arg1 ;
-(void)setServerEntryType:(int)arg1 ;
-(int)serverEntryType;
-(void)setHasServerEntryType:(char)arg1 ;
-(char)hasServerEntryType;
-(id)serverEntryTypeAsString:(int)arg1 ;
-(int)StringAsServerEntryType:(id)arg1 ;
-(void)setIsProminentResult:(char)arg1 ;
-(char)isProminentResult;
-(void)setHasIsProminentResult:(char)arg1 ;
-(char)hasIsProminentResult;
-(NSString *)suggestionSectionType;
-(GEOSubactionMetaData *)subactionMetaData;
-(void)setShownToUser:(char)arg1 ;
-(void)setFractionOfMatch:(double)arg1 ;
-(void)setDistanceToSuggestion:(int)arg1 ;
-(void)setContactRelevanceScore:(double)arg1 ;
-(void)setMatchedUsingName:(char)arg1 ;
-(void)setMatchedUsingOrganization:(char)arg1 ;
-(void)setMatchedUsingAddress:(char)arg1 ;
-(void)setMatchedUsingLabel:(char)arg1 ;
-(void)setMatchedUsingEventName:(char)arg1 ;
-(void)setPeopleSuggesterRank:(int)arg1 ;
-(void)setIsFavorite:(char)arg1 ;
-(void)setPoiOpenState:(int)arg1 ;
-(void)setMapsSuggestionsContactRevelanceScore:(double)arg1 ;
-(void)setMapsSuggestionsPoiRevelanceScore:(double)arg1 ;
-(void)setMapsSuggestionsIsTouristScore:(double)arg1 ;
-(void)setDiscreteFeatureValuesAvailable:(char)arg1 ;
-(void)setSuggestionSectionType:(NSString *)arg1 ;
-(void)setSubactionMetaData:(GEOSubactionMetaData *)arg1 ;
-(void)setServerSectionIndex:(int)arg1 ;
-(void)setServerItemIndexInSection:(int)arg1 ;
-(void)setDistanceToSuggestionFromViewportCenter:(double)arg1 ;
-(void)setTimeSinceLastInteractedSeconds:(double)arg1 ;
-(void)setIsContainedInViewport:(char)arg1 ;
-(void)setTimeSinceMapViewportChangedSeconds:(double)arg1 ;
-(char)shownToUser;
-(void)setHasShownToUser:(char)arg1 ;
-(char)hasShownToUser;
-(double)fractionOfMatch;
-(void)setHasFractionOfMatch:(char)arg1 ;
-(char)hasFractionOfMatch;
-(int)distanceToSuggestion;
-(void)setHasDistanceToSuggestion:(char)arg1 ;
-(char)hasDistanceToSuggestion;
-(double)contactRelevanceScore;
-(void)setHasContactRelevanceScore:(char)arg1 ;
-(char)hasContactRelevanceScore;
-(char)matchedUsingName;
-(void)setHasMatchedUsingName:(char)arg1 ;
-(char)hasMatchedUsingName;
-(char)matchedUsingOrganization;
-(void)setHasMatchedUsingOrganization:(char)arg1 ;
-(char)hasMatchedUsingOrganization;
-(char)matchedUsingAddress;
-(void)setHasMatchedUsingAddress:(char)arg1 ;
-(char)hasMatchedUsingAddress;
-(char)matchedUsingLabel;
-(void)setHasMatchedUsingLabel:(char)arg1 ;
-(char)hasMatchedUsingLabel;
-(char)matchedUsingEventName;
-(void)setHasMatchedUsingEventName:(char)arg1 ;
-(char)hasMatchedUsingEventName;
-(int)peopleSuggesterRank;
-(void)setHasPeopleSuggesterRank:(char)arg1 ;
-(char)hasPeopleSuggesterRank;
-(char)isFavorite;
-(void)setHasIsFavorite:(char)arg1 ;
-(char)hasIsFavorite;
-(int)poiOpenState;
-(void)setHasPoiOpenState:(char)arg1 ;
-(char)hasPoiOpenState;
-(id)poiOpenStateAsString:(int)arg1 ;
-(int)StringAsPoiOpenState:(id)arg1 ;
-(double)mapsSuggestionsContactRevelanceScore;
-(void)setHasMapsSuggestionsContactRevelanceScore:(char)arg1 ;
-(char)hasMapsSuggestionsContactRevelanceScore;
-(double)mapsSuggestionsPoiRevelanceScore;
-(void)setHasMapsSuggestionsPoiRevelanceScore:(char)arg1 ;
-(char)hasMapsSuggestionsPoiRevelanceScore;
-(double)mapsSuggestionsIsTouristScore;
-(void)setHasMapsSuggestionsIsTouristScore:(char)arg1 ;
-(char)hasMapsSuggestionsIsTouristScore;
-(char)discreteFeatureValuesAvailable;
-(void)setHasDiscreteFeatureValuesAvailable:(char)arg1 ;
-(char)hasDiscreteFeatureValuesAvailable;
-(char)hasSuggestionSectionType;
-(char)hasSubactionMetaData;
-(int)serverSectionIndex;
-(void)setHasServerSectionIndex:(char)arg1 ;
-(char)hasServerSectionIndex;
-(int)serverItemIndexInSection;
-(void)setHasServerItemIndexInSection:(char)arg1 ;
-(char)hasServerItemIndexInSection;
-(double)distanceToSuggestionFromViewportCenter;
-(void)setHasDistanceToSuggestionFromViewportCenter:(char)arg1 ;
-(char)hasDistanceToSuggestionFromViewportCenter;
-(double)timeSinceLastInteractedSeconds;
-(void)setHasTimeSinceLastInteractedSeconds:(char)arg1 ;
-(char)hasTimeSinceLastInteractedSeconds;
-(char)isContainedInViewport;
-(void)setHasIsContainedInViewport:(char)arg1 ;
-(char)hasIsContainedInViewport;
-(double)timeSinceMapViewportChangedSeconds;
-(void)setHasTimeSinceMapViewportChangedSeconds:(char)arg1 ;
-(char)hasTimeSinceMapViewportChangedSeconds;
@end

