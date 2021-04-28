/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice;

@interface HMDEventTriggerDevice : HMFObject {

	char _currentDevice;
	HMDDevice* _device;

}

@property (nonatomic,readonly) HMDDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (getter=isCurrentDevice,nonatomic,readonly) char currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(HMDDevice *)device;
-(char)isCurrentDevice;
-(id)initWithCurrentDeviceForHome:(id)arg1 ;
-(id)initWithDevice:(id)arg1 forHome:(id)arg2 ;
@end

