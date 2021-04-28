/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DResource, TSCH3DLabelResource, TSCH3DLabelResources, TSCH3DSceneRenderPipeline, TSCH3DCamera, TSCH3DDataBufferResource, TSCH3DLabelsMeshRenderer, TSCH3DLabelsRendererTransforms;

@interface TSCH3DLabelsRenderer : NSObject {

	TSCH3DResource* _labelQuad;
	TSCH3DResource* _labelTexcoordQuad;
	char _useLabelBounds;
	TSCH3DLabelResource* _label;
	TSCH3DLabelResources* _resources;
	TSCH3DSceneRenderPipeline* _pipeline;
	TSCH3DCamera* _labelCamera;
	LabelRenderInfo _info;
	TSCH3DDataBufferResource* _mesh;
	TSCH3DLabelsMeshRenderer* _meshRenderer;
	TSCH3DLabelsRendererTransforms* _transforms;

}

@property (nonatomic,retain) TSCH3DLabelResource * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) TSCH3DLabelResources * resources;                     //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) TSCH3DSceneRenderPipeline * pipeline;                 //@synthesize pipeline=_pipeline - In the implementation block
@property (nonatomic,retain) TSCH3DLabelsMeshRenderer * meshRenderer;              //@synthesize meshRenderer=_meshRenderer - In the implementation block
@property (nonatomic,retain) TSCH3DDataBufferResource * mesh;                      //@synthesize mesh=_mesh - In the implementation block
@property (nonatomic,readonly) TSCH3DCamera * labelCamera;                         //@synthesize labelCamera=_labelCamera - In the implementation block
@property (assign,nonatomic) char useLabelBounds;                                  //@synthesize useLabelBounds=_useLabelBounds - In the implementation block
@property (nonatomic,readonly) LabelRenderInfo renderInfo;                         //@synthesize info=_info - In the implementation block
+(id)renderer;
+(id)renderCacheKey;
-(void)dealloc;
-(id)init;
-(TSCH3DLabelResources *)resources;
-(TSCH3DLabelResource *)label;
-(void)setLabel:(TSCH3DLabelResource *)arg1 ;
-(TSCH3DSceneRenderPipeline *)pipeline;
-(TSCH3DDataBufferResource *)mesh;
-(void)setResources:(TSCH3DLabelResources *)arg1 ;
-(id)effects;
-(char)cacheEnabled;
-(void)setPipeline:(TSCH3DSceneRenderPipeline *)arg1 ;
-(void)prepareCachedIndex:(const tvec2<int>*)arg1 string:(id)arg2 alignmentPadding:(const tvec2<float>*)arg3 width:(double)arg4 bitmapContextInfo:(id)arg5 ;
-(void)delegateDidSubmitLabel;
-(void)renderAtPosition:(const tvec3<float>*)arg1 offset:(const tvec3<float>*)arg2 alignment:(unsigned)arg3 offset2D:(const tvec2<float>*)arg4 rotation:(float)arg5 externalAttribute:(id)arg6 ;
-(void)postrender:(id)arg1 ;
-(void)prerender:(id)arg1 ;
-(void)setMesh:(TSCH3DDataBufferResource *)arg1 ;
-(LabelRenderInfo)renderInfo;
-(id)p_renderCacheKey;
-(TSCH3DCamera *)labelCamera;
-(const tmat4x4<float>*)unitToWorld;
-(const tmat4x4<float>*)worldToStage;
-(id)p_renderCacheID;
-(id)p_renderCacheFromScene:(id)arg1 created:(char*)arg2 createIfAbsent:(char)arg3 ;
-(char)hasCachedLabels;
-(void)setMeshRenderer:(TSCH3DLabelsMeshRenderer *)arg1 ;
-(TSCH3DLabelsMeshRenderer *)meshRenderer;
-(char)isCacheValid;
-(id)labelQuad;
-(char)beginResources:(id)arg1 expectedSize:(tvec2<int>*)arg2 ;
-(void)endResources;
-(char)useLabelBounds;
-(void)setUseLabelBounds:(char)arg1 ;
@end

