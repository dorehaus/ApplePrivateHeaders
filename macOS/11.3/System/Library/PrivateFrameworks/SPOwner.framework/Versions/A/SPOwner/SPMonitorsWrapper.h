/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPPowerMonitorDelegate.h>

@protocol SPMonitorsWrapperDelegate, OS_dispatch_queue;
@class NSObject, SPNetworkMonitor, NSDate, SPPowerStateMonitorMac, SPMacBeaconConfig, NSString;

@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate> {

	char _isRunning;
	id<SPMonitorsWrapperDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	SPNetworkMonitor* _networkMonitor;
	NSDate* _lastStateChangeDate;
	NSDate* _nextStateChangeDate;
	NSDate* _networkOffDuringSleepDate;
	SPPowerStateMonitorMac* _powerStateMonitor;
	SPMacBeaconConfig* _macBeaconConfig;

}

@property (assign,nonatomic,__weak) id<SPMonitorsWrapperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                 //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) SPNetworkMonitor * networkMonitor;                          //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (nonatomic,retain) NSDate * lastStateChangeDate;                               //@synthesize lastStateChangeDate=_lastStateChangeDate - In the implementation block
@property (nonatomic,retain) NSDate * nextStateChangeDate;                               //@synthesize nextStateChangeDate=_nextStateChangeDate - In the implementation block
@property (assign) char isRunning;                                                       //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) NSDate * networkOffDuringSleepDate;                         //@synthesize networkOffDuringSleepDate=_networkOffDuringSleepDate - In the implementation block
@property (nonatomic,retain) SPPowerStateMonitorMac * powerStateMonitor;                 //@synthesize powerStateMonitor=_powerStateMonitor - In the implementation block
@property (nonatomic,retain) SPMacBeaconConfig * macBeaconConfig;                        //@synthesize macBeaconConfig=_macBeaconConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPMonitorsWrapperDelegate>)delegate;
-(void)setDelegate:(id<SPMonitorsWrapperDelegate>)arg1 ;
-(void)resume;
-(void)pause;
-(void)start;
-(void)stop;
-(char)isRunning;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned long long)powerState;
-(char)isNetworkUp;
-(void)setIsRunning:(char)arg1 ;
-(NSDate *)nextStateChangeDate;
-(void)setNextStateChangeDate:(NSDate *)arg1 ;
-(void)setMacBeaconConfig:(SPMacBeaconConfig *)arg1 ;
-(SPNetworkMonitor *)networkMonitor;
-(SPPowerStateMonitorMac *)powerStateMonitor;
-(void)setNetworkMonitor:(SPNetworkMonitor *)arg1 ;
-(void)calculateLowPowerNetworkOffDate;
-(void)setPowerStateMonitor:(SPPowerStateMonitorMac *)arg1 ;
-(void)setNetworkOffDuringSleepDate:(NSDate *)arg1 ;
-(NSDate *)networkOffDuringSleepDate;
-(NSDate *)lastStateChangeDate;
-(SPMacBeaconConfig *)macBeaconConfig;
-(void)setLastStateChangeDate:(NSDate *)arg1 ;
-(void)powerMonitor:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)nextWakeTimeForState:(unsigned long long)arg1 ;
-(id)initWithBeaconManager:(id)arg1 delegateQueueu:(id)arg2 ;
-(void)updateConfig:(id)arg1 ;
@end

