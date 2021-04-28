/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IKGLTextSubpixelShader : NSObject {

	void* _program;
	unsigned _framebufferTexture;
	int _viewportWidth;
	int _viewportHeight;
	unsigned _surfaceID;

}

@property (assign) unsigned framebufferTexture;              //@synthesize framebufferTexture=_framebufferTexture - In the implementation block
@property (assign) int viewportWidth;                        //@synthesize viewportWidth=_viewportWidth - In the implementation block
@property (assign) int viewportHeight;                       //@synthesize viewportHeight=_viewportHeight - In the implementation block
@property (assign) unsigned surfaceID;                       //@synthesize surfaceID=_surfaceID - In the implementation block
@property (readonly) void* program;                          //@synthesize program=_program - In the implementation block
-(id)initWithFragmentCode:(const char*)arg1 ;
-(unsigned)framebufferTexture;
-(void)setFramebufferTexture:(unsigned)arg1 ;
-(void)setViewportWidth:(int)arg1 ;
-(void)setViewportHeight:(int)arg1 ;
-(void)setSurfaceID:(unsigned)arg1 ;
-(unsigned)surfaceID;
-(void*)program;
-(int)viewportWidth;
-(int)viewportHeight;
@end

