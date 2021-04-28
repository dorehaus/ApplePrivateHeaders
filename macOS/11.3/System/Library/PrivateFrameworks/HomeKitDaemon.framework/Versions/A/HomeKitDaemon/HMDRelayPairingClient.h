/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPRelayPairingClient.h>
#import <libobjc.A.dylib/HMDRelayManagerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDRelayManager, HMDAccessory, NSObject, NSString;

@interface HMDRelayPairingClient : HAPRelayPairingClient <HMDRelayManagerDelegate, HMFLogging> {

	HMDRelayManager* _relayManager;
	HMDAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDRelayManager * relayManager;                 //@synthesize relayManager=_relayManager - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                       //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)accessoryBagURL;
-(void)open;
-(void)close;
-(HMDAccessory *)accessory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_closeWithError:(id)arg1 ;
-(id)logIdentifier;
-(id)accessoryBagURL;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
-(HMDRelayManager *)relayManager;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(id)initWithRelayManager:(id)arg1 accessory:(id)arg2 ;
@end
