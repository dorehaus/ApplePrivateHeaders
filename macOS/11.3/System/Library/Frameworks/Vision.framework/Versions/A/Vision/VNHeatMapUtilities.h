/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNHeatMapUtilities : NSObject
+(char)smoothedFloat32ImageBuffer:(vImage_Buffer*)arg1 fromImageBuffer:(vImage_Buffer*)arg2 originalImageSize:(CGSize)arg3 sigmaX:(float)arg4 sigmaY:(float)arg5 nStd:(float)arg6 ;
+(float)maximumValueFromFloat32ImageBuffer:(vImage_Buffer*)arg1 ;
+(id)significantRegionsFromFloat32ImageBuffer:(vImage_Buffer*)arg1 threshold:(float)arg2 ;
+(id)significantRegionsFromFloat32ImageBuffer:(vImage_Buffer*)arg1 threshold:(float)arg2 relativeToMaximum:(char)arg3 ;
+(id)significantRegionsFromFloat32PixelBuffer:(CVBufferRef)arg1 threshold:(float)arg2 relativeToMaximum:(char)arg3 error:(id*)arg4 ;
+(id)boundingBoxesFromFloat32ImageBuffer:(vImage_Buffer*)arg1 thresholds:(id)arg2 error:(id*)arg3 ;
+(id)boundingBoxesFromFloat32ImageBuffer:(vImage_Buffer*)arg1 thresholds:(id)arg2 relativeToMaximum:(char)arg3 applySmoothing:(char)arg4 originalImageSize:(CGSize)arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id*)arg9 ;
+(id)boundingBoxesFromFloat32PixelBuffer:(CVBufferRef)arg1 thresholds:(id)arg2 relativeToMaximum:(char)arg3 applySmoothing:(char)arg4 originalImageSize:(CGSize)arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id*)arg9 ;
@end
