/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNUnaryReductionNode.h>

@interface MPSNNReductionFeatureChannelsSumNode : MPSNNUnaryReductionNode {

	float _weight;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(FilterGraphNode*)newFilterNode;
@end

