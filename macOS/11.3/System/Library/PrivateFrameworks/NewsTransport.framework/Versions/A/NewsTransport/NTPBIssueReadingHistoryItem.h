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

@class NSString, NTPBDate;

@interface NTPBIssueReadingHistoryItem : PBCodable <NSCopying> {

	NSString* _identifier;
	NSString* _issueID;
	NTPBDate* _lastBadgedPBDate;
	NTPBDate* _lastEngagedPBDate;
	NTPBDate* _lastRemovedFromMyMagazinesPBDate;
	NTPBDate* _lastSeenPBDate;
	NSString* _lastVisitedArticleID;
	NTPBDate* _lastVisitedPBDate;
	NSString* _lastVisitedPageID;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasIssueID; 
@property (nonatomic,retain) NSString * issueID;                                       //@synthesize issueID=_issueID - In the implementation block
@property (nonatomic,readonly) char hasLastVisitedPBDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedPBDate;                             //@synthesize lastVisitedPBDate=_lastVisitedPBDate - In the implementation block
@property (nonatomic,readonly) char hasLastVisitedArticleID; 
@property (nonatomic,retain) NSString * lastVisitedArticleID;                          //@synthesize lastVisitedArticleID=_lastVisitedArticleID - In the implementation block
@property (nonatomic,readonly) char hasLastVisitedPageID; 
@property (nonatomic,retain) NSString * lastVisitedPageID;                             //@synthesize lastVisitedPageID=_lastVisitedPageID - In the implementation block
@property (nonatomic,readonly) char hasLastBadgedPBDate; 
@property (nonatomic,retain) NTPBDate * lastBadgedPBDate;                              //@synthesize lastBadgedPBDate=_lastBadgedPBDate - In the implementation block
@property (nonatomic,readonly) char hasLastEngagedPBDate; 
@property (nonatomic,retain) NTPBDate * lastEngagedPBDate;                             //@synthesize lastEngagedPBDate=_lastEngagedPBDate - In the implementation block
@property (nonatomic,readonly) char hasLastRemovedFromMyMagazinesPBDate; 
@property (nonatomic,retain) NTPBDate * lastRemovedFromMyMagazinesPBDate;              //@synthesize lastRemovedFromMyMagazinesPBDate=_lastRemovedFromMyMagazinesPBDate - In the implementation block
@property (nonatomic,readonly) char hasLastSeenPBDate; 
@property (nonatomic,retain) NTPBDate * lastSeenPBDate;                                //@synthesize lastSeenPBDate=_lastSeenPBDate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasIdentifier;
-(void)setIssueID:(NSString *)arg1 ;
-(void)setLastVisitedPBDate:(NTPBDate *)arg1 ;
-(void)setLastVisitedArticleID:(NSString *)arg1 ;
-(void)setLastVisitedPageID:(NSString *)arg1 ;
-(void)setLastBadgedPBDate:(NTPBDate *)arg1 ;
-(void)setLastEngagedPBDate:(NTPBDate *)arg1 ;
-(void)setLastRemovedFromMyMagazinesPBDate:(NTPBDate *)arg1 ;
-(void)setLastSeenPBDate:(NTPBDate *)arg1 ;
-(char)hasIssueID;
-(char)hasLastVisitedPBDate;
-(char)hasLastVisitedArticleID;
-(char)hasLastVisitedPageID;
-(char)hasLastBadgedPBDate;
-(char)hasLastEngagedPBDate;
-(char)hasLastRemovedFromMyMagazinesPBDate;
-(char)hasLastSeenPBDate;
-(NSString *)issueID;
-(NTPBDate *)lastVisitedPBDate;
-(NSString *)lastVisitedArticleID;
-(NSString *)lastVisitedPageID;
-(NTPBDate *)lastBadgedPBDate;
-(NTPBDate *)lastEngagedPBDate;
-(NTPBDate *)lastRemovedFromMyMagazinesPBDate;
-(NTPBDate *)lastSeenPBDate;
@end
