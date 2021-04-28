/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) long long _calendarDirection; 
+(id)autoupdatingCurrentLocale;
+(id)__effectiveLanguageForBundle:(id)arg1 ;
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
+(id)_deviceLanguage;
+(id)preferredLocale;
+(id)systemLanguages;
+(void)setPreferredLanguages:(id)arg1 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3 ;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(void)_setPreferredMeasurementSystem:(id)arg1 ;
+(id)_preferredMeasurementSystem;
+(void)_setPreferredTemperatureUnit:(id)arg1 ;
+(id)_preferredTemperatureUnit;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)currentLocale;
+(id)systemLocale;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)availableLocaleIdentifiers;
+(id)ISOLanguageCodes;
+(id)ISOCountryCodes;
+(id)ISOCurrencyCodes;
+(id)commonISOCurrencyCodes;
+(id)preferredLanguages;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)characterDirectionForLanguage:(id)arg1 ;
+(unsigned long long)lineDirectionForLanguage:(id)arg1 ;
+(id)internetServicesRegion;
-(id)debugDescription;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_calendarDirection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)_prefs;
-(id)localeIdentifier;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)calendarIdentifier;
-(id)localizedStringForLocaleIdentifier:(id)arg1 ;
-(id)languageCode;
-(id)localizedStringForLanguageCode:(id)arg1 ;
-(id)countryCode;
-(id)localizedStringForCountryCode:(id)arg1 ;
-(id)scriptCode;
-(id)localizedStringForScriptCode:(id)arg1 ;
-(id)variantCode;
-(id)localizedStringForVariantCode:(id)arg1 ;
-(id)localizedStringForCalendarIdentifier:(id)arg1 ;
-(id)collationIdentifier;
-(id)localizedStringForCollationIdentifier:(id)arg1 ;
-(id)decimalSeparator;
-(id)localizedStringForDecimalSeparator:(id)arg1 ;
-(id)groupingSeparator;
-(id)localizedStringForGroupingSeparator:(id)arg1 ;
-(id)currencySymbol;
-(id)localizedStringForCurrencySymbol:(id)arg1 ;
-(id)currencyCode;
-(id)localizedStringForCurrencyCode:(id)arg1 ;
-(id)collatorIdentifier;
-(id)localizedStringForCollatorIdentifier:(id)arg1 ;
-(id)quotationBeginDelimiter;
-(id)localizedStringForQuotationBeginDelimiter:(id)arg1 ;
-(id)quotationEndDelimiter;
-(id)localizedStringForQuotationEndDelimiter:(id)arg1 ;
-(id)alternateQuotationBeginDelimiter;
-(id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1 ;
-(id)alternateQuotationEndDelimiter;
-(id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1 ;
-(id)exemplarCharacterSet;
-(char)usesMetricSystem;
-(id)identifier;
@end

