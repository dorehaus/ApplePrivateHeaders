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

@class NSString;

@interface PPPBExtractedDonationRecord : PBCodable <NSCopying> {

	double _score;
	unsigned long long _topicId;
	unsigned long long _unixTimestampSec;
	NSString* _algorithm;
	NSString* _namedEntity;
	NSString* _sourceBundleId;
	SCD_Struct_PP4 _has;

}

@property (nonatomic,readonly) char hasSourceBundleId; 
@property (nonatomic,retain) NSString * sourceBundleId;                        //@synthesize sourceBundleId=_sourceBundleId - In the implementation block
@property (nonatomic,readonly) char hasAlgorithm; 
@property (nonatomic,retain) NSString * algorithm;                             //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) double score;                                     //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) char hasTopicId; 
@property (assign,nonatomic) unsigned long long topicId;                       //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,readonly) char hasNamedEntity; 
@property (nonatomic,retain) NSString * namedEntity;                           //@synthesize namedEntity=_namedEntity - In the implementation block
@property (assign,nonatomic) char hasUnixTimestampSec; 
@property (assign,nonatomic) unsigned long long unixTimestampSec;              //@synthesize unixTimestampSec=_unixTimestampSec - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(double)score;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)algorithm;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasScore;
-(void)setAlgorithm:(NSString *)arg1 ;
-(unsigned long long)topicId;
-(void)setTopicId:(unsigned long long)arg1 ;
-(char)hasAlgorithm;
-(char)hasSourceBundleId;
-(NSString *)sourceBundleId;
-(void)setSourceBundleId:(NSString *)arg1 ;
-(void)setHasTopicId:(char)arg1 ;
-(char)hasTopicId;
-(char)hasNamedEntity;
-(NSString *)namedEntity;
-(void)setNamedEntity:(NSString *)arg1 ;
-(void)setUnixTimestampSec:(unsigned long long)arg1 ;
-(void)setHasUnixTimestampSec:(char)arg1 ;
-(char)hasUnixTimestampSec;
-(unsigned long long)unixTimestampSec;
@end
