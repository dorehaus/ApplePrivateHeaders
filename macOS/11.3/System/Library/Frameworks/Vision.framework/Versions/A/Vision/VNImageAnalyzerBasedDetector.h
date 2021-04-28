/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class NSArray;

@interface VNImageAnalyzerBasedDetector : VNDetector {

	unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer>>* _imageAnalyzer;
	Geometry2D_size2D_ _networkRequiredInputImageSize;
	BOOL _networkUsesAnisotropicScaling;
	NSArray* _cachedSupportedClassificationIdentifiers;

}
+(id)configurationOptionKeysForDetectorKey;
-(id)modelName;
-(char)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(char)supportsProcessingDevice:(id)arg1 ;
-(id)supportedImageSizeSetForProcessingOptions:(id)arg1 ;
-(CGSize)inputImageSize;
-(id)_classificationLabelsNotProvidedError;
-(char)_getImageCropAndScaleOption:(unsigned long long*)arg1 fromOptions:(id)arg2 error:(id*)arg3 ;
-(char)_createImageAnalyzerAndReturnError:(id*)arg1 ;
-(char)_performAnalysis:(unsigned)arg1 onPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
-(id)modelPathAndReturnError:(id*)arg1 ;
-(char)configureImageAnalyzerOptions:(ImageAnalyzer_Options*)arg1 error:(id*)arg2 ;
-(unsigned)analysisPixelFormatType;
-(int)analysisImageProcessingImageType;
-(unsigned)analysisTypesForProcessOptions:(id)arg1 ;
-(id)observationsForLastAnalysisOfImageAnalyzer:(ImageAnalyzer*)arg1 processOptions:(id)arg2 requestRevision:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)providesSceneLabels;
-(id)sceneLabelsFileName;
-(id)sceneLabelsPathAndReturnError:(id*)arg1 ;
-(id)supportedClassificationIdentifiersAcceptedByBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(ImageAnalyzer*)arg1 identifierAcceptingBlock:(/*^block*/id)arg2 operationPointsProvider:(id)arg3 requestRevision:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)providesSegmentationLabels;
-(id)segmentationLabelsFileName;
-(id)segmentationLabelsPathAndReturnError:(id*)arg1 ;
@end

