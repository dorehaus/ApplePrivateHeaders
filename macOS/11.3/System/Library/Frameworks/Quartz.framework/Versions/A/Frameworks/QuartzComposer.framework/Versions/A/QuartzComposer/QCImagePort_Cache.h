/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCImage, QCImageTextureBuffer, QCArray, NSAffineTransform, QCPatch;

@interface QCImagePort_Cache : NSObject {

	QCImage* _image;
	QCImageTextureBuffer* _texture;
	QCArray* _cachedTextures;
	SCD_Struct_QC4 _textureProviderMD5;
	CGRect _textureBounds;
	NSAffineTransform* _textureTransformation;
	SCD_Struct_QC18* _savedState;
	QCPatch* _patch;

}
-(void)dealloc;
-(id)_texture;
-(id)image;
-(id)initWithPatch:(id)arg1 ;
-(void)_clearCachedTextures;
-(void)updateWithImage:(id)arg1 ;
-(void)clearTexture;
-(void)setOnOpenGLContext:(id)arg1 unit:(unsigned)arg2 withBounds:(CGRect)arg3 transformation:(id)arg4 target:(unsigned)arg5 mipmappingLevels:(unsigned long long)arg6 matrix:(double*)arg7 ;
-(void)unsetOnOpenGLContext:(id)arg1 unit:(unsigned)arg2 ;
@end
