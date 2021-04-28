/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPeerPaymentAccount, PKPeerPaymentPassDetailsResponse, PKCurrencyAmount;

@interface PKPeerPaymentCredential : PKPaymentCredential {

	NSString* _pendingPaymentSenderName;
	PKPeerPaymentAccount* _account;
	PKPeerPaymentPassDetailsResponse* _passDetailsResponse;
	PKCurrencyAmount* _amount;
	unsigned long long _state;
	NSString* _pendingPaymentSenderAddress;

}

@property (nonatomic,readonly) PKPeerPaymentAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPeerPaymentPassDetailsResponse * passDetailsResponse;              //@synthesize passDetailsResponse=_passDetailsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier; 
@property (nonatomic,retain) PKCurrencyAmount * amount;                                           //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * pendingPaymentSenderAddress;                                //@synthesize pendingPaymentSenderAddress=_pendingPaymentSenderAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * pendingPaymentSenderName; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(PKPeerPaymentAccount *)account;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(PKCurrencyAmount *)amount;
-(id)longDescription;
-(id)initWithPeerPaymentAccount:(id)arg1 ;
-(void)setPassDetailsResponse:(PKPeerPaymentPassDetailsResponse *)arg1 ;
-(char)_isEqualToCredential:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(PKPeerPaymentPassDetailsResponse *)passDetailsResponse;
-(NSString *)pendingPaymentSenderName;
-(NSString *)pendingPaymentSenderAddress;
-(void)setPendingPaymentSenderAddress:(NSString *)arg1 ;
@end

