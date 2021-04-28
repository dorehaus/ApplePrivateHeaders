/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/Versions/A/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLocale, NSCalendar, NSDictionary;

@interface CCVegaExpressionFunctions : NSObject {

	NSMutableDictionary* _cache;
	NSLocale* _locale;
	NSCalendar* _calendar;
	NSDictionary* _fontOptions;

}

@property (retain) NSLocale * locale; 
@property (retain) NSCalendar * calendar; 
@property (retain) NSDictionary * fontOptions; 
+(id)functionNames;
-(id)init;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSDictionary *)fontOptions;
-(/*^block*/id)nativeNumberFormat;
-(/*^block*/id)nativeDateComponentsFormat;
-(/*^block*/id)nativeDateFormat;
-(/*^block*/id)nativeTextMetrics;
-(/*^block*/id)nativeFontMetrics;
-(id)keyForKind:(id)arg1 options:(id)arg2 ;
-(id)makeReturnValue:(id)arg1 ;
-(id)numberFormatterFromOptions:(id)arg1 ;
-(unsigned long long)calendarUnitFromString:(id)arg1 ;
-(id)dateComponentsFormatterFromOptions:(id)arg1 ;
-(unsigned long long)dateFormatterStyleFromString:(id)arg1 ;
-(id)dateFormatterFromOptions:(id)arg1 ;
-(id)fontFromJSFontDesc:(id)arg1 options:(id)arg2 ;
-(void)setFontOptions:(NSDictionary *)arg1 ;
-(void)registerFunctionsToClient:(id)arg1 ;
@end

