/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureVideoPreviewLayer.h>

@class CALayer;

@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer {

	os_unfair_lock_s _primaryCaptureRectLock;
	CGPoint _primaryCaptureRectCenterPoint;
	double _primaryCaptureRectAspectRatio;
	long long _primaryCaptureRectUniqueID;
	char _havePendingPrimaryCaptureRectChange;
	CGRect _primaryCaptureRect;
	CGRect _overCaptureRect;
	CGSize _contentSize;
	char _primaryAndOverCaptureCompositingEnabled;
	long long _overCaptureStatus;
	char _isPresentationLayer;
	char _automaticallyDimsOverCaptureRegion;
	CALayer* _topDimmingOverlay;
	CALayer* _bottomDimmingOverlay;
	double _lastAspectCenterUpdateTime;

}

@property (nonatomic,readonly) CGPoint primaryCaptureRectCenterPoint; 
@property (nonatomic,readonly) double primaryCaptureRectAspectRatio; 
@property (nonatomic,readonly) CGRect primaryCaptureRect;                                                                                //@synthesize primaryCaptureRect=_primaryCaptureRect - In the implementation block
@property (nonatomic,readonly) CGRect overCaptureRect;                                                                                   //@synthesize overCaptureRect=_overCaptureRect - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,getter=isPrimaryAndOverCaptureCompositingEnabled,nonatomic) char primaryAndOverCaptureCompositingEnabled; 
@property (nonatomic,readonly) long long overCaptureStatus; 
@property (assign,nonatomic) char automaticallyDimsOverCaptureRegion; 
+(long long)uniqueID;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)contentSize;
-(void)layoutSublayers;
-(id)initWithLayer:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)_initWithSession:(id)arg1 makeConnection:(char)arg2 ;
-(void)setAutomaticallyDimsOverCaptureRegion:(char)arg1 ;
-(void)getPrimaryCaptureRectCenter:(CGPoint*)arg1 aspectRatio:(double*)arg2 uniqueID:(long long*)arg3 ;
-(CGRect)primaryCaptureRect;
-(CGRect)overCaptureRect;
-(char)isPrimaryAndOverCaptureCompositingEnabled;
-(char)automaticallyDimsOverCaptureRegion;
-(CGAffineTransform)captureDeviceTransformForSensorSize:(CGSize)arg1 previewSize:(CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3 ;
-(void)didUpdatePreviewImageQueueSlot:(unsigned)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(CGSize)arg4 ;
-(long long)overCaptureStatus;
-(void)setPrimaryCaptureRectAspectRatio:(double)arg1 centerPoint:(CGPoint)arg2 ;
-(void)setPrimaryAndOverCaptureCompositingEnabled:(char)arg1 ;
-(CGPoint)primaryCaptureRectCenterPoint;
-(double)primaryCaptureRectAspectRatio;
-(long long)primaryCaptureRectUniqueID;
-(void)_handleSpatialNotification:(id)arg1 payload:(id)arg2 ;
@end

