/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentCredential, NSString;

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest {

	PKPaymentCredential* _paymentCredential;
	NSString* _cardholderName;
	NSString* _primaryAccountNumber;
	NSString* _referrerIdentifier;
	NSString* _passOwnershipToken;

}

@property (nonatomic,copy) NSString * passOwnershipToken;                          //@synthesize passOwnershipToken=_passOwnershipToken - In the implementation block
@property (nonatomic,retain) PKPaymentCredential * paymentCredential;              //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                              //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumber;                        //@synthesize primaryAccountNumber=_primaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;                          //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
-(NSString *)referrerIdentifier;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(id)initWithPaymentCredential:(id)arg1 ;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(NSString *)primaryAccountNumber;
-(PKPaymentCredential *)paymentCredential;
-(id)_cardDictionary;
-(id)initWithCardholderName:(id)arg1 primaryAccountNumber:(id)arg2 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(char)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(void)setPrimaryAccountNumber:(NSString *)arg1 ;
-(NSString *)passOwnershipToken;
-(void)setPassOwnershipToken:(NSString *)arg1 ;
@end

