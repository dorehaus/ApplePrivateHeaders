/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSData;

@interface PKServiceProviderOrder : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _itemDescription;
	NSString* _serviceProviderIdentifier;
	NSDictionary* _serviceProviderData;
	unsigned long long _paymentInstrumentType;
	NSData* _appletValue;
	NSString* _transactionIdentifier;

}

@property (nonatomic,copy) NSDictionary * serviceProviderData;                      //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * itemDescription;                              //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,copy) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long paymentInstrumentType;              //@synthesize paymentInstrumentType=_paymentInstrumentType - In the implementation block
@property (nonatomic,copy) NSData * appletValue;                                    //@synthesize appletValue=_appletValue - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;                        //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)transactionIdentifier;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(id)_itemDictionary;
-(NSString *)serviceProviderIdentifier;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setPaymentInstrumentType:(unsigned long long)arg1 ;
-(void)setAppletValue:(NSData *)arg1 ;
-(NSDictionary *)serviceProviderData;
-(id)_paymentInstrumentDictionary;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(void)setServiceProviderData:(NSDictionary *)arg1 ;
-(unsigned long long)paymentInstrumentType;
-(NSData *)appletValue;
@end

