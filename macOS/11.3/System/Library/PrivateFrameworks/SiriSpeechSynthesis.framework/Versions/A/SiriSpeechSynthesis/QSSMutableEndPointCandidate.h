/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSEndPointCandidate.h>

@class NSString;

@interface QSSMutableEndPointCandidate : QSSEndPointCandidate

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (assign,nonatomic) int end_point_likelihood; 
@property (assign,nonatomic) int processed_audio_duration_ms; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(int)processed_audio_duration_ms;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(int)end_point_likelihood;
-(void)setEnd_point_likelihood:(int)arg1 ;
-(void)setProcessed_audio_duration_ms:(int)arg1 ;
@end

