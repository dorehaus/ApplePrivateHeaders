/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying> {

	unsigned long long _topicId;
	NSMutableArray* _features;
	NSMutableArray* _feedbackItems;
	NSString* _namedEntity;
	NSString* _namedEntityWithFeedback;
	float _score;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) char hasTopicId; 
@property (assign,nonatomic) unsigned long long topicId;                      //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,readonly) char hasNamedEntity; 
@property (nonatomic,retain) NSString * namedEntity;                          //@synthesize namedEntity=_namedEntity - In the implementation block
@property (nonatomic,readonly) char hasNamedEntityWithFeedback; 
@property (nonatomic,retain) NSString * namedEntityWithFeedback;              //@synthesize namedEntityWithFeedback=_namedEntityWithFeedback - In the implementation block
@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) float score;                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSMutableArray * features;                       //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSMutableArray * feedbackItems;                  //@synthesize feedbackItems=_feedbackItems - In the implementation block
+(Class)featuresType;
+(Class)feedbackItemsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(float)score;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(float)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasScore;
-(id)featuresAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)features;
-(void)setFeatures:(NSMutableArray *)arg1 ;
-(unsigned long long)featuresCount;
-(void)clearFeatures;
-(unsigned long long)topicId;
-(NSMutableArray *)feedbackItems;
-(void)setTopicId:(unsigned long long)arg1 ;
-(void)setHasTopicId:(char)arg1 ;
-(char)hasTopicId;
-(char)hasNamedEntity;
-(char)hasNamedEntityWithFeedback;
-(void)addFeatures:(id)arg1 ;
-(void)clearFeedbackItems;
-(void)addFeedbackItems:(id)arg1 ;
-(unsigned long long)feedbackItemsCount;
-(id)feedbackItemsAtIndex:(unsigned long long)arg1 ;
-(NSString *)namedEntity;
-(void)setNamedEntity:(NSString *)arg1 ;
-(NSString *)namedEntityWithFeedback;
-(void)setNamedEntityWithFeedback:(NSString *)arg1 ;
-(void)setFeedbackItems:(NSMutableArray *)arg1 ;
@end

