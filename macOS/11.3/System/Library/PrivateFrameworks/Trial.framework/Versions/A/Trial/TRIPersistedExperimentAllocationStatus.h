/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Versions/A/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedAllocationCommon, NSString, NSMutableArray;

@interface TRIPersistedExperimentAllocationStatus : TRIPBMessage

@property (nonatomic,retain) TRIPersistedAllocationCommon * common; 
@property (assign,nonatomic) char hasCommon; 
@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) char hasExperimentId; 
@property (assign,nonatomic) int deploymentId; 
@property (assign,nonatomic) char hasDeploymentId; 
@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) char hasTreatmentId; 
@property (nonatomic,retain) NSMutableArray * namespaceArray; 
@property (nonatomic,readonly) unsigned long long namespaceArray_Count; 
+(id)descriptor;
@end
