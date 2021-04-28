/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDDisplayHeaderSubstitute, GEORelatedSearchSuggestion, NSString;

@interface GEODisplayHeaderSubstitute : NSObject {

	GEOPDDisplayHeaderSubstitute* _displayHeaderSubstitute;
	GEORelatedSearchSuggestion* _relatedSearchSuggestion;

}

@property (nonatomic,retain) GEOPDDisplayHeaderSubstitute * displayHeaderSubstitute;              //@synthesize displayHeaderSubstitute=_displayHeaderSubstitute - In the implementation block
@property (nonatomic,retain) GEORelatedSearchSuggestion * relatedSearchSuggestion;                //@synthesize relatedSearchSuggestion=_relatedSearchSuggestion - In the implementation block
@property (nonatomic,readonly) int substituteType; 
@property (nonatomic,readonly) NSString * interpretedQuery; 
-(GEORelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEORelatedSearchSuggestion *)arg1 ;
-(NSString *)interpretedQuery;
-(int)substituteType;
-(id)initWithPDDisplayHeaderSubstitute:(id)arg1 ;
-(GEOPDDisplayHeaderSubstitute *)displayHeaderSubstitute;
-(void)setDisplayHeaderSubstitute:(GEOPDDisplayHeaderSubstitute *)arg1 ;
@end

