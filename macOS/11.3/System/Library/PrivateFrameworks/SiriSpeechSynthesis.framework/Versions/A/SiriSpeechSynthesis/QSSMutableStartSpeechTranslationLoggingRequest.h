/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSStartSpeechTranslationLoggingRequest.h>

@class NSString, QSSTranslationLocalePair, QSSLanguageDetected, NSArray;

@interface QSSMutableStartSpeechTranslationLoggingRequest : QSSStartSpeechTranslationLoggingRequest

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) QSSTranslationLocalePair * translation_locale_pair; 
@property (nonatomic,copy) QSSLanguageDetected * detected_locale; 
@property (nonatomic,copy) NSString * user_selected_locale; 
@property (nonatomic,copy) NSArray * senses; 
@property (nonatomic,copy) NSString * user_selected_sense; 
@property (nonatomic,copy) NSArray * user_interacted_senses; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
-(QSSTranslationLocalePair *)translation_locale_pair;
-(void)setTranslation_locale_pair:(QSSTranslationLocalePair *)arg1 ;
-(QSSLanguageDetected *)detected_locale;
-(void)setDetected_locale:(QSSLanguageDetected *)arg1 ;
-(NSString *)user_selected_locale;
-(void)setUser_selected_locale:(NSString *)arg1 ;
-(NSArray *)senses;
-(void)setSenses:(NSArray *)arg1 ;
-(NSString *)user_selected_sense;
-(void)setUser_selected_sense:(NSString *)arg1 ;
-(NSArray *)user_interacted_senses;
-(void)setUser_interacted_senses:(NSArray *)arg1 ;
@end

