/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKTransactionAuthenticationContext, NSData, NSString;

@interface PKTransactionAuthenticationResult : NSObject <NSSecureCoding> {

	PKTransactionAuthenticationContext* _authenticationContext;
	NSData* _encryptedPIN;
	NSData* _transactionDetailsSignature;
	NSData* _userConfirmation;
	NSString* _transactionServiceIdentifier;

}

@property (nonatomic,retain) PKTransactionAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,copy) NSData * encryptedPIN;                                                     //@synthesize encryptedPIN=_encryptedPIN - In the implementation block
@property (nonatomic,copy) NSData * transactionDetailsSignature;                                      //@synthesize transactionDetailsSignature=_transactionDetailsSignature - In the implementation block
@property (nonatomic,copy) NSData * userConfirmation;                                                 //@synthesize userConfirmation=_userConfirmation - In the implementation block
@property (nonatomic,copy) NSString * transactionServiceIdentifier;                                   //@synthesize transactionServiceIdentifier=_transactionServiceIdentifier - In the implementation block
@property (nonatomic,readonly) char hasDataForAllRequestedAuthenticationMechanisms; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKTransactionAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(PKTransactionAuthenticationContext *)arg1 ;
-(char)isEqualToTransactionAuthenticationResult:(id)arg1 ;
-(char)hasDataForAllRequestedAuthenticationMechanisms;
-(NSData *)encryptedPIN;
-(void)setEncryptedPIN:(NSData *)arg1 ;
-(NSData *)transactionDetailsSignature;
-(void)setTransactionDetailsSignature:(NSData *)arg1 ;
-(NSData *)userConfirmation;
-(void)setUserConfirmation:(NSData *)arg1 ;
-(NSString *)transactionServiceIdentifier;
-(void)setTransactionServiceIdentifier:(NSString *)arg1 ;
@end

