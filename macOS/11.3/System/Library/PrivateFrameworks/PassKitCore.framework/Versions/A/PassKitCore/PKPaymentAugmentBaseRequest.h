/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentApplication, PKSecureElementApplet, NSString;

@interface PKPaymentAugmentBaseRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;
	PKSecureElementApplet* _applet;
	NSString* _merchantCountryCode;
	NSString* _currencyCode;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKSecureElementApplet * applet;                         //@synthesize applet=_applet - In the implementation block
@property (nonatomic,copy) NSString * merchantCountryCode;                           //@synthesize merchantCountryCode=_merchantCountryCode - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSString *)merchantCountryCode;
-(void)setMerchantCountryCode:(NSString *)arg1 ;
-(id)bodyDictionary;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(PKSecureElementApplet *)applet;
-(id)initWithPaymentPass:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)setApplet:(PKSecureElementApplet *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)endpointName;
@end

