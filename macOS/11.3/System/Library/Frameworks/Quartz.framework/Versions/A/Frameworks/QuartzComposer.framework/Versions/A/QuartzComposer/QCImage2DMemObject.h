/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCMemObject.h>

@class QCImageBuffer, QCPixelFormat;

@interface QCImage2DMemObject : QCMemObject {

	QCImageBuffer* _backing;
	QCPixelFormat* _format;
	unsigned long long _width;
	unsigned long long _height;
	/*function pointer*/void* _backingCallback;
	void* _backingInfo;
	void* _hostPtr;
	void** _unused3[4];

}

@property (readonly) unsigned long long pixelsWide;              //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long pixelsHigh;              //@synthesize height=_height - In the implementation block
@property (readonly) QCPixelFormat * pixelFormat;                //@synthesize format=_format - In the implementation block
@property (readonly) QCImageBuffer * imageBuffer; 
@property (readonly) QCImageBuffer * backing;                    //@synthesize backing=_backing - In the implementation block
-(void)finalize;
-(void)dealloc;
-(id)description;
-(QCPixelFormat *)pixelFormat;
-(unsigned long long)pixelsHigh;
-(unsigned long long)pixelsWide;
-(char)attached;
-(unsigned long long)byteSize;
-(QCImageBuffer *)imageBuffer;
-(QCImageBuffer *)backing;
-(id)initWithContext:(id)arg1 imageBuffer:(id)arg2 options:(id)arg3 ;
-(char)beginUpdateStream;
-(void)endUpdateStream;
-(id)initWithContext:(id)arg1 format:(id)arg2 hostPtr:(void*)arg3 releaseCallback:(/*function pointer*/void*)arg4 releaseInfo:(void*)arg5 pixelsWide:(unsigned long long)arg6 pixelsHigh:(unsigned long long)arg7 options:(id)arg8 ;
-(char)_readbackImage;
-(void)finalize_QCImage2DMemObject;
-(id)initWithContext:(id)arg1 format:(id)arg2 pixelsWide:(unsigned long long)arg3 pixelsHigh:(unsigned long long)arg4 options:(id)arg5 ;
@end

