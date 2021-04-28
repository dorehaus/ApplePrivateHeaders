/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAudioAnalytics.h>

@class NSArray;

@interface FTMutableAudioAnalytics : FTAudioAnalytics

@property (nonatomic,copy) NSArray * speech_recognition_features; 
@property (nonatomic,copy) NSArray * acoustic_features; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)speech_recognition_features;
-(void)setSpeech_recognition_features:(NSArray *)arg1 ;
-(NSArray *)acoustic_features;
-(void)setAcoustic_features:(NSArray *)arg1 ;
@end
