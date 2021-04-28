/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCVideoRule;

@interface CameraConferenceSynchronizer : NSObject {

	char isConference720p;
	char isConferenceOniPad;
	char receivedRequestToChangeCamera;
	char receivedFirstRemoteFrame;
	int cameraHasChangedToCapture;
	int didSendFirstRemoteFrameNotification;
	VCVideoRule* captureRule;
	CGSize localPortraitAspectRatio;
	/*^block*/id remoteFrameNotificationBlock;
	/*^block*/id didStopNotificationBlock;

}

@property (assign,setter=setLocalPortraitAspectRatio:,nonatomic) CGSize localPortraitAspectRatio; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(CGSize)localPortraitAspectRatio;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(void)scheduleFirstRemoteFrameNotification:(/*^block*/id)arg1 ;
-(void)scheduleCameraChangeToPreviewSettings;
-(void)scheduleCameraChangeToCaptureSettings:(id)arg1 ;
-(void)cameraSizeChangedTo:(CGSize)arg1 ;
-(char)shouldConferenceSendFirstRemoteFrameNotification;
-(void)notifyClientOfRemoteFrame:(double)arg1 ;
-(char)shouldConferenceChangeCameraToCaptureSettings;
-(void)changeCameraToCaptureSettings:(double)arg1 forced:(char)arg2 ;
-(char)shouldConferenceChangeCameraToPreviewSettings;
@end

