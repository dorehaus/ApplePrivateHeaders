/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessoryFirmwareUpdatePolicy.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDHAPAccessory, NSString;

@interface HMDAccessoryFirmwareUpdateCameraPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging> {

	HMDHAPAccessory* _accessory;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)evaluate;
-(HMDHAPAccessory *)accessory;
-(void)registerForNotifications;
-(void)configure;
-(void)handleAccessoryConnectedNotification:(id)arg1 ;
-(void)handleAccessoryDisconnectedNotification:(id)arg1 ;
-(void)handleSettingsChange:(id)arg1 ;
-(void)handleCharacteristicValuesChanged:(id)arg1 ;
-(void)monitorStreamStatus:(char)arg1 ;
-(void)_handleStreamStatusCharacteristicChanges;
-(void)_processStreamingStatus:(id)arg1 ;
-(void)_handleStreamStatusMultireadResponse:(id)arg1 ;
-(void)_checkStreamingStatus;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 ;
@end

