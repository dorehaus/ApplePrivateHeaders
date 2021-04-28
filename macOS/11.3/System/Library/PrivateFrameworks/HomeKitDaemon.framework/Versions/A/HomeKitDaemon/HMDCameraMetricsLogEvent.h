/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class HMDCameraSessionID, HMDAccessory;

@interface HMDCameraMetricsLogEvent : HMDLogEvent {

	char _isLocal;
	HMDCameraSessionID* _sessionID;
	HMDAccessory* _accessory;

}

@property (nonatomic,readonly) HMDCameraSessionID * sessionID;               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (readonly) char isLocal;                                           //@synthesize isLocal=_isLocal - In the implementation block
-(HMDCameraSessionID *)sessionID;
-(HMDAccessory *)accessory;
-(char)isLocal;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(char)arg3 ;
@end

