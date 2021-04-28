/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDDynamicOverridingCanvasDelegate.h>
#import <TSDrawables/TSDCanvasDelegate.h>

@protocol TSDInfo;
@class NSArray, TSUColor, TSKDocumentRoot, TSDCanvas, NSSet, NSMapTable, NSObject, NSString;

@interface TSDImager : NSObject <TSDDynamicOverridingCanvasDelegate, TSDCanvasDelegate> {

	NSArray* mInfos;
	TSUColor* mBackgroundColor;
	CGRect mUnscaledClipRect;
	double mViewScale;
	double mContentsScale;
	CGSize mScaledImageSize;
	CGSize mMaximumImagePixelSize;
	char mUseScaledImageSize;
	char mDistortedToMatch;
	char mImageMustHaveEvenDimensions;
	char mShouldReuseBitmapContext;
	TSKDocumentRoot* mDocumentRoot;
	TSDCanvas* mCanvas;
	char mMayBeReused;
	char mHasBeenUsed;
	CGRect mActualScaledClipRect;
	char mDrawingIntoPDF;
	char mIsPrinting;
	CGContextRef mReusableBitmapContext;
	CGRect mReusableBounds;
	CGRect mReusableIntegralBounds;
	CGRect mReusableActualScaledClipRect;
	CGSize mReusableScaledImageSize;
	NSSet* mPreviousRenderDatasNeedingDownload;
	/*^block*/id mPostRenderAction;
	NSMapTable* mDynamicOverrides;
	NSObject*<TSDInfo> mInfoToDrawBeneath;
	/*^block*/id mInfoToDrawBeneathFilter;
	char mShouldShowInstructionalText;
	char mShouldSuppressBackgrounds;
	char mShouldShowComments;
	char mShouldShowTextCommentHighlights;
	char mShouldShowCaptionInstructionalText;

}

@property (nonatomic,copy) NSSet * previousRenderDatasNeedingDownload; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,retain) NSArray * infos; 
@property (assign,nonatomic) char mayBeReused; 
@property (nonatomic,copy) TSUColor * backgroundColor; 
@property (assign,nonatomic) CGRect unscaledClipRect; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) double contentsScale; 
@property (assign,nonatomic) CGSize scaledImageSize; 
@property (assign,nonatomic) CGSize maximumImagePixelSize; 
@property (assign,nonatomic) char distortedToMatch; 
@property (assign,nonatomic) char imageMustHaveEvenDimensions; 
@property (nonatomic,readonly) CGRect actualScaledClipRect; 
@property (assign,nonatomic) char shouldReuseBitmapContext; 
@property (assign,nonatomic) char isPrinting; 
@property (assign,nonatomic) char shouldShowInstructionalText; 
@property (assign,nonatomic) char shouldSuppressBackgrounds; 
@property (assign,nonatomic) char shouldShowComments; 
@property (assign,nonatomic) char shouldShowTextCommentHighlights; 
@property (assign,nonatomic) char shouldShowCaptionInstructionalText; 
@property (nonatomic,readonly) id<TSDCanvasProxyDelegate> canvasProxyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setBackgroundColor:(TSUColor *)arg1 ;
-(TSUColor *)backgroundColor;
-(void)setContentsScale:(double)arg1 ;
-(double)contentsScale;
-(void)setViewScale:(double)arg1 ;
-(NSArray *)infos;
-(void)setInfos:(NSArray *)arg1 ;
-(char)isPrinting;
-(TSDCanvas *)canvas;
-(id)documentRoot;
-(id)pdfData;
-(char)isPrintingCanvas;
-(char)shouldShowInstructionalText;
-(CGImageRef)newImage;
-(double)viewScale;
-(id)initWithDocumentRoot:(id)arg1 ;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(char)shouldSuppressBackgrounds;
-(char)isCanvasDrawingIntoPDF:(id)arg1 ;
-(char)p_configureCanvas;
-(char)shouldReuseBitmapContext;
-(CGImageRef)p_newImageInReusableContext;
-(void)p_drawPageInContext:(CGContextRef)arg1 createPage:(char)arg2 ;
-(void)setPostRenderAction:(/*^block*/id)arg1 ;
-(CGSize)scaledImageSize;
-(void)setScaledImageSize:(CGSize)arg1 ;
-(char)drawPageInContext:(CGContextRef)arg1 createPage:(char)arg2 ;
-(CGRect)unscaledClipRect;
-(void)setUnscaledClipRect:(CGRect)arg1 ;
-(CGRect)actualScaledClipRect;
-(char)distortedToMatch;
-(void)setDistortedToMatch:(char)arg1 ;
-(char)imageMustHaveEvenDimensions;
-(void)setImageMustHaveEvenDimensions:(char)arg1 ;
-(void)setShouldReuseBitmapContext:(char)arg1 ;
-(void)setIsPrinting:(char)arg1 ;
-(char)shouldShowInstructionalTextForLayout:(id)arg1 ;
-(char)shouldShowCommentsForCanvas:(id)arg1 ;
-(char)shouldShowTextCommentHighlightsForCanvas:(id)arg1 ;
-(void)setShouldShowComments:(char)arg1 ;
-(void)setShouldShowTextCommentHighlights:(char)arg1 ;
-(void)setShouldShowInstructionalText:(char)arg1 ;
-(void)setMayBeReused:(char)arg1 ;
-(void)setShouldSuppressBackgrounds:(char)arg1 ;
-(id)dynamicOverrideForLayout:(id)arg1 ;
-(id)dynamicOverrideForRep:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 renderForWideGamut:(char)arg2 ;
-(void)setInfos:(id)arg1 allowLayoutIfNeeded:(char)arg2 ;
-(void)p_assertHasReadLock;
-(char)shouldShowComments;
-(char)shouldShowTextCommentHighlights;
-(char)shouldShowCaptionInstructionalText;
-(char)mayBeReused;
-(CGSize)p_evenDimensionsWithSize:(CGSize)arg1 ;
-(void)setPreviousRenderDatasNeedingDownload:(NSSet *)arg1 ;
-(CGSize)maximumImagePixelSize;
-(void)setMaximumImagePixelSize:(CGSize)arg1 ;
-(void)setDynamicOverride:(id)arg1 forInfo:(id)arg2 ;
-(void)i_setDrawsOnlyBelowInfo:(id)arg1 ;
-(id)pngData;
-(NSSet *)previousRenderDatasNeedingDownload;
-(void)setShouldShowCaptionInstructionalText:(char)arg1 ;
@end

