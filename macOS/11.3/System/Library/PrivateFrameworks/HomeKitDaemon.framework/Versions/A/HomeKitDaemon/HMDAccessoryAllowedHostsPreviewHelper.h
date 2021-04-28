/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerClient.h>

@class HMDHome, HMDNetworkRouterFirewallRuleManager, NSDate, NSString;

@interface HMDAccessoryAllowedHostsPreviewHelper : HMFObject <HMDNetworkRouterFirewallRuleManagerClient> {

	HMDHome* _home;
	HMDNetworkRouterFirewallRuleManager* _firewallRuleManager;
	os_unfair_lock_s _lock;
	NSDate* _expires;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)helperForHome:(id)arg1 ;
-(id)attributeDescriptions;
-(void)fetchAllowedHostsForAccessory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1 ;
@end

