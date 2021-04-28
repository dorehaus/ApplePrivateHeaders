/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKSecureElementCertificateSet, NSString;

@interface PKAccountAttestationRequest : NSObject {

	PKSecureElementCertificateSet* _casdCertificate;
	NSString* _anonymizationSalt;

}

@property (nonatomic,retain) PKSecureElementCertificateSet * casdCertificate;              //@synthesize casdCertificate=_casdCertificate - In the implementation block
@property (nonatomic,copy) NSString * anonymizationSalt;                                   //@synthesize anonymizationSalt=_anonymizationSalt - In the implementation block
+(id)createAnonymizationSalt;
+(id)_keychainItemWrapper;
+(id)keychainDataWithError:(id*)arg1 ;
+(id)defaultAnonymizationSaltWithError:(id*)arg1 ;
+(id)setDefaultAnonymizationSalt:(id)arg1 ;
+(void)removeAccountAttesationData;
+(void)removeLocalAccountAttesationData;
-(void)setAnonymizationSalt:(NSString *)arg1 ;
-(NSString *)anonymizationSalt;
-(PKSecureElementCertificateSet *)casdCertificate;
-(void)setCasdCertificate:(PKSecureElementCertificateSet *)arg1 ;
@end
