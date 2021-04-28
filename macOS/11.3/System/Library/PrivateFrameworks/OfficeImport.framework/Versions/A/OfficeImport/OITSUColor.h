/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSPasteboardReading.h>

@class NSColor, NSString;

@interface OITSUColor : NSObject <NSCopying, NSPasteboardReading> {

	CGColorRef mCGColor;
	unsigned long long mColorRGBSpace;

}

@property (readonly) double whiteComponent; 
@property (readonly) double cyanComponent; 
@property (readonly) double magentaComponent; 
@property (readonly) double yellowComponent; 
@property (readonly) double blackComponent; 
@property (readonly) CGColorSpaceRef CGColorSpace; 
@property (readonly) int CGColorSpaceModel; 
@property (readonly) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned long long colorRGBSpace; 
@property (nonatomic,readonly) double blueComponent; 
@property (nonatomic,readonly) double redComponent; 
@property (nonatomic,readonly) double greenComponent; 
@property (nonatomic,readonly) double alphaComponent; 
@property (nonatomic,readonly) NSColor * NSColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)redColor;
+(id)clearColor;
+(id)blackColor;
+(id)whiteColor;
+(id)colorWithCalibratedWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)readableTypesForPasteboard:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithDeviceRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithDeviceCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5 ;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)greenColor;
+(id)purpleColor;
+(id)blueColor;
+(id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)lightGrayColor;
+(id)colorWithDeviceWhite:(double)arg1 alpha:(double)arg2 ;
+(id)grayColor;
+(id)cyanColor;
+(id)yellowColor;
+(id)magentaColor;
+(id)orangeColor;
+(id)brownColor;
+(id)colorWithDeviceHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCatalogName:(id)arg1 colorName:(id)arg2 ;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithHexString:(id)arg1 ;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5 ;
+(id)colorWithNSColor:(id)arg1 ;
+(id)randomColor;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 ;
+(id)colorWithBGR:(unsigned)arg1 ;
+(id)colorWithSystemColorID:(int)arg1 ;
+(id)stringForSystemColorID:(int)arg1 ;
+(id)stringForColor:(id)arg1 ;
+(id)colorWithCsColour:(const CsColour*)arg1 ;
+(id)colorWithEshColor:(const EshColor*)arg1 ;
+(id)colorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 ;
+(id)colorWithBGRValue:(long long)arg1 ;
+(id)colorWithRGBValue:(long long)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)set;
-(CGColorRef)CGColor;
-(char)isOpaque;
-(double)cyanComponent;
-(double)magentaComponent;
-(double)yellowComponent;
-(double)blackComponent;
-(double)alphaComponent;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2 ;
-(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(CGColorSpaceRef)CGColorSpace;
-(void)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(void)getCyan:(double*)arg1 magenta:(double*)arg2 yellow:(double*)arg3 black:(double*)arg4 alpha:(double*)arg5 ;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)whiteComponent;
-(double)hueComponent;
-(double)saturationComponent;
-(double)brightnessComponent;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithHexString:(id)arg1 ;
-(id)hexString;
-(char)isBlack;
-(double)luminance;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5 ;
-(id)initWithPatternImage:(id)arg1 ;
-(id)initWithNSColor:(id)arg1 ;
-(id)initWithCGColor:(CGColorRef)arg1 colorSpace:(unsigned long long)arg2 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 ;
-(char)isEqualWithTolerance:(id)arg1 ;
-(unsigned long long)colorRGBSpace;
-(char)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2 ;
-(double)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(char)isAlmostEqualToColor:(id)arg1 ;
-(void)getRGBAComponents:(double*)arg1 ;
-(NSColor *)NSColor;
-(id)grayscaleColor;
-(id)invertedColor;
-(char)isNearlyWhite;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(SCD_Struct_OI65)ttColor;
-(id)newSolidColoredBitmap:(CGSize)arg1 ;
-(double)p_cmykComponentWithIndex:(unsigned char)arg1 ;
-(id)solidColoredPngImage;
-(int)CGColorSpaceModel;
-(unsigned)toBGR;
-(id)colorWithTintValue:(double)arg1 ;
-(id)colorWithShadeValue:(double)arg1 ;
-(CsColour)csColour;
-(EshColor)eshColor;
-(void)getRGBBytes:(char*)arg1 green:(char*)arg2 blue:(char*)arg3 ;
@end

