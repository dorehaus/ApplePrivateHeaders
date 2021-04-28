/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray, TSULocale;

@interface TSUDateParser : NSObject {

	NSMutableArray* _formatCategories;
	TSULocale* _locale;
	char _isJapaneseLocale;
	CFDateFormatterRef _specialCaseFormatter;

}
-(void)dealloc;
-(id)initWithLocale:(id)arg1 ;
-(id)newDateFromString:(id)arg1 preferredFormatString:(id)arg2 successfulFormatString:(id*)arg3 tryAggressiveFormats:(char)arg4 ;
-(void)p_addFormat:(id)arg1 locale:(id)arg2 formatCategoryMap:(id)arg3 ;
-(id)formatStringsDictionary;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(id)arg1 ;
-(id)p_initialPatternParsingFormat:(id)arg1 separator:(unsigned short*)arg2 ;
-(id)newDateFromString:(id)arg1 successfulFormatString:(id*)arg2 ;
-(id)p_newDateFromStringTryingFormats:(id)arg1 locale:(id)arg2 formats:(id)arg3 outSuccessfulFormatString:(id*)arg4 perfect:(char*)arg5 ;
@end

