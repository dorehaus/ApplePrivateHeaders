/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>
#import <libobjc.A.dylib/NUGLFramebufferAttachable.h>

@class NUPixelFormat, NUIOSurface;

@interface NUGLTexture : NUGLObject <NUGLFramebufferAttachable> {

	NUPixelFormat* _format;
	SCD_Struct_NU8 _size;

}

@property (readonly) char isSurface; 
@property (nonatomic,readonly) NUIOSurface * surface; 
@property (nonatomic,readonly) SCD_Struct_NU8 size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * format;              //@synthesize format=_format - In the implementation block
+(id)textureWithIOSurface:(id)arg1 ;
-(SCD_Struct_NU8)size;
-(id)init;
-(NUIOSurface *)surface;
-(NUPixelFormat *)format;
-(void)delete;
-(void)generate:(id)arg1 ;
-(id)initWithSize:(SCD_Struct_NU8)arg1 format:(id)arg2 ;
-(void)attachToFramebuffer:(id)arg1 atPoint:(unsigned)arg2 context:(id)arg3 ;
-(void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned)arg2 context:(id)arg3 ;
-(void)read:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)copyRect:(SCD_Struct_NU9)arg1 toBuffer:(id)arg2 atPoint:(SCD_Struct_NU8)arg3 context:(id)arg4 ;
-(void)ensure:(id)arg1 ;
-(id)newRenderDestination;
-(char)isSurface;
-(void)allocateStorage:(id)arg1 ;
-(void)write:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)copyRect:(SCD_Struct_NU9)arg1 fromBuffer:(id)arg2 atPoint:(SCD_Struct_NU8)arg3 context:(id)arg4 ;
-(void)copyRect:(SCD_Struct_NU9)arg1 fromTexture:(id)arg2 atPoint:(SCD_Struct_NU8)arg3 context:(id)arg4 ;
-(void)copyRect:(SCD_Struct_NU9)arg1 toTexture:(id)arg2 atPoint:(SCD_Struct_NU8)arg3 context:(id)arg4 ;
-(void)drawRect:(SCD_Struct_NU9)arg1 atPoint:(SCD_Struct_NU8)arg2 context:(id)arg3 ;
@end

