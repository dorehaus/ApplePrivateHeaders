/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/RTPurgable.h>

@class RTLocationStore, RTMotionActivityManager, RTPlatform, RTSettledStateTransitionStore, RTWiFiFootprintMonitor, NSString;

@interface RTScenarioTriggerManager : RTNotifier <RTPurgable> {

	unsigned long long _interestedInConstantFootprint;
	unsigned long long _interestedInSettledState;
	RTLocationStore* _locationStore;
	RTMotionActivityManager* _motionActivityManager;
	unsigned long long _motionSettledState;
	RTPlatform* _platform;
	unsigned long long _settledState;
	unsigned long long _monitoredScenarioTriggerTypes;
	RTSettledStateTransitionStore* _settledStateTransitionStore;
	RTWiFiFootprintMonitor* _wifiFootprintMonitor;
	long long _wiFiFootprintState;

}

@property (nonatomic,readonly) unsigned long long interestedInConstantFootprint;                         //@synthesize interestedInConstantFootprint=_interestedInConstantFootprint - In the implementation block
@property (nonatomic,readonly) unsigned long long interestedInSettledState;                              //@synthesize interestedInSettledState=_interestedInSettledState - In the implementation block
@property (nonatomic,readonly) RTLocationStore * locationStore;                                          //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,readonly) RTMotionActivityManager * motionActivityManager;                          //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,readonly) unsigned long long motionSettledState;                                    //@synthesize motionSettledState=_motionSettledState - In the implementation block
@property (nonatomic,readonly) RTPlatform * platform;                                                    //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) unsigned long long settledState;                                            //@synthesize settledState=_settledState - In the implementation block
@property (assign,nonatomic) unsigned long long monitoredScenarioTriggerTypes;                           //@synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes - In the implementation block
@property (nonatomic,readonly) RTSettledStateTransitionStore * settledStateTransitionStore;              //@synthesize settledStateTransitionStore=_settledStateTransitionStore - In the implementation block
@property (nonatomic,readonly) RTWiFiFootprintMonitor * wifiFootprintMonitor;                            //@synthesize wifiFootprintMonitor=_wifiFootprintMonitor - In the implementation block
@property (nonatomic,readonly) long long wiFiFootprintState;                                             //@synthesize wiFiFootprintState=_wiFiFootprintState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settledStateName:(unsigned long long)arg1 ;
+(id)scenarioTriggerTypeToNotificationName:(unsigned long long)arg1 ;
+(long long)settledStateTypeForScenarioTriggerSettledState:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(RTPlatform *)platform;
-(unsigned long long)settledState;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(unsigned long long)monitoredScenarioTriggerTypes;
-(RTLocationStore *)locationStore;
-(id)initWithLocationStore:(id)arg1 motionActivityManager:(id)arg2 settledStateTransitionStore:(id)arg3 wifiFootprintMonitor:(id)arg4 platform:(id)arg5 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RTMotionActivityManager *)motionActivityManager;
-(RTSettledStateTransitionStore *)settledStateTransitionStore;
-(void)simulateScenarioTrigger:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setSettledState:(unsigned long long)arg1 ;
-(id)initWithLocationStore:(id)arg1 motionActivityManager:(id)arg2 platform:(id)arg3 settledState:(unsigned long long)arg4 settledStateTransitionStore:(id)arg5 wifiFootprintMonitor:(id)arg6 ;
-(void)onMotionActivityManagerNotification:(id)arg1 ;
-(void)setSettledStateAndSubmitMetricsForSettledState:(unsigned long long)arg1 ;
-(void)_evaluateSettledState;
-(void)onWiFiFootprintStateNotification:(id)arg1 ;
-(void)setWiFiFootprintState:(long long)arg1 ;
-(unsigned long long)interestedInSettledState;
-(void)setInterestedInSettledState:(unsigned long long)arg1 ;
-(void)_startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)_stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(unsigned long long)_notificationNameToScenarioTriggerType:(id)arg1 ;
-(void)setMonitoredScenarioTriggerTypes:(unsigned long long)arg1 ;
-(void)setMotionSettledState:(unsigned long long)arg1 ;
-(void)_onMotionActivityManagerNotification:(id)arg1 ;
-(void)_onWiFiFootprintStateNotification:(id)arg1 ;
-(void)_postScenarioTriggerNotification:(id)arg1 ;
-(void)setInterestedInConstantFootprint:(unsigned long long)arg1 ;
-(void)postScenarioTriggerNotification:(id)arg1 ;
-(unsigned long long)interestedInConstantFootprint;
-(unsigned long long)motionSettledState;
-(RTWiFiFootprintMonitor *)wifiFootprintMonitor;
-(long long)wiFiFootprintState;
@end

