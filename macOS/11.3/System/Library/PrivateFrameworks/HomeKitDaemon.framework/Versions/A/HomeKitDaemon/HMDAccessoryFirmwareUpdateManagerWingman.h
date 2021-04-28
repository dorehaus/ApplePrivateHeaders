/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDAccessoryFirmwareUpdateManagerWingman.h>
@class UARPController;


@protocol HMDAccessoryFirmwareUpdateManagerWingman
@property (nonatomic,readonly) UARPController * uarpController; 
@required
-(UARPController *)uarpController;
-(id)newAccessoryFirmwareUpdateSessionWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4;

@end


@class UARPController;

@interface HMDAccessoryFirmwareUpdateManagerWingman : NSObject <HMDAccessoryFirmwareUpdateManagerWingman> {

	UARPController* _uarpController;

}

@property (nonatomic,readonly) UARPController * uarpController;              //@synthesize uarpController=_uarpController - In the implementation block
-(id)init;
-(UARPController *)uarpController;
-(id)newAccessoryFirmwareUpdateSessionWithHAPAccessory:(id)arg1 uarpAccessory:(id)arg2 accessoryFirmwareUpdateManager:(id)arg3 logEventManager:(id)arg4 ;
@end

