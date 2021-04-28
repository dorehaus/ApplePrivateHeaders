/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSErrorBlamerRequest.h>

@class QSSStartSpeechRequest, NSArray, NSString, QSSUserLanguageProfile, QSSUserAcousticProfile;

@interface QSSMutableErrorBlamerRequest : QSSErrorBlamerRequest

@property (nonatomic,copy) QSSStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) NSArray * contextual_text; 
@property (nonatomic,copy) NSString * left_context; 
@property (nonatomic,copy) NSString * right_context; 
@property (nonatomic,copy) QSSUserLanguageProfile * user_language_profile; 
@property (nonatomic,copy) QSSUserAcousticProfile * user_acoustic_profile; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,copy) NSArray * audio_packets; 
@property (nonatomic,copy) NSString * ref_transcript; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(double)latitude;
-(double)longitude;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(QSSStartSpeechRequest *)start_speech_request;
-(void)setStart_speech_request:(QSSStartSpeechRequest *)arg1 ;
-(NSArray *)contextual_text;
-(void)setContextual_text:(NSArray *)arg1 ;
-(NSString *)left_context;
-(void)setLeft_context:(NSString *)arg1 ;
-(NSString *)right_context;
-(void)setRight_context:(NSString *)arg1 ;
-(QSSUserLanguageProfile *)user_language_profile;
-(void)setUser_language_profile:(QSSUserLanguageProfile *)arg1 ;
-(QSSUserAcousticProfile *)user_acoustic_profile;
-(void)setUser_acoustic_profile:(QSSUserAcousticProfile *)arg1 ;
-(NSArray *)audio_packets;
-(void)setAudio_packets:(NSArray *)arg1 ;
-(NSString *)ref_transcript;
-(void)setRef_transcript:(NSString *)arg1 ;
@end
