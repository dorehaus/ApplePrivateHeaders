/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSAudioAnalytics_AcousticFeaturesEntry.h>

@class NSString, QSSAcousticFeature;

@interface QSSMutableAudioAnalytics_AcousticFeaturesEntry : QSSAudioAnalytics_AcousticFeaturesEntry

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) QSSAcousticFeature * value; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(QSSAcousticFeature *)value;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setValue:(QSSAcousticFeature *)arg1 ;
@end
