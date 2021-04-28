/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOrderedSet, NSArray;

@interface PRSQueryRankingConfiguration : NSObject {

	char _allowAnonymousDataCollection;
	NSOrderedSet* _requiredAttributes;
	NSArray* _rankingQueries;
	unsigned long long _strongRankingQueryCount;
	unsigned long long _dominantRankingQueryCount;
	unsigned long long _dominatedRankingQueryCount;
	unsigned long long _rankingBitCount;
	T _fuzzyMatchMask;
	T _fuzzyMatchCheck;

}

@property (retain) NSOrderedSet * requiredAttributes;                          //@synthesize requiredAttributes=_requiredAttributes - In the implementation block
@property (retain) NSArray * rankingQueries;                                   //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (assign) unsigned long long strongRankingQueryCount;                 //@synthesize strongRankingQueryCount=_strongRankingQueryCount - In the implementation block
@property (assign) unsigned long long dominantRankingQueryCount;               //@synthesize dominantRankingQueryCount=_dominantRankingQueryCount - In the implementation block
@property (assign) unsigned long long dominatedRankingQueryCount;              //@synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount - In the implementation block
@property (assign) unsigned long long rankingBitCount;                         //@synthesize rankingBitCount=_rankingBitCount - In the implementation block
@property (assign) char allowAnonymousDataCollection;                          //@synthesize allowAnonymousDataCollection=_allowAnonymousDataCollection - In the implementation block
@property (assign) T fuzzyMatchMask;                                           //@synthesize fuzzyMatchMask=_fuzzyMatchMask - In the implementation block
@property (assign) T fuzzyMatchCheck;                                          //@synthesize fuzzyMatchCheck=_fuzzyMatchCheck - In the implementation block
+(void)updateMailVIP:(id)arg1 phoneFavorites:(id)arg2 meEmailAddresses:(id)arg3 ;
-(NSArray *)rankingQueries;
-(NSOrderedSet *)requiredAttributes;
-(unsigned long long)strongRankingQueryCount;
-(unsigned long long)dominantRankingQueryCount;
-(unsigned long long)dominatedRankingQueryCount;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(void)setStrongRankingQueryCount:(unsigned long long)arg1 ;
-(void)setDominantRankingQueryCount:(unsigned long long)arg1 ;
-(void)setDominatedRankingQueryCount:(unsigned long long)arg1 ;
-(unsigned long long)rankingBitCount;
-(void)setRequiredAttributes:(NSOrderedSet *)arg1 ;
-(void)setRankingBitCount:(unsigned long long)arg1 ;
-(char)allowAnonymousDataCollection;
-(void)setAllowAnonymousDataCollection:(char)arg1 ;
-(T)fuzzyMatchMask;
-(void)setFuzzyMatchMask:(T)arg1 ;
-(T)fuzzyMatchCheck;
-(void)setFuzzyMatchCheck:(T)arg1 ;
@end
