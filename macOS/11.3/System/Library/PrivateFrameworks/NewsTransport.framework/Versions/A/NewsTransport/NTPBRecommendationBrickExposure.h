/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {

	NSString* _feedId;
	int _feedType;
	int _recommendationBrickType;
	NSMutableArray* _recommendedFeedIds;
	char _exposedFromReferredUser;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) char hasFeedType; 
@property (assign,nonatomic) int feedType;                                     //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) char hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedFeedIds;              //@synthesize recommendedFeedIds=_recommendedFeedIds - In the implementation block
@property (assign,nonatomic) char hasRecommendationBrickType; 
@property (assign,nonatomic) int recommendationBrickType;                      //@synthesize recommendationBrickType=_recommendationBrickType - In the implementation block
@property (assign,nonatomic) char hasExposedFromReferredUser; 
@property (assign,nonatomic) char exposedFromReferredUser;                     //@synthesize exposedFromReferredUser=_exposedFromReferredUser - In the implementation block
+(Class)recommendedFeedIdsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)feedId;
-(void)setFeedId:(NSString *)arg1 ;
-(char)hasFeedId;
-(void)setFeedType:(int)arg1 ;
-(int)feedType;
-(void)setHasFeedType:(char)arg1 ;
-(char)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(int)recommendationBrickType;
-(void)setRecommendationBrickType:(int)arg1 ;
-(void)setHasRecommendationBrickType:(char)arg1 ;
-(char)hasRecommendationBrickType;
-(id)recommendationBrickTypeAsString:(int)arg1 ;
-(int)StringAsRecommendationBrickType:(id)arg1 ;
-(void)addRecommendedFeedIds:(id)arg1 ;
-(void)clearRecommendedFeedIds;
-(unsigned long long)recommendedFeedIdsCount;
-(id)recommendedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)setExposedFromReferredUser:(char)arg1 ;
-(void)setHasExposedFromReferredUser:(char)arg1 ;
-(char)hasExposedFromReferredUser;
-(NSMutableArray *)recommendedFeedIds;
-(void)setRecommendedFeedIds:(NSMutableArray *)arg1 ;
-(char)exposedFromReferredUser;
@end
