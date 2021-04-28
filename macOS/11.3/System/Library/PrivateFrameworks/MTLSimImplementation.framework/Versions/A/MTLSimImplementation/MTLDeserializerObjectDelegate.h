/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MTLSimImplementation.framework/Versions/A/MTLSimImplementation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeserializerObjectDelegate <NSObject>
@required
-(id)getComputePipelineStateForReference:(unsigned)arg1;
-(unsigned)registerCommandQueueForReference:(unsigned)arg1 commandQueue:(id)arg2;
-(id)getCommandQueueForReference:(unsigned)arg1;
-(void)deleteCommandQueueForReference:(unsigned)arg1;
-(unsigned)registerFunctionForReference:(unsigned)arg1 function:(id)arg2;
-(id)getFunctionForReference:(unsigned)arg1;
-(void)deleteFunctionForReference:(unsigned)arg1;
-(unsigned)registerComputePipelineStateForReference:(unsigned)arg1 computePipeline:(id)arg2;
-(void)deleteComputePipelineStateForReference:(unsigned)arg1;
-(unsigned)registerRenderPipelineStateForReference:(unsigned)arg1 renderPipeline:(id)arg2;
-(id)getRenderPipelineStateForReference:(unsigned)arg1;
-(void)deleteRenderPipelineStateForReference:(unsigned)arg1;
-(unsigned)registerBufferForReference:(unsigned)arg1 buffer:(id)arg2;
-(id)getBufferForReference:(unsigned)arg1;
-(void)deleteBufferForReference:(unsigned)arg1;
-(unsigned)registerTextureForReference:(unsigned)arg1 texture:(id)arg2;
-(id)getTextureForReference:(unsigned)arg1;
-(void)deleteTextureForReference:(unsigned)arg1;
-(unsigned)registerSamplerStateForReference:(unsigned)arg1 sampler:(id)arg2;
-(id)getSamplerStateForReference:(unsigned)arg1;
-(void)deleteSamplerStateForReference:(unsigned)arg1;
-(unsigned)registerDepthStencilStateForReference:(unsigned)arg1 depthStencil:(id)arg2;
-(id)getDepthStencilStateForReference:(unsigned)arg1;
-(void)deleteDepthStencilStateForReference:(unsigned)arg1;
-(unsigned)registerFenceForReference:(unsigned)arg1 fence:(id)arg2;
-(id)getFenceForReference:(unsigned)arg1;
-(void)deleteFenceForReference:(unsigned)arg1;
-(unsigned)registerArgumentBufferLayoutForReference:(unsigned)arg1 argumentBufferLayout:(id)arg2;
-(id)getArgumentBufferLayoutForReference:(unsigned)arg1;
-(void)deleteArgumentBufferLayoutForReference:(unsigned)arg1;
-(unsigned)registerArgumentEncoderForReference:(unsigned)arg1 argumentEncoder:(id)arg2;
-(id)getArgumentEncoderForReference:(unsigned)arg1;
-(void)deleteArgumentEncoderForReference:(unsigned)arg1;
-(unsigned)registerHeapForReference:(unsigned)arg1 heap:(id)arg2;
-(id)getHeapForReference:(unsigned)arg1;
-(void)deleteHeapForReference:(unsigned)arg1;
-(unsigned)registerEventForReference:(unsigned)arg1 event:(id)arg2;
-(id)getEventForReference:(unsigned)arg1;
-(void)deleteEventForReference:(unsigned)arg1;
-(id)getResourceForReference:(unsigned)arg1;
-(void)deleteResourceForReference:(unsigned)arg1;

@end

