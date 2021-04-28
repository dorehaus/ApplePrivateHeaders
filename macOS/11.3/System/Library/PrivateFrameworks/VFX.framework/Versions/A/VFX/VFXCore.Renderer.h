/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/Versions/A/VFX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VFXCore.Renderer : _UKNOWN_SUPERCLASS_ {

	 device;
	 lock;
	 renderOutputs;
	 renderOutputsForThisFrame;
	 GPUToolBox;
	 texturePool;
	 shaderPool;
	 bufferPool;
	 wholeFrameBufferPool;
	 uniformBufferPool;
	 commandQueue;
	 showDebugMenu;
	 canUseImgui;
	 isPostFXEnabled;
	 outputCommandBuffer;
	 currentCommandBuffer;
	 currentEncoder;
	 currentRenderPassDescriptor;
	 cachedMTLRenderPassDescriptor;
	 performanceCounterRecorder;
	 _renderOutputPassDescriptor;
	 renderOutputRenderPassFormat;
	 encoders;
	 mtkMeshBufferAllocator;
	 opaqueDepthState;
	 transparentDepthState;
	 transparentStencilOverdrawDepthState;
	 depthAlwaysNoWriteState;
	 reversedDepthState;
	 reversedNoWriteDepthState;
	 inFlightSemaphore;
	 defaultSampler;
	 defaultSamplerClampMipNearest;
	 defaultSamplerRepeatMipNearest;
	 defaultSamplerRepeatSMipNearest;
	 defaultSamplerMirrorRepeatMipNearest;
	 _defaultIrradianceTexture;
	 _defaultRadianceTexture;
	 _defaultBrdfLutTexture;
	 _defaultWhiteTexture;
	 _defaultGreyTexture;
	 _defaultBlackTexture;
	 _defaultNormalMapTexture;
	 frameTimestamp;
	 currentRenderOutputHandle;
	 colorRamps;
	 stripIndexBuffers;
	 deformedBuffers;

}
@end

