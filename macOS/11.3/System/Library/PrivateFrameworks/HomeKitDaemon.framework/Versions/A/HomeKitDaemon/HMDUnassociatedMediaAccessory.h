/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccessoryAdvertisement, NSString;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging> {

	HMDAccessoryAdvertisement* _advertisement;

}

@property (retain) HMDAccessoryAdvertisement * advertisement;              //@synthesize advertisement=_advertisement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)transportTypes;
-(id)logIdentifier;
-(long long)associationOptions;
-(HMDAccessoryAdvertisement *)advertisement;
-(void)setAdvertisement:(HMDAccessoryAdvertisement *)arg1 ;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)dumpDescription;
-(id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)updateAdvertisementData:(id)arg1 ;
-(char)isHAPAirPlay2Accessory;
@end

