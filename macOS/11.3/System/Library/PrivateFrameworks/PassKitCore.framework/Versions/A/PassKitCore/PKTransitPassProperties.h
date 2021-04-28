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

@class NSDate, NSString, PKCurrencyAmount, NSArray, PKFelicaPassProperties, NSDecimalNumber;

@interface PKTransitPassProperties : NSObject <NSCopying, NSSecureCoding> {

	char _blacklisted;
	NSDate* _expirationDate;
	NSString* _appletFormat;
	PKCurrencyAmount* _balance;
	NSArray* _enrouteTransitTypes;

}

@property (nonatomic,readonly) PKFelicaPassProperties * felicaProperties; 
@property (nonatomic,copy) NSString * appletFormat;                                     //@synthesize appletFormat=_appletFormat - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * balance;                                  //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=isBlacklisted,nonatomic) char blacklisted;                     //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,readonly) NSString * displayableTransitBalance; 
@property (nonatomic,readonly) NSDecimalNumber * decimalTransitBalance; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,copy) NSArray * enrouteTransitTypes;                               //@synthesize enrouteTransitTypes=_enrouteTransitTypes - In the implementation block
@property (nonatomic,readonly) char isEnRoute; 
@property (nonatomic,copy,readonly) NSDecimalNumber * transitBalance; 
@property (nonatomic,copy,readonly) NSString * transitBalanceCurrencyCode; 
@property (getter=isBlocked,nonatomic,readonly) char blocked; 
@property (getter=isInStation,nonatomic,readonly) char inStation; 
+(char)supportsSecureCoding;
+(id)passPropertiesForPass:(id)arg1 ;
+(Class)equalityClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(char)isBlocked;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(PKCurrencyAmount *)balance;
-(void)setBalance:(PKCurrencyAmount *)arg1 ;
-(NSArray *)enrouteTransitTypes;
-(void)setEnrouteTransitTypes:(NSArray *)arg1 ;
-(char)isBlacklisted;
-(void)setBlacklisted:(char)arg1 ;
-(char)isInStation;
-(id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2 ;
-(PKFelicaPassProperties *)felicaProperties;
-(NSDecimalNumber *)transitBalance;
-(NSString *)transitBalanceCurrencyCode;
-(NSString *)displayableTransitBalance;
-(NSDecimalNumber *)decimalTransitBalance;
-(char)isEnRoute;
-(NSString *)appletFormat;
-(void)setAppletFormat:(NSString *)arg1 ;
@end

