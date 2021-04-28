/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GCDeviceAdaptiveTriggersPayload, GCDeviceAdaptiveTriggersStatusPayload;


@protocol GCAdaptiveTriggers <GCControllerComponent>
@property (nonatomic,retain) GCDeviceAdaptiveTriggersPayload * leftTrigger; 
@property (nonatomic,retain) GCDeviceAdaptiveTriggersStatusPayload * leftStatus; 
@property (nonatomic,retain) GCDeviceAdaptiveTriggersPayload * rightTrigger; 
@property (nonatomic,retain) GCDeviceAdaptiveTriggersStatusPayload * rightStatus; 
@required
-(GCDeviceAdaptiveTriggersPayload *)leftTrigger;
-(void)setLeftTrigger:(id)arg1;
-(GCDeviceAdaptiveTriggersStatusPayload *)leftStatus;
-(void)setLeftStatus:(id)arg1;
-(GCDeviceAdaptiveTriggersPayload *)rightTrigger;
-(void)setRightTrigger:(id)arg1;
-(GCDeviceAdaptiveTriggersStatusPayload *)rightStatus;
-(void)setRightStatus:(id)arg1;

@end

