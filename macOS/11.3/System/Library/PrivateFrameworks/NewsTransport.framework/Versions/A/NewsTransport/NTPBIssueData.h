/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBIssueData : PBCodable <NSCopying> {

	NSString* _issueId;
	int _issueType;
	NSMutableArray* _topicIds;
	char _isBundlePaid;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) char hasIssueId; 
@property (nonatomic,retain) NSString * issueId;                     //@synthesize issueId=_issueId - In the implementation block
@property (assign,nonatomic) char hasIsBundlePaid; 
@property (assign,nonatomic) char isBundlePaid;                      //@synthesize isBundlePaid=_isBundlePaid - In the implementation block
@property (assign,nonatomic) char hasIssueType; 
@property (assign,nonatomic) int issueType;                          //@synthesize issueType=_issueType - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;              //@synthesize topicIds=_topicIds - In the implementation block
+(Class)topicIdsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIssueType:(int)arg1 ;
-(void)setHasIssueType:(char)arg1 ;
-(char)hasIssueType;
-(int)issueType;
-(void)addTopicIds:(id)arg1 ;
-(void)clearTopicIds;
-(unsigned long long)topicIdsCount;
-(id)topicIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)topicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(void)setIsBundlePaid:(char)arg1 ;
-(void)setHasIsBundlePaid:(char)arg1 ;
-(char)hasIsBundlePaid;
-(char)isBundlePaid;
-(void)setIssueId:(NSString *)arg1 ;
-(char)hasIssueId;
-(id)issueTypeAsString:(int)arg1 ;
-(int)StringAsIssueType:(id)arg1 ;
-(NSString *)issueId;
@end

