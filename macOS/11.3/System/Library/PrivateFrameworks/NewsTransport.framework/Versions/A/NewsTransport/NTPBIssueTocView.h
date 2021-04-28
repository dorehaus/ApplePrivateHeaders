/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBIssueTocView : PBCodable <NSCopying> {

	NSString* _articleId;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NTPBIssueViewData* _issueViewData;
	NSString* _parentFeedId;
	int _parentFeedType;
	NSString* _sourceChannelId;
	char _adSupportedChannel;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) char hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                              //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) char hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;              //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (nonatomic,readonly) char hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                      //@synthesize issueViewData=_issueViewData - In the implementation block
@property (nonatomic,readonly) char hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                   //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) char hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                     //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (nonatomic,readonly) char hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) char hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                             //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) char hasAdSupportedChannel; 
@property (assign,nonatomic) char adSupportedChannel;                                //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(char)hasArticleId;
-(char)hasSourceChannelId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(char)hasIssueData;
-(char)hasIssueExposureData;
-(char)hasIssueViewData;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(char)arg1 ;
-(char)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(char)hasParentFeedId;
-(void)setAdSupportedChannel:(char)arg1 ;
-(void)setHasAdSupportedChannel:(char)arg1 ;
-(char)hasAdSupportedChannel;
-(NTPBIssueData *)issueData;
-(NTPBIssueExposureData *)issueExposureData;
-(NTPBIssueViewData *)issueViewData;
-(NSString *)parentFeedId;
-(char)adSupportedChannel;
@end

