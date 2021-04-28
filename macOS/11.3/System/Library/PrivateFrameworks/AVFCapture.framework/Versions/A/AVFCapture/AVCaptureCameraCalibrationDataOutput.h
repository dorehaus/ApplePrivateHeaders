/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSString;

@interface AVCaptureCameraCalibrationDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureDataOutputDelegateCallbackHelper* _delegateCallbackHelper;
	AVWeakReference* _weakReference;
	char _alwaysDiscardsLateCameraCalibrationData;

}

@property (nonatomic,readonly) id<AVCaptureCameraCalibrationDataOutputDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (assign,nonatomic) char alwaysDiscardsLateCameraCalibrationData; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)new;
-(void)dealloc;
-(id)init;
-(id<AVCaptureCameraCalibrationDataOutputDelegate>)delegate;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(id)connectionMediaTypes;
-(char)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(void)setDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(char)alwaysDiscardsLateCameraCalibrationData;
-(void)setAlwaysDiscardsLateCameraCalibrationData:(char)arg1 ;
@end

