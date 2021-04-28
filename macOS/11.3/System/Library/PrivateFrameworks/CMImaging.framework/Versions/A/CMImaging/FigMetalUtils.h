/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMImaging.framework/Versions/A/CMImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@interface FigMetalUtils : NSObject {

	id<MTLDevice> _device;

}

@property (nonatomic,readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1 ;
-(unsigned long long)computeLinearTextureStride:(unsigned long long)arg1 format:(unsigned long long)arg2 ;
-(id)texture2DFromBuffer:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned long long)arg4 offset:(unsigned long long)arg5 usage:(unsigned long long)arg6 ;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
@end

