/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface PHAPrivateFederatedLearningModelValidator : NSObject {

	NSURL* _espressoModelURL;
	NSURL* _espressoModelShapeURL;

}

@property (nonatomic,readonly) NSURL * espressoModelURL;                   //@synthesize espressoModelURL=_espressoModelURL - In the implementation block
@property (nonatomic,readonly) NSURL * espressoModelShapeURL;              //@synthesize espressoModelShapeURL=_espressoModelShapeURL - In the implementation block
-(NSURL *)espressoModelURL;
-(NSURL *)espressoModelShapeURL;
-(id)initWithEspressoModelURL:(id)arg1 espressoModelShapeURL:(id)arg2 ;
-(char)isValidWithFingerprintVersionName:(id)arg1 modelInputName:(id)arg2 modelOutputName:(id)arg3 labelName:(id)arg4 labelPolicyName:(id)arg5 lossName:(id)arg6 layersToTrain:(id)arg7 error:(id*)arg8 ;
-(long long)_featureVectorSizeForFingerprintVersionName:(id)arg1 error:(id*)arg2 ;
-(id)_dictionaryForJSONFileURL:(id)arg1 error:(id*)arg2 ;
-(id)_layerConfigForModelInputName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3 ;
-(id)_layerConfigForModelOutputName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3 ;
-(id)_layerConfigForLabelName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3 ;
-(id)_layerConfigForLayerName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3 ;
-(id)_layerConfigForName:(id)arg1 modelConfig:(id)arg2 attributeName:(id)arg3 useEquality:(char)arg4 error:(id*)arg5 ;
-(id)_sizeForLayerName:(id)arg1 modelShape:(id)arg2 error:(id*)arg3 ;
-(char)_isFingerprintVersionSupported:(long long)arg1 ;
-(char)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4 ;
@end

