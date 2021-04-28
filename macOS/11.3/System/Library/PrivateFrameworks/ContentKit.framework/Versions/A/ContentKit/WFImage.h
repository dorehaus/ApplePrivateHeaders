/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSImage, UIImage, NSURL, NSData, NSString, NSBundle;

@interface WFImage : NSObject <NSCopying, NSSecureCoding> {

	id _internalCGImage;
	id _internalImageSource;
	NSImage* _platformImage;
	char _allowsAnimated;
	unsigned _orientation;
	CGImageRef _CGImage;
	double _scale;
	unsigned long long _renderingMode;
	UIImage* _UIImage;
	long long _representationType;
	NSURL* _URL;
	NSData* _data;
	NSString* _name;
	NSBundle* _bundle;
	NSString* _symbolName;

}

@property (nonatomic,readonly) NSData * PNGRepresentation; 
@property (nonatomic,readonly) char isScreenshot; 
@property (nonatomic,readonly) CGImageSourceRef internalImageSource; 
@property (nonatomic,readonly) CGImageRef internalCGImage; 
@property (nonatomic,readonly) long long representationType;                      //@synthesize representationType=_representationType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSBundle * bundle;                            //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbolName;                        //@synthesize symbolName=_symbolName - In the implementation block
@property (nonatomic,readonly) char allowsAnimated;                               //@synthesize allowsAnimated=_allowsAnimated - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage;                                //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) unsigned long long renderingMode;                  //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,readonly) NSImage * platformImage; 
@property (nonatomic,readonly) UIImage * UIImage;                                 //@synthesize UIImage=_UIImage - In the implementation block
@property (nonatomic,readonly) NSImage * NSImage; 
@property (nonatomic,readonly) CGSize CGImageSize; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) CGSize sizeInPoints; 
+(char)supportsSecureCoding;
+(id)imageWithContentsOfURL:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)systemImageNamed:(id)arg1 pointSize:(double)arg2 scaleFactor:(double)arg3 rightToLeft:(char)arg4 appearanceName:(id)arg5 inCatalogs:(id)arg6 ;
+(id)systemImageNamed:(id)arg1 pointSize:(double)arg2 ;
+(id)systemImageNamed:(id)arg1 pointSize:(double)arg2 scaleFactor:(double)arg3 rightToLeft:(char)arg4 appearanceName:(id)arg5 ;
+(id)systemImageNamed:(id)arg1 pointSize:(double)arg2 inCatalogs:(id)arg3 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 scale:(double)arg3 ;
+(char)imageSizeIndicatesScreenshot:(CGSize)arg1 ;
+(id)applicationIconImageForBundleIdentifier:(id)arg1 format:(unsigned long long)arg2 ;
+(id)applicationIconImageForBundleIdentifier:(id)arg1 ;
+(id)documentIconImageForFileType:(id)arg1 ;
+(id)applicationIconImageForCalendarDate:(id)arg1 format:(unsigned long long)arg2 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 allowAnimated:(char)arg3 ;
+(id)imageWithDeviceScreenScaleImageData:(id)arg1 ;
+(id)imageWithPlatformImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)name;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(double)scale;
-(NSBundle *)bundle;
-(unsigned)orientation;
-(CGImageRef)CGImage;
-(NSString *)symbolName;
-(unsigned long long)renderingMode;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
-(UIImage *)UIImage;
-(NSImage *)NSImage;
-(NSData *)PNGRepresentation;
-(CGSize)sizeInPoints;
-(id)imageWithRenderingMode:(unsigned long long)arg1 ;
-(id)tintedImageWithColor:(id)arg1 ;
-(id)imageWithTintColor:(id)arg1 ;
-(char)isScreenshot;
-(id)initWithPlatformImage:(id)arg1 ;
-(CGSize)sizeInPixels;
-(NSImage *)platformImage;
-(id)resizedImageWithSizeInPoints:(CGSize)arg1 scale:(double)arg2 ;
-(id)resizedImageWithSizeInPoints:(CGSize)arg1 ;
-(CGImageRef)createNonRotatedCGImageRepresentation;
-(long long)representationType;
-(id)applicationIconImageWithFormat:(unsigned long long)arg1 ;
-(id)initWithRepresentationType:(long long)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 renderingMode:(unsigned long long)arg4 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 allowAnimated:(char)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 symbolName:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 name:(id)arg3 bundle:(id)arg4 ;
-(CGSize)CGImageSize;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 blendMode:(int)arg3 alpha:(double)arg4 ;
-(char)hasValidImage;
-(CGImageSourceRef)internalImageSource;
-(CGImageRef)internalCGImage;
-(CGAffineTransform)contentsTransformForDrawingWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(char)allowsAnimated;
-(void)drawInContext:(id)arg1 inRect:(CGRect)arg2 ;
@end

