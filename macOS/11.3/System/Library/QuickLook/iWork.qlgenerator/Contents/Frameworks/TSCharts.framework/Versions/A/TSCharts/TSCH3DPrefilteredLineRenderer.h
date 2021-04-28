/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DOrderedDictionary, TSCH3DSceneRenderPipeline;

@interface TSCH3DPrefilteredLineRenderer : NSObject {

	tmat4x4<float> _modelMatrix;
	tmat3x3<float> _normalMatrix;
	tmat4x4<float> _projection;
	tmat4x4<float> _normalizedProjection;
	box<glm::detail::tvec2<int>> _viewport;
	TSCH3DOrderedDictionary* _cacheObjects;
	TSCH3DSceneRenderPipeline* _pipeline;

}

@property (nonatomic,readonly) tmat4x4<float> modelMatrix;                         //@synthesize modelMatrix=_modelMatrix - In the implementation block
@property (nonatomic,readonly) tmat3x3<float> normalMatrix;                        //@synthesize normalMatrix=_normalMatrix - In the implementation block
@property (nonatomic,readonly) tmat4x4<float> projection;                          //@synthesize projection=_projection - In the implementation block
@property (nonatomic,readonly) tmat4x4<float> normalizedProjection;                //@synthesize normalizedProjection=_normalizedProjection - In the implementation block
@property (nonatomic,readonly) box<glm::detail::tvec2<int>> viewport;              //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) TSCH3DSceneRenderPipeline * pipeline;               //@synthesize pipeline=_pipeline - In the implementation block
+(id)renderer;
+(id)renderCacheKey;
-(void)dealloc;
-(id)init;
-(box<glm::detail::tvec2<int>>)viewport;
-(TSCH3DSceneRenderPipeline *)pipeline;
-(tmat4x4<float>)projection;
-(tmat3x3<float>)normalMatrix;
-(tmat4x4<float>)normalizedProjection;
-(char)beginWithPipeline:(id)arg1 ;
-(void)renderLineBufferWithSetting:(id)arg1 vertices:(id)arg2 normals:(id)arg3 diffuseTexcoords:(id)arg4 ;
-(void)endWithDidGenerateShaderEffectsBlock:(/*^block*/id)arg1 ;
-(tmat4x4<float>)modelMatrix;
-(void)p_setupShaderEffectsForSetting:(id)arg1 ;
-(id)p_renderCacheKey;
-(id)p_renderCacheIDFromSetting:(id)arg1 ;
-(char)p_shouldRenderWithSetting:(id)arg1 returningCacheObject:(id*)arg2 ;
-(void)renderWithSetting:(id)arg1 fromVertex:(const PrefilteredLineVertexProperties*)arg2 toVertex:(const PrefilteredLineVertexProperties*)arg3 ;
@end

