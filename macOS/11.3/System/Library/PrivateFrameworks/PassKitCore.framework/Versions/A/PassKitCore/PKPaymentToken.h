/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentMethod, NSString, NSData, NSURL;

@interface PKPaymentToken : NSObject <NSSecureCoding> {

	PKPaymentMethod* _paymentMethod;
	NSString* _paymentInstrumentName;
	NSString* _paymentNetwork;
	NSString* _transactionIdentifier;
	NSData* _paymentData;
	NSURL* _redeemURL;
	NSString* _retryNonce;

}

@property (nonatomic,retain) PKPaymentMethod * paymentMethod;                      //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;                       //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                                   //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,retain) NSURL * redeemURL;                                    //@synthesize redeemURL=_redeemURL - In the implementation block
@property (nonatomic,copy) NSString * retryNonce;                                  //@synthesize retryNonce=_retryNonce - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentInstrumentName;              //@synthesize paymentInstrumentName=_paymentInstrumentName - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentNetwork;                     //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
+(char)supportsSecureCoding;
+(long long)version;
+(id)simulatedTokenForNetwork:(id)arg1 ;
+(id)paymentTokenWithProtobuf:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)transactionIdentifier;
-(id)protobuf;
-(NSString *)paymentNetwork;
-(PKPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(PKPaymentMethod *)arg1 ;
-(NSData *)paymentData;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)retryNonce;
-(void)setRetryNonce:(NSString *)arg1 ;
-(void)setPaymentData:(NSData *)arg1 ;
-(NSURL *)redeemURL;
-(void)setRedeemURL:(NSURL *)arg1 ;
-(NSString *)paymentInstrumentName;
@end
