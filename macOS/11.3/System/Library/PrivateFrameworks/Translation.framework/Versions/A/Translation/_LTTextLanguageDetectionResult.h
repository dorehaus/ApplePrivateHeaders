/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSCountedSet;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding> {

	NSLocale* _dominantLocale;
	NSCountedSet* _localeDetectionCount;
	NSCountedSet* _unsupportedLanguageCounts;

}

@property (nonatomic,copy,readonly) NSLocale * dominantLocale;                             //@synthesize dominantLocale=_dominantLocale - In the implementation block
@property (nonatomic,copy,readonly) NSCountedSet * localeDetectionCount;                   //@synthesize localeDetectionCount=_localeDetectionCount - In the implementation block
@property (nonatomic,copy,readonly) NSCountedSet * unsupportedLanguageCounts;              //@synthesize unsupportedLanguageCounts=_unsupportedLanguageCounts - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDetectedLocales:(id)arg1 unknownLanguages:(id)arg2 ;
-(id)initWithDetectionCounts:(id)arg1 availableLocales:(id)arg2 ;
-(NSLocale *)dominantLocale;
-(NSCountedSet *)localeDetectionCount;
-(NSCountedSet *)unsupportedLanguageCounts;
@end
