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

@interface PPM2TopicInitialDonation : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	int _algorithm;
	int _source;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) char hasSource; 
@property (assign,nonatomic) int source;                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) char hasAlgorithm; 
@property (assign,nonatomic) int algorithm;                            //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) char hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)source;
-(id)dictionaryRepresentation;
-(void)setSource:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)algorithm;
-(char)hasSource;
-(void)setHasSource:(char)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(void)setAlgorithm:(int)arg1 ;
-(char)hasAlgorithm;
-(char)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(void)setHasAlgorithm:(char)arg1 ;
-(id)algorithmAsString:(int)arg1 ;
-(int)StringAsAlgorithm:(id)arg1 ;
@end

