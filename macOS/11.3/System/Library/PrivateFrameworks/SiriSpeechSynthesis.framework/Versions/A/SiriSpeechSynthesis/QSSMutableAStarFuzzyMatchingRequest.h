/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSAStarFuzzyMatchingRequest.h>

@class NSString, QSSAStarFuzzyMatchingConfig;

@interface QSSMutableAStarFuzzyMatchingRequest : QSSAStarFuzzyMatchingRequest

@property (nonatomic,copy) NSString * matcher_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * target; 
@property (nonatomic,copy) QSSAStarFuzzyMatchingConfig * config; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)query;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(void)setQuery:(NSString *)arg1 ;
-(QSSAStarFuzzyMatchingConfig *)config;
-(void)setConfig:(QSSAStarFuzzyMatchingConfig *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(NSString *)matcher_id;
-(void)setMatcher_id:(NSString *)arg1 ;
@end

