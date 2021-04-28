/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSWPUserDefaults : NSObject
+(void)initialize;
+(unsigned long long)minimumFontSize;
+(unsigned long long)maximumFontSize;
+(id)invisiblesColor;
+(char)p_UserDefaultSet:(id)arg1 force:(char)arg2 ;
+(void)setAutomaticallyDetectLinks:(char)arg1 ;
+(void)setAutomaticallyDetectLists:(char)arg1 ;
+(void)setSuperscriptNumericalSuffixes:(char)arg1 ;
+(void)setSpellCheckingEnabled:(char)arg1 ;
+(char)automaticallyDetectLinks;
+(char)automaticallyDetectLists;
+(char)superscriptNumericalSuffixes;
+(char)spellCheckingEnabled;
+(void)setInvisiblesColor:(id)arg1 ;
+(void)registerUserDefaults:(char)arg1 ;
+(char)p_cachedBoolForKey:(id)arg1 ;
+(id)quotesArrayForLanguage:(id)arg1 ;
+(id)doubleQuotesOptions;
+(id)singleQuotesOptions;
+(id)appReplacementsDictionary;
+(char)automaticTextReplacement;
+(id)p_caseInsensitiveDictionary:(id)arg1 mergedWithDictionary:(id)arg2 ;
+(char)automaticallyFormatFractions;
+(void)p_defaultsChanged:(id)arg1 ;
+(char)automaticallyDetectPhoneLinks;
+(char)underlineLinks;
+(char)shouldShowInvisibles;
+(char)automaticDashSubstitution;
+(char)automaticQuoteSubstitution;
+(char)grammarChecking;
+(char)automaticSpellingCorrection;
+(void)setAutomaticSpellingCorrection:(char)arg1 ;
+(char)automaticCapitalization;
+(void)setAutomaticCapitalization:(char)arg1 ;
+(id)ignoredWordsArray;
+(void)setIgnoredWordsArray:(id)arg1 ;
+(char)addIgnoredWord:(id)arg1 ;
+(char)hasPreferMathTypeForEditingEquations;
+(char)preferMathTypeForEditingEquations;
+(void)setPreferMathTypeForEditingEquations:(char)arg1 ;
+(long long)doubleQuotes;
+(long long)singleQuotes;
+(void)setDoubleQuotes:(long long)arg1 ;
+(void)setSingleQuotes:(long long)arg1 ;
+(id)replacementsDictionaryAllowingFractions:(char)arg1 ;
+(void)setReplacementsDictionary:(id)arg1 ;
+(void)setAutomaticallyDetectPhoneLinks:(char)arg1 ;
+(void)setUnderlineLinks:(char)arg1 ;
+(void)setAutomaticallyFormatFractions:(char)arg1 ;
+(void)setAutomaticDashSubstitution:(char)arg1 ;
+(void)setAutomaticQuoteSubstitution:(char)arg1 ;
+(void)setAutomaticTextReplacement:(char)arg1 ;
+(char)allowsFontSmoothing;
+(void)setGrammarChecking:(char)arg1 ;
@end

