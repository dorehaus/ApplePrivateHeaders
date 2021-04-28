/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNeuralNetwork.framework/Versions/A/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentMatrixState : MPSState {

	id* recurrentMatrices;
	id* cellMatrices;
	int nLayers;
	char _isTemporary;

}
-(void)dealloc;
-(void)setReadCount:(unsigned long long)arg1 ;
-(char)isTemporary;
-(id)initWithDevice:(id)arg1 commandBuffer:(id)arg2 recurrentMatrixDescriptors:(id*)arg3 cellMatrixDescriptors:(id*)arg4 isTemporary:(char)arg5 layerCount:(int)arg6 ;
-(id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id*)arg2 cellMatrixDescriptors:(id*)arg3 isTemporary:(char)arg4 layerCount:(int)arg5 ;
@end

