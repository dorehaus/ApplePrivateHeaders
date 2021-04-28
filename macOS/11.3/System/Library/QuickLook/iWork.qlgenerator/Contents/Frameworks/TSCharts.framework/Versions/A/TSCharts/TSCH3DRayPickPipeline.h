/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DSceneRenderPipeline.h>
#import <TSCharts/TSCH3DSceneObjectDelegator.h>

@class TSCH3DRayPickPipelineDelegate, NSArray, TSCH3DPickedPoint;

@interface TSCH3DRayPickPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator> {

	tvec2<float> _pickPosition;
	TSCH3DRayPickPipelineDelegate* _sceneObjectDelegate;

}

@property (nonatomic,readonly) NSArray * pickedPoints; 
@property (nonatomic,readonly) TSCH3DPickedPoint * pickedPoint; 
@property (assign,nonatomic) float slack; 
+(id)pipelineWithScene:(id)arg1 position:(const tvec2<float>*)arg2 ;
-(char)run;
-(id)initWithScene:(id)arg1 position:(const tvec2<float>*)arg2 ;
-(void)rayPick:(id)arg1 ;
-(id)p_renderProcessor;
-(NSArray *)pickedPoints;
-(id)p_unsortedPickedPoints;
-(float)slack;
-(void)setSlack:(float)arg1 ;
-(id)p_closestPickedPoint;
-(id)p_frontMostPickedPoint;
-(id)makeDelegateWithScene:(id)arg1 ;
-(id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2 ;
-(TSCH3DPickedPoint *)pickedPoint;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
@end

