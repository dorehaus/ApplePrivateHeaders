/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKCurrencyAmount;

@interface PKPaymentTransactionFeeItem : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _type;
	PKCurrencyAmount* _currencyAmount;
	NSString* _localizedDisplayName;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * currencyAmount;              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayName;                //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)localizedDisplayName;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(void)_initWithFeeDictionary:(id)arg1 ;
-(char)isEqualToFeeItem:(id)arg1 ;
-(id)initWithFeeDictionary:(id)arg1 ;
@end

