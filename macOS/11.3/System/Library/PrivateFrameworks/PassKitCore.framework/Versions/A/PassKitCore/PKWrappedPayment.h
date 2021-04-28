/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, PKSecureElementCertificateSet, NSArray;

@interface PKWrappedPayment : NSObject <NSSecureCoding> {

	NSString* _transactionIdentifier;
	NSData* _transactionData;
	NSData* _transactionInstructionsSignature;
	PKSecureElementCertificateSet* _certificates;
	NSString* _merchantCountryCode;
	NSString* _kextBlacklistVersion;
	NSData* _enrollmentSignature;
	NSArray* _SEPCertificates;
	NSData* _confirmationBlobHash;
	long long _confirmationBlobVersion;

}

@property (nonatomic,copy) NSString * transactionIdentifier;                             //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * transactionData;                                     //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,copy) NSData * transactionInstructionsSignature;                    //@synthesize transactionInstructionsSignature=_transactionInstructionsSignature - In the implementation block
@property (nonatomic,copy) PKSecureElementCertificateSet * certificates;                 //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy) NSString * merchantCountryCode;                               //@synthesize merchantCountryCode=_merchantCountryCode - In the implementation block
@property (nonatomic,copy) NSString * kextBlacklistVersion;                              //@synthesize kextBlacklistVersion=_kextBlacklistVersion - In the implementation block
@property (nonatomic,copy) NSData * enrollmentSignature;                                 //@synthesize enrollmentSignature=_enrollmentSignature - In the implementation block
@property (setter=EPCertificates,nonatomic,copy) NSArray * SEPCertificates;              //@synthesize SEPCertificates=_SEPCertificates - In the implementation block
@property (nonatomic,copy) NSData * confirmationBlobHash;                                //@synthesize confirmationBlobHash=_confirmationBlobHash - In the implementation block
@property (assign,nonatomic) long long confirmationBlobVersion;                          //@synthesize confirmationBlobVersion=_confirmationBlobVersion - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKSecureElementCertificateSet *)certificates;
-(NSString *)transactionIdentifier;
-(NSString *)merchantCountryCode;
-(void)setMerchantCountryCode:(NSString *)arg1 ;
-(void)setCertificates:(PKSecureElementCertificateSet *)arg1 ;
-(NSData *)transactionData;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setTransactionData:(NSData *)arg1 ;
-(void)setTransactionInstructionsSignature:(NSData *)arg1 ;
-(void)setKextBlacklistVersion:(NSString *)arg1 ;
-(void)setEnrollmentSignature:(NSData *)arg1 ;
-(void)setSEPCertificates:(NSArray *)arg1 ;
-(void)setConfirmationBlobHash:(NSData *)arg1 ;
-(void)setConfirmationBlobVersion:(long long)arg1 ;
-(NSData *)transactionInstructionsSignature;
-(NSString *)kextBlacklistVersion;
-(NSData *)enrollmentSignature;
-(NSArray *)SEPCertificates;
-(NSData *)confirmationBlobHash;
-(long long)confirmationBlobVersion;
@end

