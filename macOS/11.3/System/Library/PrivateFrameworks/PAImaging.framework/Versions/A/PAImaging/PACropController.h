/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <PAImaging/PADescriptionEditReceiver.h>

@class PAItemViewConfiguration, PACropModel, PADescriptionEditController, PACropModelEditor, PAImageItemViewController, PAImageItemViewMode, CropInteractionContext, PAImageItemView, PACanvasItemView, NSString;

@interface PACropController : NSObject <PADescriptionEditReceiver> {

	char _interactive;
	unsigned _targetArea;
	CGRect _beginRect;
	double _beginStraightenAngle;
	PAItemViewConfiguration* _beginConfiguration;
	double _beginScale;
	PACropModel* _model;
	double _autoAngle;
	CGRect _autoCrop;
	char _hasAuto;
	PADescriptionEditController* _observedDescriptionEditController;
	PACropModelEditor* _modelEditor;
	char _didBeginEditing;
	char _isActive;
	char _isCurrent;
	PAImageItemViewController* _viewController;
	PAImageItemViewMode* _cropMode;
	PAImageItemViewMode* _normalMode;
	CropInteractionContext* _currentInteractionContext;
	SCD_Struct_PA4 _viewAspectRatio;
	CGRect _inputExtent;

}

@property (nonatomic,readonly) PAImageItemViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) PAImageItemView * imageView; 
@property (nonatomic,readonly) PAImageItemViewMode * cropMode;                          //@synthesize cropMode=_cropMode - In the implementation block
@property (nonatomic,readonly) PAImageItemViewMode * normalMode;                        //@synthesize normalMode=_normalMode - In the implementation block
@property (nonatomic,readonly) PACanvasItemView * canvasView; 
@property (nonatomic,readonly) char isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) char isCurrent;                                          //@synthesize isCurrent=_isCurrent - In the implementation block
@property (nonatomic,readonly) CGRect inputExtent;                                      //@synthesize inputExtent=_inputExtent - In the implementation block
@property (nonatomic,readonly) CGSize masterSize; 
@property (nonatomic,readonly) CGRect cropRect; 
@property (nonatomic,readonly) CGRect contentCropRect; 
@property (nonatomic,readonly) CGRect viewCropRect; 
@property (nonatomic,readonly) CGRect integralViewCropRect; 
@property (nonatomic,readonly) double straightenAngle; 
@property (nonatomic,readonly) CGAffineTransform straightenTransform; 
@property (nonatomic,readonly) double autoStraightenAngle; 
@property (nonatomic,readonly) double autoStraightenAngleWithOrientation; 
@property (nonatomic,readonly) SCD_Struct_PA4 aspectRatio; 
@property (nonatomic,readonly) SCD_Struct_PA4 viewAspectRatio;                          //@synthesize viewAspectRatio=_viewAspectRatio - In the implementation block
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) unsigned long long hitVertexId; 
@property (readonly) CropInteractionContext * currentInteractionContext;                //@synthesize currentInteractionContext=_currentInteractionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_cropModelWithRenderDescription:(id)arg1 inputExtent:(CGRect)arg2 ;
+(id)_cropModelWithInputExtent:(CGRect)arg1 orientation:(long long)arg2 cropOperation:(id)arg3 ;
+(id)sharedCropInteractionContext;
+(id)sharedCropRotationContext;
+(id)sharedCropAspectContext;
+(id)sharedCropZoomContext;
-(char)isActive;
-(void)setOrientation:(long long)arg1 ;
-(void)reset;
-(long long)orientation;
-(SCD_Struct_PA4)aspectRatio;
-(PAImageItemViewController *)viewController;
-(PAImageItemView *)imageView;
-(char)isCurrent;
-(id)model;
-(void)_exit;
-(CGRect)cropRect;
-(id)multicaster:(id)arg1 queueForSelector:(SEL)arg2 ;
-(void)_imageViewFrameDidChange:(id)arg1 ;
-(PAImageItemViewMode *)cropMode;
-(id)_cropMode;
-(char)isInteractive;
-(PACanvasItemView *)canvasView;
-(char)hasCrop;
-(CGRect)inputExtent;
-(char)imageContainsRect:(CGRect)arg1 withTol:(double)arg2 ;
-(void)makeCurrentAspectRatioFreeForm;
-(void)makeCurrentFreeFormAspectFixed;
-(char)aspectRatioIsOriginal;
-(char)aspectRatioIsFreeForm;
-(SCD_Struct_PA4)originalAspectRatio;
-(SCD_Struct_PA4)freeFormAspectRatio;
-(void)orientationChanged:(long long)arg1 ;
-(CGAffineTransform)straightenTransform;
-(double)straightenAngle;
-(void)makeCropRectIntegral;
-(void)operationsChangedForDescriptionController:(id)arg1 renderDescription:(id)arg2 ;
-(void)descriptionEditController:(id)arg1 renderDescription:(id)arg2 operationDidChangeAtIndex:(unsigned long long)arg3 invalidMasterRect:(CGRect)arg4 ;
-(void)descriptionEditController:(id)arg1 renderDescriptionOrientationChanged:(id)arg2 ;
-(void)descriptionEditController:(id)arg1 compositionChanged:(id)arg2 key:(id)arg3 ;
-(id)initWithItemViewController:(id)arg1 inputExtent:(CGRect)arg2 ;
-(void)cropDidChange;
-(void)beginInteractiveWithContext:(id)arg1 ;
-(void)endInteractive;
-(void)conformCrop;
-(void)updateViewport;
-(CGRect)_validBeginRect;
-(void)moveCropBy:(CGVector)arg1 ;
-(void)zoomIntoCrop:(double)arg1 ;
-(CGRect)cropRectFromViewRect:(CGRect)arg1 anchor:(CGPoint)arg2 configuration:(id)arg3 ;
-(unsigned long long)setViewCropRect:(CGRect)arg1 anchor:(CGPoint)arg2 force:(char)arg3 viewConstraint:(unsigned long long)arg4 ;
-(unsigned long long)setViewCropRect:(CGRect)arg1 anchor:(CGPoint)arg2 configuration:(id)arg3 force:(char)arg4 viewConstraint:(unsigned long long)arg5 ;
-(double)currentViewZoom;
-(void)rotateCropBy:(double)arg1 ;
-(void)updateAspectRatio:(SCD_Struct_PA4)arg1 ;
-(void)whenReady:(/*^block*/id)arg1 ;
-(void)willEnter;
-(void)willEnter:(/*^block*/id)arg1 ;
-(id)cropConfigurationToLoad;
-(void)didEnter;
-(void)_enter;
-(void)_handleBeginEditing;
-(void)imageViewFrameDidChange;
-(void)willExit;
-(void)willExit:(/*^block*/id)arg1 ;
-(id)normalConfigurationToLoad;
-(void)didExit;
-(char)hasAutoValues;
-(void)setAutoValues;
-(void)setAutoValuesIfNeeded;
-(void)computeAutoValues:(/*^block*/id)arg1 ;
-(void)_didFinishComputingAutoValues;
-(void)_autoComputeStraightenAndCropWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setAutoValuesWithCropOperation:(id)arg1 ;
-(void)_setAutoValuesWithCropAutoSettings:(id)arg1 ;
-(char)_isAnchorValid:(CGPoint)arg1 ;
-(void)_setModelEditor:(id)arg1 ;
-(void)_updateModelFromRenderDescriptionIfNeeded:(id)arg1 ;
-(void)_updateCropModelIfNeeded:(id)arg1 ;
-(void)_resetBeginState;
-(void)_updateTargetAreaWithRect:(CGRect)arg1 ;
-(void)_updateTargetAreaWithRect:(CGRect)arg1 force:(char)arg2 ;
-(char)hasCropInRenderDescription;
-(char)canApplyAutoCropInRenderDescription;
-(void)updateRenderDescription:(id)arg1 ;
-(void)removeAutoCalcSettings:(id)arg1 ;
-(void)_updateCropOperation:(id)arg1 ;
-(CGVector)_viewOffsetInContentSpace:(CGVector)arg1 ;
-(CGSize)masterSize;
-(unsigned long long)hitVertexId;
-(CGRect)contentCropRect;
-(CGRect)_contentCropRectForCropRect:(CGRect)arg1 masterSize:(CGSize)arg2 orientation:(long long)arg3 ;
-(CGRect)_cropRectForContentCropRect:(CGRect)arg1 masterSize:(CGSize)arg2 orientation:(long long)arg3 ;
-(CGRect)viewCropRect;
-(CGRect)viewCropRectForViewConfiguration:(id)arg1 ;
-(CGRect)_viewCropRectForContentCropRect:(CGRect)arg1 configuration:(id)arg2 ;
-(CGRect)_contentCropRectForViewCropRect:(CGRect)arg1 configuration:(id)arg2 ;
-(CGRect)integralViewCropRect;
-(double)_straightenMultiplierForOrientation:(long long)arg1 ;
-(double)_straightenAngleForOrientation:(long long)arg1 ;
-(double)autoStraightenAngle;
-(double)autoStraightenAngleWithOrientation;
-(SCD_Struct_PA4)_aspectRatioForOrientation:(long long)arg1 ;
-(PAImageItemViewMode *)normalMode;
-(SCD_Struct_PA4)viewAspectRatio;
-(CropInteractionContext *)currentInteractionContext;
@end

