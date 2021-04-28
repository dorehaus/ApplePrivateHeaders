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

@interface PPM2ExperimentDeployed : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	unsigned _delay;
	NSString* _namespaceName;
	SCD_Struct_PP1 _has;

}

@property (assign,nonatomic) char hasDelay; 
@property (assign,nonatomic) unsigned delay;                           //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) char hasNamespaceName; 
@property (nonatomic,retain) NSString * namespaceName;                 //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) char hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)delay;
-(void)setDelay:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)namespaceName;
-(void)setHasDelay:(char)arg1 ;
-(char)hasDelay;
-(void)setNamespaceName:(NSString *)arg1 ;
-(char)hasNamespaceName;
-(char)hasActiveTreatments;
-(NSString *)activeTreatments;
-(void)setActiveTreatments:(NSString *)arg1 ;
@end

