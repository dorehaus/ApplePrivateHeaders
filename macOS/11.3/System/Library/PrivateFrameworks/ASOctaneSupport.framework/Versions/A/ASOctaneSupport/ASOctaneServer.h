/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ASOctaneSupport.framework/Versions/A/ASOctaneSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface ASOctaneServer : NSObject {

	NSXPCConnection* _connectionToService;

}
+(id)shared;
-(id)init;
-(id)_synchronousRemoteObjectProxy:(id*)arg1 ;
-(long long)activePort;
-(void)appRemovedWithBundleID:(id)arg1 ;
-(id)buyProductWithID:(id)arg1 bundleID:(id)arg2 ;
-(id)cancelTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)changeAutoRenewStatus:(char)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 ;
-(id)clearOverridesForBundleID:(id)arg1 ;
-(id)completeAskToBuyRequestWithResponse:(char)arg1 transactionID:(unsigned long long)arg2 forBundleID:(id)arg3 ;
-(id)deleteAllTransactionsForBundleID:(id)arg1 ;
-(id)deleteTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)expireOrRenewSubscriptionWithIdentifier:(id)arg1 expire:(char)arg2 forBundleID:(id)arg3 ;
-(id)getStorefrontForBundleID:(id)arg1 ;
-(id)getTransactionDataForBundleID:(id)arg1 ;
-(id)refundTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)resolveIssueForTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)setStorefront:(id)arg1 forBundleID:(id)arg2 ;
-(void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2 ;
-(long long)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 ;
-(id)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 ;
@end
