/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface PKInAppPaymentSessionAuthorizeParamaters : NSObject {

	NSData* _nonce;
	NSData* _authenticationCredential;
	NSData* _networkMerchantIdentifier;
	long long _cryptogramType;
	char* _isFeatureNotSupportedError;

}

@property (nonatomic,retain) NSData * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain) NSData * authenticationCredential;               //@synthesize authenticationCredential=_authenticationCredential - In the implementation block
@property (nonatomic,retain) NSData * networkMerchantIdentifier;              //@synthesize networkMerchantIdentifier=_networkMerchantIdentifier - In the implementation block
@property (assign,nonatomic) long long cryptogramType;                        //@synthesize cryptogramType=_cryptogramType - In the implementation block
@property (assign,nonatomic) char* isFeatureNotSupportedError;                //@synthesize isFeatureNotSupportedError=_isFeatureNotSupportedError - In the implementation block
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(long long)cryptogramType;
-(NSData *)networkMerchantIdentifier;
-(void)setCryptogramType:(long long)arg1 ;
-(id)initWithNonce:(id)arg1 authenticationCredential:(id)arg2 networkMerchantIdentifier:(id)arg3 cryptogramType:(long long)arg4 ;
-(void)setIsFeatureNotSupportedError:(char*)arg1 ;
-(void)setNetworkMerchantIdentifier:(NSData *)arg1 ;
-(NSData *)authenticationCredential;
-(void)setAuthenticationCredential:(NSData *)arg1 ;
-(char*)isFeatureNotSupportedError;
@end

