/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconFoundation.framework/Versions/A/IconFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconFoundation/IconFoundation-Structs.h>
@class IFImage, NSData, IFColor;

@interface IFGraphicsContext : NSObject {

	CGContextRef _cgContext;
	unsigned long long _preset;

}

@property (nonatomic,readonly) unsigned long long preset;              //@synthesize preset=_preset - In the implementation block
@property (nonatomic,readonly) CGContextRef cgContext;                 //@synthesize cgContext=_cgContext - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) IFImage * image; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,retain) IFColor * fillColor; 
@property (nonatomic,retain) IFColor * strokeColor; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) int blendMode; 
+(id)bitmapContextWithSize:(CGSize)arg1 scale:(double)arg2 preset:(unsigned long long)arg3 ;
-(id)initWithCGContext:(CGContextRef)arg1 preset:(unsigned long long)arg2 ;
-(void)drawCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)clipToMaskCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)drawCGImage:(CGImageRef)arg1 centeredInRect:(CGRect)arg2 ;
-(void)drawText:(id)arg1 fontName:(id)arg2 fontSize:(double)arg3 inRect:(CGRect)arg4 ;
-(void)drawSymbolImage:(id)arg1 centeredInRect:(CGRect)arg2 ;
-(id)imageFromRect:(CGRect)arg1 ;
-(CGContextRef)cgContext;
-(CGSize)size;
-(void)dealloc;
-(NSData *)data;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(CGAffineTransform)transform;
-(double)scale;
-(void)clear;
-(CGRect)bounds;
-(IFImage *)image;
-(void)setFillColor:(IFColor *)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)fillRect:(CGRect)arg1 ;
-(void)strokeRect:(CGRect)arg1 ;
-(IFColor *)fillColor;
-(IFColor *)strokeColor;
-(void)setStrokeColor:(IFColor *)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)preset;
-(void)popState;
-(void)pushState;
-(void)fillPath:(CGPathRef)arg1 ;
-(void)strokePath:(CGPathRef)arg1 ;
@end
