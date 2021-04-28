/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDevice.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceControlRequestQueue, AVWeakReference, NSMutableArray, NSMutableDictionary, AVCaptureSystemPressureState, NSData;

@interface AVCaptureFigVideoDevice : AVCaptureDevice {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _fcsAttributes;
	NSObject*<OS_dispatch_queue> _devicePropsQueue;
	NSString* _fcsUID;
	long long _position;
	NSString* _localizedName;
	NSArray* _formats;
	AVCaptureDeviceFormat* _activeFormat;
	AVCaptureDeviceFormat* _activeDepthDataFormat;
	NSString* _activeSessionPreset;
	SCD_Struct_AV0 _activeDepthDataMinFrameDuration;
	SCD_Struct_AV0 _videoMinFrameDurationOverride;
	id _videoMinFrameDurationOverrideOwner;
	SCD_Struct_AV0 _activeMinFrameDuration;
	char _activeMinFrameDurationSetByClient;
	SCD_Struct_AV0 _activeMaxFrameDuration;
	char _activeMaxFrameDurationSetByClient;
	char _cachesFigCaptureSourceConfigurationChanges;
	long long _focusMode;
	CGPoint _focusPointOfInterest;
	float _lensPositionKVO;
	char _adjustingFocus;
	long long _autoFocusRangeRestriction;
	char _smoothAutoFocusEnabled;
	char _cameraOption9;
	char _cameraOption10;
	CGRect _cameraFaceResult29;
	char _cameraFaceResult30;
	long long _exposureMode;
	SCD_Struct_AV0 _exposureDurationKVO;
	float _ISOKVO;
	float _exposureTargetBias;
	float _exposureTargetOffsetKVO;
	CGPoint _exposurePointOfInterest;
	SCD_Struct_AV0 _activeMaxExposureDuration;
	SCD_Struct_AV0 _activeMaxExposureDurationClientOverride;
	char _adjustingExposure;
	char _waitingForExposureAdjustmentBeforeLocking;
	long long _wbMode;
	SCD_Struct_AV35 _deviceWhiteBalanceGainsKVO;
	SCD_Struct_AV35 _grayWorldDeviceWhiteBalanceGainsKVO;
	char _adjustingWB;
	unsigned long long _wbCalibrationCount;
	SCD_Struct_AV36* _wbCalibrationTemperatures;
	double* _wbCalibrationMatrices;
	double _wbLastPredictedTemp;
	double _wbSeedTemp;
	char _wbSeedEnabled;
	unsigned long long _wbTemperatureIterations;
	char _providesStortorgetMetadata;
	char _automaticallyAdjustsImageControlMode;
	AVCaptureDeviceControlRequestQueue* _manualFocusControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _biasedExposureControlRequests;
	AVCaptureDeviceControlRequestQueue* _manualWhiteBalanceControlRequests;
	SCD_Struct_AV0 _lastCustomExposureDuration;
	float _lastCustomExposureISO;
	long long _imageControlMode;
	long long _flashMode;
	char _avcaptureDeviceAutoFlashEnabled;
	char _photoOutputFlashSceneEnabled;
	char _flashActive;
	char _flashSceneDetectedForPhotoOutput;
	long long _digitalFlashMode;
	NSDictionary* _digitalFlashSceneForPhotoOutput;
	char _flashAvailable;
	long long _torchMode;
	char _torchActive;
	float _torchLevel;
	char _torchAvailable;
	char _isConnected;
	char _isSuspended;
	char _isInUseByAnotherApplication;
	char _subjectMonitoringEnabled;
	char _faceDetectionDrivenImageProcessingEnabled;
	CGRect _faceRectangle;
	int _faceRectangleAngle;
	char _automaticallyAdjustsVideoHDREnabled;
	char _videoHDREnabled;
	char _videoHDRSuspended;
	char _HDRSceneDetectedForPhotoOutput;
	char _isStillImageStabilizationScene;
	long long _activeColorSpace;
	float _videoZoomFactor;
	float _videoZoomRampTarget;
	int _videoZoomRampCounter;
	float _videoZoomRampAcceleration;
	double _minAvailableVideoZoomFactor;
	double _maxAvailableVideoZoomFactor;
	char _depthDataDeliveryEnabled;
	char _cameraCalibrationDataDeliveryEnabled;
	long long _shallowDepthOfFieldEffectStatus;
	NSString* _bravoCameraSelectionBehavior;
	AVWeakReference* _weakReference;
	NSMutableArray* _captureSourceSupportedMetadata;
	NSDictionary* _supportedOptionalFaceDetectionFeatures;
	char _eyeDetectionEnabled;
	char _eyeClosedDetectionEnabled;
	char _smileDetectionEnabled;
	NSArray* _availableBoxedMetadataFormatDescriptions;
	NSDictionary* _sessionPresetCompressionSettings;
	NSDictionary* _h264EncoderLimitations;
	NSDictionary* _hevcEncoderSettings;
	NSObject*<OS_dispatch_queue> _observedHighFrequencyPropertiesQueue;
	NSMutableDictionary* _observedHighFrequencyPropertyCounts;
	NSMutableDictionary* _propertyToFigCaptureSourcePropertyMap;
	NSMutableDictionary* _cachedFigCaptureSourceProperties;
	AVCaptureSystemPressureState* _systemPressureState;
	int _highestSystemPressureLevelEncountered;
	char _lowLightVideoCaptureEnabled;
	char _spatialOverCaptureEnabled;
	char _nonDestructiveCropEnabled;
	long long _nonDestructiveCropAspectRatio;
	char _geometricDistortionCorrectionEnabled;
	char _globalToneMappingEnabled;
	char _variableFrameRateVideoCaptureEnabled;
	long long _timeOfFlightProjectorMode;
	NSData* _cameraPoseMatrix;
	unsigned long long _degradedCaptureQualityFactors;
	char _degradedCaptureQualityFactorsNeedInitialization;
	char _walletDegradesCaptureQuality;
	char _centerStageSupported;
	char _centerStageActive;

}
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_devices;
+(id)_devicesWithPriorRegisteredDevices:(id)arg1 ;
+(id)_newFigCaptureSources;
+(char)_cameraAccessIsEnabled;
+(void)_reconnectDevices:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)localizedName;
-(id)uniqueID;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(char)isSuspended;
-(long long)position;
-(char)isConnected;
-(void)setActiveColorSpace:(long long)arg1 ;
-(long long)activeColorSpace;
-(id)deviceType;
-(id)manufacturer;
-(float)focalLength;
-(void)setExposureMode:(long long)arg1 ;
-(long long)exposureMode;
-(float)exposureTargetOffset;
-(id)modelID;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(id)activeFormat;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(char)isRampingVideoZoom;
-(id)formats;
-(SCD_Struct_AV0)exposureDuration;
-(float)ISO;
-(float)exposureTargetBias;
-(char)isVideoStabilizationSupported;
-(SCD_Struct_AV0)activeVideoMinFrameDuration;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(SCD_Struct_AV0)activeVideoMaxFrameDuration;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(char)isCameraIntrinsicMatrixDeliverySupported;
-(char)wideAngleCameraSourcesFromUltraWide;
-(id)activeDepthDataFormat;
-(char)supportsAVCaptureSessionPreset:(id)arg1 ;
-(char)isInUseByAnotherApplication;
-(char)hasMediaType:(id)arg1 ;
-(id)availableBoxedMetadataFormatDescriptions;
-(char)lockForConfiguration:(id*)arg1 ;
-(void)setVideoMinFrameDurationOverride:(SCD_Struct_AV0)arg1 forOwner:(id)arg2 ;
-(void)unlockForConfiguration;
-(void)resetVideoMinFrameDurationOverrideForOwner:(id)arg1 ;
-(OpaqueCMClockRef)deviceClock;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(SCD_Struct_AV14)maxH264PhotoDimensions;
-(SCD_Struct_AV14)maxH264VideoDimensions;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(int)minMacroblocksForHighProfileAbove30fps;
-(char)usesQuantizationScalingMatrix_H264_Steep_16_48;
-(int)hevcTurboModeVersion;
-(char)hevcAllowBFramesForHighCTUCount;
-(char)isHEVCRelaxedAverageBitRateTargetSupported;
-(char)isHEVCSupported;
-(char)isHEVCPreferred;
-(char)isLockedForConfiguration;
-(char)isFlashModeSupported:(long long)arg1 ;
-(char)isTorchModeSupported:(long long)arg1 ;
-(void)setActiveFormat:(id)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setTorchMode:(long long)arg1 ;
-(char)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(void)setVideoZoomFactor:(double)arg1 ;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(void)cancelVideoZoomRamp;
-(void)setActiveMaxExposureDuration:(SCD_Struct_AV0)arg1 ;
-(char)isAdjustingFocus;
-(char)isAdjustingExposure;
-(char)isAdjustingWhiteBalance;
-(char)isFocusModeSupported:(long long)arg1 ;
-(char)isFocusPointOfInterestSupported;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(char)isExposureModeSupported:(long long)arg1 ;
-(char)isExposurePointOfInterestSupported;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(char)isWhiteBalanceModeSupported:(long long)arg1 ;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(void)setDigitalFlashMode:(long long)arg1 ;
-(long long)torchMode;
-(long long)flashMode;
-(long long)digitalFlashMode;
-(char)isSpatialOverCaptureEnabled;
-(char)isAutoRedEyeReductionSupported;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 allowSendingWorkToMainThread:(char)arg2 ;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(char)hasFlash;
-(char)hasTorch;
-(id)_getFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(id)_copyFormatsArray;
-(id)_recommendedFrameRateRangeForVideoFormat:(id)arg1 depthFormat:(id)arg2 figSystemPressureLevel:(int)arg3 ;
-(char)isGeometricDistortionCorrectionSupported;
-(void)_incrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_decrementObserverCountForHighFrequencyProperty:(id)arg1 ;
-(void)_updateFigCaptureSourceObserverCounts;
-(int)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 ;
-(void)_drainManualControlRequestQueues;
-(int)figCaptureSourceDeviceType;
-(char)isFaceDetectionSupported;
-(char)isObjectDetectionSupported;
-(char)isMachineReadableCodeDetectionSupported;
-(void)_setActiveFormat:(id)arg1 resetVideoZoomFactorAndMinMaxFrameDurations:(char)arg2 sessionPreset:(id)arg3 ;
-(char)_isCenterStageActiveForEnabled:(char)arg1 ;
-(void)_setDigitalFlashModeInternal:(long long)arg1 ;
-(void)_setGlobalToneMappingEnabledInternal:(char)arg1 ;
-(void)_setMinAvailableVideoZoomFactor:(double)arg1 ;
-(void)_setMaxAvailableVideoZoomFactor:(double)arg1 ;
-(void)setNonDestructiveCropAspectRatio:(long long)arg1 ;
-(void)_setShallowDepthOfFieldEffectStatus:(long long)arg1 ;
-(void)setActiveDepthDataMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(int)_setFigCaptureSourceProperty:(CFStringRef)arg1 withValue:(id)arg2 cacheOnly:(char)arg3 ;
-(int)_setActiveVideoMinFrameDurationInternal:(SCD_Struct_AV0)arg1 ;
-(int)_setActiveVideoMaxFrameDurationInternal:(SCD_Struct_AV0)arg1 ;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)isAutoFocusRangeRestrictionSupported;
-(char)isSmoothAutoFocusSupported;
-(int)_setFocusWithMode:(long long)arg1 lensPosition:(float)arg2 requestID:(int)arg3 ;
-(char)_hasKeyValueObserversForHighFrequencyProperty:(id)arg1 ;
-(char)isLockingFocusWithCustomLensPositionSupported;
-(void)_handleManualControlCompletionForRequestQueue:(id)arg1 withPayload:(id)arg2 ;
-(int)_setExposureWithMode:(long long)arg1 duration:(SCD_Struct_AV0)arg2 ISO:(float)arg3 requestID:(int)arg4 newMaxFrameDuration:(SCD_Struct_AV0*)arg5 ;
-(float)minExposureTargetBias;
-(float)maxExposureTargetBias;
-(int)_setWhiteBalanceWithMode:(long long)arg1 gains:(SCD_Struct_AV35)arg2 requestID:(int)arg3 ;
-(char)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
-(float)maxWhiteBalanceGain;
-(char)_ensureWhiteBalanceCalibrationUnpacked;
-(double)_whiteBalanceMixingFactorForTemperature:(double)arg1 ;
-(SCD_Struct_AV35)deviceWhiteBalanceGainsForTemperatureAndTintValues:(SCD_Struct_AV36)arg1 ;
-(double)_predictedTempForGains:(SCD_Struct_AV35)arg1 ;
-(SCD_Struct_AV36)_chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV35)arg1 atMix:(double)arg2 ;
-(SCD_Struct_AV35)_deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV36)arg1 temperature:(double)arg2 ;
-(SCD_Struct_AV36)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV35)arg1 ;
-(void)_setFlashActive:(char)arg1 ;
-(int)_setTorchMode:(long long)arg1 withLevel:(float)arg2 ;
-(char)isImageControlModeSupported:(long long)arg1 ;
-(char)isDiagnosticsTestSupported:(id)arg1 ;
-(void)_rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 duration:(double)arg3 rampType:(int)arg4 ;
-(void)_setVideoZoomFactor:(double)arg1 ;
-(void)_updateCenterStageActiveForEnabled:(char)arg1 updateDependentProperties:(char)arg2 ;
-(char)isCenterStageActive;
-(char)automaticallyAdjustsVideoHDREnabled;
-(void)_resetVideoHDRSuspended;
-(char)isVideoHDREnabled;
-(char)isVideoHDRSuspended;
-(id)_supportedOptionalFaceDetectionFeaturesDictionary;
-(char)isEyeDetectionSupported;
-(int)_setFaceDetectionFeatureEnabled:(char)arg1 enabledState:(char*)arg2 ;
-(char)isEyeClosedDetectionSupported;
-(char)isSmileDetectionSupported;
-(id)_faceDetectionConfigurationDictionary;
-(char)isTimeOfFlightProjectorModeSupported:(long long)arg1 ;
-(long long)timeOfFlightProjectorMode;
-(void)_initDegradedCaptureQualityFactors;
-(char)isNonDestructiveCropEnabled;
-(void)_restoreFigCaptureSourceProperties;
-(void)_setAdjustingFocus:(char)arg1 ;
-(void)_setAdjustingExposure:(char)arg1 ;
-(void)_setAdjustingWhiteBalance:(char)arg1 ;
-(void)_setFlashSceneDetectedForPhotoOutput:(char)arg1 ;
-(void)_setHDRSceneDetectedForPhotoOutput:(char)arg1 ;
-(void)_setIsStillImageStabilizationScene:(char)arg1 ;
-(void)_setDigitalFlashSceneForPhotoOutput:(id)arg1 ;
-(void)_setFlashAvailable:(char)arg1 ;
-(void)_setTorchActive:(char)arg1 ;
-(void)_setTorchAvailable:(char)arg1 ;
-(void)_setTorchLevel:(float)arg1 ;
-(void)_setImageControlMode:(long long)arg1 ;
-(void)_setBravoCameraSelectionBehavior:(id)arg1 ;
-(void)_drainManualControlRequestQueue:(id)arg1 ;
-(int)_orderInDevicesArray;
-(char)_isAppleManufacturer;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(void)setActiveDepthDataFormat:(id)arg1 ;
-(SCD_Struct_AV0)activeDepthDataMinFrameDuration;
-(char)isActiveVideoMinFrameDurationSet;
-(char)isActiveVideoMaxFrameDurationSet;
-(SCD_Struct_AV0)activeMaxExposureDurationClientOverride;
-(char)appliesSessionPresetMaxIntegrationTimeOverrideToActiveFormat;
-(void)setCachesFigCaptureSourceConfigurationChanges:(char)arg1 ;
-(char)cachesFigCaptureSourceConfigurationChanges;
-(char)supportsMultiCamCaptureWithDevice:(id)arg1 ;
-(id)constituentDeviceWithDeviceType:(id)arg1 ;
-(char)isConstituentPhotoCalibrationDataSupported;
-(int)powerConsumptionAt30FPSForOISMode:(int)arg1 ;
-(char)isLowLightVideoCaptureEnabled;
-(void)setLowLightVideoCaptureEnabled:(char)arg1 ;
-(char)isVariableFrameRateVideoCaptureEnabled;
-(void)setVariableFrameRateVideoCaptureEnabled:(char)arg1 ;
-(void)_setConnected:(char)arg1 ;
-(CGPoint)focusPointOfInterest;
-(long long)autoFocusRangeRestriction;
-(void)setAutoFocusRangeRestriction:(long long)arg1 ;
-(float)lensPosition;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isSmoothAutoFocusEnabled;
-(void)setSmoothAutoFocusEnabled:(char)arg1 ;
-(float)lensAperture;
-(float)ISODigitalThreshold;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGPoint)exposurePointOfInterest;
-(SCD_Struct_AV0)activeMaxExposureDuration;
-(char)isGlobalToneMappingEnabled;
-(void)setGlobalToneMappingEnabled:(char)arg1 ;
-(SCD_Struct_AV35)deviceWhiteBalanceGains;
-(SCD_Struct_AV35)grayWorldDeviceWhiteBalanceGains;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV35)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_whiteBalanceTemperatureForMixingFactor:(double)arg1 ;
-(char)_isWBSeedEnabled;
-(void)_setWBSeedEnabled:(char)arg1 ;
-(unsigned long long)_wbTemperatureIterations;
-(SCD_Struct_AV35)deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV36)arg1 ;
-(SCD_Struct_AV36)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV35)arg1 ;
-(char)isFlashActive;
-(char)isFlashSceneDetectedForPhotoOutput;
-(char)isFlashAvailable;
-(char)_isFlashScene;
-(char)isTorchActive;
-(float)torchLevel;
-(char)isTorchAvailable;
-(char)isSubjectAreaChangeMonitoringEnabled;
-(void)setSubjectAreaChangeMonitoringEnabled:(char)arg1 ;
-(char)providesStortorgetMetadata;
-(void)setProvidesStortorgetMetadata:(char)arg1 ;
-(char)automaticallyAdjustsImageControlMode;
-(void)setAutomaticallyAdjustsImageControlMode:(char)arg1 ;
-(long long)imageControlMode;
-(void)setImageControlMode:(long long)arg1 ;
-(id)runDiagnosticsWithTestType:(id)arg1 ;
-(char)isFaceDetectionDuringVideoPreviewSupported;
-(char)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(char)arg1 ;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(char)isHDRSceneDetectedForPhotoOutput;
-(char)_isHighDynamicRangeScene;
-(char)isStillImageStabilizationScene;
-(char)_isStillImageStabilizationScene;
-(long long)_digitalFlashStatus;
-(id)_digitalFlashExposureTimes;
-(id)digitalFlashSceneForPhotoOutput;
-(void)_setPhotoSettingsForSceneMonitoring:(id)arg1 ;
-(float)timeLapseCaptureRate;
-(void)setTimeLapseCaptureRate:(float)arg1 ;
-(float)videoZoomRampAcceleration;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(double)videoZoomFactor;
-(void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2 ;
-(double)dualCameraSwitchOverVideoZoomFactor;
-(double)minAvailableVideoZoomFactor;
-(id)virtualDeviceSwitchOverVideoZoomFactors;
-(double)maxAvailableVideoZoomFactor;
-(char)isGeometricDistortionCorrectionEnabled;
-(void)setGeometricDistortionCorrectionEnabled:(char)arg1 ;
-(id)cameraPoseMatrix;
-(char)isCinematicFramingActive;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(char)arg1 ;
-(void)setVideoHDREnabled:(char)arg1 ;
-(void)_setVideoHDREnabled:(char)arg1 ;
-(void)setVideoHDRSuspended:(char)arg1 ;
-(char)isWideColorSupported;
-(char)isPreviewQualityAdjustedPhotoFilterRenderingSupported;
-(char)isSISSupported;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(char)arg1 ;
-(char)isLensStabilizationSupported;
-(id)systemPressureState;
-(long long)shallowDepthOfFieldEffectStatus;
-(char)_isDepthDataDeliveryEnabled;
-(void)_setDepthDataDeliveryEnabled:(char)arg1 ;
-(void)_setCameraCalibrationDataDeliveryEnabled:(char)arg1 ;
-(id)supportedMetadataObjectIdentifiers;
-(void)setEyeDetectionEnabled:(char)arg1 ;
-(void)setEyeClosedDetectionEnabled:(char)arg1 ;
-(void)setSmileDetectionEnabled:(char)arg1 ;
-(char)eyeDetectionEnabled;
-(char)eyeClosedDetectionEnabled;
-(char)smileDetectionEnabled;
-(id)deviceFormatForSessionPreset:(id)arg1 videoFormat:(unsigned)arg2 ;
-(char)isHEIFSupported;
-(id)bravoCameraSelectionBehavior;
-(void)setTimeOfFlightProjectorMode:(long long)arg1 ;
-(long long)timeOfFlightBankCount;
-(unsigned long long)degradedCaptureQualityFactors;
-(void)setSpatialOverCaptureEnabled:(char)arg1 ;
-(void)setNonDestructiveCropEnabled:(char)arg1 ;
-(long long)nonDestructiveCropAspectRatio;
@end
