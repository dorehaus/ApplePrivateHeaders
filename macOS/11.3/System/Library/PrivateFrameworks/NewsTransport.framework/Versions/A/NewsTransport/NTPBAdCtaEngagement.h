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

@class NSString, NSData;

@interface NTPBAdCtaEngagement : PBCodable <NSCopying> {

	long long _videoAdDuration;
	long long _videoAdPlayTime;
	int _adCreativeType;
	int _adCtaEngagemetType;
	int _adEngagementType;
	NSString* _adImpressionId;
	int _adLocation;
	int _adType;
	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	NSString* _iadAd;
	NSString* _iadCampaign;
	NSString* _iadLine;
	int _newsProductType;
	NSString* _sourceChannelId;
	int _videoAdPlacementPosition;
	int _videoAdType;
	char _videoAdViewComplete;
	SCD_Struct_NT7 _has;

}

@property (assign,nonatomic) char hasAdCtaEngagemetType; 
@property (assign,nonatomic) int adCtaEngagemetType;                         //@synthesize adCtaEngagemetType=_adCtaEngagemetType - In the implementation block
@property (nonatomic,readonly) char hasIadCampaign; 
@property (nonatomic,retain) NSString * iadCampaign;                         //@synthesize iadCampaign=_iadCampaign - In the implementation block
@property (nonatomic,readonly) char hasIadLine; 
@property (nonatomic,retain) NSString * iadLine;                             //@synthesize iadLine=_iadLine - In the implementation block
@property (nonatomic,readonly) char hasIadAd; 
@property (nonatomic,retain) NSString * iadAd;                               //@synthesize iadAd=_iadAd - In the implementation block
@property (assign,nonatomic) char hasAdEngagementType; 
@property (assign,nonatomic) int adEngagementType;                           //@synthesize adEngagementType=_adEngagementType - In the implementation block
@property (assign,nonatomic) char hasAdType; 
@property (assign,nonatomic) int adType;                                     //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) char hasAdCreativeType; 
@property (assign,nonatomic) int adCreativeType;                             //@synthesize adCreativeType=_adCreativeType - In the implementation block
@property (assign,nonatomic) char hasAdLocation; 
@property (assign,nonatomic) int adLocation;                                 //@synthesize adLocation=_adLocation - In the implementation block
@property (assign,nonatomic) char hasNewsProductType; 
@property (assign,nonatomic) int newsProductType;                            //@synthesize newsProductType=_newsProductType - In the implementation block
@property (assign,nonatomic) char hasVideoAdType; 
@property (assign,nonatomic) int videoAdType;                                //@synthesize videoAdType=_videoAdType - In the implementation block
@property (assign,nonatomic) char hasFeedType; 
@property (assign,nonatomic) int feedType;                                   //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) char hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                              //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) char hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                           //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) char hasVideoAdDuration; 
@property (assign,nonatomic) long long videoAdDuration;                      //@synthesize videoAdDuration=_videoAdDuration - In the implementation block
@property (assign,nonatomic) char hasVideoAdPlayTime; 
@property (assign,nonatomic) long long videoAdPlayTime;                      //@synthesize videoAdPlayTime=_videoAdPlayTime - In the implementation block
@property (assign,nonatomic) char hasVideoAdPlacementPosition; 
@property (assign,nonatomic) int videoAdPlacementPosition;                   //@synthesize videoAdPlacementPosition=_videoAdPlacementPosition - In the implementation block
@property (assign,nonatomic) char hasVideoAdViewComplete; 
@property (assign,nonatomic) char videoAdViewComplete;                       //@synthesize videoAdViewComplete=_videoAdViewComplete - In the implementation block
@property (nonatomic,readonly) char hasAdImpressionId; 
@property (nonatomic,retain) NSString * adImpressionId;                      //@synthesize adImpressionId=_adImpressionId - In the implementation block
@property (nonatomic,readonly) char hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) char hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                     //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) char hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                    //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
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
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(char)hasArticleId;
-(char)hasSourceChannelId;
-(char)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(char)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setHasFeedType:(char)arg1 ;
-(char)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(int)adType;
-(void)setAdType:(int)arg1 ;
-(void)setHasAdType:(char)arg1 ;
-(char)hasAdType;
-(id)adTypeAsString:(int)arg1 ;
-(int)StringAsAdType:(id)arg1 ;
-(int)adCreativeType;
-(void)setAdCreativeType:(int)arg1 ;
-(void)setHasAdCreativeType:(char)arg1 ;
-(char)hasAdCreativeType;
-(id)adCreativeTypeAsString:(int)arg1 ;
-(int)StringAsAdCreativeType:(id)arg1 ;
-(void)setIadCampaign:(NSString *)arg1 ;
-(void)setIadLine:(NSString *)arg1 ;
-(void)setIadAd:(NSString *)arg1 ;
-(void)setAdImpressionId:(NSString *)arg1 ;
-(int)adCtaEngagemetType;
-(void)setAdCtaEngagemetType:(int)arg1 ;
-(void)setHasAdCtaEngagemetType:(char)arg1 ;
-(char)hasAdCtaEngagemetType;
-(char)hasIadCampaign;
-(char)hasIadLine;
-(char)hasIadAd;
-(int)adEngagementType;
-(void)setAdEngagementType:(int)arg1 ;
-(void)setHasAdEngagementType:(char)arg1 ;
-(char)hasAdEngagementType;
-(id)adEngagementTypeAsString:(int)arg1 ;
-(int)StringAsAdEngagementType:(id)arg1 ;
-(int)adLocation;
-(void)setAdLocation:(int)arg1 ;
-(void)setHasAdLocation:(char)arg1 ;
-(char)hasAdLocation;
-(id)adLocationAsString:(int)arg1 ;
-(int)StringAsAdLocation:(id)arg1 ;
-(int)newsProductType;
-(void)setNewsProductType:(int)arg1 ;
-(void)setHasNewsProductType:(char)arg1 ;
-(char)hasNewsProductType;
-(id)newsProductTypeAsString:(int)arg1 ;
-(int)StringAsNewsProductType:(id)arg1 ;
-(int)videoAdType;
-(void)setVideoAdType:(int)arg1 ;
-(void)setHasVideoAdType:(char)arg1 ;
-(char)hasVideoAdType;
-(id)videoAdTypeAsString:(int)arg1 ;
-(int)StringAsVideoAdType:(id)arg1 ;
-(void)setVideoAdDuration:(long long)arg1 ;
-(void)setHasVideoAdDuration:(char)arg1 ;
-(char)hasVideoAdDuration;
-(void)setVideoAdPlayTime:(long long)arg1 ;
-(void)setHasVideoAdPlayTime:(char)arg1 ;
-(char)hasVideoAdPlayTime;
-(void)setVideoAdPlacementPosition:(int)arg1 ;
-(void)setHasVideoAdPlacementPosition:(char)arg1 ;
-(char)hasVideoAdPlacementPosition;
-(void)setVideoAdViewComplete:(char)arg1 ;
-(void)setHasVideoAdViewComplete:(char)arg1 ;
-(char)hasVideoAdViewComplete;
-(char)hasAdImpressionId;
-(NSString *)iadCampaign;
-(NSString *)iadLine;
-(NSString *)iadAd;
-(long long)videoAdDuration;
-(long long)videoAdPlayTime;
-(int)videoAdPlacementPosition;
-(char)videoAdViewComplete;
-(NSString *)adImpressionId;
@end

