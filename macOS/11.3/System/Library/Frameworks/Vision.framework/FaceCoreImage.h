/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/libfaceCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libfaceCore.dylib/libfaceCore.dylib-Structs.h>
@interface FaceCoreImage : NSObject {

	char* _rawDataBuffer;
	char* _alignedDataBuffer;
	char _freeWhenDone;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bytesPerRow;

}

@property (readonly) unsigned long long width;                    //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                   //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (readonly) char* alignedImageData; 
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)bytesPerRow;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(char*)alignedImageData;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(void*)arg4 freeWhenDone:(char)arg5 ;
@end
