/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDFill.h>
#import <TSDrawables/TSDMixing.h>
#import <TSDrawables/TSSPresetSource.h>
#import <TSDrawables/TSPStyleObjectDataContainer.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class NSArray, TSPData, TSUColor, TSDImageFillCachedImage, NSObject, NSString;

@interface TSDImageFill : TSDFill <TSDMixing, TSSPresetSource, TSPStyleObjectDataContainer, NSCopying, NSMutableCopying> {

	TSPData* mImageData;
	unsigned long long mTechnique;
	TSUColor* mTintColor;
	TSDImageFillCachedImage* mStandardSizeTintedImage;
	TSDImageFillCachedImage* mHalfSizeTintedImage;
	TSDImageFillCachedImage* mQuarterSizeTintedImage;
	TSUColor* mReferenceColor;
	TSUColor* mCachedReferenceColor;
	char mShouldSkipFurtherAttemptsToCalculateReferenceColor;
	CGSize mFillSize;
	char mHasIndicatedInterestInProvider;
	NSObject*<OS_dispatch_queue> mTempRenderLock;
	CGImageRef mTempRenderCopy;
	CGImageRef mSourceOfTempRenderCopy;
	long long mTempRenderCount;

}

@property (assign,nonatomic) unsigned long long technique; 
@property (setter=p_setImageData:,nonatomic,retain) TSPData * p_imageData; 
@property (assign,setter=p_setTechnique:,nonatomic) unsigned long long p_technique; 
@property (setter=p_setTintColor:,nonatomic,retain) TSUColor * p_tintColor; 
@property (assign,setter=p_setFillSize:,nonatomic) CGSize p_fillSize; 
@property (nonatomic,retain,readonly) TSPData * imageData; 
@property (nonatomic,readonly) CGSize fillSize; 
@property (nonatomic,copy,readonly) TSUColor * tintColor; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) char canCopyData; 
@property (nonatomic,readonly) TSUColor * storedReferenceColor; 
@property (nonatomic,readonly) NSArray * referencedDataList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(unsigned long long)arg3 ;
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(char)tsch_hasAllResources;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(char)isOpaque;
-(TSUColor *)tintColor;
-(long long)fillType;
-(TSPData *)imageData;
-(id)copyWithNewImageData:(id)arg1 ;
-(unsigned long long)technique;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)setTechnique:(unsigned long long)arg1 ;
-(id)referenceColor;
-(id)presetKind;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(char)drawsInOneStep;
-(CGSize)renderedImageSizeForObjectSize:(CGSize)arg1 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(char)arg4 ;
-(id)p_validatedImageProvider;
-(TSPData *)p_imageData;
-(CGSize)fillSize;
-(void)p_setFillSizeForApplicationData;
-(id)p_standardSizeCachedImage;
-(char)p_shouldApplyTintedImage;
-(id)p_quarterSizeCachedImage;
-(id)p_halfSizeCachedImage;
-(CGRect)p_drawnRectForImageSize:(CGSize)arg1 destRect:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(CGSize)p_sizeOfFillImageForDestRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)p_drawBitmapImage:(CGImageRef)arg1 withOrientation:(int)arg2 inContext:(CGContextRef)arg3 bounds:(CGRect)arg4 ;
-(void)p_drawPDFWithProvider:(id)arg1 inContext:(CGContextRef)arg2 bounds:(CGRect)arg3 ;
-(id)imageDataAtFillSize;
-(void)i_commonInit;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(char)canCopyData;
-(id)initWithImageData:(id)arg1 technique:(unsigned long long)arg2 tintColor:(id)arg3 size:(CGSize)arg4 ;
-(void)drawFillInContext:(CGContextRef)arg1 rect:(CGRect)arg2 clippingToPath:(CGPathRef)arg3 ;
-(id)initForUnarchiving;
-(void)p_setImageData:(id)arg1 ;
-(void)p_setTechnique:(unsigned long long)arg1 ;
-(void)p_setTintColor:(id)arg1 ;
-(void)p_setFillSize:(CGSize)arg1 ;
-(void)i_setStoredReferenceColor:(id)arg1 ;
-(CGSize)p_fillSize;
-(void)i_updateStoredReferenceColorIfNeeded;
-(void)p_convertImageDataToMacCompatibleOnUnarchiveOrDownload;
-(unsigned long long)p_technique;
-(TSUColor *)p_tintColor;
-(TSUColor *)storedReferenceColor;
-(id)referenceColorForFontArchiving;
-(id)initWithImageData:(id)arg1 technique:(unsigned long long)arg2 tintColor:(id)arg3 size:(CGSize)arg4 referenceColor:(id)arg5 ;
-(id)p_tintedImageWithScale:(double)arg1 ;
-(void)p_clearTintedImageCache;
-(CGSize)p_imageDataNaturalSize;
-(void)p_updateCachedReferenceColorIfNeeded;
-(id)p_calculateReferenceColor;
-(id)p_cachedImageForSize:(CGSize)arg1 inContext:(CGContextRef)arg2 orContentsScaleProvider:(id)arg3 ;
-(void)p_paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 rectForFill:(CGRect)arg3 ;
-(NSArray *)referencedDataList;
-(void)flushImageCache;
-(char)canApplyToRenderable;
-(char)canApplyToRenderableByAddingSubrenderables;
@end
