/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPeerPaymentMessage : PBCodable <NSCopying> {

	long long _amount;
	NSString* _currency;
	NSString* _identifier;
	NSString* _memo;
	NSString* _paymentIdentifier;
	NSString* _recipientAddress;
	NSString* _requestDeviceScoreIdentifier;
	NSString* _requestToken;
	NSString* _senderAddress;
	NSString* _transactionIdentifier;
	int _type;
	unsigned _version;
	SCD_Struct_PK8 _has;

}

@property (assign,nonatomic) unsigned version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasCurrency; 
@property (nonatomic,retain) NSString * currency;                                  //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) char hasAmount; 
@property (assign,nonatomic) long long amount;                                     //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) char hasSenderAddress; 
@property (nonatomic,retain) NSString * senderAddress;                             //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,readonly) char hasRecipientAddress; 
@property (nonatomic,retain) NSString * recipientAddress;                          //@synthesize recipientAddress=_recipientAddress - In the implementation block
@property (nonatomic,readonly) char hasRequestToken; 
@property (nonatomic,retain) NSString * requestToken;                              //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,readonly) char hasPaymentIdentifier; 
@property (nonatomic,retain) NSString * paymentIdentifier;                         //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,readonly) char hasTransactionIdentifier; 
@property (nonatomic,retain) NSString * transactionIdentifier;                     //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) char hasMemo; 
@property (nonatomic,retain) NSString * memo;                                      //@synthesize memo=_memo - In the implementation block
@property (nonatomic,readonly) char hasRequestDeviceScoreIdentifier; 
@property (nonatomic,retain) NSString * requestDeviceScoreIdentifier;              //@synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)identifier;
-(unsigned)version;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSString *)transactionIdentifier;
-(char)hasIdentifier;
-(void)setAmount:(long long)arg1 ;
-(long long)amount;
-(void)setHasAmount:(char)arg1 ;
-(char)hasAmount;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)recipientAddress;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setRequestToken:(NSString *)arg1 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(void)setMemo:(NSString *)arg1 ;
-(void)setRequestDeviceScoreIdentifier:(NSString *)arg1 ;
-(char)hasCurrency;
-(char)hasSenderAddress;
-(char)hasRecipientAddress;
-(char)hasRequestToken;
-(char)hasPaymentIdentifier;
-(char)hasTransactionIdentifier;
-(char)hasMemo;
-(char)hasRequestDeviceScoreIdentifier;
-(NSString *)requestToken;
-(NSString *)paymentIdentifier;
-(NSString *)memo;
-(NSString *)requestDeviceScoreIdentifier;
@end

