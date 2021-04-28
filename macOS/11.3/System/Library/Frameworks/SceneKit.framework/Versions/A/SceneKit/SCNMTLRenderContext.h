/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNBufferStream.h>

@protocol MTLDevice, MTLCommandQueue, OS_dispatch_semaphore, MTLTexture, CAMetalDrawable, MTLCommandBuffer, MTLDepthStencilState, MTLSamplerState, OS_dispatch_queue, OS_dispatch_group, MTLBuffer, SCNMTLRenderContextResourceManagerMonitor, MTLRenderCommandEncoder;
@class SCNMTLResourceManager, NSObject, CAMetalLayer, MTLRenderPassDescriptor, NSMutableArray, SCNMTLRenderPipeline, NSString, NSMutableDictionary;

@interface SCNMTLRenderContext : NSObject <SCNBufferStream> {

	long long _currentFrameIndex;
	_C3DEngineStats* __engineStats;
	double _superSamplingFactor;
	CATransform3D _screenTransform;
	long long _sampleCount;
	char _needSuperSampling;
	SCNMTLResourceManager* _resourceManager;
	id<MTLDevice> _device;
	char _isValidationEnabled;
	int _profile;
	unsigned _features;
	C3DEngineContextRef _engineContext;
	unsigned _wantsWideGamut : 1;
	unsigned _isOpaque : 1;
	unsigned _disableLinearRendering : 1;
	unsigned _useFunctionConstants : 1;
	unsigned _reverseZ : 1;
	id<MTLCommandQueue> _ownedCommandQueue;
	NSObject*<OS_dispatch_semaphore> _inFlightSemaphore;
	atomic<int> _pendingGPUFrameCount;
	id<MTLTexture> _textureTarget;
	CAMetalLayer* _layerTarget;
	id<CAMetalDrawable> _drawable;
	float _targetedFrameInterval;
	char _shouldPresentAfterMinimumDuration;
	char _shouldPresentWithTransaction;
	MTLRenderPassDescriptor* _currentRenderPassDescriptor;
	MTLRenderPassDescriptor* _originalRenderPassDescriptor;
	 _renderSize;
	id<MTLCommandBuffer> _currentCommandBuffer;
	SCNMTLRenderCommandEncoder* _renderEncoder;
	id<MTLCommandBuffer> _resourceCommandBuffer;
	SCNMTLBlitCommandEncoder _resourceBlitEncoder;
	SCNMTLComputeCommandEncoder* _resourceComputeEncoder;
	SCD_Struct_SC69 _renderPassParameters;
	SCD_Struct_SC70 _currentStreamBufferIndices;
	SCNMTLBufferPool* _volatileBufferPools[3];
	SCNMTLBufferPool* _frameVolatileBufferPool;
	NSMutableArray* _volatileMeshes;
	NSMutableArray* _bufferPool;
	NSMutableArray* _usedVolatileMeshElements;
	NSMutableArray* _freeVolatileMeshElements;
	SCNMTLBufferPool* _constantBufferPools[3];
	SCNMTLBufferPool* _frameConstantBufferPool;
	SCNMTLTexturePool* _frameTexturePool;
	id<MTLDepthStencilState> _defaultDepthStencilState;
	id<MTLSamplerState> _defaultSamplerState;
	_C3DFXMetalProgram* _background2DProgram[3];
	_C3DFXMetalProgram* _backgroundCubeProgram[3];
	_C3DFXMetalProgram* _backgroundVideoProgram;
	C3DRasterizerStatesRef _backgroundRasterizerStates;
	double _initialTime;
	NSObject*<OS_dispatch_queue> _resourceQueue;
	NSObject*<OS_dispatch_group> _resourceGroup;
	id<MTLBuffer> _shadowKernelBuffer;
	SCD_Struct_SC71* _processingContext;
	unsigned _seed;
	SCNSceneBuffer _frameUniforms[6];
	SCD_Struct_SC74 _sceneUniforms;
	SCD_Struct_SC75 _lightsData;
	SCD_Struct_SC77* _nodeUniforms;
	SCD_Struct_SC93* _lighting;
	Cache* _cache;
	SCD_Struct_SC95* _deferredRendering;
	SCD_Struct_SC96 _compositeRendering[2];
	SCNMTLRenderPipeline* _downSamplePipeline;
	SCD_Struct_SC97 _skCompositing;
	SCD_Struct_SC98 _debug;
	char _showsAuthoringEnvironment;
	SCD_Struct_SC99 _compilationIssues;
	SCD_Struct_SC100 _counters;
	SCD_Struct_SC101* _renderGraph;
	id<SCNMTLRenderContextResourceManagerMonitor> _resourceManagerMonitor;
	char enablesDeferredShading;
	char _enableARMode;
	char _shouldDelegateARCompositing;
	MTLRenderPassDescriptor* _clientRenderPassDescriptor;
	id<MTLRenderCommandEncoder> _clientRenderCommandEncoder;
	id<MTLCommandBuffer> _clientCommandBuffer;
	unsigned long long _debugOptions;
	double _contentScaleFactor;
	id<MTLCommandQueue> _clientCommandQueue;
	NSString* _generatedTexturePath;

}

@property (nonatomic,readonly) long long pendingGPUFrameCount; 
@property (assign,nonatomic) long long sampleCount; 
@property (assign,nonatomic) double contentScaleFactor;                                                                //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
@property (assign,nonatomic) double superSamplingFactor;                                                               //@synthesize superSamplingFactor=_superSamplingFactor - In the implementation block
@property (assign,nonatomic) CATransform3D screenTransform; 
@property (assign,nonatomic) char wantsWideGamut; 
@property (assign,nonatomic) char disableLinearRendering; 
@property (assign,nonatomic) char enableARMode;                                                                        //@synthesize enableARMode=_enableARMode - In the implementation block
@property (assign,nonatomic) char shouldDelegateARCompositing;                                                         //@synthesize shouldDelegateARCompositing=_shouldDelegateARCompositing - In the implementation block
@property (assign,nonatomic) char isOpaque; 
@property (nonatomic,readonly) long long currentFrameIndex; 
@property (assign,nonatomic) char showsAuthoringEnvironment; 
@property (assign,nonatomic) char enablesDeferredShading; 
@property (assign,nonatomic) char reverseZ; 
@property (assign,nonatomic) char collectsCompilationErrors; 
@property (nonatomic,readonly) NSMutableDictionary * compilationErrors; 
@property (nonatomic,retain) NSString * generatedTexturePath;                                                          //@synthesize generatedTexturePath=_generatedTexturePath - In the implementation block
@property (nonatomic,readonly) unsigned features; 
@property (nonatomic,readonly) int profile; 
@property (nonatomic,readonly) SCNMTLResourceManager * resourceManager;                                                //@synthesize resourceManager=_resourceManager - In the implementation block
@property (assign,nonatomic) unsigned long long debugOptions;                                                          //@synthesize debugOptions=_debugOptions - In the implementation block
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
@property (nonatomic,readonly) id<MTLCommandBuffer> currentCommandBuffer; 
@property (nonatomic,readonly) id<MTLCommandBuffer> resourceCommandBuffer; 
@property (nonatomic,readonly) SCNMTLComputeCommandEncoder* resourceComputeEncoder; 
@property (nonatomic,readonly) SCNMTLBlitCommandEncoder* resourceBlitEncoder; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) C3DEngineContextRef engineContext; 
@property (nonatomic,readonly) id<MTLTexture> textureTarget; 
@property (nonatomic,readonly) CAMetalLayer * layerTarget; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (assign,nonatomic) char shouldPresentAfterMinimumDuration;                                                   //@synthesize shouldPresentAfterMinimumDuration=_shouldPresentAfterMinimumDuration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resourceQueue; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> resourceGroup; 
@property (nonatomic,retain) MTLRenderPassDescriptor * clientRenderPassDescriptor;                                     //@synthesize clientRenderPassDescriptor=_clientRenderPassDescriptor - In the implementation block
@property (nonatomic,retain) id<MTLRenderCommandEncoder> clientRenderCommandEncoder;                                   //@synthesize clientRenderCommandEncoder=_clientRenderCommandEncoder - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> clientCommandBuffer;                                                 //@synthesize clientCommandBuffer=_clientCommandBuffer - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> clientCommandQueue;                                                   //@synthesize clientCommandQueue=_clientCommandQueue - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) void* frameConstantBufferPool; 
@property (nonatomic,readonly) void* frameTexturePool;                                                                 //@synthesize frameTexturePool=_frameTexturePool - In the implementation block
@property (assign,nonatomic,__weak) id<SCNMTLRenderContextResourceManagerMonitor> resourceManagerMonitor;              //@synthesize resourceManagerMonitor=_resourceManagerMonitor - In the implementation block
@property (nonatomic,readonly) void* renderEncoder;                                                                    //@synthesize renderEncoder=_renderEncoder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerBindings;
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(long long)sampleCount;
-(id<MTLCommandQueue>)commandQueue;
-(void)setSampleCount:(long long)arg1 ;
-(char)isOpaque;
-(CATransform3D)screenTransform;
-(void)setScreenTransform:(CATransform3D)arg1 ;
-(id<MTLTexture>)textureTarget;
-(double)contentScaleFactor;
-(int)profile;
-(_C3DEngineStats*)stats;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(long long)preferredFramesPerSecond;
-(unsigned)features;
-(void)setContentScaleFactor:(double)arg1 ;
-(1)renderSize;
-(id<MTLCommandBuffer>)currentCommandBuffer;
-(void*)renderEncoder;
-(void)setIsOpaque:(char)arg1 ;
-(float)renderTime;
-(C3DEngineContextRef)engineContext;
-(SCNMTLResourceManager *)resourceManager;
-(id)textureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(void)_drawPatchForMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2 ;
-(SCNMTLComputeCommandEncoder*)resourceComputeEncoder;
-(void)_setSceneBufferAtVertexIndex:(long long)arg1 fragmentIndex:(long long)arg2 ;
-(void)_setMeshBuffers:(id)arg1 ;
-(void)_drawMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2 ;
-(void)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(char)showsAuthoringEnvironment;
-(void)unmapVolatileMesh:(C3DMeshRef)arg1 modifiedVerticesCount:(long long)arg2 ;
-(void)unmapVolatileMeshElement:(_C3DMeshElement*)arg1 ;
-(void)renderMesh:(C3DMeshRef)arg1 meshElement:(_C3DMeshElement*)arg2 withProgram:(_C3DFXMetalProgram*)arg3 engineContext:(C3DEngineContextRef)arg4 transform:(C3DMatrix4x4)arg5 color:(const C3DColor4*)arg6 rasterizerStates:(C3DRasterizerStatesRef)arg7 blendState:(C3DBlendStatesRef)arg8 texture:(C3DImageRef)arg9 depthBias:(char)arg10 ;
-(_C3DMeshElement*)createVolatileMeshElementOfType:(char)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3 ;
-(char)mapVolatileMesh:(C3DMeshRef)arg1 verticesCount:(long long)arg2 ;
-(unsigned long long)cubeArrayTypeIfSupported;
-(MTLRenderPassDescriptor *)clientRenderPassDescriptor;
-(void)_setReflectionProbeArrayTexture:(id)arg1 ;
-(void)renderVideoBackground:(_C3DImageProxy*)arg1 engineContext:(C3DEngineContextRef)arg2 slot:(_C3DEffectSlot*)arg3 ;
-(void)renderBackground:(_C3DEffectSlot*)arg1 engineContext:(C3DEngineContextRef)arg2 passInstance:(_C3DFXPassInstance*)arg3 ;
-(char)reverseZ;
-(char)supportsMTLFeatureSet:(unsigned long long)arg1 ;
-(char)enablesDeferredShading;
-(long long)currentFrameIndex;
-(char)disableLinearRendering;
-(void)drawRenderElement:(_C3DRendererElement*)arg1 withPass:(_C3DFXPass*)arg2 ;
-(void)startProcessingRendererElementsWithEngineIterationContext:(SCD_Struct_SC105*)arg1 ;
-(void)drawFullScreenQuadForPass:(_C3DFXPass*)arg1 ;
-(void)stopProcessingRendererElements:(char)arg1 ;
-(void)processRendererElements:(SCD_Struct_SC106*)arg1 count:(unsigned)arg2 engineIterationContext:(SCD_Struct_SC105*)arg3 ;
-(C3DMaterialRef)getCurrentPassMaterial;
-(unsigned long long)getCurrentPassHash;
-(void)renderSKSceneWithRenderer:(id)arg1 overlay:(char)arg2 atTime:(double)arg3 ;
-(id)_finalRenderTexture;
-(void)_drawFullScreenTexture:(id)arg1 over:(char)arg2 ;
-(void)setGeneratedTexturePath:(NSString *)arg1 ;
-(void)setClientCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)setClientRenderPassDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(void)setClientRenderCommandEncoder:(id<MTLRenderCommandEncoder>)arg1 ;
-(id<MTLCommandQueue>)clientCommandQueue;
-(void)resetVolatileMeshes;
-(void)resetVolatileMeshElements;
-(void)setClientCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(id)irradianceTextureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(void)_createResourceCommandBufferIfNeeded;
-(void)_clearRenderCaches;
-(id<MTLCommandBuffer>)resourceCommandBuffer;
-(void)_updateProjectionMatrixForOrthographicSkyboxRenderingIfNeeded:(C3DMatrix4x4*)arg1 ;
-(void)setRasterizerStates:(C3DRasterizerStatesRef)arg1 ;
-(float)_zFarForSkyboxRenderingProjectionMatrix:(const C3DMatrix4x4*)arg1 defaultZFar:(float)arg2 ;
-(void)beginDeferredLighting;
-(void)renderLight:(_C3DNode*)arg1 lightType:(int)arg2 lightData:(_C3DLightRuntimeData*)arg3 ;
-(void)endDeferredLighting;
-(unsigned long long)debugOptions;
-(void)drawWireframeOverlayForElements:(SCD_Struct_SC106*)arg1 range:(SCD_Struct_SC18)arg2 store:(C3DRendererElementStoreRef)arg3 passInstance:(_C3DFXPassInstance*)arg4 ;
-(void)_drawPBRTextures;
-(void)_drawShadowMaps;
-(id)radianceTextureForEffectSlot:(_C3DEffectSlot*)arg1 ;
-(id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1 ;
-(void)_recycleMTLBufferToPool:(id)arg1 ;
-(_C3DFXPass*)_createPassWithVertex:(id)arg1 fragment:(id)arg2 ;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(void)_reduceStatsOfConstantBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 engineContext:(C3DEngineContextRef)arg2 ;
-(void*)frameConstantBufferPool;
-(void)setWantsWideGamut:(char)arg1 ;
-(char)wantsWideGamut;
-(long long)pendingGPUFrameCount;
-(void)setDisableLinearRendering:(char)arg1 ;
-(void)setReverseZ:(char)arg1 ;
-(void)_clearUnusedBindingPoints;
-(NSObject*<OS_dispatch_group>)resourceGroup;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(void)beginFrame:(id)arg1 ;
-(void)endFrameSceneSpecifics;
-(void)endFrameWaitingUntilCompleted:(char)arg1 ;
-(CAMetalLayer *)layerTarget;
-(id)_reflectionProbeArrayTexture;
-(void*)_clusterInfo;
-(SCNMTLBlitCommandEncoder*)resourceBlitEncoder;
-(void)beginRenderPass:(id)arg1 renderEncoder:(void*)arg2 parameters:(SCD_Struct_SC69)arg3 ;
-(void)endRenderPass;
-(id)newRenderTargetWithDescription:(SCD_Struct_SC56*)arg1 size:(unsigned long long)arg2 ;
-(void)_logLightingInformation;
-(void)_prepareMaterialTextures:(C3DMaterialRef)arg1 ;
-(void)setShowsAuthoringEnvironment:(char)arg1 ;
-(char)collectsCompilationErrors;
-(void)setCollectsCompilationErrors:(char)arg1 ;
-(NSMutableDictionary *)compilationErrors;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(char)debugKeyDown:(id)arg1 ;
-(void)endRenderCommandEncoding;
-(void)setCurrentPassHash:(unsigned long long)arg1 ;
-(void)setCurrentPassMaterial:(C3DMaterialRef)arg1 ;
-(id<MTLRenderCommandEncoder>)clientRenderCommandEncoder;
-(id<MTLCommandBuffer>)clientCommandBuffer;
-(void)setEnablesDeferredShading:(char)arg1 ;
-(void*)frameTexturePool;
-(char)shouldPresentAfterMinimumDuration;
-(void)setShouldPresentAfterMinimumDuration:(char)arg1 ;
-(id<SCNMTLRenderContextResourceManagerMonitor>)resourceManagerMonitor;
-(void)setResourceManagerMonitor:(id<SCNMTLRenderContextResourceManagerMonitor>)arg1 ;
-(double)superSamplingFactor;
-(void)setSuperSamplingFactor:(double)arg1 ;
-(char)enableARMode;
-(void)setEnableARMode:(char)arg1 ;
-(char)shouldDelegateARCompositing;
-(void)setShouldDelegateARCompositing:(char)arg1 ;
-(NSString *)generatedTexturePath;
@end

