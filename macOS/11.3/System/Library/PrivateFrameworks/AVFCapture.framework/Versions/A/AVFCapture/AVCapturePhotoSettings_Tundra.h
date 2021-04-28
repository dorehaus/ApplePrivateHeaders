/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCapturePhotoSettingsInternal_Tundra, NSDictionary, NSString, NSArray, NSURL;

@interface AVCapturePhotoSettings_Tundra : NSObject <NSCopying> {

	AVCapturePhotoSettingsInternal_Tundra* _internal;

}

@property (readonly) long long uniqueID; 
@property (copy,readonly) NSDictionary * format; 
@property (readonly) NSString * processedFileType; 
@property (readonly) unsigned rawPhotoPixelFormatType; 
@property (readonly) NSString * rawFileType; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoRedEyeReductionEnabled,nonatomic) char autoRedEyeReductionEnabled; 
@property (assign,nonatomic) long long photoQualityPrioritization; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) char autoStillImageStabilizationEnabled; 
@property (assign,getter=isAutoVirtualDeviceFusionEnabled,nonatomic) char autoVirtualDeviceFusionEnabled; 
@property (assign,getter=isAutoDualCameraFusionEnabled,nonatomic) char autoDualCameraFusionEnabled; 
@property (nonatomic,copy) NSArray * virtualDeviceConstituentPhotoDeliveryEnabledDevices; 
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) char dualCameraDualPhotoDeliveryEnabled; 
@property (assign,getter=isHighResolutionPhotoEnabled,nonatomic) char highResolutionPhotoEnabled; 
@property (assign,getter=isDepthDataDeliveryEnabled,nonatomic) char depthDataDeliveryEnabled; 
@property (assign,nonatomic) char embedsDepthDataInPhoto; 
@property (assign,getter=isDepthDataFiltered,nonatomic) char depthDataFiltered; 
@property (assign,getter=isCameraCalibrationDataDeliveryEnabled,nonatomic) char cameraCalibrationDataDeliveryEnabled; 
@property (assign,getter=isPortraitEffectsMatteDeliveryEnabled,nonatomic) char portraitEffectsMatteDeliveryEnabled; 
@property (assign,nonatomic) char embedsPortraitEffectsMatteInPhoto; 
@property (nonatomic,copy) NSArray * enabledSemanticSegmentationMatteTypes; 
@property (assign,nonatomic) char embedsSemanticSegmentationMattesInPhoto; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSURL * livePhotoMovieFileURL; 
@property (nonatomic,copy) NSString * livePhotoVideoCodecType; 
@property (nonatomic,copy) NSArray * livePhotoMovieMetadata; 
@property (nonatomic,readonly) NSArray * availablePreviewPhotoPixelFormatTypes; 
@property (nonatomic,copy) NSDictionary * previewPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableEmbeddedThumbnailPhotoCodecTypes; 
@property (nonatomic,copy) NSDictionary * embeddedThumbnailPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableRawEmbeddedThumbnailPhotoCodecTypes; 
@property (nonatomic,copy) NSDictionary * rawEmbeddedThumbnailPhotoFormat; 
@property (assign,getter=isAutoContentAwareDistortionCorrectionEnabled,nonatomic) char autoContentAwareDistortionCorrectionEnabled; 
+(long long)uniqueID;
+(char)validateVideoSettings:(id)arg1 allowingFeatures:(unsigned long long)arg2 validPixelKeys:(id)arg3 validPixelFormats:(id)arg4 validCodecKeys:(id)arg5 validCodecs:(id)arg6 exceptionReason:(id*)arg7 ;
+(id)photoSettings;
+(id)photoSettingsWithFormat:(id)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 ;
+(id)photoSettingsFromPhotoSettings:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)init;
-(long long)uniqueID;
-(NSDictionary *)format;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(char)isDepthDataFiltered;
-(char)isDepthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(char)arg1 ;
-(char)isCameraCalibrationDataDeliveryEnabled;
-(void)setCameraCalibrationDataDeliveryEnabled:(char)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setPhotoQualityPrioritization:(long long)arg1 ;
-(long long)flashMode;
-(long long)photoQualityPrioritization;
-(char)isAutoRedEyeReductionEnabled;
-(void)setAutoRedEyeReductionEnabled:(char)arg1 ;
-(NSString *)processedFileType;
-(id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 uniqueID:(long long)arg3 exceptionReason:(id*)arg4 ;
-(unsigned)formatFourCC;
-(unsigned)rawPhotoPixelFormatType;
-(NSString *)rawFileType;
-(char)isAutoStillImageStabilizationEnabled;
-(void)setAutoStillImageStabilizationEnabled:(char)arg1 ;
-(char)isAutoVirtualDeviceFusionEnabled;
-(void)setAutoVirtualDeviceFusionEnabled:(char)arg1 ;
-(char)isAutoDualCameraFusionEnabled;
-(void)setAutoDualCameraFusionEnabled:(char)arg1 ;
-(NSArray *)virtualDeviceConstituentPhotoDeliveryEnabledDevices;
-(void)setVirtualDeviceConstituentPhotoDeliveryEnabledDevices:(NSArray *)arg1 ;
-(char)isDualCameraDualPhotoDeliveryEnabled;
-(void)setDualCameraDualPhotoDeliveryEnabled:(char)arg1 ;
-(char)isHighResolutionPhotoEnabled;
-(void)setHighResolutionPhotoEnabled:(char)arg1 ;
-(char)embedsDepthDataInPhoto;
-(void)setEmbedsDepthDataInPhoto:(char)arg1 ;
-(void)setDepthDataFiltered:(char)arg1 ;
-(char)isPortraitEffectsMatteDeliveryEnabled;
-(void)setPortraitEffectsMatteDeliveryEnabled:(char)arg1 ;
-(char)embedsPortraitEffectsMatteInPhoto;
-(void)setEmbedsPortraitEffectsMatteInPhoto:(char)arg1 ;
-(NSArray *)enabledSemanticSegmentationMatteTypes;
-(void)setEnabledSemanticSegmentationMatteTypes:(NSArray *)arg1 ;
-(char)embedsSemanticSegmentationMattesInPhoto;
-(void)setEmbedsSemanticSegmentationMattesInPhoto:(char)arg1 ;
-(NSURL *)livePhotoMovieFileURL;
-(void)setLivePhotoMovieFileURL:(NSURL *)arg1 ;
-(NSString *)livePhotoVideoCodecType;
-(void)setLivePhotoVideoCodecType:(NSString *)arg1 ;
-(NSArray *)livePhotoMovieMetadata;
-(void)setLivePhotoMovieMetadata:(NSArray *)arg1 ;
-(NSArray *)availablePreviewPhotoPixelFormatTypes;
-(NSDictionary *)previewPhotoFormat;
-(void)setPreviewPhotoFormat:(NSDictionary *)arg1 ;
-(NSArray *)availableEmbeddedThumbnailPhotoCodecTypes;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(void)setEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(NSArray *)availableRawEmbeddedThumbnailPhotoCodecTypes;
-(NSDictionary *)rawEmbeddedThumbnailPhotoFormat;
-(void)setRawEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(char)isAutoContentAwareDistortionCorrectionEnabled;
-(void)setAutoContentAwareDistortionCorrectionEnabled:(char)arg1 ;
@end

