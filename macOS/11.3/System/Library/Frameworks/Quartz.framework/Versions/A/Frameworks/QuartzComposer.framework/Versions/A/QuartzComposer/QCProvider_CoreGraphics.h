/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageProvider.h>

@class QCRegion, QCPixelFormat, NSArray;

@interface QCProvider_CoreGraphics : QCImageProvider {

	void* _source;
	unsigned long long _index;
	CGRect _bounds;
	QCRegion* _domainOfDefinition;
	CGColorSpaceRef _colorSpace;
	char _hasAlpha;
	QCPixelFormat* _pixelFormat;
	CGAffineTransform _transform;
	NSArray* _pixelFormats;
	SCD_Struct_QC4 _md5;
	double _imageWidth;
	double _imageHeight;
	CGImageRef _cachedImage;
	opaque_pthread_mutex_t _mutex;
	CGColorRef _backgroundColor;
	CFDictionaryRef _properties;

}
+(char)isCompatibleWithSource:(id)arg1 sourceMD5:(SCD_Struct_QC4*)arg2 ;
+(id)createProviderWithSource:(id)arg1 options:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(CGColorSpaceRef)colorSpace;
-(char)hasAlpha;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(CFDictionaryRef)imageProperties;
-(id)sourceRepresentationType;
-(id)sourceRepresentation;
-(char)supportsCropping;
-(char)supportsTransformation;
-(id)domainOfDefinition;
-(id)nativePixelFormat;
-(id)supportedPixelBufferFormatsForManager:(id)arg1 ;
-(id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(SCD_Struct_QC4)providerMD5;
-(char)supportsColorMatching;
-(id)createOptimizedProviderWithTransformation:(id)arg1 cropping:(CGRect)arg2 ;
-(CGAffineTransform*)imageTransform;
-(id)initWithNSImage:(id)arg1 options:(id)arg2 ;
-(id)initWithNSBitmapImageRep:(id)arg1 options:(id)arg2 ;
-(id)initWithCGSource:(void*)arg1 options:(id)arg2 ;
-(void)_finalize_QCProvider_CoreGraphics;
@end

