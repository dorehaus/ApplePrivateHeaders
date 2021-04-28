/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSOrderedSet, NSURL, MLLayerPath;

@interface MLModelDescription : NSObject <NSSecureCoding> {

	char _isUpdatable;
	NSDictionary* _inputDescriptionsByName;
	NSDictionary* _outputDescriptionsByName;
	NSString* _predictedFeatureName;
	NSString* _predictedProbabilitiesName;
	NSDictionary* _metadata;
	NSArray* _classLabels;
	NSOrderedSet* _inputFeatureNames;
	NSOrderedSet* _outputFeatureNames;
	NSURL* _modelURL;
	NSDictionary* _trainingInputDescriptionsByName;
	NSDictionary* _parameterDescriptionsByKey;
	MLLayerPath* _modelPath;

}

@property (retain) NSOrderedSet * inputFeatureNames;                                      //@synthesize inputFeatureNames=_inputFeatureNames - In the implementation block
@property (retain) NSOrderedSet * outputFeatureNames;                                     //@synthesize outputFeatureNames=_outputFeatureNames - In the implementation block
@property (nonatomic,copy) NSArray * classLabels;                                         //@synthesize classLabels=_classLabels - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                                            //@synthesize modelURL=_modelURL - In the implementation block
@property (assign,nonatomic) char isUpdatable;                                            //@synthesize isUpdatable=_isUpdatable - In the implementation block
@property (nonatomic,retain) NSDictionary * trainingInputDescriptionsByName;              //@synthesize trainingInputDescriptionsByName=_trainingInputDescriptionsByName - In the implementation block
@property (nonatomic,retain) NSDictionary * parameterDescriptionsByKey;                   //@synthesize parameterDescriptionsByKey=_parameterDescriptionsByKey - In the implementation block
@property (nonatomic,retain) MLLayerPath * modelPath;                                     //@synthesize modelPath=_modelPath - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputDescriptionsByName;                    //@synthesize inputDescriptionsByName=_inputDescriptionsByName - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputDescriptionsByName;                   //@synthesize outputDescriptionsByName=_outputDescriptionsByName - In the implementation block
@property (nonatomic,copy,readonly) NSString * predictedFeatureName;                      //@synthesize predictedFeatureName=_predictedFeatureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * predictedProbabilitiesName;                //@synthesize predictedProbabilitiesName=_predictedProbabilitiesName - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;                                   //@synthesize metadata=_metadata - In the implementation block
+(char)supportsSecureCoding;
+(id)metadataWithFormat:(MLModelMetadataSpecification*)arg1 ;
+(id)metadataWithSpecification:(MLModelSpecification*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(NSURL *)modelURL;
-(NSArray *)classLabels;
-(MLLayerPath *)modelPath;
-(void)setModelURL:(NSURL *)arg1 ;
-(id)debugQuickLookObject;
-(void)setClassLabels:(NSArray *)arg1 ;
-(id)initWithInputDescriptionsAndFeatureNames:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 inputFeatureNames:(id)arg6 outputFeatureNames:(id)arg7 metadata:(id)arg8 ;
-(id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 metadata:(id)arg6 ;
-(id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5 ;
-(id)initWithModelDescriptionSpecification:(MLModelDescriptionSpecification*)arg1 error:(id*)arg2 ;
-(char)isEqualToDescription:(id)arg1 ;
-(char)verifyInput:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)inputDescriptionsByName;
-(NSDictionary *)outputDescriptionsByName;
-(NSString *)predictedFeatureName;
-(NSString *)predictedProbabilitiesName;
-(NSOrderedSet *)inputFeatureNames;
-(void)setInputFeatureNames:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)outputFeatureNames;
-(void)setOutputFeatureNames:(NSOrderedSet *)arg1 ;
-(char)isUpdatable;
-(void)setIsUpdatable:(char)arg1 ;
-(NSDictionary *)trainingInputDescriptionsByName;
-(void)setTrainingInputDescriptionsByName:(NSDictionary *)arg1 ;
-(NSDictionary *)parameterDescriptionsByKey;
-(void)setParameterDescriptionsByKey:(NSDictionary *)arg1 ;
-(void)setModelPath:(MLLayerPath *)arg1 ;
@end

