/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNFaceGeometryEstimator : VNDetector
+(const vector<int, std::__1::allocator<int>>*)allLandmarksPointsIndexes;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(char)_buildCalibrationMatrix:(id)arg1 calibrationMatrix:(float*)arg2 error:(id*)arg3 ;
@end

