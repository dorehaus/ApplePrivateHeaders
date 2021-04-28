/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSSetRequestOrigin.h>

@interface QSSMutableSetRequestOrigin : QSSSetRequestOrigin

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL enable_geo_location_features; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(double)latitude;
-(double)longitude;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(BOOL)enable_geo_location_features;
-(void)setEnable_geo_location_features:(BOOL)arg1 ;
@end

