/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVDepthDataInternal, NSArray, AVCameraCalibrationData;

@interface AVDepthData : NSObject {

	AVDepthDataInternal* _internal;

}

@property (readonly) NSArray * availableDepthDataTypes; 
@property (readonly) unsigned depthDataType; 
@property (readonly) CVBufferRef depthDataMap; 
@property (readonly) long long depthDataQuality; 
@property (getter=isDepthDataFiltered,readonly) char depthDataFiltered; 
@property (readonly) long long depthDataAccuracy; 
@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
+(void)initialize;
+(id)_allSupportedDepthDataPixelFormatTypes;
+(id)depthDataFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(float)depthBlurEffectSimulatedAperture;
-(id)depthBlurEffectRenderingParameters;
-(char)portraitScoreIsHigh;
-(float)portraitScore;
-(float)portraitLightingEffectStrength;
-(unsigned)depthDataType;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthMetadataDictionary:(id)arg2 ;
-(NSArray *)availableDepthDataTypes;
-(CVBufferRef)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned)arg1 ;
-(short)depthDataVersionMajor;
-(short)depthDataVersionMinor;
-(long long)depthDataQuality;
-(char)isDepthDataFiltered;
-(long long)depthDataAccuracy;
-(CVBufferRef)depthDataMap;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(CFStringRef)auxiliaryImageType;
-(id)depthDataByApplyingExifOrientation:(unsigned)arg1 ;
-(id)depthDataByConvertingToDepthDataType:(unsigned)arg1 ;
-(id)depthDataByReplacingDepthDataMapWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
@end

