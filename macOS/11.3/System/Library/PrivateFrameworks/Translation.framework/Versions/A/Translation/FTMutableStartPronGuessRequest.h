/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartPronGuessRequest.h>

@class NSString;

@interface FTMutableStartPronGuessRequest : FTStartPronGuessRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSString * language; 
@property (assign,nonatomic) long long codec; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)orthography;
-(long long)codec;
-(void)setCodec:(long long)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSString *)speech_id;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(void)setSpeech_id:(NSString *)arg1 ;
@end

