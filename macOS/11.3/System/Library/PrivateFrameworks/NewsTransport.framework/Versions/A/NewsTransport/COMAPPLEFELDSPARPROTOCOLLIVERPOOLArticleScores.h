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

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _sourceChannelCohorts;
	NSMutableArray* _topicCohortScores;
	NSMutableArray* _topicCohorts;

}

@property (nonatomic,retain) NSMutableArray * topicCohorts;                                                   //@synthesize topicCohorts=_topicCohorts - In the implementation block
@property (nonatomic,readonly) char hasGlobalCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts;                     //@synthesize globalCohorts=_globalCohorts - In the implementation block
@property (nonatomic,readonly) char hasSourceChannelCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * sourceChannelCohorts;              //@synthesize sourceChannelCohorts=_sourceChannelCohorts - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicCohortScores;                                              //@synthesize topicCohortScores=_topicCohortScores - In the implementation block
+(Class)topicCohortsType;
+(Class)topicCohortScoresType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addTopicCohorts:(id)arg1 ;
-(void)addTopicCohortScores:(id)arg1 ;
-(unsigned long long)topicCohortsCount;
-(void)clearTopicCohorts;
-(id)topicCohortsAtIndex:(unsigned long long)arg1 ;
-(void)setGlobalCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(void)setSourceChannelCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(unsigned long long)topicCohortScoresCount;
-(void)clearTopicCohortScores;
-(id)topicCohortScoresAtIndex:(unsigned long long)arg1 ;
-(char)hasGlobalCohorts;
-(char)hasSourceChannelCohorts;
-(NSMutableArray *)topicCohorts;
-(void)setTopicCohorts:(NSMutableArray *)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)sourceChannelCohorts;
-(NSMutableArray *)topicCohortScores;
-(void)setTopicCohortScores:(NSMutableArray *)arg1 ;
@end
