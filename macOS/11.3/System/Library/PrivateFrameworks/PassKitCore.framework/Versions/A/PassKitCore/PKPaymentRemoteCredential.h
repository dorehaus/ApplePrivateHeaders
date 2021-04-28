/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSURL, NSArray, PKPaymentPass;

@interface PKPaymentRemoteCredential : PKPaymentCredential {

	NSString* _identifier;
	long long _status;
	NSURL* _passURL;
	NSArray* _summaryMetadata;
	NSArray* _metadata;
	NSString* _summaryMetadataDescription;
	NSString* _statusDescription;
	NSString* _ownershipTokenIdentifier;
	PKPaymentPass* _paymentPass;
	unsigned long long _rank;
	NSString* _productIdentifier;
	NSString* _serialNumber;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long status;                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                             //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * summaryMetadata;                          //@synthesize summaryMetadata=_summaryMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryMetadataDescription;              //@synthesize summaryMetadataDescription=_summaryMetadataDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * statusDescription;                       //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;                //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                               //@synthesize paymentPass=_paymentPass - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                                   //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * productIdentifier;                            //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                     //@synthesize serialNumber=_serialNumber - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)status;
-(NSString *)serialNumber;
-(NSArray *)metadata;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSString *)productIdentifier;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)statusDescription;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(char)_isEqualToCredential:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 status:(long long)arg2 credentialType:(long long)arg3 passURL:(id)arg4 ;
-(NSArray *)summaryMetadata;
-(NSString *)summaryMetadataDescription;
-(NSString *)ownershipTokenIdentifier;
@end
