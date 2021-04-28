/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSTextToSpeechCacheMetaInfo.h>

@class QSSTextToSpeechMeta, QSSAudioDescription, NSString;

@interface QSSMutableTextToSpeechCacheMetaInfo : QSSTextToSpeechCacheMetaInfo

@property (nonatomic,copy) QSSTextToSpeechMeta * meta_info; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) BOOL enable_word_timing_info; 
@property (nonatomic,copy) QSSAudioDescription * decoder_description; 
@property (nonatomic,copy) QSSAudioDescription * playback_description; 
@property (assign,nonatomic) int audio_length; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * original_session_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(QSSAudioDescription *)decoder_description;
-(void)setMeta_info:(QSSTextToSpeechMeta *)arg1 ;
-(QSSTextToSpeechMeta *)meta_info;
-(long long)audio_type;
-(void)setAudio_type:(long long)arg1 ;
-(BOOL)enable_word_timing_info;
-(void)setEnable_word_timing_info:(BOOL)arg1 ;
-(void)setDecoder_description:(QSSAudioDescription *)arg1 ;
-(QSSAudioDescription *)playback_description;
-(void)setPlayback_description:(QSSAudioDescription *)arg1 ;
-(int)audio_length;
-(void)setAudio_length:(int)arg1 ;
-(NSString *)original_session_id;
-(void)setOriginal_session_id:(NSString *)arg1 ;
@end

