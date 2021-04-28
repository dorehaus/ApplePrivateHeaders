/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNTorsoprintGenerator : VNEspressoModelFileBasedDetector
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
+(CGSize)_torsoprintInputImageSizeForFaceOrientation:(int)arg1 ;
+(CGSize)_torsoprintDescriptorSize;
+(float)_minimumTorsoInsideInputImageThreshold;
+(float)_magnifiedBBoxScaleFactor;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(char)supportsProcessingDevice:(id)arg1 ;
-(char)_runTorsoprintModelOnImageBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(char)_calculateTorsoBBoxFromFaceBBox:(CGRect)arg1 insideImageWithSize:(CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(CGRect*)arg4 error:(id*)arg5 ;
@end

