/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDNetworkRouterFirewallRuleManagerDebug <NSObject>
@required
-(void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(char)arg2 completion:(/*^block*/id)arg3;
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(char)arg3 verifySignatures:(char)arg4 completion:(/*^block*/id)arg5;
-(void)dumpAllLocalRulesIgnoringOverrides:(char)arg1 rawOutput:(char)arg2 completion:(/*^block*/id)arg3;
-(void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(char)arg2 rawOutput:(char)arg3 completion:(/*^block*/id)arg4;
-(void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(char)arg4 rawOutput:(char)arg5 completion:(/*^block*/id)arg6;
-(void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(char)arg4 rawOutput:(char)arg5 completion:(/*^block*/id)arg6;
-(void)removeAllLocalRulesWithCompletion:(/*^block*/id)arg1;
-(void)setOverrides:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addOverrides:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeAllOverridesWithCompletion:(/*^block*/id)arg1;
-(void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3;
-(void)forceFetchCloudChangesAndForceChangeNotifications:(char)arg1 completion:(/*^block*/id)arg2;

@end

