/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingSession : PBCodable <NSCopying> {

	unsigned long long _label;
	unsigned long long _supervisionType;
	unsigned long long _timestamp;
	float _confidenceScore;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatVector* _sparseFloatFeatures;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                //@synthesize modelInfo=_modelInfo - In the implementation block
@property (assign,nonatomic) char hasLabel; 
@property (assign,nonatomic) unsigned long long label;                                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) char hasSparseFloatFeatures; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatVector * sparseFloatFeatures;              //@synthesize sparseFloatFeatures=_sparseFloatFeatures - In the implementation block
@property (assign,nonatomic) char hasSupervisionType; 
@property (assign,nonatomic) unsigned long long supervisionType;                                           //@synthesize supervisionType=_supervisionType - In the implementation block
@property (assign,nonatomic) char hasConfidenceScore; 
@property (assign,nonatomic) float confidenceScore;                                                        //@synthesize confidenceScore=_confidenceScore - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)label;
-(void)setLabel:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasLabel;
-(void)setConfidenceScore:(float)arg1 ;
-(float)confidenceScore;
-(void)setHasConfidenceScore:(char)arg1 ;
-(char)hasConfidenceScore;
-(void)setHasLabel:(char)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(char)hasModelInfo;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(char)hasSparseFloatFeatures;
-(AWDProactiveModelFittingSparseFloatVector *)sparseFloatFeatures;
-(void)setSparseFloatFeatures:(AWDProactiveModelFittingSparseFloatVector *)arg1 ;
-(void)setSupervisionType:(unsigned long long)arg1 ;
-(void)setHasSupervisionType:(char)arg1 ;
-(char)hasSupervisionType;
-(unsigned long long)supervisionType;
@end

