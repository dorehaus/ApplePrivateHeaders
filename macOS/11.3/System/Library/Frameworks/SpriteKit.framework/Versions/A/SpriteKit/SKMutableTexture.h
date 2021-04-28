/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKTexture.h>

@interface SKMutableTexture : SKTexture {

	IOSurfaceRef _ioSurface;
	char _ioSurfaceBacked;
	CGSize _textureSize;
	void* _pixelData;
	unsigned long long _pixelDataLength;
	int _pixelFormat;

}
+(id)mutableTextureWithSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithSize:(CGSize)arg1 ;
-(shared_ptr<jet_texture>*)_backingTexture;
-(id)initWithSize:(CGSize)arg1 ioSurfaceBacked:(char)arg2 pixelFormat:(int)arg3 ;
-(id)initWithSize:(CGSize)arg1 pixelFormat:(int)arg2 ;
-(void)modifyPixelDataWithBlock:(/*^block*/id)arg1 ;
@end

