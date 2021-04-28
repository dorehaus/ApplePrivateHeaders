/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBTimestamp, TRIAssignment;

@interface TRIClientExperiment : TRIPBMessage

@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) char hasExperimentId; 
@property (assign,nonatomic) int projectId; 
@property (assign,nonatomic) char hasProjectId; 
@property (nonatomic,retain) TRIPBTimestamp * startDate; 
@property (assign,nonatomic) char hasStartDate; 
@property (nonatomic,retain) TRIPBTimestamp * endDate; 
@property (assign,nonatomic) char hasEndDate; 
@property (nonatomic,retain) TRIAssignment * assignment; 
@property (assign,nonatomic) char hasAssignment; 
@property (assign,nonatomic) unsigned seed; 
@property (assign,nonatomic) char hasSeed; 
@property (assign,nonatomic) unsigned deploymentId; 
@property (assign,nonatomic) char hasDeploymentId; 
@property (nonatomic,copy) NSString * projectName; 
@property (assign,nonatomic) char hasProjectName; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) char hasPriority; 
@property (assign,nonatomic) unsigned maxFailures; 
@property (assign,nonatomic) char hasMaxFailures; 
@property (assign,nonatomic) long long delaySeconds; 
@property (assign,nonatomic) char hasDelaySeconds; 
@property (nonatomic,copy) NSString * assignmentEndpoint; 
@property (assign,nonatomic) char hasAssignmentEndpoint; 
+(id)descriptor;
@end

