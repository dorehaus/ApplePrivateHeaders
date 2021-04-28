/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTokenizedTextResult.h>

@class NSArray;

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (nonatomic,copy) NSArray * tokenColumns; 
@property (assign,nonatomic) long long changeableTokenColumnCount; 
@property (assign,nonatomic) long long precedingLineBreaks; 
+(id)refineAlternativeTokens:(id)arg1 historyTokenIDs:(id)arg2 languageModel:(void*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)adjustColumns;
-(void)appendTokenColumns:(id)arg1 ;
-(void)setTranscriptionPaths:(id)arg1 scores:(id)arg2 ;
-(void)trimTokensToTranscriptionPathCount:(long long)arg1 ;
-(void)filterCandidatesWithOutOfPattern:(char)arg1 duplicateTokenIDs:(char)arg2 keepOutOfLexiconAlternatives:(char)arg3 keepAlternativeLengths:(char)arg4 keepSubstrings:(char)arg5 shouldKeepOriginalSpelling:(char)arg6 ;
-(void)setTokenColumns:(NSArray *)arg1 ;
-(void)setPrecedingLineBreaks:(long long)arg1 ;
-(id)commonStrokeSetsFromSets:(id)arg1 tokenRow:(id)arg2 ;
-(id)_columnStrokeSetsFromTokenRows:(id)arg1 ;
-(void)setChangeableTokenColumnCount:(long long)arg1 ;
@end

