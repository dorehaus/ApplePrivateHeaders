/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationStreamingRequest.h>

@class FTStartSpeechTranslationRequest, FTLanguageDetected, FTAudioPacket, FTSpeechTranslationAudioPacket, FTFinishAudio, FTSetEndpointerState, FTResetServerEndpointer, FTStartSpeechTranslationLoggingRequest;

@interface FTMutableSpeechTranslationStreamingRequest : FTSpeechTranslationStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTStartSpeechTranslationRequest * contentAsFTStartSpeechTranslationRequest; 
@property (nonatomic,copy) FTLanguageDetected * contentAsFTLanguageDetected; 
@property (nonatomic,copy) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,copy) FTSpeechTranslationAudioPacket * contentAsFTSpeechTranslationAudioPacket; 
@property (nonatomic,copy) FTFinishAudio * contentAsFTFinishAudio; 
@property (nonatomic,copy) FTSetEndpointerState * contentAsFTSetEndpointerState; 
@property (nonatomic,copy) FTResetServerEndpointer * contentAsFTResetServerEndpointer; 
@property (nonatomic,copy) FTStartSpeechTranslationLoggingRequest * contentAsFTStartSpeechTranslationLoggingRequest; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(void)setContentAsFTAudioPacket:(FTAudioPacket *)arg1 ;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(void)setContentAsFTFinishAudio:(FTFinishAudio *)arg1 ;
-(FTSetEndpointerState *)contentAsFTSetEndpointerState;
-(void)setContentAsFTSetEndpointerState:(FTSetEndpointerState *)arg1 ;
-(FTResetServerEndpointer *)contentAsFTResetServerEndpointer;
-(void)setContentAsFTResetServerEndpointer:(FTResetServerEndpointer *)arg1 ;
-(FTLanguageDetected *)contentAsFTLanguageDetected;
-(void)setContentAsFTLanguageDetected:(FTLanguageDetected *)arg1 ;
-(FTStartSpeechTranslationRequest *)contentAsFTStartSpeechTranslationRequest;
-(void)setContentAsFTStartSpeechTranslationRequest:(FTStartSpeechTranslationRequest *)arg1 ;
-(FTSpeechTranslationAudioPacket *)contentAsFTSpeechTranslationAudioPacket;
-(void)setContentAsFTSpeechTranslationAudioPacket:(FTSpeechTranslationAudioPacket *)arg1 ;
-(FTStartSpeechTranslationLoggingRequest *)contentAsFTStartSpeechTranslationLoggingRequest;
-(void)setContentAsFTStartSpeechTranslationLoggingRequest:(FTStartSpeechTranslationLoggingRequest *)arg1 ;
@end

