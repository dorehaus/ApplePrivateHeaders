/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate, PKCurrencyAmount;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding> {

	char _isPrimary;
	NSString* _identifier;
	NSDecimalNumber* _value;
	NSString* _currencyCode;
	long long _exponent;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSDate* _lastUpdateDate;
	NSString* _preformattedString;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                           //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * currencyValue; 
@property (nonatomic,readonly) char isCurrency; 
@property (assign,nonatomic) long long exponent;                              //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,readonly) NSString * formattedValue; 
@property (nonatomic,copy) NSString * localizedTitle;                         //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                   //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) char isPrimary;                                  //@synthesize isPrimary=_isPrimary - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdateDate;                           //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,copy) NSString * preformattedString;                     //@synthesize preformattedString=_preformattedString - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(NSString *)identifier;
-(NSDecimalNumber *)value;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(char)isPrimary;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)setIsPrimary:(char)arg1 ;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(char)isCurrency;
-(void)_setValueWithRounding:(id)arg1 ;
-(NSString *)preformattedString;
-(PKCurrencyAmount *)currencyValue;
-(NSString *)formattedValue;
-(id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3 ;
-(void)setPreformattedString:(NSString *)arg1 ;
@end

