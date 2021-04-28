/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/Versions/A/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol PREResponsesTrialProtocol
@property (readonly) NSString * inferenceModelName; 
@property (readonly) NSString * inferenceModelFilePath; 
@property (readonly) NSString * inferenceModelConfigPath; 
@property (readonly) NSString * espressoBinFilePath; 
@property (readonly) NSString * lexiconFilePath; 
@property (readonly) NSString * experimentId; 
@property (readonly) NSString * treatmentId; 
@property (nonatomic,readonly) NSString * rolloutId; 
@property (nonatomic,readonly) NSNumber * deploymentId; 
@required
-(NSString *)experimentId;
-(NSString *)treatmentId;
-(NSNumber *)deploymentId;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)inferenceModelConfigPath;
-(NSString *)inferenceModelName;
-(NSString *)lexiconFilePath;
-(NSString *)rolloutId;

@end
