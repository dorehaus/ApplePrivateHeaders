/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNLocalContrastNormalizationNode : MPSCNNNormalizationNode {

	float _pm;
	float _ps;
	float _p0;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;

}

@property (assign,nonatomic) float pm;                                     //@synthesize pm=_pm - In the implementation block
@property (assign,nonatomic) float ps;                                     //@synthesize ps=_ps - In the implementation block
@property (assign,nonatomic) float p0;                                     //@synthesize p0=_p0 - In the implementation block
@property (assign,nonatomic) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
+(id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(id)initWithSource:(id)arg1 ;
-(unsigned long long)kernelWidth;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(unsigned long long)kernelHeight;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(float)p0;
-(void)setP0:(float)arg1 ;
-(float)pm;
-(void)setPm:(float)arg1 ;
-(float)ps;
-(void)setPs:(float)arg1 ;
-(id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
@end

