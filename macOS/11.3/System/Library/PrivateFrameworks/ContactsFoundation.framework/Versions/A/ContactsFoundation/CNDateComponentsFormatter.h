/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSLocale, NSArray, NSString;

@interface CNDateComponentsFormatter : NSFormatter {

	NSLocale* _locale;
	NSArray* _lazyFormatterFutures;
	NSString* _dateFormatPlaceholderString;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
+(id)os_log;
+(id)shortDayMonthYearDateFormatterWithLocale:(id)arg1 ;
+(id)formatterFuturesWithLocale:(id)arg1 ;
+(char)shouldUseChinaSpecificFormattersForLocale:(id)arg1 ;
+(id)chineseRelatedGregorianYearMonthDayFormatter;
+(id)chineseMonthDayFormatter;
+(id)chineseMonthDayHanidayFormatter;
+(id)chineseCyclicYearMonthDayFormatter;
+(id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+(id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+(id)longDayMonthYearDateFormatterWithLocale:(id)arg1 ;
+(id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg1 ;
+(id)longDayMonthYearlessDateFormatterWithLocale:(id)arg1 ;
+(char)shouldUseIslamicSpecificFormattersForLocale:(id)arg1 ;
+(id)dateFormatterWithYearFormat:(id)arg1 hasLongFormat:(char)arg2 locale:(id)arg3 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringFromDateComponents:(id)arg1 ;
-(void)regenerateFormatterFutures;
-(id)dateFormatPlaceholderStringForLanguage:(id)arg1 ;
-(char)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)arg1 ;
-(id)arabicGregorianPlaceholderString;
-(char)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)arg1 ;
-(id)arabicIslamicPlaceholderString;
-(id)dmyFormatString;
-(id)placeholderStringWithLocalizedDay:(id)arg1 month:(id)arg2 year:(id)arg3 ;
-(char)shouldUseChinesePlaceholderString;
-(id)chinesePlaceholderStringWithDay:(id)arg1 month:(id)arg2 year:(id)arg3 ;
-(id)placeholderSubstitutionStringWithDay:(unsigned long long)arg1 month:(unsigned long long)arg2 year:(unsigned long long)arg3 ;
-(id)displayFormatterForComponents:(id)arg1 ;
-(id)normalizedComponentsFromDate:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3 ;
-(unsigned long long)componentsToExtract;
-(id)dateFormatPlaceholderString;
-(id)dateComponentsFromString:(id)arg1 ;
@end

