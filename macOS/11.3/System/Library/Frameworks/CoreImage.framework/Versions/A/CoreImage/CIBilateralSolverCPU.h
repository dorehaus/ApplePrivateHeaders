/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBilateralSolverCPU : NSObject {

	int _width;
	int _height;
	unsigned long long _maxVertices;
	float* _Dn_buf;
	float* _Dm_buf;
	float* _A_buf;
	float* _b_buf;
	float* _x_buf;
	float* _M_buf;
	float* _Sc_buf;
	float* _q_buf;
	float* _r_buf;
	float* _d_buf;
	char _useTrilinearInterpolation;

}

@property (assign,nonatomic) char useTrilinearInterpolation;              //@synthesize useTrilinearInterpolation=_useTrilinearInterpolation - In the implementation block
+(void)_computeAx:(id)arg1 A:(const float*)arg2 Dn:(const float*)arg3 lambda:(float)arg4 x:(const float*)arg5 output:(float*)arg6 ;
-(void)_doBistochastize:(id)arg1 nIterations:(int)arg2 ;
-(void)_doSolve:(id)arg1 t:(const CVBufferRef)arg2 c:(const CVBufferRef)arg3 x:(float*)arg4 lambda:(float)arg5 pcgMaxIterations:(int)arg6 ;
-(void)_pcg:(id)arg1 A:(const float*)arg2 lambda:(float)arg3 b:(const float*)arg4 x:(float*)arg5 M:(const float*)arg6 tol:(float)arg7 maxIterations:(int)arg8 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 maxVertices:(unsigned long long)arg3 ;
-(int)doSolveWithBilateralGridhash:(id)arg1 reference:(IOSurfaceRef)arg2 disparity:(CVBufferRef)arg3 confidence:(CVBufferRef)arg4 output:(CVBufferRef)arg5 lambda:(float)arg6 maxIterations:(int)arg7 ;
-(char)useTrilinearInterpolation;
-(void)setUseTrilinearInterpolation:(char)arg1 ;
-(void)dealloc;
@end

