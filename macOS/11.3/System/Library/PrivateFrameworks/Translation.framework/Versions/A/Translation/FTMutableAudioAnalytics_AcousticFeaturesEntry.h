/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAudioAnalytics_AcousticFeaturesEntry.h>

@class NSString, FTAcousticFeature;

@interface FTMutableAudioAnalytics_AcousticFeaturesEntry : FTAudioAnalytics_AcousticFeaturesEntry

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) FTAcousticFeature * value; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(FTAcousticFeature *)value;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setValue:(FTAcousticFeature *)arg1 ;
@end

