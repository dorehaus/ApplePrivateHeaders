/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSCGSWindowBuffer : NSObject {

	void* _bytes;
	unsigned long long _width;
	unsigned long long _height;
	long long _bytesPerRow;
	unsigned long long _bitsPerPixel;
	unsigned long long _bitsPerComponent;
	unsigned _bitmapInfo;
	CGColorSpaceRef _colorSpace;
	double _scale;

}

@property (readonly) void* bytes; 
@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (readonly) long long bytesPerRow; 
@property (readonly) unsigned long long bitsPerPixel; 
@property (readonly) unsigned long long bitsPerComponent; 
@property (readonly) unsigned bitmapInfo; 
@property (copy,readonly) CGColorSpaceRef colorSpace; 
@property (readonly) double scale; 
-(void)dealloc;
-(id)init;
-(void*)bytes;
-(unsigned long long)width;
-(unsigned long long)height;
-(long long)bytesPerRow;
-(double)scale;
-(CGColorSpaceRef)colorSpace;
-(unsigned long long)bitsPerPixel;
-(unsigned long long)bitsPerComponent;
-(unsigned)bitmapInfo;
-(id)initWithBytes:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bitsPerPixel:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bitmapInfo:(unsigned)arg7 colorSpace:(CGColorSpaceRef)arg8 scale:(double)arg9 ;
@end

