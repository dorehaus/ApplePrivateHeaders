/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/Versions/A/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PREUMTrialExperiment : PBCodable <NSCopying> {

	NSString* _experimentId;
	NSString* _treatmentId;
	NSString* _treatmentModelName;

}

@property (nonatomic,readonly) char hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                    //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) char hasTreatmentId; 
@property (nonatomic,retain) NSString * treatmentId;                     //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) char hasTreatmentModelName; 
@property (nonatomic,retain) NSString * treatmentModelName;              //@synthesize treatmentModelName=_treatmentModelName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasExperimentId;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(void)setTreatmentId:(NSString *)arg1 ;
-(char)hasTreatmentId;
-(char)hasTreatmentModelName;
-(NSString *)treatmentModelName;
-(void)setTreatmentModelName:(NSString *)arg1 ;
@end
