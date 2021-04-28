/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString, NSArray, NSIndexSet;

@interface CHTextRecognitionResult : CHRecognitionResult {

	char _isTextReplacement;
	NSString* _string;
	NSArray* _wordRanges;
	NSArray* _wordIDs;
	NSArray* _wordRecognitionScores;
	NSArray* _wordCombinedScores;
	NSArray* _wordStrokeSets;
	NSArray* _wordLexicalEntries;
	NSArray* _wordPatternEntries;
	NSIndexSet* _rareWordIndexes;
	NSIndexSet* _inappropriateWordIndexes;

}

@property (readonly) NSString * string;                                  //@synthesize string=_string - In the implementation block
@property (readonly) NSArray * wordRanges;                               //@synthesize wordRanges=_wordRanges - In the implementation block
@property (readonly) NSArray * wordIDs;                                  //@synthesize wordIDs=_wordIDs - In the implementation block
@property (readonly) NSArray * wordRecognitionScores;                    //@synthesize wordRecognitionScores=_wordRecognitionScores - In the implementation block
@property (readonly) NSArray * wordCombinedScores;                       //@synthesize wordCombinedScores=_wordCombinedScores - In the implementation block
@property (readonly) NSArray * wordStrokeSets;                           //@synthesize wordStrokeSets=_wordStrokeSets - In the implementation block
@property (readonly) NSArray * wordLexicalEntries;                       //@synthesize wordLexicalEntries=_wordLexicalEntries - In the implementation block
@property (readonly) NSArray * wordPatternEntries;                       //@synthesize wordPatternEntries=_wordPatternEntries - In the implementation block
@property (readonly) NSIndexSet * rareWordIndexes;                       //@synthesize rareWordIndexes=_rareWordIndexes - In the implementation block
@property (readonly) NSIndexSet * inappropriateWordIndexes;              //@synthesize inappropriateWordIndexes=_inappropriateWordIndexes - In the implementation block
@property (readonly) char isTextReplacement;                             //@synthesize isTextReplacement=_isTextReplacement - In the implementation block
-(void)dealloc;
-(NSString *)string;
-(NSArray *)wordIDs;
-(id)initWithString:(id)arg1 score:(double)arg2 wordRanges:(id)arg3 wordIDs:(id)arg4 wordRecognitionScores:(id)arg5 wordCombinedScores:(id)arg6 wordStrokeSets:(id)arg7 wordLexicalEntries:(id)arg8 wordPatternEntries:(id)arg9 rareWordIndexes:(id)arg10 inappropriateWordIndexes:(id)arg11 isTextReplacement:(char)arg12 ;
-(NSIndexSet *)inappropriateWordIndexes;
-(NSArray *)wordStrokeSets;
-(NSIndexSet *)rareWordIndexes;
-(NSArray *)wordCombinedScores;
-(NSArray *)wordLexicalEntries;
-(NSArray *)wordPatternEntries;
-(NSArray *)wordRanges;
-(NSArray *)wordRecognitionScores;
-(char)isTextReplacement;
-(id)mecabraCandidate;
@end

