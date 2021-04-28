/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSLanguageDetectionPrediction.h>

@class NSString;

@interface QSSMutableLanguageDetectionPrediction : QSSLanguageDetectionPrediction

@property (nonatomic,copy) NSString * locale; 
@property (assign,nonatomic) float confidence; 
@property (assign,nonatomic) float threshold; 
@property (assign,nonatomic) BOOL is_low_confidence; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(float)confidence;
-(float)threshold;
-(void)setConfidence:(float)arg1 ;
-(void)setThreshold:(float)arg1 ;
-(BOOL)is_low_confidence;
-(void)setIs_low_confidence:(BOOL)arg1 ;
@end

