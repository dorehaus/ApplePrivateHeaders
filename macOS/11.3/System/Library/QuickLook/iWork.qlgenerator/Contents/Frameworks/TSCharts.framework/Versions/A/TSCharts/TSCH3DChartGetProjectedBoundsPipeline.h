/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DGetBoundsPipeline.h>

@class TSCH3DCamera, TSCH3DChartScenePropertyAccessor;

@interface TSCH3DChartGetProjectedBoundsPipeline : TSCH3DGetBoundsPipeline {

	box<glm::detail::tvec2<float>> _layoutInPage;
	box<glm::detail::tvec2<float>> _bodyLayoutInPage;
	box<glm::detail::tvec2<float>> _containingViewport;
	ChartProjectedBoundsSpaces _spaces;
	TSCH3DCamera* _originalCamera;
	TSCH3DChartScenePropertyAccessor* _originalSceneAccessor;
	box<glm::detail::tvec3<float>> _shadowsLayoutBounds;
	box<glm::detail::tvec3<float>> _layoutBounds;
	box<glm::detail::tvec3<float>> _constantDepthBodyLayoutBounds;
	box<glm::detail::tvec3<float>> _bodyLayoutBounds;
	box<glm::detail::tvec3<float>> _labelsLayoutBounds;
	box<glm::detail::tvec3<float>> _chartBounds;
	box<glm::detail::tvec3<float>> _orientBounds;
	box<glm::detail::tvec3<float>> _drawingBounds;
	box<glm::detail::tvec3<float>> _labelsBounds;
	char _enableScaledDepth;
	int _labelsMode;

}

@property (nonatomic,readonly) const ChartProjectedBoundsSpaces* spaces; 
@property (assign,nonatomic) box<glm::detail::tvec2<float>> layoutInPage;                    //@synthesize layoutInPage=_layoutInPage - In the implementation block
@property (assign,nonatomic) box<glm::detail::tvec2<float>> bodyLayoutInPage;                //@synthesize bodyLayoutInPage=_bodyLayoutInPage - In the implementation block
@property (assign,nonatomic) box<glm::detail::tvec2<float>> containingViewport;              //@synthesize containingViewport=_containingViewport - In the implementation block
@property (assign,nonatomic) char enableScaledDepth;                                         //@synthesize enableScaledDepth=_enableScaledDepth - In the implementation block
@property (assign,nonatomic) int labelsMode;                                                 //@synthesize labelsMode=_labelsMode - In the implementation block
-(char)run;
-(void)dealloc;
-(void)updateBounds;
-(const ChartProjectedBoundsSpaces*)spaces;
-(void)setLayoutInPage:(box<glm::detail::tvec2<float>>)arg1 ;
-(void)setBodyLayoutInPage:(box<glm::detail::tvec2<float>>)arg1 ;
-(box<glm::detail::tvec2<float>>)containingViewport;
-(void)setContainingViewport:(box<glm::detail::tvec2<float>>)arg1 ;
-(void)setEnableScaledDepth:(char)arg1 ;
-(void)setLabelsMode:(int)arg1 ;
-(box<glm::detail::tvec2<float>>)layoutInPage;
-(box<glm::detail::tvec2<float>>)bodyLayoutInPage;
-(id)updatedConstantDepthSceneFromScene:(id)arg1 ;
-(box<glm::detail::tvec3<float>>)boundsFromObjectBoundsOfType:(int)arg1 ;
-(id)drawingBoundsSceneObjectClasses;
-(id)labelsSceneObjectClasses;
-(id)chartSceneObjectClasses;
-(int)p_depthBoundsTypes;
-(box<glm::detail::tvec3<float>>)getBoundsFromObjectBoundsForScene:(id)arg1 boundsType:(int)arg2 ;
-(void)calculateLayoutBoundsSkippingLayoutSceneBounds:(char)arg1 ;
-(void)calculateLayoutBounds;
-(char)p_excludesLabels;
-(void)calculateLabelsBounds;
-(char)p_updatesLabelsOnly;
-(void)calculateBounds;
-(void)calculateLabelsBoundsIfNecssary;
-(void)calculateBoundsIfNecessary;
-(void)updateLayoutBounds;
-(void)updateLayoutBoundsIfNecessary;
-(void)updateRenderBounds;
-(box<glm::detail::tvec3<float>>)p_extendLabelsBoundsToBounds:(const box<glm::detail::tvec3<float>>*)arg1 ;
-(void)calculateLayoutLabelsBounds;
-(char)enableScaledDepth;
-(int)labelsMode;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
@end

