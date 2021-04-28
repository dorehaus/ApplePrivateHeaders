/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/Versions/A/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PFLTaskLocalPrivacyParams, PFLTaskLocalTrainingParams;

@interface PFLTask : PBCodable <NSCopying> {

	long long _modelVersion;
	long long _updatableWeightsCount;
	NSString* _dataSourceId;
	PFLTaskLocalPrivacyParams* _localPrivacyParams;
	PFLTaskLocalTrainingParams* _localTrainingParams;
	NSString* _modelName;
	NSString* _taskId;
	SCD_Struct_PF1 _has;

}

@property (nonatomic,readonly) char hasTaskId; 
@property (nonatomic,retain) NSString * taskId;                                             //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) char hasDataSourceId; 
@property (nonatomic,retain) NSString * dataSourceId;                                       //@synthesize dataSourceId=_dataSourceId - In the implementation block
@property (nonatomic,readonly) char hasModelName; 
@property (nonatomic,retain) NSString * modelName;                                          //@synthesize modelName=_modelName - In the implementation block
@property (assign,nonatomic) char hasModelVersion; 
@property (assign,nonatomic) long long modelVersion;                                        //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) char hasLocalPrivacyParams; 
@property (nonatomic,retain) PFLTaskLocalPrivacyParams * localPrivacyParams;                //@synthesize localPrivacyParams=_localPrivacyParams - In the implementation block
@property (nonatomic,readonly) char hasLocalTrainingParams; 
@property (nonatomic,retain) PFLTaskLocalTrainingParams * localTrainingParams;              //@synthesize localTrainingParams=_localTrainingParams - In the implementation block
@property (assign,nonatomic) char hasUpdatableWeightsCount; 
@property (assign,nonatomic) long long updatableWeightsCount;                               //@synthesize updatableWeightsCount=_updatableWeightsCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)modelVersion;
-(void)setModelVersion:(long long)arg1 ;
-(NSString *)modelName;
-(void)setModelName:(NSString *)arg1 ;
-(void)setHasModelVersion:(char)arg1 ;
-(char)hasModelVersion;
-(NSString *)taskId;
-(void)setTaskId:(NSString *)arg1 ;
-(char)hasTaskId;
-(NSString *)dataSourceId;
-(PFLTaskLocalTrainingParams *)localTrainingParams;
-(PFLTaskLocalPrivacyParams *)localPrivacyParams;
-(void)setDataSourceId:(NSString *)arg1 ;
-(void)setLocalPrivacyParams:(PFLTaskLocalPrivacyParams *)arg1 ;
-(void)setLocalTrainingParams:(PFLTaskLocalTrainingParams *)arg1 ;
-(char)hasDataSourceId;
-(char)hasModelName;
-(char)hasLocalPrivacyParams;
-(char)hasLocalTrainingParams;
-(void)setUpdatableWeightsCount:(long long)arg1 ;
-(void)setHasUpdatableWeightsCount:(char)arg1 ;
-(char)hasUpdatableWeightsCount;
-(long long)updatableWeightsCount;
@end
