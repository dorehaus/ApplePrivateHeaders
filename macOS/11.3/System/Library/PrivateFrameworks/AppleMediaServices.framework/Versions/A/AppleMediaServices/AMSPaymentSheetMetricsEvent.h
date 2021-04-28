/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSMetricsEvent.h>

@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent
+(id)_timestamp;
+(id)dictionaryForBiometricMatchState:(long long)arg1 didBiometricsLockout:(char)arg2 biometricsType:(long long)arg3 ;
+(id)dictionaryForCancellationEvent:(unsigned long long)arg1 didBiometricsLockout:(char)arg2 ;
+(id)dictionaryForUserAction:(long long)arg1 didBiometricsLockout:(char)arg2 ;
-(void)addBiometricMatchState:(long long)arg1 ;
-(void)addClientMetadataForPurchaseInfo:(id)arg1 metricsDictionary:(id)arg2 ;
-(void)addDualActionSuccess:(char)arg1 ;
-(void)addUserActions:(id)arg1 ;
@end

