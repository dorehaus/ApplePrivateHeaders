/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class CUICatalog;

@interface CUINamedVectorGlyph : CUINamedLookup {

	double _pointSize;
	double _lookedupScaleFactor;
	CGImageRef _cgImageRef;
	double _fontMatchingScaleFactor;
	CUICatalog* _catalog;
	long long _layoutDirection;
	unsigned _generatedImage : 1;
	unsigned _flippable : 1;

}

@property (assign,nonatomic) double fontMatchingScaleFactor; 
@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) double capHeight; 
@property (nonatomic,readonly) CGRect alignmentRect; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) char isFlippable; 
@property (nonatomic,readonly) float templateVersion; 
@property (nonatomic,readonly) double baselineOffsetUnrounded; 
@property (nonatomic,readonly) double capHeightUnrounded; 
@property (nonatomic,readonly) CGRect contentBoundsUnrounded; 
@property (nonatomic,readonly) CGRect alignmentRectUnrounded; 
@property (nonatomic,readonly) unsigned long long numberOfLayers; 
+(id)_colorStyleNames;
+(id)_knockoutStyleNames;
-(CGImageRef)NS_CGImageWithPixelSize:(CGSize)arg1 usingColorResolver:(char)arg2 namedColorOverrides:(id)arg3 ;
-(void)dealloc;
-(id)debugDescription;
-(double)scale;
-(CGImageRef)image;
-(long long)layoutDirection;
-(char)isFlippable;
-(double)pointSize;
-(CGRect)alignmentRect;
-(double)baselineOffset;
-(double)capHeight;
-(CGImageRef)imageWithColorResolver:(/*^block*/id)arg1 ;
-(CGRect)alignmentRectUnrounded;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 withColorResolver:(/*^block*/id)arg3 ;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
-(CGRect)contentBounds;
-(unsigned long long)numberOfLayers;
-(long long)glyphWeight;
-(long long)glyphSize;
-(float)templateVersion;
-(CGImageRef)imageTintedWithColors:(id)arg1 ;
-(double)referencePointSize;
-(id)knownAvailableVectorSizes;
-(double)fontMatchingScaleFactor;
-(double)_requestedPointSizeRatio;
-(CGImageRef)_imageForTemplateRendering:(char)arg1 withColorResolver:(/*^block*/id)arg2 ;
-(char)_containsKnockoutStylesFromRendition:(id)arg1 ;
-(void)_prepareDocumentfromRendition:(id)arg1 withColorResolver:(/*^block*/id)arg2 ;
-(id)_fillColorsOfStylesNamed:(id)arg1 inDocument:(CGSVGDocumentRef)arg2 ;
-(CGImageRef)_rasterizeFromRendition:(id)arg1 imageUsingScaleFactor:(double)arg2 forTargetSize:(CGSize)arg3 ;
-(void)_performWithLockedRendition:(/*^block*/id)arg1 ;
-(CGColorRef)_fillColorOfStyle:(CGSVGAttributeMapRef)arg1 ;
-(void)_setFillColor:(CGColorRef)arg1 ofStyle:(CGSVGAttributeMapRef)arg2 ;
-(id)makeLayerTintedWithColors:(id)arg1 ;
-(id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(unsigned long long)arg7 ;
-(double)baselineOffsetUnrounded;
-(double)capHeightUnrounded;
-(id)makeLayerWithColorResolver:(/*^block*/id)arg1 ;
-(CGRect)contentBoundsUnrounded;
-(CGSVGDocumentRef)referenceGlyph;
-(void)setFontMatchingScaleFactor:(double)arg1 ;
-(char)generatedImage;
-(char)layerAtIndexContainsColor:(unsigned long long)arg1 ;
-(CGImageRef)maskForLayerAtIndex:(unsigned long long)arg1 ;
-(CGImageRef)imageTintedWithColor:(CGColorRef)arg1 ;
-(id)makeLayerTintedWithColor:(CGColorRef)arg1 ;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 withTintColors:(id)arg3 ;
@end

