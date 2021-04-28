/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPersonResult;
@class NSArray, NSDictionary;

@interface PGSharingSuggestionResult : NSObject {

	char _useContactSuggestion;
	id<PGPersonResult> _person;
	double _weight;
	double _sourceWeight;
	NSArray* _sourceNames;

}

@property (nonatomic,readonly) double weight;                                        //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) double sourceWeight;                                  //@synthesize sourceWeight=_sourceWeight - In the implementation block
@property (nonatomic,readonly) NSArray * sourceNames;                                //@synthesize sourceNames=_sourceNames - In the implementation block
@property (assign,nonatomic) char useContactSuggestion;                              //@synthesize useContactSuggestion=_useContactSuggestion - In the implementation block
@property (nonatomic,readonly) id<PGPersonResult> person;                            //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4 ;
-(id)description;
-(double)weight;
-(NSDictionary *)dictionaryRepresentation;
-(id<PGPersonResult>)person;
-(double)score;
-(id)initWithPerson:(id)arg1 weight:(double)arg2 sourceWeight:(double)arg3 sourceName:(id)arg4 ;
-(void)mergeWithSuggestionResult:(id)arg1 ;
-(double)sourceWeight;
-(NSArray *)sourceNames;
-(char)useContactSuggestion;
-(void)setUseContactSuggestion:(char)arg1 ;
@end

