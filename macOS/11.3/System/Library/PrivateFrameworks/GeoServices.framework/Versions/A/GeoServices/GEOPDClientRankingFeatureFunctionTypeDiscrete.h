/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	float _featureValueThresholdHigh;
	float _featureValueThresholdLow;
	float _featureWeightHigh;
	float _featureWeightLow;
	struct {
		unsigned has_featureValueThresholdHigh : 1;
		unsigned has_featureValueThresholdLow : 1;
		unsigned has_featureWeightHigh : 1;
		unsigned has_featureWeightLow : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasFeatureValueThresholdLow; 
@property (assign,nonatomic) float featureValueThresholdLow; 
@property (assign,nonatomic) char hasFeatureWeightLow; 
@property (assign,nonatomic) float featureWeightLow; 
@property (assign,nonatomic) char hasFeatureValueThresholdHigh; 
@property (assign,nonatomic) float featureValueThresholdHigh; 
@property (assign,nonatomic) char hasFeatureWeightHigh; 
@property (assign,nonatomic) float featureWeightHigh; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setFeatureValueThresholdLow:(float)arg1 ;
-(void)setFeatureWeightLow:(float)arg1 ;
-(void)setFeatureValueThresholdHigh:(float)arg1 ;
-(void)setFeatureWeightHigh:(float)arg1 ;
-(float)featureValueThresholdLow;
-(void)setHasFeatureValueThresholdLow:(char)arg1 ;
-(char)hasFeatureValueThresholdLow;
-(float)featureWeightLow;
-(void)setHasFeatureWeightLow:(char)arg1 ;
-(char)hasFeatureWeightLow;
-(float)featureValueThresholdHigh;
-(void)setHasFeatureValueThresholdHigh:(char)arg1 ;
-(char)hasFeatureValueThresholdHigh;
-(float)featureWeightHigh;
-(void)setHasFeatureWeightHigh:(char)arg1 ;
-(char)hasFeatureWeightHigh;
@end
