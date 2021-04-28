/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSLocale, NSArray, NSDictionary, NSString, NSMutableArray, OITSULocaleStructuredDictionary, NSMutableDictionary;

@interface OITSUNumberFormatter : NSObject {

	NSLocale* _locale;
	NSArray* _decimalFormatters;
	NSDictionary* _currencyFormatters;
	NSArray* _percentageFormatters;
	NSArray* _scientificFormatters;
	CFNumberFormatterRef _fractionFormatter;
	NSString* _currencyString;
	NSString* _percentageString;
	NSString* _scientificString;
	NSString* _decimalString;
	NSString* _decimalSeparator;
	NSString* _currencyDecimalSeparator;
	NSString* _groupingSeparator;
	NSString* _currencyGroupingSeparator;
	NSString* _percentSymbol;
	unsigned long long _groupingSize;
	NSMutableArray* _transformedDecimalStrings;
	NSMutableArray* _transformedCurrencyStrings;
	NSMutableArray* _transformedPercentageStrings;
	NSMutableArray* _transformedScientificStrings;
	OITSULocaleStructuredDictionary* _harmonizedNumberFormatterSymbols;
	NSMutableDictionary* _currencyCodeToSymbolMap;
	NSMutableDictionary* _currencyCodeToHalfWidthSymbolMap;
	NSString* _additionalCurrencyCode;
	NSDictionary* _additionalCurrencyCodeFormatters;

}
+(void)initialize;
+(id)currentLocaleCurrencyCode;
+(id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2 ;
+(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
+(id)currencySymbolForCurrencyCode:(id)arg1 ;
+(id)decimalSeparatorForLocale:(id)arg1 ;
+(id)groupingSeparatorForLocale:(id)arg1 ;
+(unsigned long long)groupingSizeForLocale:(id)arg1 ;
+(id)userVisibleCurrencyCodes;
+(id)formatterForLocale:(id)arg1 ;
+(id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg1 ;
+(CFNumberFormatterRef)createHarmonizedCFNumberFormatterWithLocale:(id)arg1 style:(long long)arg2 ;
+(id)currencySymbolForCurrencyCode:(id)arg1 locale:(id)arg2 ;
+(int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2 ;
+(void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1 ;
+(id)displayNameForCurrencyCode:(id)arg1 ;
+(id)defaultCurrencyCodeForLocale:(id)arg1 ;
+(id)defaultFormatStringForValueType:(int)arg1 ;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1 ;
+(id)availableCurrencyCodes;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1 ;
+(id)currentLocaleDecimalSeparator;
+(id)currentLocaleCurrencyDecimalSeparator;
+(id)numberFormatStringSpecialSymbols;
+(id)currencyDecimalSeparatorForLocale:(id)arg1 ;
+(id)currencyGroupingSeparatorForLocale:(id)arg1 ;
+(id)percentSymbolForLocale:(id)arg1 ;
-(void)dealloc;
-(id)decimalSeparator;
-(id)groupingSeparator;
-(id)currencyCode;
-(id)initWithLocale:(id)arg1 ;
-(id)currencyDecimalSeparator;
-(id)percentSymbol;
-(unsigned long long)groupingSize;
-(id)currencyGroupingSeparator;
-(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
-(id)currencySymbolForCurrencyCode:(id)arg1 ;
-(char)decimalFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3 ;
-(char)currencyFromString:(id)arg1 additionalCurrencyCode:(id)arg2 value:(double*)arg3 formatString:(id*)arg4 currencyCode:(id*)arg5 ;
-(char)percentageFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3 ;
-(char)scientificFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3 ;
-(char)fractionFromString:(id)arg1 value:(double*)arg2 ;
-(id)displayNameForCurrencyCode:(id)arg1 ;
-(id)defaultFormatStringForValueType:(int)arg1 ;
-(CFNumberFormatterRef)p_createHarmonizedCFNumberFormatterOfStyle:(long long)arg1 ;
-(void)p_numberPreferencesChanged:(id)arg1 ;
-(void)p_loadHarmonizedNumberFormatterSymbols;
-(id)p_decimalFormatters;
-(char)p_valueFromString:(id)arg1 formatters:(id)arg2 value:(double*)arg3 formatString:(id*)arg4 ;
-(id)p_findCurrencySymbolInString:(id)arg1 additionalCurrencyCode:(id)arg2 successfullString:(id*)arg3 currencyCode:(id*)arg4 ;
-(id)p_currencyFormatters;
-(id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)arg1 ;
-(id)p_percentageFormatters;
-(id)p_scientificFormatters;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1 ;
@end

