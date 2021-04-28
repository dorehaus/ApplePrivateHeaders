/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNOpticalFlowGenerator : VNDetector
+(id)configurationOptionKeysForDetectorKey;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(id)_validatedImageBuffersFromOptions:(id)arg1 error:(id*)arg2 ;
-(optional<OpticalFlowOptions>)_validatedOpticalFlowOptions:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 error:(id*)arg4 ;
-(CVPixelBufferWrapper*)_createVectorResultPixelBufferWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 error:(id*)arg4 ;
-(id)_calculateLKTVectorResult:(CVPixelBufferWrapper*)arg1 fromPixelBuffer:(CVPixelBufferWrapper*)arg2 toPixelBuffer:(CVPixelBufferWrapper*)arg3 opticalFlowOptions:(const OpticalFlowOptions*)arg4 error:(id*)arg5 ;
-(id)_createOpticalFlowForPixelBuffer:(CVPixelBufferWrapper*)arg1 opticalFlowOptions:(const OpticalFlowOptions*)arg2 error:(id*)arg3 ;
-(id)_initializedLKTMetalContextAndReturnError:(id*)arg1 ;
@end

