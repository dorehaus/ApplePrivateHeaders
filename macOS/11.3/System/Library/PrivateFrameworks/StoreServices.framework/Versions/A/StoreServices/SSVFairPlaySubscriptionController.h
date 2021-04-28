/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SSVFairPlaySubscriptionController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasValidSubscriptionStatusDidChangeNotifyToken;
	int _subscriptionStatusDidChangeNotifyToken;

}
-(void)dealloc;
-(id)init;
-(id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1 ;
-(char)stopSubscriptionLease:(id*)arg1 ;
-(void)enumerateAccountSubscriptionStatusUsingBlock:(/*^block*/id)arg1 ;
-(char)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned)arg2 machineIDData:(id)arg3 returningSubscriptionBagData:(id*)arg4 error:(id*)arg5 ;
-(char)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 returningLeaseData:(id*)arg5 subscriptionBagData:(id*)arg6 error:(id*)arg7 ;
-(char)importSubscriptionKeyBagData:(id)arg1 returningError:(id*)arg2 ;
-(char)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 returningError:(id*)arg3 ;
@end

