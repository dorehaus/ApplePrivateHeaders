/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKCurrencyAmount, NSDecimalNumber;

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	unsigned long long _type;
	unsigned long long _state;
	PKCurrencyAmount* _currencyAmount;
	NSDecimalNumber* _eligibleValue;
	unsigned long long _eligibleValueUnit;

}

@property (nonatomic,retain) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                 //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * eligibleValue;                   //@synthesize eligibleValue=_eligibleValue - In the implementation block
@property (assign,nonatomic) unsigned long long eligibleValueUnit;              //@synthesize eligibleValueUnit=_eligibleValueUnit - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setState:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)_initWithRewardsDictionary:(id)arg1 ;
-(char)isEqualToRewardsItem:(id)arg1 ;
-(NSDecimalNumber *)eligibleValue;
-(void)setEligibleValue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)eligibleValueUnit;
-(void)setEligibleValueUnit:(unsigned long long)arg1 ;
@end

