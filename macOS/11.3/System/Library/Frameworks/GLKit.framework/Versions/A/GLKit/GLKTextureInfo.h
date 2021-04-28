/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GLKit.framework/Versions/A/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GLKTextureInfo : NSObject <NSCopying> {

	unsigned name;
	unsigned target;
	unsigned width;
	unsigned height;
	unsigned depth;
	int alphaState;
	int textureOrigin;
	char containsMipmaps;
	unsigned mimapLevelCount;
	unsigned arrayLength;
	char lossyCompressedSource;

}

@property (readonly) unsigned name; 
@property (readonly) unsigned target; 
@property (readonly) unsigned width; 
@property (readonly) unsigned height; 
@property (readonly) unsigned depth; 
@property (readonly) int alphaState; 
@property (readonly) int textureOrigin; 
@property (readonly) char containsMipmaps; 
@property (readonly) unsigned mimapLevelCount; 
@property (readonly) unsigned arrayLength; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)name;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
-(unsigned)depth;
-(unsigned)arrayLength;
-(char)lossyCompressedSource;
-(int)alphaState;
-(int)textureOrigin;
-(char)containsMipmaps;
-(id)initWithTexture:(id)arg1 textureName:(unsigned)arg2 ;
-(id)initWithTextureTXR:(id)arg1 textureName:(unsigned)arg2 ;
-(unsigned)mimapLevelCount;
@end

