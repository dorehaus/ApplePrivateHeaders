/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVCaptureSession.h>

@interface AVCaptureMultiCamSession : AVCaptureSession {

	float _hardwareCost;
	float _systemPressureCost;

}

@property (nonatomic,readonly) float hardwareCost; 
@property (nonatomic,readonly) float systemPressureCost; 
+(char)isMultiCamSupported;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)canSetSessionPreset:(id)arg1 ;
-(char)_canAddInput:(id)arg1 failureReason:(id*)arg2 ;
-(void)_removeConnection:(id)arg1 ;
-(char)_canAddOutput:(id)arg1 failureReason:(id*)arg2 ;
-(char)_canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)startRunning;
-(float)hardwareCost;
-(float)systemPressureCost;
-(char)_addConnection:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2 ;
-(char)isOverCost:(id*)arg1 ;
-(void)_updateCosts;
-(void)_updateSystemPressureCost;
-(void)_updateHardwareCost;
-(id)_livePortSetsByDeviceInput;
-(unsigned)_computeMemoryUsageForOutputs;
-(float)_computeEncoderCostForOutputs;
-(id)_physicalDevicePowerInfoSet;
-(id)_constituentDeviceFormatFromVirtualDeviceFormat:(id)arg1 virtualDevice:(id)arg2 constituentDevice:(id)arg3 ;
@end

