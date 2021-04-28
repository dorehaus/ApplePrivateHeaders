/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessoryFirmwareUpdatePolicy.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HMFTimer, HMDHAPAccessory, NSString;

@interface HMDAccessoryFirmwareUpdateTimedAutomationPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging, HMFTimerDelegate> {

	HMFTimer* _reevaluateTimer;
	HMDHAPAccessory* _accessory;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) HMFTimer * reevaluateTimer;              //@synthesize reevaluateTimer=_reevaluateTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)status;
-(char)evaluate;
-(HMDHAPAccessory *)accessory;
-(void)timerDidFire:(id)arg1 ;
-(void)configure;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 ;
-(void)_stopReevaluateTimer;
-(void)_startReevaluateTimer:(double)arg1 ;
-(HMFTimer *)reevaluateTimer;
-(void)setReevaluateTimer:(HMFTimer *)arg1 ;
-(id)_getMaxUpdateApplyEndTime;
-(id)_getTriggerFireDateBeforeEndTime:(id)arg1 ;
@end

