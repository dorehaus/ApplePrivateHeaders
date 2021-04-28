/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/Versions/A/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DrawingKit/DrawingKit-Structs.h>
@interface DKGLUtilities : NSObject
+(void)initialize;
+(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
+(void)deleteTexture:(unsigned*)arg1 ;
+(void)deleteVBO:(unsigned*)arg1 ;
+(void)createTexture:(unsigned*)arg1 withImageName:(id)arg2 ofType:(id)arg3 ;
+(unsigned)compileShader:(id)arg1 ofType:(id)arg2 ;
+(void)createFBO:(unsigned*)arg1 depthRB:(unsigned*)arg2 texture:(unsigned*)arg3 width:(int)arg4 height:(int)arg5 format:(unsigned)arg6 ;
+(void)deleteFBO:(unsigned*)arg1 depthRB:(unsigned*)arg2 texture:(unsigned*)arg3 ;
+(void)createVBO:(unsigned*)arg1 size:(long long)arg2 data:(void*)arg3 usage:(unsigned)arg4 ;
+(void)createRepeatableTexture:(unsigned*)arg1 withImageName:(id)arg2 ofType:(id)arg3 ;
+(void)drawQuadAtX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4 ;
+(void)setProjectionMatrixForWidth:(float)arg1 height:(float)arg2 flipped:(char)arg3 matrix:(SCD_Struct_DK0*)arg4 ;
+(void)translateMatrix:(SCD_Struct_DK0*)arg1 byX:(float)arg2 Y:(float)arg3 result:(SCD_Struct_DK0*)arg4 ;
+(id)snapshotImageOfFrameBufferWithID:(unsigned)arg1 bufferSize:(CGSize)arg2 displayScale:(double)arg3 ;
+(id)createPlatformGLContext;
+(char)setCurrentGLContext:(id)arg1 ;
+(void)_postGLActiveNotification;
+(void)_postGLInactiveNotification;
+(char)gpuAvailable;
+(void)setCurrentClearColor;
@end

