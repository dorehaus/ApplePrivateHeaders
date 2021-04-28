/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@class MTLCountersTraceComputeCommandEncoder;

@interface MTLCountersComputeCommandEncoder : MTLToolsComputeCommandEncoder {

	BOOL _APITimingEnabled;
	MTLCountersTraceComputeCommandEncoder* _traceEncoder;

}
-(void)dealloc;
-(void)setComputePipelineState:(id)arg1 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)endEncoding;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)setLabel:(id)arg1 ;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)dispatchThreadgroups:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)setStageInRegion:(SCD_Struct_MT8)arg1 ;
-(void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(SCD_Struct_MT0)arg3 ;
-(void)dispatchThreads:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setImageBlockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
@end

