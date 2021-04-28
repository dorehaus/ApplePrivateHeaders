/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@class NSString;

@interface VNMPImageData : NSObject {

	char _freeImageInDealloc;
	vImage_Buffer* _image;
	CVBufferRef _imageCVPixelBuffer;
	NSString* _imageFilePath;
	NSString* _externalImageId;
	long long _exifTimestamp;

}

@property (readonly) vImage_Buffer* image;                        //@synthesize image=_image - In the implementation block
@property (readonly) CVBufferRef imageCVPixelBuffer;              //@synthesize imageCVPixelBuffer=_imageCVPixelBuffer - In the implementation block
@property (retain) NSString * imageFilePath;                      //@synthesize imageFilePath=_imageFilePath - In the implementation block
@property (assign) char freeImageInDealloc;                       //@synthesize freeImageInDealloc=_freeImageInDealloc - In the implementation block
@property (readonly) NSString * externalImageId;                  //@synthesize externalImageId=_externalImageId - In the implementation block
@property (readonly) long long exifTimestamp;                     //@synthesize exifTimestamp=_exifTimestamp - In the implementation block
-(void)dealloc;
-(vImage_Buffer*)image;
-(NSString *)externalImageId;
-(long long)exifTimestamp;
-(NSString *)imageFilePath;
-(id)initWithVImage:(vImage_Buffer*)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4 ;
-(id)initWithVImage:(vImage_Buffer*)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4 ;
-(id)initWithCVPixelBufferImage:(CVBufferRef)arg1 externalImageId:(id)arg2 andExifTimestampString:(id)arg3 error:(id*)arg4 ;
-(id)initWithCVPixelBufferImage:(CVBufferRef)arg1 externalImageId:(id)arg2 andExifTimestampValue:(long long)arg3 error:(id*)arg4 ;
-(CVBufferRef)imageCVPixelBuffer;
-(void)setImageFilePath:(NSString *)arg1 ;
-(char)freeImageInDealloc;
-(void)setFreeImageInDealloc:(char)arg1 ;
@end

