/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNGradientKernel : MPSCNNBinaryKernel {

	long long _kernelOffsetX;
	long long _kernelOffsetY;

}

@property (assign,nonatomic) long long kernelOffsetX;              //@synthesize kernelOffsetX=_kernelOffsetX - In the implementation block
@property (assign,nonatomic) long long kernelOffsetY;              //@synthesize kernelOffsetY=_kernelOffsetY - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(void)readBinaryGradientState:(id)arg1 isSecondarySourceFilter:(char)arg2 ;
-(long long)kernelOffsetX;
-(long long)kernelOffsetY;
-(void)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 destinationGradients:(id)arg5 ;
-(void)encodeToCommandEncoder:(id)arg1 commandBuffer:(id)arg2 sourceGradient:(id)arg3 sourceImage:(id)arg4 gradientState:(id)arg5 destinationGradient:(id)arg6 ;
-(id)encodeToCommandEncoder:(id)arg1 commandBuffer:(id)arg2 sourceGradient:(id)arg3 sourceImage:(id)arg4 gradientState:(id)arg5 ;
-(void)encodeBatchToCommandEncoder:(id)arg1 commandBuffer:(id)arg2 sourceGradients:(id)arg3 sourceImages:(id)arg4 gradientStates:(id)arg5 destinationGradients:(id)arg6 ;
-(id)encodeBatchToCommandEncoder:(id)arg1 commandBuffer:(id)arg2 sourceGradients:(id)arg3 sourceImages:(id)arg4 gradientStates:(id)arg5 ;
-(id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 ;
-(void)readGradientState:(id)arg1 ;
-(char)isStateModified;
-(void)setKernelOffsetX:(long long)arg1 ;
-(void)setKernelOffsetY:(long long)arg1 ;
@end

