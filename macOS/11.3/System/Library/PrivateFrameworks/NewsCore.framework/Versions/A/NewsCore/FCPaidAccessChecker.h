/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPaidAccessCheckerType.h>

@protocol FCPurchaseProviderType, FCBundleSubscriptionProviderType, FCCoreConfigurationManager;
@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType> {

	id<FCPurchaseProviderType> _purchaseProvider;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;              //@synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider;                                  //@synthesize purchaseProvider=_purchaseProvider - In the implementation block
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(id)initWithPurchaseProvider:(id)arg1 bundleSubscriptionProvider:(id)arg2 configurationManager:(id)arg3 ;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(char)canGetSubscriptionToChannel:(id)arg1 ;
-(char)canGetAccessToItemPaid:(char)arg1 bundlePaid:(char)arg2 channel:(id)arg3 ;
-(char)canGetBundleSubscriptionToChannel:(id)arg1 ;
-(char)isPreparedForUse;
@end
