/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBIssueData, NSMutableArray;

@interface NTPBAlreadySubscriberSignIn : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	NSString* _errorCode;
	NSString* _errorMessage;
	int _groupType;
	NSString* _iadQtoken;
	NTPBIssueData* _issueData;
	int _paidSubscriptionConversionPointType;
	int _parentFeedType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	NSData* _subscriptionPurchaseSessionId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedByTopicId;
	NSMutableArray* _topicIds;
	char _arrivedFromAd;
	char _subscriptionOnlyArticlePreview;
	char _successfulNewsTokenVerification;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) char hasSuccessfulNewsTokenVerification; 
@property (assign,nonatomic) char successfulNewsTokenVerification;                     //@synthesize successfulNewsTokenVerification=_successfulNewsTokenVerification - In the implementation block
@property (assign,nonatomic) char hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) char hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;                                  //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) char hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                                     //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) char hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                               //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) char hasSectionId; 
@property (nonatomic,retain) NSString * sectionId;                                     //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) char hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                     //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) char hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                         //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) char hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                       //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) char hasSubscriptionOnlyArticlePreview; 
@property (assign,nonatomic) char subscriptionOnlyArticlePreview;                      //@synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview - In the implementation block
@property (assign,nonatomic) char hasArrivedFromAd; 
@property (assign,nonatomic) char arrivedFromAd;                                       //@synthesize arrivedFromAd=_arrivedFromAd - In the implementation block
@property (nonatomic,readonly) char hasIadQtoken; 
@property (nonatomic,retain) NSString * iadQtoken;                                     //@synthesize iadQtoken=_iadQtoken - In the implementation block
@property (nonatomic,readonly) char hasSubscriptionPurchaseSessionId; 
@property (nonatomic,retain) NSData * subscriptionPurchaseSessionId;                   //@synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId - In the implementation block
@property (nonatomic,readonly) char hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                    //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) char hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                  //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) char hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                    //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) char hasGroupType; 
@property (assign,nonatomic) int groupType;                                            //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) char hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;                                //@synthesize topicIds=_topicIds - In the implementation block
@property (nonatomic,readonly) char hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                             //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) char hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                           //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
+(Class)topicIdsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)errorCode;
-(void)setSectionId:(NSString *)arg1 ;
-(NSString *)sectionId;
-(char)hasSectionId;
-(void)setErrorCode:(NSString *)arg1 ;
-(char)hasErrorCode;
-(NSString *)errorMessage;
-(void)setErrorMessage:(NSString *)arg1 ;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(char)hasErrorMessage;
-(NSString *)campaignId;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(char)hasArticleId;
-(char)hasSourceChannelId;
-(char)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setHasGroupType:(char)arg1 ;
-(char)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(char)hasIssueData;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(char)arg1 ;
-(char)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(NTPBIssueData *)issueData;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(char)hasCampaignId;
-(char)hasCampaignType;
-(char)hasCreativeId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(char)hasSurfacedByChannelId;
-(char)hasSurfacedByTopicId;
-(NSString *)surfacedByChannelId;
-(NSString *)surfacedByTopicId;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(char)arg1 ;
-(char)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(void)addTopicIds:(id)arg1 ;
-(void)clearTopicIds;
-(unsigned long long)topicIdsCount;
-(id)topicIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)topicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(void)setIadQtoken:(NSString *)arg1 ;
-(void)setSubscriptionOnlyArticlePreview:(char)arg1 ;
-(void)setHasSubscriptionOnlyArticlePreview:(char)arg1 ;
-(char)hasSubscriptionOnlyArticlePreview;
-(void)setArrivedFromAd:(char)arg1 ;
-(void)setHasArrivedFromAd:(char)arg1 ;
-(char)hasArrivedFromAd;
-(char)hasIadQtoken;
-(char)subscriptionOnlyArticlePreview;
-(char)arrivedFromAd;
-(NSString *)iadQtoken;
-(void)setSubscriptionPurchaseSessionId:(NSData *)arg1 ;
-(char)hasSubscriptionPurchaseSessionId;
-(NSData *)subscriptionPurchaseSessionId;
-(void)setSuccessfulNewsTokenVerification:(char)arg1 ;
-(void)setHasSuccessfulNewsTokenVerification:(char)arg1 ;
-(char)hasSuccessfulNewsTokenVerification;
-(char)successfulNewsTokenVerification;
@end
