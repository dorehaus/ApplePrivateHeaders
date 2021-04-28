/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKPayment.h>

@class NSString, NSDictionary, SKPaymentDiscount, NSData;

@interface SKMutablePayment : SKPayment

@property (assign,nonatomic) char isStoreOriginated; 
@property (nonatomic,copy) NSString * partnerIdentifier; 
@property (nonatomic,copy) NSString * partnerTransactionIdentifier; 
@property (nonatomic,copy) NSDictionary * requestParameters; 
@property (nonatomic,copy) NSString * applicationUsername; 
@property (nonatomic,copy) SKPaymentDiscount * paymentDiscount; 
@property (nonatomic,copy) NSString * productIdentifier; 
@property (assign,nonatomic) long long quantity; 
@property (nonatomic,copy) NSData * requestData; 
@property (assign,nonatomic) char simulatesAskToBuyInSandbox; 
-(void)setQuantity:(long long)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)setRequestParameters:(NSDictionary *)arg1 ;
-(void)setApplicationUsername:(NSString *)arg1 ;
-(void)setIsStoreOriginated:(char)arg1 ;
-(void)setSimulatesAskToBuyInSandbox:(char)arg1 ;
-(void)setPaymentDiscount:(SKPaymentDiscount *)arg1 ;
-(void)setPartnerTransactionIdentifier:(NSString *)arg1 ;
@end

