/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSScrollView, IKImageContentView, IKImageBackgroundLayer, CALayer, NSView, NSColor;

@interface IKImageView2 : NSView {

	NSScrollView* _scrollView;
	char _alwaysHidesScrollers;
	char _restrainsMinZoomToViewSize;
	char _hasImage;
	IKImageContentView* _documentViewInLoading;
	char _backgroundLoaded;
	char _documentViewLayersAreSetup;
	IKImageBackgroundLayer* _checkerboardLayer;
	CALayer* _backgroundColorLayer;
	double _lastCompletedRotationAngle;
	NSView* _contentOverlayView;

}

@property (readonly) IKImageContentView * imageContentView; 
@property (assign) char restrainsMinZoomToViewSize;                      //@synthesize restrainsMinZoomToViewSize=_restrainsMinZoomToViewSize - In the implementation block
@property (assign) double zoomFactor; 
@property (assign) NSColor * backgroundColor; 
@property (assign) double rotationAngle; 
@property (readonly) NSScrollView * scrollView;                          //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) char alwaysHidesScrollers; 
@property (assign) char stickyZoomToFit; 
@property (assign) double minZoomFactor; 
@property (assign) double maxZoomFactor; 
@property (assign) char loadsSynchronously; 
@property (readonly) NSView * contentOverlayView; 
+(id)keyPathsForValuesAffectingImageRectInView;
+(id)keyPathsForValuesAffectingZoomFactor;
+(double)rotationDegreeForEXIFOrientation:(long long)arg1 ;
-(void)zoomImageToScale:(double)arg1 aroundImagePoint:(CGPoint)arg2 ;
-(char)alwaysHidesScrollers;
-(char)shouldUseTiles;
-(void)loadingFailed;
-(void)setDocumentViewLayersAreSetup:(char)arg1 ;
-(void)setupForZoomAnimationCenteredAroundImagePoint:(CGPoint)arg1 ;
-(void)applyZoomAnimationFrom:(double)arg1 to:(double)arg2 ;
-(id)softProofFilter;
-(void)willCompleteFlipAnimation;
-(void)applyFlipAnimation:(int)arg1 ;
-(void)contentRotatingBy:(double)arg1 aroundImagePoint:(CGPoint)arg2 ;
-(void)setupForRotationAnimationCenteredAroundImagePoint:(CGPoint)arg1 ;
-(void)applyRotationAnimationCenteredAroundImagePoint:(CGPoint)arg1 andRotationAngle:(double)arg2 ;
-(CGRect)_insetContentBounds;
-(void)freezeMoveToWindowUpdates;
-(void)unfreezeMoveToWindowUpdates;
-(void)zoomToFullSize;
-(CGImageRef)newVisibleImageSnapshot;
-(void)originalImageFileWillChangeOnDisk;
-(void)setAllowsGestureElasticity:(char)arg1 ;
-(void)scrollviewFrameChanged:(id)arg1 ;
-(id)layeredImageDocumentView;
-(void)cancelAndDisposeOfDocumentViewInLoading;
-(void)_constrainCheckerboardMaskBounds;
-(void)_forceConstrainCheckerboardMaskBounds;
-(CGSize)_imageSizeWithoutRotations;
-(void)redrawVisibleRect;
-(void)contentViewLoadedThumbnail:(id)arg1 ;
-(void)_reinsertContentOverlayView;
-(void)_replaceDocumentView;
-(void)_setupDocumentViewForLoading;
-(CGPoint)_convertDocumentPointToImage:(CGPoint)arg1 ;
-(void)setUsesTiles:(char)arg1 ;
-(char)usesTiles;
-(char)documentViewLayersAreSetup;
-(char)setImageURL:(id)arg1 withDisplayProperties:(id)arg2 ;
-(char)setImageData:(id)arg1 withDisplayProperties:(id)arg2 ;
-(void)zoomToFitSticky:(char)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSColor *)backgroundColor;
-(id)magnificationInflectionPointsForScrollView:(id)arg1 ;
-(NSScrollView *)scrollView;
-(void)awakeFromNib;
-(CGSize)imageSize;
-(void)setAnimates:(char)arg1 ;
-(CGRect)imageRect;
-(void)commonInit;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(NSView *)contentOverlayView;
-(void)setRestrainsMinZoomToViewSize:(char)arg1 ;
-(void)setLoadsSynchronously:(char)arg1 ;
-(void)setMinZoomFactor:(double)arg1 ;
-(void)setMaxZoomFactor:(double)arg1 ;
-(char)setImageURL:(id)arg1 imageAtIndex:(long long)arg2 withDisplayProperties:(id)arg3 ;
-(char)setImageData:(id)arg1 imageAtIndex:(long long)arg2 withDisplayProperties:(id)arg3 ;
-(char)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(id)annotationsView;
-(CGRect)imageRectInView;
-(CGPoint)convertPointToImage:(CGPoint)arg1 ;
-(CGPoint)convertPointFromImage:(CGPoint)arg1 ;
-(CGRect)convertRectToImage:(CGRect)arg1 ;
-(void)rotateImageRight:(id)arg1 ;
-(double)minZoomFactor;
-(double)maxZoomFactor;
-(void)setZoomFactor:(double)arg1 withCenter:(CGPoint)arg2 animate:(char)arg3 stickyFit:(char)arg4 ;
-(void)rotateImageLeft:(id)arg1 ;
-(char)stickyZoomToFit;
-(double)zoomFactor;
-(void)updateUnderlyingCIImage:(id)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 usingFlattenedImage:(char)arg4 ;
-(char)restrainsMinZoomToViewSize;
-(void)setZoomFactor:(double)arg1 ;
-(void)setShouldUseTiles:(char)arg1 ;
-(void)setAlwaysHidesScrollers:(char)arg1 ;
-(void)clipviewBoundsChanged:(id)arg1 ;
-(void)setZoomFactor:(double)arg1 centeredAtImagePoint:(CGPoint)arg2 animate:(char)arg3 stickyFit:(char)arg4 ;
-(char)loadsSynchronously;
-(IKImageContentView *)imageContentView;
-(CGRect)convertRectFromImage:(CGRect)arg1 ;
-(void)setStickyZoomToFit:(char)arg1 ;
-(void)setShowsCheckerboardBackground:(char)arg1 ;
-(char)showsCheckerboardBackground;
-(void)setMinNearestNeighborScale:(double)arg1 ;
-(void)redrawTiles;
-(id)applyFiltersToImage:(id)arg1 ;
-(char)isAnimatingTransform;
-(double)defaultTransformAnimationDuration;
-(void)willCompleteZoomAnimation;
-(void)didCompleteZoomAnimation;
-(id)borrowContent;
-(void)returnBorrowedContent;
-(void)setSoftProofFilter:(id)arg1 ;
-(void)setRotationAngleWithAnimation:(double)arg1 aroundImagePoint:(CGPoint)arg2 duration:(double)arg3 ;
-(void)setRotationAngle:(double)arg1 centeredAroundImagePoint:(CGPoint)arg2 ;
-(void)willCompleteRotationAnimation;
-(void)didCompleteRotationAnimation;
-(void)flipImageHorizontal:(id)arg1 ;
-(void)flipImageVertical:(id)arg1 ;
-(void)didCompleteFlipAnimation;
-(id)flattenedUnfilteredCIImage;
-(char)setCIImage:(id)arg1 imageProperties:(id)arg2 displayProperties:(id)arg3 ;
-(id)annotationsLayer;
-(id)magnificationInflectionPoints;
@end
