/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCloudPairedMetadataDiagnostics, HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary, NSString;

@interface HMDCloudPairedMetadataVersionConfiguration : HMFObject <HMFLogging> {

	HMDCloudPairedMetadataDiagnostics* _diagnostics;
	HMDNetworkRouterFirewallRuleAccessoryIdentifier* _accessoryIdentifier;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,readonly) HMDCloudPairedMetadataDiagnostics * diagnostics;                                    //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCloudPairedMetadataDiagnostics *)diagnostics;
-(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)accessoryIdentifier;
-(id)attributeDescriptions;
-(NSDictionary *)prettyJSONDictionary;
-(id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
-(id)initWithAccessoryIdentifier:(id)arg1 diagnostics:(id)arg2 ;
@end

