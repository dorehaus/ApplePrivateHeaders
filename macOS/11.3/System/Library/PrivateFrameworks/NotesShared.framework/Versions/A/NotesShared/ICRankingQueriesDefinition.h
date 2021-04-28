/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSMutableDictionary;

@interface ICRankingQueriesDefinition : NSObject {

	NSArray* _rankingQueryDescriptors;
	NSArray* _rankingQueries;
	NSArray* _expandedTokens;
	long long _rankingQueryType;
	NSString* _rankingQueryFlags;
	NSMutableDictionary* _matchingDescriptorsCache;

}

@property (nonatomic,retain) NSArray * expandedTokens;                                    //@synthesize expandedTokens=_expandedTokens - In the implementation block
@property (assign,nonatomic) long long rankingQueryType;                                  //@synthesize rankingQueryType=_rankingQueryType - In the implementation block
@property (nonatomic,retain) NSString * rankingQueryFlags;                                //@synthesize rankingQueryFlags=_rankingQueryFlags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * matchingDescriptorsCache;              //@synthesize matchingDescriptorsCache=_matchingDescriptorsCache - In the implementation block
@property (nonatomic,readonly) NSArray * rankingQueryDescriptors;                         //@synthesize rankingQueryDescriptors=_rankingQueryDescriptors - In the implementation block
@property (nonatomic,readonly) NSArray * rankingQueries;                                  //@synthesize rankingQueries=_rankingQueries - In the implementation block
+(unsigned long long)relevanceBitFieldForSearchableItem:(id)arg1 ;
+(unsigned long long)modificationDateBucketForSearchableItem:(id)arg1 ;
+(unsigned long long)maxCountOfVariantsForCountOfTokens:(unsigned long long)arg1 ;
+(unsigned long long)bucketOfTimeInterval:(double)arg1 ;
-(NSArray *)rankingQueries;
-(NSArray *)expandedTokens;
-(long long)rankingQueryType;
-(NSString *)rankingQueryFlags;
-(id)initWithExpandedTokens:(id)arg1 rankingQueryType:(long long)arg2 rankingQueryFlags:(id)arg3 ;
-(id)initWithSearchString:(id)arg1 rankingQueryType:(long long)arg2 rankingQueryFlags:(id)arg3 ;
-(double)rankingScoreForSearchableItem:(id)arg1 ;
-(id)highlightInfoForSearchableItem:(id)arg1 ;
-(NSArray *)rankingQueryDescriptors;
-(id)matchingDescriptorsForBitFields:(unsigned long long)arg1 ;
-(void)addDescriptor:(id)arg1 intoSearchResultHighlightInfoFieldElement:(id)arg2 ;
-(NSMutableDictionary *)matchingDescriptorsCache;
-(void)setExpandedTokens:(NSArray *)arg1 ;
-(void)setRankingQueryType:(long long)arg1 ;
-(void)setRankingQueryFlags:(NSString *)arg1 ;
-(void)setMatchingDescriptorsCache:(NSMutableDictionary *)arg1 ;
@end

