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

@class NSString, NSData;

@interface NTPBInAppWebEmbedExposure : PBCodable <NSCopying> {

	int _articleDisplayRankInGroup;
	NSString* _articleId;
	int _displayRank;
	int _feedType;
	NSData* _feedViewExposureId;
	int _groupType;
	int _moduleEventType;
	NSData* _moduleExposureId;
	int _moduleItemCount;
	int _moduleItemPosition;
	int _moduleLocation;
	NSString* _webEmbedId;
	int _webEmbedLocation;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) char hasModuleEventType; 
@property (assign,nonatomic) int moduleEventType;                            //@synthesize moduleEventType=_moduleEventType - In the implementation block
@property (assign,nonatomic) char hasModuleLocation; 
@property (assign,nonatomic) int moduleLocation;                             //@synthesize moduleLocation=_moduleLocation - In the implementation block
@property (assign,nonatomic) char hasModuleItemCount; 
@property (assign,nonatomic) int moduleItemCount;                            //@synthesize moduleItemCount=_moduleItemCount - In the implementation block
@property (nonatomic,readonly) char hasModuleExposureId; 
@property (nonatomic,retain) NSData * moduleExposureId;                      //@synthesize moduleExposureId=_moduleExposureId - In the implementation block
@property (nonatomic,readonly) char hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                    //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) char hasWebEmbedLocation; 
@property (assign,nonatomic) int webEmbedLocation;                           //@synthesize webEmbedLocation=_webEmbedLocation - In the implementation block
@property (nonatomic,readonly) char hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                           //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) char hasModuleItemPosition; 
@property (assign,nonatomic) int moduleItemPosition;                         //@synthesize moduleItemPosition=_moduleItemPosition - In the implementation block
@property (nonatomic,readonly) char hasWebEmbedId; 
@property (nonatomic,retain) NSString * webEmbedId;                          //@synthesize webEmbedId=_webEmbedId - In the implementation block
@property (assign,nonatomic) char hasGroupType; 
@property (assign,nonatomic) int groupType;                                  //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) char hasFeedType; 
@property (assign,nonatomic) int feedType;                                   //@synthesize feedType=_feedType - In the implementation block
@property (assign,nonatomic) char hasDisplayRank; 
@property (assign,nonatomic) int displayRank;                                //@synthesize displayRank=_displayRank - In the implementation block
@property (assign,nonatomic) char hasArticleDisplayRankInGroup; 
@property (assign,nonatomic) int articleDisplayRankInGroup;                  //@synthesize articleDisplayRankInGroup=_articleDisplayRankInGroup - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(int)feedType;
-(void)setArticleId:(NSString *)arg1 ;
-(char)hasArticleId;
-(NSString *)articleId;
-(void)setModuleExposureId:(NSData *)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(int)moduleEventType;
-(void)setModuleEventType:(int)arg1 ;
-(void)setHasModuleEventType:(char)arg1 ;
-(char)hasModuleEventType;
-(id)moduleEventTypeAsString:(int)arg1 ;
-(int)StringAsModuleEventType:(id)arg1 ;
-(int)moduleLocation;
-(void)setModuleLocation:(int)arg1 ;
-(void)setHasModuleLocation:(char)arg1 ;
-(char)hasModuleLocation;
-(id)moduleLocationAsString:(int)arg1 ;
-(int)StringAsModuleLocation:(id)arg1 ;
-(void)setModuleItemCount:(int)arg1 ;
-(void)setHasModuleItemCount:(char)arg1 ;
-(char)hasModuleItemCount;
-(char)hasModuleExposureId;
-(char)hasFeedViewExposureId;
-(int)moduleItemCount;
-(NSData *)moduleExposureId;
-(NSData *)feedViewExposureId;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(int)webEmbedLocation;
-(void)setWebEmbedLocation:(int)arg1 ;
-(void)setHasWebEmbedLocation:(char)arg1 ;
-(char)hasWebEmbedLocation;
-(id)webEmbedLocationAsString:(int)arg1 ;
-(int)StringAsWebEmbedLocation:(id)arg1 ;
-(void)setModuleItemPosition:(int)arg1 ;
-(void)setHasModuleItemPosition:(char)arg1 ;
-(char)hasModuleItemPosition;
-(char)hasWebEmbedId;
-(void)setHasGroupType:(char)arg1 ;
-(char)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setHasFeedType:(char)arg1 ;
-(char)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setDisplayRank:(int)arg1 ;
-(void)setHasDisplayRank:(char)arg1 ;
-(char)hasDisplayRank;
-(void)setArticleDisplayRankInGroup:(int)arg1 ;
-(void)setHasArticleDisplayRankInGroup:(char)arg1 ;
-(char)hasArticleDisplayRankInGroup;
-(int)moduleItemPosition;
-(NSString *)webEmbedId;
-(int)displayRank;
-(int)articleDisplayRankInGroup;
@end

