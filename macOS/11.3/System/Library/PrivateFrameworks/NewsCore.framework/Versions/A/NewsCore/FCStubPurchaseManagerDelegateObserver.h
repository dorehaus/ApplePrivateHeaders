/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPurchaseManagerDelegate.h>

@interface FCStubPurchaseManagerDelegateObserver : NSObject <FCPurchaseManagerDelegate> {

	/*^block*/id _successBlock;
	/*^block*/id _failedBlock;
	/*^block*/id _failedWithInvalidReceiptBlock;

}

@property (nonatomic,copy) id successBlock;                               //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failedBlock;                                //@synthesize failedBlock=_failedBlock - In the implementation block
@property (nonatomic,copy) id failedWithInvalidReceiptBlock;              //@synthesize failedWithInvalidReceiptBlock=_failedWithInvalidReceiptBlock - In the implementation block
-(void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2 ;
-(void)setSuccessBlock:(id)arg1 ;
-(void)setFailedBlock:(id)arg1 ;
-(void)setFailedWithInvalidReceiptBlock:(id)arg1 ;
-(id)failedBlock;
-(id)failedWithInvalidReceiptBlock;
-(id)successBlock;
-(void)addPurchaseSuccessBlock:(/*^block*/id)arg1 ;
-(void)addPurchaseFailedBlock:(/*^block*/id)arg1 ;
-(void)addPurchaseFailedWithInvalidReceiptBlock:(/*^block*/id)arg1 ;
@end

