/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSPartialTextToSpeechStreamingResponse.h>

@class NSString, NSData, NSArray, QSSTextToSpeechFeature;

@interface QSSMutablePartialTextToSpeechStreamingResponse : QSSPartialTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) int current_pkt_number; 
@property (nonatomic,copy) NSData * audio; 
@property (nonatomic,copy) NSArray * word_timing_info; 
@property (nonatomic,copy) QSSTextToSpeechFeature * feature; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(QSSTextToSpeechFeature *)feature;
-(void)setFeature:(QSSTextToSpeechFeature *)arg1 ;
-(NSData *)audio;
-(void)setAudio:(NSData *)arg1 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
-(void)audio:(/*^block*/id)arg1 ;
-(NSArray *)word_timing_info;
-(void)setWord_timing_info:(NSArray *)arg1 ;
-(NSString *)stream_id;
-(void)setStream_id:(NSString *)arg1 ;
-(int)current_pkt_number;
-(void)setCurrent_pkt_number:(int)arg1 ;
@end
