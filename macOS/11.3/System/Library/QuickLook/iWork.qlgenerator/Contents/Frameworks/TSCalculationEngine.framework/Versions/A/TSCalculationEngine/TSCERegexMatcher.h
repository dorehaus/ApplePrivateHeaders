/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@class NSRegularExpression;

@interface TSCERegexMatcher : NSObject {

	NSRegularExpression* _regularExpression;

}

@property (nonatomic,readonly) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
+(id)regexMatcherWithRegexString:(id)arg1 caseSensitive:(char)arg2 entireMatch:(char)arg3 ;
+(id)regexMatcherWithRegexString:(id)arg1 caseSensitive:(char)arg2 ;
+(id)regexMatcherWithStringMatch:(id)arg1 caseSensitive:(char)arg2 entireMatch:(char)arg3 ;
+(id)regexMatcherWithStringMatch:(id)arg1 ;
+(id)regexMatcherWithRegexString:(id)arg1 ;
-(NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)matchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(NSRegularExpression *)regularExpression;
-(id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 withTemplate:(id)arg4 ;
-(unsigned long long)numberOfMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(char)containsMatchInString:(id)arg1 ;
-(NSRange)rangeOfFirstMatchInString:(id)arg1 ;
-(NSRange)rangeOfMatchInString:(id)arg1 occurrence:(long long)arg2 matchesFound:(out long long*)arg3 ;
-(id)initWithRegexString:(id)arg1 caseSensitive:(char)arg2 entireMatch:(char)arg3 ;
-(id)initWithString:(id)arg1 caseSensitive:(char)arg2 entireMatch:(char)arg3 ;
-(NSRange)rangeOfMatchInString:(id)arg1 occurrence:(long long)arg2 ;
@end
