/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNRecognizeObjectsRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _imageCropAndScaleOption;
	char _useImageAnalyzerScaling;
	float _modelMinimumDetectionConfidence;
	float _modelNonMaximumSuppressionThreshold;

}

@property (assign) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
@property (assign) char useImageAnalyzerScaling;                            //@synthesize useImageAnalyzerScaling=_useImageAnalyzerScaling - In the implementation block
@property (assign) float modelMinimumDetectionConfidence;                   //@synthesize modelMinimumDetectionConfidence=_modelMinimumDetectionConfidence - In the implementation block
@property (assign) float modelNonMaximumSuppressionThreshold;               //@synthesize modelNonMaximumSuppressionThreshold=_modelNonMaximumSuppressionThreshold - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(char)useImageAnalyzerScaling;
-(void)setUseImageAnalyzerScaling:(char)arg1 ;
-(float)modelMinimumDetectionConfidence;
-(void)setModelMinimumDetectionConfidence:(float)arg1 ;
-(float)modelNonMaximumSuppressionThreshold;
-(void)setModelNonMaximumSuppressionThreshold:(float)arg1 ;
@end
