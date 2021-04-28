/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface ICRankingQueryDescriptor : NSObject <NSCopying> {

	NSString* _rankingQuery;
	NSArray* _queryFields;
	NSArray* _expandedTokens;
	long long _rankingQueryType;
	NSString* _rankingQueryFlags;
	unsigned long long _displayedMatchedFields;
	unsigned long long _purpose;

}

@property (nonatomic,retain) NSString * rankingQuery;                                  //@synthesize rankingQuery=_rankingQuery - In the implementation block
@property (nonatomic,readonly) NSArray * queryFields;                                  //@synthesize queryFields=_queryFields - In the implementation block
@property (nonatomic,readonly) NSArray * expandedTokens;                               //@synthesize expandedTokens=_expandedTokens - In the implementation block
@property (nonatomic,readonly) long long rankingQueryType;                             //@synthesize rankingQueryType=_rankingQueryType - In the implementation block
@property (nonatomic,readonly) NSString * rankingQueryFlags;                           //@synthesize rankingQueryFlags=_rankingQueryFlags - In the implementation block
@property (nonatomic,readonly) unsigned long long displayedMatchedFields;              //@synthesize displayedMatchedFields=_displayedMatchedFields - In the implementation block
@property (nonatomic,readonly) unsigned long long purpose;                             //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) NSArray * tokens; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tokens;
-(unsigned long long)purpose;
-(NSArray *)expandedTokens;
-(id)initWithQueryFields:(id)arg1 expandedTokens:(id)arg2 rankingQueryType:(long long)arg3 rankingQueryFlags:(id)arg4 displayedMatchedFields:(unsigned long long)arg5 purpose:(unsigned long long)arg6 ;
-(NSArray *)queryFields;
-(long long)rankingQueryType;
-(NSString *)rankingQueryFlags;
-(unsigned long long)displayedMatchedFields;
-(id)rankingQueryForQueryField:(id)arg1 tokenString:(id)arg2 ;
-(id)initWithQueryFields:(id)arg1 expandedTokens:(id)arg2 rankingQueryType:(long long)arg3 rankingQueryFlags:(id)arg4 purpose:(unsigned long long)arg5 ;
-(NSString *)rankingQuery;
-(double)rankingScoreForSearchResultType:(unsigned long long)arg1 ;
-(void)setRankingQuery:(NSString *)arg1 ;
@end
