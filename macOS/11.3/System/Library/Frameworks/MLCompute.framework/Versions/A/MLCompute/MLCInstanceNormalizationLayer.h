/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class MLCTensor, MLCTensorParameter;

@interface MLCInstanceNormalizationLayer : MLCLayer {

	float _varianceEpsilon;
	float _momentum;
	unsigned long long _featureChannelCount;
	MLCTensor* _mean;
	MLCTensor* _variance;
	MLCTensor* _beta;
	MLCTensor* _gamma;
	MLCTensorParameter* _betaParameter;
	MLCTensorParameter* _gammaParameter;

}

@property (nonatomic,readonly) unsigned long long featureChannelCount;                  //@synthesize featureChannelCount=_featureChannelCount - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * mean;                                 //@synthesize mean=_mean - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * variance;                             //@synthesize variance=_variance - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * beta;                                 //@synthesize beta=_beta - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * gamma;                                //@synthesize gamma=_gamma - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * betaParameter;               //@synthesize betaParameter=_betaParameter - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * gammaParameter;              //@synthesize gammaParameter=_gammaParameter - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                                   //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (nonatomic,readonly) float momentum;                                          //@synthesize momentum=_momentum - In the implementation block
+(id)layerWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
+(id)layerWithFeatureChannelCount:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
+(id)layerWithFeatureChannelCount:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 momentum:(float)arg5 ;
-(id)description;
-(MLCTensor *)beta;
-(float)momentum;
-(MLCTensor *)mean;
-(MLCTensor *)gamma;
-(MLCTensor *)variance;
-(id)initWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 ;
-(unsigned long long)featureChannelCount;
-(float)varianceEpsilon;
-(MLCTensorParameter *)betaParameter;
-(MLCTensorParameter *)gammaParameter;
-(char)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(char)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(char)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(char)isValidTrainingParameters;
@end

