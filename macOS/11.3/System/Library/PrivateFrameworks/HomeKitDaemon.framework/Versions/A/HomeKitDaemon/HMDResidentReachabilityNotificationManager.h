/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class HMDResidentReachabilityContext, HMDHome, HMDRemoteDeviceMonitor, HMDBulletinBoard, NSObject, HMFTimer, NSString;

@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate> {

	char _hasCameraConfiguredForRecording;
	char _notificationEnabled;
	HMDResidentReachabilityContext* _reachabilityContext;
	HMDHome* _home;
	HMDRemoteDeviceMonitor* _deviceMonitor;
	/*^block*/id _timerFactory;
	HMDBulletinBoard* _bulletinBoard;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFTimer* _notificationDebounceTimer;

}

@property (__weak,readonly) HMDHome * home;                                                                //@synthesize home=_home - In the implementation block
@property (__weak,readonly) HMDRemoteDeviceMonitor * deviceMonitor;                                        //@synthesize deviceMonitor=_deviceMonitor - In the implementation block
@property (readonly) char hasReachableResidentSupportingCameraRecording; 
@property (readonly) char hasCameraConfiguredForRecording;                                                 //@synthesize hasCameraConfiguredForRecording=_hasCameraConfiguredForRecording - In the implementation block
@property (readonly) char anyEnabledResidentSupportsCameraRecordingReachabilityNotifications; 
@property (readonly) char isCameraReachabilityNotificationDisabledForAllSettings; 
@property (copy,readonly) id timerFactory;                                                                 //@synthesize timerFactory=_timerFactory - In the implementation block
@property (readonly) HMDBulletinBoard * bulletinBoard;                                                     //@synthesize bulletinBoard=_bulletinBoard - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                               //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) HMFTimer * notificationDebounceTimer;                                                   //@synthesize notificationDebounceTimer=_notificationDebounceTimer - In the implementation block
@property (retain) HMDResidentReachabilityContext * reachabilityContext;                                   //@synthesize reachabilityContext=_reachabilityContext - In the implementation block
@property (assign) char notificationEnabled;                                                               //@synthesize notificationEnabled=_notificationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHome *)home;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)timerFactory;
-(void)setNotificationEnabled:(char)arg1 ;
-(char)notificationEnabled;
-(HMDRemoteDeviceMonitor *)deviceMonitor;
-(id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2 ;
-(void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2 ;
-(HMDResidentReachabilityContext *)reachabilityContext;
-(HMDBulletinBoard *)bulletinBoard;
-(void)_startDebounceTimer;
-(id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2 timerFactory:(/*^block*/id)arg3 bulletinBoard:(id)arg4 ;
-(void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2 notificationCenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleCameraProfileSettingsDidChange:(id)arg1 ;
-(void)_handleCameraProfileUnconfigured:(id)arg1 ;
-(void)_handleResidentUpdated:(id)arg1 ;
-(void)_handleResidentAdded:(id)arg1 ;
-(void)_handleResidentRemoved:(id)arg1 ;
-(void)_handleNetworkReachabilityChange:(id)arg1 ;
-(char)isCameraReachabilityNotificationDisabledForAllSettings;
-(void)updateNotificationEnabled;
-(void)setNotificationDebounceTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)notificationDebounceTimer;
-(char)anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
-(void)setReachabilityContext:(HMDResidentReachabilityContext *)arg1 ;
-(void)_evaluateReachabilityBulletin;
-(char)hasReachableResidentSupportingCameraRecording;
-(char)shouldPostReachableNotification;
-(char)shouldPostUnreachableNotification;
-(char)hasCameraConfiguredForRecording;
@end

