/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/Versions/A/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class AVCaptureSession, AVCaptureDevice, AVCaptureDeviceInput;

@interface RPPipViewController : NSViewController {

	long long _cameraPosition;
	AVCaptureSession* _pipSession;
	AVCaptureDevice* _videoDevice;
	AVCaptureDeviceInput* _videoInput;
	double _previousOrientationWidth;
	double _previousOrientationHeight;

}

@property (nonatomic,retain) AVCaptureSession * pipSession;                  //@synthesize pipSession=_pipSession - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * videoDevice;                  //@synthesize videoDevice=_videoDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * videoInput;              //@synthesize videoInput=_videoInput - In the implementation block
@property (assign,nonatomic) double previousOrientationWidth;                //@synthesize previousOrientationWidth=_previousOrientationWidth - In the implementation block
@property (assign,nonatomic) double previousOrientationHeight;               //@synthesize previousOrientationHeight=_previousOrientationHeight - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                       //@synthesize cameraPosition=_cameraPosition - In the implementation block
-(void)loadView;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(AVCaptureDevice *)videoDevice;
-(AVCaptureDeviceInput *)videoInput;
-(long long)cameraPosition;
-(void)setCameraPosition:(long long)arg1 ;
-(void)setVideoDevice:(AVCaptureDevice *)arg1 ;
-(void)setVideoInput:(AVCaptureDeviceInput *)arg1 ;
-(id)initWithPosition:(long long)arg1 ;
-(void)startPipSession;
-(void)stopPipSession;
-(id)cameraWithPosition:(long long)arg1 ;
-(void)setPipSession:(AVCaptureSession *)arg1 ;
-(AVCaptureSession *)pipSession;
-(id)_pipView;
-(void)setUpPipSession;
-(double)previousOrientationWidth;
-(void)setPreviousOrientationWidth:(double)arg1 ;
-(double)previousOrientationHeight;
-(void)setPreviousOrientationHeight:(double)arg1 ;
@end

