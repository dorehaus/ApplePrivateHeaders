/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CIImage, AXMPixelBufferWrapper, NSURL;

@interface AXMPipelineContextInput : NSObject <NSSecureCoding> {

	long long _inputType;
	CIImage* _ciImage;
	AXMPixelBufferWrapper* _pixelBuffer;
	CGColorSpaceRef _extendedSRGBColorSpace;
	NSURL* _URL;
	CGSize _cachedImageURLSize;

}

@property (nonatomic,readonly) long long inputType; 
@property (nonatomic,readonly) CIImage * ciImage; 
@property (nonatomic,readonly) AXMPixelBufferWrapper * pixelBuffer; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGColorSpaceRef imageColorSpace; 
@property (nonatomic,readonly) CVBufferRef wrappedPixelBuffer; 
+(id)new;
+(char)supportsSecureCoding;
+(id)inputWithCIImage:(id)arg1 ;
+(id)inputWithPixelBuffer:(id)arg1 ;
+(id)inputWithURL:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(id)_initWithURL:(id)arg1 ;
-(AXMPixelBufferWrapper *)pixelBuffer;
-(long long)inputType;
-(CIImage *)ciImage;
-(CGColorSpaceRef)imageColorSpace;
-(id)_initWithCIImage:(id)arg1 ;
-(id)_initWithPixelBuffer:(id)arg1 ;
-(CGImageRef)createCGImageWithMetrics:(id)arg1 ;
-(CVBufferRef)wrappedPixelBuffer;
@end

