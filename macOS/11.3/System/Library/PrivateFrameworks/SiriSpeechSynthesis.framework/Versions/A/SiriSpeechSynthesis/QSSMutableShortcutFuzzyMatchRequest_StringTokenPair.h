/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSShortcutFuzzyMatchRequest_StringTokenPair.h>

@class NSString, NSArray;

@interface QSSMutableShortcutFuzzyMatchRequest_StringTokenPair : QSSShortcutFuzzyMatchRequest_StringTokenPair

@property (nonatomic,copy) NSString * raw_string; 
@property (nonatomic,copy) NSArray * tokens; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(NSString *)raw_string;
-(void)setRaw_string:(NSString *)arg1 ;
@end

