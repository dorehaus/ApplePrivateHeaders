/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSSiriTranslationInfo.h>

@class QSSRecognitionSausage, NSArray, NSString;

@interface QSSMutableSiriTranslationInfo : QSSSiriTranslationInfo

@property (nonatomic,copy) QSSRecognitionSausage * raw_sausage; 
@property (nonatomic,copy) NSArray * raw_nbest_choices; 
@property (nonatomic,copy) NSArray * post_itn_tokens; 
@property (nonatomic,copy) NSString * post_itn_recognition; 
@property (nonatomic,copy) NSArray * itn_alignments; 
@property (nonatomic,copy) NSArray * translation_phrase; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(QSSRecognitionSausage *)raw_sausage;
-(void)setRaw_sausage:(QSSRecognitionSausage *)arg1 ;
-(NSArray *)raw_nbest_choices;
-(void)setRaw_nbest_choices:(NSArray *)arg1 ;
-(NSArray *)post_itn_tokens;
-(void)setPost_itn_tokens:(NSArray *)arg1 ;
-(NSString *)post_itn_recognition;
-(void)setPost_itn_recognition:(NSString *)arg1 ;
-(NSArray *)itn_alignments;
-(void)setItn_alignments:(NSArray *)arg1 ;
-(NSArray *)translation_phrase;
-(void)setTranslation_phrase:(NSArray *)arg1 ;
@end

