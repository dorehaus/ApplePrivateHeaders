/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/_HMCameraUserSettings.h>

@class NSUUID, HMCameraUserNotificationSettings, NSSet;

@interface _HMMutableCameraUserSettings : _HMCameraUserSettings

@property (copy) NSUUID * UUID; 
@property (assign) unsigned long long supportedFeatures; 
@property (assign) unsigned long long accessModeAtHome; 
@property (assign) unsigned long long accessModeNotAtHome; 
@property (assign) unsigned long long currentAccessMode; 
@property (assign) unsigned long long recordingEventTriggers; 
@property (getter=areSnapshotsAllowed) char snapshotsAllowed; 
@property (getter=arePeriodicSnapshotsAllowed) char periodicSnapshotsAllowed; 
@property (getter=isAccessModeIndicatorEnabled) char accessModeIndicatorEnabled; 
@property (getter=isNightVisionModeEnabled) char nightVisionModeEnabled; 
@property (getter=isRecordingAudioEnabled) char recordingAudioEnabled; 
@property (getter=isCameraManuallyDisabled) char cameraManuallyDisabled; 
@property (copy) HMCameraUserNotificationSettings * notificationSettings; 
@property (copy) NSSet * activityZones; 
@property (getter=areActivityZonesIncludedForSignificantEventDetection) char activityZonesIncludedForSignificantEventDetection; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end
