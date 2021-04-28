/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface TXRTextureInfo : NSObject {

	unsigned long long _pixelFormat;
	unsigned long long _alphaInfo;
	 _dimensions;
	unsigned long long _mipmapLevelCount;
	unsigned long long _arrayLength;
	char _cubemap;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long alphaInfo;                     //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic)  dimensions;                                      //@synthesize dimensions=_dimensions - In the implementation block
@property (assign,nonatomic) unsigned long long mipmapLevelCount;              //@synthesize mipmapLevelCount=_mipmapLevelCount - In the implementation block
@property (assign,nonatomic) unsigned long long arrayLength;                   //@synthesize arrayLength=_arrayLength - In the implementation block
@property (assign,nonatomic) char cubemap;                                     //@synthesize cubemap=_cubemap - In the implementation block
@property (readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)arrayLength;
-(unsigned long long)pixelFormat;
-()dimensions;
-(char)cubemap;
-(void)setCubemap:(char)arg1 ;
-(void)setDimensions:;
-(unsigned long long)alphaInfo;
-(void)setAlphaInfo:(unsigned long long)arg1 ;
@end

