/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageProvider.h>

@class CALayer, QCRegion, NSArray;

@interface QCProvider_CoreAnimation : QCImageProvider {

	CALayer* _layer;
	QCRegion* _domainOfDefinition;
	NSArray* _pixelFormats;
	NSArray* _textureFormats;

}
+(char)isCompatibleWithSource:(id)arg1 sourceMD5:(SCD_Struct_QC4*)arg2 ;
+(id)createProviderWithSource:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(CGColorSpaceRef)colorSpace;
-(char)hasAlpha;
-(id)sourceRepresentationType;
-(id)sourceRepresentation;
-(char)supportsCropping;
-(char)supportsTransformation;
-(id)domainOfDefinition;
-(id)nativePixelFormat;
-(id)supportedPixelBufferFormatsForManager:(id)arg1 ;
-(id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)supportedTextureBufferTargetsForManager:(id)arg1 ;
-(id)supportedTextureBufferFormatsForManager:(id)arg1 ;
-(id)createTextureBufferForManager:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(char)supportsColorMatching;
-(id)createOptimizedProviderWithTransformation:(id)arg1 cropping:(CGRect)arg2 ;
-(id)initWithCALayer:(id)arg1 options:(id)arg2 ;
@end

