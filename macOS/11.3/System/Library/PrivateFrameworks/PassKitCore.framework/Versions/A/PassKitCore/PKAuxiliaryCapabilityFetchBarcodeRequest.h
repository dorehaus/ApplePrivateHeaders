/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAuxiliaryCapabilityWebServiceRequest.h>

@class NSString, NSArray, PKPaymentPass;

@interface PKAuxiliaryCapabilityFetchBarcodeRequest : PKAuxiliaryCapabilityWebServiceRequest {

	NSString* _dpanIdentifier;
	long long _barcodeCount;
	NSString* _lastUsedBarcodeIdentifier;
	NSArray* _encryptionCertificateChain;
	long long _fetchReason;
	PKPaymentPass* _pass;

}

@property (nonatomic,copy) NSString * dpanIdentifier;                         //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
@property (assign,nonatomic) long long barcodeCount;                          //@synthesize barcodeCount=_barcodeCount - In the implementation block
@property (nonatomic,copy) NSString * lastUsedBarcodeIdentifier;              //@synthesize lastUsedBarcodeIdentifier=_lastUsedBarcodeIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * encryptionCertificateChain;              //@synthesize encryptionCertificateChain=_encryptionCertificateChain - In the implementation block
@property (assign,nonatomic) long long fetchReason;                           //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSString *)dpanIdentifier;
-(void)setDpanIdentifier:(NSString *)arg1 ;
-(long long)barcodeCount;
-(void)setBarcodeCount:(long long)arg1 ;
-(NSString *)lastUsedBarcodeIdentifier;
-(void)setLastUsedBarcodeIdentifier:(NSString *)arg1 ;
-(NSArray *)encryptionCertificateChain;
-(void)setEncryptionCertificateChain:(NSArray *)arg1 ;
-(long long)fetchReason;
-(void)setFetchReason:(long long)arg1 ;
@end

