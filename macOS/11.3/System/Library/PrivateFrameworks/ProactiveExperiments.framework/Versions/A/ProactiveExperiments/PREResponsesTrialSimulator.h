/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/Versions/A/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PREResponsesTrialProtocol.h>
#import <libobjc.A.dylib/PREResponsesMetricsProtocol.h>

@class NSString, NSNumber;

@interface PREResponsesTrialSimulator : NSObject <PREResponsesTrialProtocol, PREResponsesMetricsProtocol> {

	NSString* _inferenceModelName;
	NSString* _inferenceModelFilePath;
	NSString* _inferenceModelConfigPath;
	NSString* _espressoBinFilePath;
	NSString* _lexiconFilePath;
	NSString* _experimentId;
	NSString* _treatmentId;
	NSString* _rolloutId;
	NSNumber* _deploymentId;

}

@property (nonatomic,readonly) NSString * inferenceModelName;                    //@synthesize inferenceModelName=_inferenceModelName - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelFilePath;                //@synthesize inferenceModelFilePath=_inferenceModelFilePath - In the implementation block
@property (nonatomic,readonly) NSString * inferenceModelConfigPath;              //@synthesize inferenceModelConfigPath=_inferenceModelConfigPath - In the implementation block
@property (nonatomic,readonly) NSString * espressoBinFilePath;                   //@synthesize espressoBinFilePath=_espressoBinFilePath - In the implementation block
@property (nonatomic,readonly) NSString * lexiconFilePath;                       //@synthesize lexiconFilePath=_lexiconFilePath - In the implementation block
@property (nonatomic,readonly) NSString * experimentId;                          //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                           //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) NSString * rolloutId;                             //@synthesize rolloutId=_rolloutId - In the implementation block
@property (nonatomic,readonly) NSNumber * deploymentId;                          //@synthesize deploymentId=_deploymentId - In the implementation block
-(id)init;
-(NSString *)experimentId;
-(NSString *)treatmentId;
-(NSNumber *)deploymentId;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)inferenceModelConfigPath;
-(NSString *)inferenceModelName;
-(NSString *)lexiconFilePath;
-(NSString *)rolloutId;
-(void)registerResponsesGenerated:(id)arg1 ;
-(void)registerResponseTapped:(id)arg1 ;
-(void)registerResponseViewed:(id)arg1 ;
@end
