/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>

@interface SCNTextureOffscreenRenderingSource : SCNTextureSource {

	char _usesIOSurface;
	CGSize _framebufferSize;
	C3DFramebufferRef _framebuffer;

}
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)_bindFramebuffer:(C3DEngineContextRef)arg1 ;
-(void)_unbindFramebuffer:(C3DEngineContextRef)arg1 ;
-(void)_buildMipmaps:(C3DEngineContextRef)arg1 ;
-(C3DTextureRef)__prepareFramebufferWithSize:(CGSize)arg1 withEngineContext:(C3DEngineContextRef)arg2 textureSampler:(_C3DTextureSampler*)arg3 needsStencil:(char)arg4 ;
-(1)textureSize;
-(void)_createFramebufferWithEngineContext:(C3DEngineContextRef)arg1 size:(CGSize)arg2 ;
@end
