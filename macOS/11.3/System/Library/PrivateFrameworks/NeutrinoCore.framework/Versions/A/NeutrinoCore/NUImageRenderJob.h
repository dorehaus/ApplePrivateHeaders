/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@protocol NUPurgeableStorage, NUMutablePurgeableImage, NUPurgeableImage;
@class NUPurgeableImageAccessGuard, NUPurgeableStoragePool, NURegion, CIRenderTask, NUImageAccumulationNode;

@interface NUImageRenderJob : NURenderJob {

	NUPurgeableImageAccessGuard* _accessRegionGuard;
	NUPurgeableStoragePool* _storagePool;
	id<NUPurgeableStorage> _renderDestination;
	NURegion* _regionToRender;
	id<NUMutablePurgeableImage> _targetImage;
	NURegion* _renderedRegion;
	id<NUPurgeableImage> _renderedImage;
	CIRenderTask* _renderTask;

}

@property (nonatomic,readonly) NURegion * regionToRender;                                    //@synthesize regionToRender=_regionToRender - In the implementation block
@property (nonatomic,readonly) id<NUMutablePurgeableImage> targetImage;                      //@synthesize targetImage=_targetImage - In the implementation block
@property (nonatomic,readonly) NURegion * renderedRegion;                                    //@synthesize renderedRegion=_renderedRegion - In the implementation block
@property (nonatomic,readonly) id<NUPurgeableImage> renderedImage;                           //@synthesize renderedImage=_renderedImage - In the implementation block
@property (nonatomic,readonly) NUImageAccumulationNode * imageAccumulationNode; 
@property (nonatomic,retain) CIRenderTask * renderTask;                                      //@synthesize renderTask=_renderTask - In the implementation block
-(char)complete:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(id<NUPurgeableImage>)renderedImage;
-(id)imageRequest;
-(char)render:(out id*)arg1 ;
-(char)prepare:(out id*)arg1 ;
-(char)wantsOutputGeometry;
-(char)wantsOutputImage;
-(id)scalePolicy;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(id)initWithImageRequest:(id)arg1 ;
-(id)imageAccumulationNodeWithImageSize:(SCD_Struct_NU8)arg1 tileSize:(SCD_Struct_NU8)arg2 borderSize:(SCD_Struct_NU8)arg3 format:(id)arg4 colorSpace:(id)arg5 ;
-(id)extentPolicy;
-(NUImageAccumulationNode *)imageAccumulationNode;
-(char)copyStorage:(id)arg1 fromRect:(SCD_Struct_NU9)arg2 toImage:(id)arg3 atPoint:(SCD_Struct_NU8)arg4 ;
-(NURegion *)regionToRender;
-(id<NUMutablePurgeableImage>)targetImage;
-(NURegion *)renderedRegion;
-(CIRenderTask *)renderTask;
-(void)setRenderTask:(CIRenderTask *)arg1 ;
@end

