/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/Versions/A/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMFAutocompleteCandidateProvider.h>

@class NSArray;

@interface EMFDefaultAutocompleteCandidateProvider : NSObject <EMFAutocompleteCandidateProvider> {

	NSArray* _tokens;

}

@property (nonatomic,readonly) NSArray * tokens;              //@synthesize tokens=_tokens - In the implementation block
+(id)providerFromInvertedIndex:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSArray *)tokens;
-(id)initWithTokens:(id)arg1 ;
-(id)firstMatchForPrefix:(id)arg1 ;
-(id)matchesForPrefix:(id)arg1 usingAlgorithm:(unsigned long long)arg2 ;
-(void)enumerateCandidatesMatchingPrefix:(id)arg1 withEnumerationType:(long long)arg2 maxCandidates:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)firstCandidateMatchingPrefix:(id)arg1 ;
-(char)isValidToken:(id)arg1 ;
@end
