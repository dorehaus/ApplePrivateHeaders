/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/Versions/A/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <libobjc.A.dylib/CRCaptureSessionManager.h>

@protocol AVCaptureVideoDataOutputSampleBufferDelegate;
@class NSString, CALayer, AVCaptureSession, AVCaptureVideoPreviewLayer, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureInputPort;

@interface CRDefaultCaptureSessionManager : NSObject <CRCaptureSessionManager> {

	char _enableMetadataOutput;
	char _exposureAdjustmentInProgress;
	char _runningManualExposure;
	float _maxISO;
	float _minISO;
	int _exposureAdjustmentInProgressTimeoutCount;
	long long _cameraPosition;
	NSString* _cameraMode;
	long long _whiteBalanceMode;
	long long _focusMode;
	long long _exposureMode;
	long long _torchMode;
	id<AVCaptureVideoDataOutputSampleBufferDelegate> _captureSessionDelegate;
	NSString* _currentDeviceID;
	AVCaptureSession* _captureSession;
	AVCaptureVideoPreviewLayer* _avfPreviewLayer;
	AVCaptureDeviceInput* _deviceInput;
	AVCaptureVideoDataOutput* _captureVideoDataOutput;
	id _inputPortFormatObserver;
	AVCaptureInputPort* _inputPortFormatSender;
	SCD_Struct_CR8* _exposure_table;
	CGSize _cameraResolution;
	SCD_Struct_CR6 _highISOThresholdDuration;

}

@property (nonatomic,retain) AVCaptureSession * captureSession;                                          //@synthesize captureSession=_captureSession - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * avfPreviewLayer;                               //@synthesize avfPreviewLayer=_avfPreviewLayer - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * deviceInput;                                         //@synthesize deviceInput=_deviceInput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoDataOutput * captureVideoDataOutput;                          //@synthesize captureVideoDataOutput=_captureVideoDataOutput - In the implementation block
@property (retain) id inputPortFormatObserver;                                                           //@synthesize inputPortFormatObserver=_inputPortFormatObserver - In the implementation block
@property (assign,nonatomic,__weak) AVCaptureInputPort * inputPortFormatSender;                          //@synthesize inputPortFormatSender=_inputPortFormatSender - In the implementation block
@property (assign) float maxISO;                                                                         //@synthesize maxISO=_maxISO - In the implementation block
@property (assign) float minISO;                                                                         //@synthesize minISO=_minISO - In the implementation block
@property (assign) SCD_Struct_CR6 highISOThresholdDuration;                                              //@synthesize highISOThresholdDuration=_highISOThresholdDuration - In the implementation block
@property (assign) char exposureAdjustmentInProgress;                                                    //@synthesize exposureAdjustmentInProgress=_exposureAdjustmentInProgress - In the implementation block
@property (assign) int exposureAdjustmentInProgressTimeoutCount;                                         //@synthesize exposureAdjustmentInProgressTimeoutCount=_exposureAdjustmentInProgressTimeoutCount - In the implementation block
@property (assign) char runningManualExposure;                                                           //@synthesize runningManualExposure=_runningManualExposure - In the implementation block
@property (assign) SCD_Struct_CR8* exposure_table;                                                       //@synthesize exposure_table=_exposure_table - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                                                   //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,copy) NSString * cameraMode;                                                        //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign,nonatomic) long long whiteBalanceMode;                                                 //@synthesize whiteBalanceMode=_whiteBalanceMode - In the implementation block
@property (assign,nonatomic) long long focusMode;                                                        //@synthesize focusMode=_focusMode - In the implementation block
@property (assign,nonatomic) long long exposureMode;                                                     //@synthesize exposureMode=_exposureMode - In the implementation block
@property (assign,nonatomic) long long torchMode;                                                        //@synthesize torchMode=_torchMode - In the implementation block
@property (__weak) id<AVCaptureVideoDataOutputSampleBufferDelegate> captureSessionDelegate;              //@synthesize captureSessionDelegate=_captureSessionDelegate - In the implementation block
@property (nonatomic,readonly) CALayer * previewLayer; 
@property (retain) NSString * currentDeviceID;                                                           //@synthesize currentDeviceID=_currentDeviceID - In the implementation block
@property (assign) char enableMetadataOutput;                                                            //@synthesize enableMetadataOutput=_enableMetadataOutput - In the implementation block
@property (assign) CGSize cameraResolution;                                                              //@synthesize cameraResolution=_cameraResolution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isRunning;
-(void)setExposureMode:(long long)arg1 ;
-(long long)exposureMode;
-(void)stopRunning;
-(void)setCaptureSession:(AVCaptureSession *)arg1 ;
-(AVCaptureSession *)captureSession;
-(void)startRunning;
-(float)minISO;
-(float)maxISO;
-(void)setTorchMode:(long long)arg1 ;
-(char)isAdjustingFocus;
-(char)isFocusPointOfInterestSupported;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(long long)torchMode;
-(CGPoint)focusPointOfInterest;
-(CALayer *)previewLayer;
-(CGSize)cameraResolution;
-(void)setCameraResolution:(CGSize)arg1 ;
-(void)setCameraMode:(NSString *)arg1 ;
-(void)setCaptureSessionDelegate:(id<AVCaptureVideoDataOutputSampleBufferDelegate>)arg1 ;
-(long long)cameraPosition;
-(void)setCameraPosition:(long long)arg1 ;
-(void)setEnableMetadataOutput:(char)arg1 ;
-(NSString *)cameraMode;
-(void)setupCameraSession;
-(int)targetVideoFormat;
-(void)teardownCameraSession;
-(char)toggleCamera;
-(char)switchToCameraWithDeviceID:(id)arg1 ;
-(NSString *)currentDeviceID;
-(char)switchToCamera:(long long)arg1 ;
-(CGRect)previewVisibleRect;
-(void)highISOAdjustExposure;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(char)isPreviewVideoMirrored;
-(CGRect)convertCameraRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2 flipped:(char)arg3 ;
-(CGPoint)convertCameraPointOCR:(CGPoint)arg1 toLayer:(id)arg2 flipped:(char)arg3 ;
-(id)inputPortFormatObserver;
-(AVCaptureInputPort *)inputPortFormatSender;
-(void)setInputPortFormatObserver:(id)arg1 ;
-(void)changeCameraConfiguration;
-(AVCaptureDeviceInput *)deviceInput;
-(void)cacheCameraResolution:(id)arg1 ;
-(void)setInputPortFormatSender:(AVCaptureInputPort *)arg1 ;
-(id)captureDeviceWithPosition:(long long)arg1 ;
-(void)setupCameraSessionWithCaptureDevice:(id)arg1 ;
-(AVCaptureVideoDataOutput *)captureVideoDataOutput;
-(void)setDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setupHighISO:(id)arg1 ;
-(void)setAvfPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(AVCaptureVideoPreviewLayer *)avfPreviewLayer;
-(void)setCaptureVideoDataOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate>)captureSessionDelegate;
-(void)setCurrentDeviceID:(NSString *)arg1 ;
-(SCD_Struct_CR8*)exposure_table;
-(void)setExposure_table:(SCD_Struct_CR8*)arg1 ;
-(char)isRearCamera;
-(id)captureDeviceWithIdentifier:(id)arg1 ;
-(unsigned long long)cameraCount;
-(id)frontFacingCamera;
-(id)backFacingCamera;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(char)enableMetadataOutput;
-(void)setMaxISO:(float)arg1 ;
-(void)setMinISO:(float)arg1 ;
-(SCD_Struct_CR6)highISOThresholdDuration;
-(void)setHighISOThresholdDuration:(SCD_Struct_CR6)arg1 ;
-(char)exposureAdjustmentInProgress;
-(void)setExposureAdjustmentInProgress:(char)arg1 ;
-(int)exposureAdjustmentInProgressTimeoutCount;
-(void)setExposureAdjustmentInProgressTimeoutCount:(int)arg1 ;
-(char)runningManualExposure;
-(void)setRunningManualExposure:(char)arg1 ;
@end
