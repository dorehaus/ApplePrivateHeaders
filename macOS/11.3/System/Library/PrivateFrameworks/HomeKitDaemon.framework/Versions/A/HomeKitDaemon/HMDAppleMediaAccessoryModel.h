/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaAccessoryModel.h>

@class NSString, HMDDevice, HMFPairingIdentity, NSData, HMFSoftwareVersion, HMFWiFiNetworkInfo, NSNumber, NSUUID;

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel

@property (nonatomic,retain) NSString * deviceUUID; 
@property (nonatomic,retain) HMDDevice * device; 
@property (nonatomic,retain) HMFPairingIdentity * pairingIdentity; 
@property (nonatomic,retain) NSData * loggedInAccount; 
@property (nonatomic,retain) NSData * symptoms; 
@property (nonatomic,retain) HMFSoftwareVersion * softwareVersion; 
@property (nonatomic,retain) HMFWiFiNetworkInfo * wifiNetworkInfo; 
@property (nonatomic,retain) NSString * appleMediaAccessoryChangeTag; 
@property (nonatomic,retain) NSNumber * supportedStereoPairVersions; 
@property (nonatomic,retain) NSUUID * preferredMediaUserUUID; 
@property (nonatomic,retain) NSNumber * preferredUserSelectionType; 
+(id)properties;
+(id)appleMediaAccessoryModelWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
+(id)homePodAccessoryModelWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
-(id)_initWithObjectChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
@end

