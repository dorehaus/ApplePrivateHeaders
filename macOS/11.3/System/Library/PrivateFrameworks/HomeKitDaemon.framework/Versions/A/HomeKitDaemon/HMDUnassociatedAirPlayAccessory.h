/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryAssociation.h>

@class HMFPairingIdentity, NSString;

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation> {

	HMFPairingIdentity* _pairingIdentity;

}

@property (copy) HMFPairingIdentity * pairingIdentity;              //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char supportsAssociation; 
+(id)logCategory;
+(id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3 ;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(void)associateToHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)supportsAssociation;
@end

