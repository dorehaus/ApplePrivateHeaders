/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, HMDDevice, IDSService, NSString;

@interface HMDCompanionManager : HMFObject <HMFLogging, IDSServiceDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	HMDDevice* _companion;
	IDSService* _service;

}

@property (nonatomic,readonly) IDSService * service;                //@synthesize service=_service - In the implementation block
@property (readonly) HMDDevice * companion;                         //@synthesize companion=_companion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)shortDescription;
+(id)logCategory;
+(char)isCompatibleCompanionDevice:(id)arg1 ;
-(id)init;
-(IDSService *)service;
-(HMDDevice *)companion;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(id)attributeDescriptions;
-(void)__initializeConnectedDevices;
@end

