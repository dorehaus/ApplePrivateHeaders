/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderCommandEncoder.h>

@class MTLTelemetryDevice, MTLTelemetryCommandBuffer, NSMutableSet, NSMutableDictionary, MTLTelemetryRenderPipelineState;

@interface MTLTelemetryRenderCommandEncoder : MTLToolsRenderCommandEncoder {

	MTLTelemetryDevice* _telemetryDevice;
	MTLTelemetryCommandBuffer* _telemetryCommandBuffer;
	unsigned _reDraws;
	NSMutableSet* _anisoFragmentSamplers;
	NSMutableDictionary* _clippedMip2DFragmentTextures;
	MTLTelemetryRenderPipelineState* _telemetryPipeline;

}
-(id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8 ;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setDepthStencilState:(id)arg1 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3 ;
-(void)endEncoding;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setViewport:(SCD_Struct_MT9)arg1 ;
-(void)setViewports:(const SCD_Struct_MT9*)arg1 count:(unsigned long long)arg2 ;
-(void)setDepthClipMode:(unsigned long long)arg1 ;
-(void)setScissorRect:(SCD_Struct_MT10)arg1 ;
-(void)setScissorRects:(const SCD_Struct_MT10*)arg1 count:(unsigned long long)arg2 ;
-(void)textureBarrier;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4 ;
-(id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 commandBuffer:(id)arg3 descriptor:(id)arg4 ;
-(void)initTelemetryWithDescriptor:(id)arg1 commandBuffer:(id)arg2 ;
-(void)accumDrawWithType:(unsigned long long)arg1 indexType:(unsigned long long)arg2 primitiveType:(unsigned long long)arg3 vertexCount:(unsigned long long)arg4 instanceCount:(unsigned long long)arg5 ;
-(void)accumViewportTelemetry:(const SCD_Struct_MT9*)arg1 count:(unsigned long long)arg2 ;
-(void)accumScissorRectTelemetry:(const SCD_Struct_MT10*)arg1 count:(unsigned long long)arg2 ;
@end

