/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceTicket.h>

@class GEOMapServiceTraits, GEOMapRegion, NSArray, GEORelatedSearchSuggestion, NSDictionary, NSString, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection, GEOPDMerchantLookupResult;

@interface GEOAbstractMapServiceTicket : GEOAbstractTicket <GEOMapServiceTicket> {

	GEOMapRegion* _resultBoundingRegion;
	char _chainResultSet;
	NSArray* _relatedSearchSuggestions;
	NSArray* _browseCategories;
	GEORelatedSearchSuggestion* _defaultRelatedSuggestion;
	NSString* _resultSectionHeader;
	int _searchResultType;
	NSString* _resultDisplayHeader;
	NSArray* _displayHeaderSubstitutes;
	char _shouldEnableRedoSearch;
	GEOResolvedItem* _clientResolvedResult;
	GEODirectionIntent* _directionIntent;
	NSArray* _retainedSearchMetadata;
	NSArray* _searchResultSections;
	unsigned _dymSuggestionVisibleTime;
	char _showDymSuggestionCloseButton;
	GEOPDMerchantLookupResult* _merchantLookupResult;
	GEOCategorySearchResultSection* _categorySearchResultSection;
	NSArray* _relatedEntitySections;
	NSArray* _collectionResults;
	NSArray* _publisherResults;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion;                                       //@synthesize resultBoundingRegion=_resultBoundingRegion - In the implementation block
@property (getter=isChainResultSet,nonatomic,readonly) char chainResultSet;                               //@synthesize chainResultSet=_chainResultSet - In the implementation block
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions;                                        //@synthesize relatedSearchSuggestions=_relatedSearchSuggestions - In the implementation block
@property (nonatomic,readonly) NSArray * browseCategories;                                                //@synthesize browseCategories=_browseCategories - In the implementation block
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion;                     //@synthesize defaultRelatedSuggestion=_defaultRelatedSuggestion - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader;                                            //@synthesize resultSectionHeader=_resultSectionHeader - In the implementation block
@property (nonatomic,readonly) int searchResultType;                                                      //@synthesize searchResultType=_searchResultType - In the implementation block
@property (nonatomic,readonly) NSString * resultDisplayHeader;                                            //@synthesize resultDisplayHeader=_resultDisplayHeader - In the implementation block
@property (nonatomic,readonly) NSArray * displayHeaderSubstitutes;                                        //@synthesize displayHeaderSubstitutes=_displayHeaderSubstitutes - In the implementation block
@property (nonatomic,readonly) char shouldEnableRedoSearch;                                               //@synthesize shouldEnableRedoSearch=_shouldEnableRedoSearch - In the implementation block
@property (nonatomic,readonly) GEOResolvedItem * clientResolvedResult;                                    //@synthesize clientResolvedResult=_clientResolvedResult - In the implementation block
@property (nonatomic,readonly) GEODirectionIntent * directionIntent;                                      //@synthesize directionIntent=_directionIntent - In the implementation block
@property (nonatomic,readonly) NSArray * retainedSearchMetadata;                                          //@synthesize retainedSearchMetadata=_retainedSearchMetadata - In the implementation block
@property (nonatomic,readonly) NSArray * searchResultSections;                                            //@synthesize searchResultSections=_searchResultSections - In the implementation block
@property (nonatomic,readonly) GEOCategorySearchResultSection * categorySearchResultSection;              //@synthesize categorySearchResultSection=_categorySearchResultSection - In the implementation block
@property (nonatomic,readonly) NSArray * relatedEntitySections;                                           //@synthesize relatedEntitySections=_relatedEntitySections - In the implementation block
@property (nonatomic,readonly) unsigned dymSuggestionVisibleTime;                                         //@synthesize dymSuggestionVisibleTime=_dymSuggestionVisibleTime - In the implementation block
@property (nonatomic,readonly) char showDymSuggestionCloseButton;                                         //@synthesize showDymSuggestionCloseButton=_showDymSuggestionCloseButton - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy; 
@property (nonatomic,readonly) GEOPDMerchantLookupResult * merchantLookupResult;                          //@synthesize merchantLookupResult=_merchantLookupResult - In the implementation block
@property (nonatomic,readonly) NSArray * collectionResults;                                               //@synthesize collectionResults=_collectionResults - In the implementation block
@property (nonatomic,readonly) NSArray * publisherResults;                                                //@synthesize publisherResults=_publisherResults - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE87 dataRequestKind; 
-(NSArray *)browseCategories;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(GEOCategorySearchResultSection *)categorySearchResultSection;
-(char)isChainResultSet;
-(NSArray *)relatedSearchSuggestions;
-(NSArray *)relatedEntitySections;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(char)shouldEnableRedoSearch;
-(NSString *)resultDisplayHeader;
-(GEODirectionIntent *)directionIntent;
-(GEOResolvedItem *)clientResolvedResult;
-(int)searchResultType;
-(NSArray *)displayHeaderSubstitutes;
-(unsigned)dymSuggestionVisibleTime;
-(char)showDymSuggestionCloseButton;
-(NSArray *)searchResultSections;
-(SCD_Struct_GE87)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(GEOMapRegion *)resultBoundingRegion;
-(GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
-(NSString *)resultSectionHeader;
-(NSArray *)retainedSearchMetadata;
-(NSArray *)collectionResults;
-(NSArray *)publisherResults;
@end

