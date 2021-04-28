/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal, NSArray;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {

	AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal* _availableOutputDevices;

}

@property (nonatomic,readonly) NSArray * recentlyUsedDevices; 
@property (nonatomic,readonly) NSArray * otherDevices; 
+(id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)impl;
-(id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1 ;
-(id)availableOutputDeviceGroups;
-(NSArray *)recentlyUsedDevices;
-(NSArray *)otherDevices;
-(void)_loadOutputDevices;
@end

