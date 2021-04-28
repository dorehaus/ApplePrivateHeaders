/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSText/TSWPTextHostRep.h>
#import <TSCharts/TSCHSupportsRendering.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class TSCHSearchSelection, TSCHSelectionPath, CALayer, NSMutableArray, NSArray, TSCHLegendMoveKnob, TSCHChartDrawableLayout, TSCHLegendRenderer, TSCHChartDrawableInfo, TSCHChartLayout, NSString, NSIndexSet;

@interface TSCHChartRep : TSWPTextHostRep <TSCHSupportsRendering, CALayerDelegate> {

	char _drawingSearchReference;
	char _is2DRepFor3DChartRep;
	char _chartRepGoingAway;
	char _editorIsEditingInfo;
	char _buildingChunks;
	char _buildingFinalBackground;
	char _buildingFinalElements;
	char _inZoom;
	char _isKPFExportForMultiData;
	char _forceSeparateLegendLayer;
	int _renderPassChunkPhase;
	int _chunkPhase;
	int _textureByGlyphStyle;
	TSCHSearchSelection* _selection;
	TSCHSelectionPath* _activeTextEditingPath;
	CALayer* _downloadIndicatorLayer;
	NSMutableArray* _renderersWaitingForDownload;
	NSArray* _renderers;
	long long _currentChunk;
	unsigned long long _inDynamicStandinOperation;
	unsigned long long _inDynamicStandinLayoutOperation;
	unsigned long long _textureDeliveryStyle;
	unsigned long long _textureStage;
	TSCHLegendMoveKnob* _dynamicLegendKnob;
	CGPoint _lastSubselectionLayerRelativeReferencePosition;

}

@property (assign,nonatomic) int renderPassChunkPhase;                                            //@synthesize renderPassChunkPhase=_renderPassChunkPhase - In the implementation block
@property (assign,nonatomic) CGPoint lastSubselectionLayerRelativeReferencePosition;              //@synthesize lastSubselectionLayerRelativeReferencePosition=_lastSubselectionLayerRelativeReferencePosition - In the implementation block
@property (nonatomic,retain) CALayer * downloadIndicatorLayer;                                    //@synthesize downloadIndicatorLayer=_downloadIndicatorLayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * renderersWaitingForDownload;                        //@synthesize renderersWaitingForDownload=_renderersWaitingForDownload - In the implementation block
@property (nonatomic,retain) NSArray * renderers;                                                 //@synthesize renderers=_renderers - In the implementation block
@property (assign,nonatomic) char editorIsEditingInfo;                                            //@synthesize editorIsEditingInfo=_editorIsEditingInfo - In the implementation block
@property (assign,nonatomic) char buildingChunks;                                                 //@synthesize buildingChunks=_buildingChunks - In the implementation block
@property (assign,nonatomic) int chunkPhase;                                                      //@synthesize chunkPhase=_chunkPhase - In the implementation block
@property (assign,nonatomic) long long currentChunk;                                              //@synthesize currentChunk=_currentChunk - In the implementation block
@property (assign,nonatomic) char buildingFinalBackground;                                        //@synthesize buildingFinalBackground=_buildingFinalBackground - In the implementation block
@property (assign,nonatomic) char buildingFinalElements;                                          //@synthesize buildingFinalElements=_buildingFinalElements - In the implementation block
@property (assign,nonatomic) char inZoom;                                                         //@synthesize inZoom=_inZoom - In the implementation block
@property (assign,nonatomic) unsigned long long inDynamicStandinOperation;                        //@synthesize inDynamicStandinOperation=_inDynamicStandinOperation - In the implementation block
@property (assign,nonatomic) unsigned long long inDynamicStandinLayoutOperation;                  //@synthesize inDynamicStandinLayoutOperation=_inDynamicStandinLayoutOperation - In the implementation block
@property (assign,nonatomic) char isKPFExportForMultiData;                                        //@synthesize isKPFExportForMultiData=_isKPFExportForMultiData - In the implementation block
@property (assign,nonatomic) int textureByGlyphStyle;                                             //@synthesize textureByGlyphStyle=_textureByGlyphStyle - In the implementation block
@property (assign,nonatomic) unsigned long long textureDeliveryStyle;                             //@synthesize textureDeliveryStyle=_textureDeliveryStyle - In the implementation block
@property (assign,nonatomic) unsigned long long textureStage;                                     //@synthesize textureStage=_textureStage - In the implementation block
@property (nonatomic,retain) TSCHLegendMoveKnob * dynamicLegendKnob;                              //@synthesize dynamicLegendKnob=_dynamicLegendKnob - In the implementation block
@property (assign,nonatomic) char forceSeparateLegendLayer;                                       //@synthesize forceSeparateLegendLayer=_forceSeparateLegendLayer - In the implementation block
@property (nonatomic,readonly) TSCHChartDrawableLayout * drawableLayout; 
@property (nonatomic,readonly) TSCHLegendRenderer * legendRenderer; 
@property (nonatomic,readonly) char frameInUnscaledCanvasNeedsPaddingForShadows; 
@property (nonatomic,readonly) CGRect geometryFrame; 
@property (nonatomic,readonly) CGRect outerShadowFrame; 
@property (nonatomic,readonly) TSCHChartDrawableInfo * chartInfo; 
@property (nonatomic,readonly) TSCHChartLayout * chartLayout; 
@property (nonatomic,readonly) unsigned long long chartDeliveryStyle; 
@property (nonatomic,readonly) TSCHSearchSelection * selection;                                   //@synthesize selection=_selection - In the implementation block
@property (nonatomic,readonly) char forceRenderBlankBackground; 
@property (nonatomic,readonly) TSCHSelectionPath * activeTextEditingPath;                         //@synthesize activeTextEditingPath=_activeTextEditingPath - In the implementation block
@property (nonatomic,readonly) char drawingSearchReference;                                       //@synthesize drawingSearchReference=_drawingSearchReference - In the implementation block
@property (nonatomic,readonly) NSString * animationFilter; 
@property (nonatomic,readonly) double viewScale; 
@property (nonatomic,readonly) double contentsScale; 
@property (nonatomic,readonly) char is2DRepFor3DChartRep;                                         //@synthesize is2DRepFor3DChartRep=_is2DRepFor3DChartRep - In the implementation block
@property (nonatomic,readonly) char isCorrectRepClassForInfo; 
@property (nonatomic,readonly) char renderElements; 
@property (nonatomic,readonly) char renderElementsWithoutShadows; 
@property (nonatomic,readonly) char renderElementsShadowOnly; 
@property (nonatomic,readonly) char renderGrid; 
@property (nonatomic,readonly) char renderLabels; 
@property (nonatomic,readonly) NSIndexSet * renderSeriesIndexSet; 
@property (nonatomic,readonly) char chartRepGoingAway;                                            //@synthesize chartRepGoingAway=_chartRepGoingAway - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
-(void)dealloc;
-(double)contentsScale;
-(char)shadowsEnabled;
-(void)drawInContext:(CGContextRef)arg1 ;
-(TSCHSearchSelection *)selection;
-(id)geometry;
-(NSArray *)renderers;
-(long long)currentChunk;
-(void)setCurrentChunk:(long long)arg1 ;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(CGRect)frameInUnscaledCanvas;
-(double)viewScale;
-(CGRect)targetRectForEditMenu;
-(void)willBeginZooming;
-(void)didEndZooming;
-(char)canDrawInParallel;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateFromLayout;
-(void)setTextureDeliveryStyle:(unsigned long long)arg1 ;
-(void)setTextureByGlyphStyle:(int)arg1 ;
-(void)setTextureStage:(unsigned long long)arg1 ;
-(unsigned long long)textureDeliveryStyle;
-(int)textureByGlyphStyle;
-(unsigned long long)textureStage;
-(char)isDrawingIntoPDF;
-(NSString *)animationFilter;
-(id)textureForDescription:(id)arg1 ;
-(TSCHChartDrawableInfo *)chartInfo;
-(TSCHChartLayout *)chartLayout;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 is2DRepFor3DChartRep:(char)arg3 ;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(char)renderGrid;
-(char)forceRenderBlankBackground;
-(char)renderElementsShadowOnly;
-(char)renderElementsWithoutShadows;
-(NSIndexSet *)renderSeriesIndexSet;
-(id)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1 ;
-(char)is2DRepFor3DChartRep;
-(char)renderElements;
-(char)renderLabels;
-(char)requireSeparateLabelLayer;
-(TSCHSelectionPath *)activeTextEditingPath;
-(char)drawingSearchReference;
-(void)p_checkFillPropertiesForDataListeningWithChangedProperties:(id)arg1 ;
-(TSCHChartDrawableLayout *)drawableLayout;
-(char)frameInUnscaledCanvasNeedsPaddingForShadows;
-(CGRect)outerShadowFrame;
-(char)buildShouldUseRenderer:(id)arg1 ;
-(char)shouldUseRenderer:(id)arg1 ;
-(void)p_listenForDataChangesIfAppropriateForFill:(id)arg1 forProperty:(int)arg2 ;
-(char)shouldUseChartAreaRectForEditMenuTargetRectMinY;
-(char)messageIsVisible;
-(void)dismissMessageOverlayNowWithAnimation:(char)arg1 ;
-(void)p_positionMessageView;
-(void)p_invalidateMessageOverlay;
-(void)p_removeOrShowAndPositionMessageOverlay;
-(char)planeIsVisible:(int)arg1 ;
-(unsigned long long)chartDeliveryStyle;
-(void)p_addChildTexturesToTextureSet:(id)arg1 forDescription:(id)arg2 stage:(long long)arg3 finalTexture:(char)arg4 ;
-(id)p_textureForDescription:(id)arg1 ;
-(void)clearRenderers;
-(void)renderChunkInBounds:(CGRect)arg1 textureSet:(id)arg2 description:(id)arg3 ;
-(id)renderSeriesIndexSetForFinalElements:(char)arg1 ;
-(id)renderSeriesIndexSetForFinalElements:(char)arg1 currentChunk:(long long)arg2 ;
-(id)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1 finalElements:(char)arg2 ;
-(id)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1 finalElements:(char)arg2 currentChunk:(long long)arg3 ;
-(int)planeState:(int)arg1 finalElements:(char)arg2 chunkStage:(long long)arg3 ;
-(int)p_backgroundLikePlaneStateForEffectiveStage:(long long)arg1 ;
-(char)p_hasBackgroundLayerForPieChart;
-(char)renderTrendLinesForSeriesIndex:(unsigned long long)arg1 ;
-(char)renderReferenceLines;
-(TSCHLegendRenderer *)legendRenderer;
-(char)isCorrectRepClassForInfo;
-(CGRect)geometryFrame;
-(char)p_hasBackgroundFill;
-(CGPoint)scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
-(id)dataForUpdateUploadIndicator;
-(void)p_deleteMessageView;
-(char)p_chartShouldDisplayMessage;
-(void)p_forceDismissTransientMessage;
-(void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)displayMessage:(id)arg1 zPosition:(double)arg2 style:(int)arg3 ;
-(void)p_topBarsShowedUp:(id)arg1 ;
-(void)updateMessageOverlayNow;
-(void)editor:(id)arg1 isSelectingInfos:(id)arg2 ;
-(void)editor:(id)arg1 isDeselectingInfos:(id)arg2 ;
-(int)planeState:(int)arg1 finalElements:(char)arg2 ;
-(char)p_legendHitByLayoutPoint:(CGPoint)arg1 ;
-(id)p_textImageForPath:(const CGPathRef)arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(char)arg4 ;
-(double)captionBottomDistanceToRect:(CGRect)arg1 ;
-(char)chartRepGoingAway;
-(int)renderPassChunkPhase;
-(void)setRenderPassChunkPhase:(int)arg1 ;
-(CGPoint)lastSubselectionLayerRelativeReferencePosition;
-(void)setLastSubselectionLayerRelativeReferencePosition:(CGPoint)arg1 ;
-(CALayer *)downloadIndicatorLayer;
-(void)setDownloadIndicatorLayer:(CALayer *)arg1 ;
-(NSMutableArray *)renderersWaitingForDownload;
-(void)setRenderersWaitingForDownload:(NSMutableArray *)arg1 ;
-(void)setRenderers:(NSArray *)arg1 ;
-(char)editorIsEditingInfo;
-(void)setEditorIsEditingInfo:(char)arg1 ;
-(char)buildingChunks;
-(void)setBuildingChunks:(char)arg1 ;
-(int)chunkPhase;
-(void)setChunkPhase:(int)arg1 ;
-(char)buildingFinalBackground;
-(void)setBuildingFinalBackground:(char)arg1 ;
-(char)buildingFinalElements;
-(void)setBuildingFinalElements:(char)arg1 ;
-(char)inZoom;
-(void)setInZoom:(char)arg1 ;
-(unsigned long long)inDynamicStandinOperation;
-(void)setInDynamicStandinOperation:(unsigned long long)arg1 ;
-(unsigned long long)inDynamicStandinLayoutOperation;
-(void)setInDynamicStandinLayoutOperation:(unsigned long long)arg1 ;
-(char)isKPFExportForMultiData;
-(void)setIsKPFExportForMultiData:(char)arg1 ;
-(TSCHLegendMoveKnob *)dynamicLegendKnob;
-(void)setDynamicLegendKnob:(TSCHLegendMoveKnob *)arg1 ;
-(char)forceSeparateLegendLayer;
-(void)setForceSeparateLegendLayer:(char)arg1 ;
-(id)referenceLinesToRender;
-(id)referenceLineLabelsSearchSelectionsToRender;
@end

