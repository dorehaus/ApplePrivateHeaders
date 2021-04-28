/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDCanvasDelegate <NSObject>
@property (nonatomic,readonly) id<TSDCanvasProxyDelegate> canvasProxyDelegate; 
@optional
-(char)isCanvasInteractive;
-(char)isPrintingCanvas;
-(char)spellCheckingSupported;
-(char)spellCheckingSuppressed;
-(char)shouldShowTextOverflowGlyphs;
-(void)canvasLayoutInvalidated:(id)arg1;
-(void)canvasDidValidateLayouts:(id)arg1;
-(void)canvasDidLayout:(id)arg1;
-(void)canvasDidValidateLayoutsWithDependencies:(id)arg1;
-(void)canvasWillUpdateRepsFromLayouts:(id)arg1;
-(CGRect*)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
-(id)additionalVisibleInfosForCanvas:(id)arg1;
-(id)infosToHideForCanvas:(id)arg1;
-(void)canvas:(id)arg1 createdRep:(id)arg2;
-(char)shouldSuppressBackgrounds;
-(char)isCanvasDrawingIntoPDF:(id)arg1;
-(char)supportsAdaptiveLayout;
-(char)shouldShowInstructionalTextForLayout:(id)arg1;
-(char)isRenderingForKPF;
-(Class)canvasRootLayoutClass;
-(void)canvasWillValidateLayouts:(id)arg1;
-(void)updateLayerTreeForInteractiveCanvas:(id)arg1;
-(char)wantsEditingLayoutsForOffscreenInfos;
-(char)shouldShowCommentsForCanvas:(id)arg1;
-(char)shouldShowTextCommentHighlightsForCanvas:(id)arg1;
-(char)textLayoutMustIncludeAdornments;
-(id<TSDCanvasProxyDelegate>)canvasProxyDelegate;

@required
-(id)documentRoot;

@end

