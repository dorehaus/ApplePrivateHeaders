/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTUpdatedAcousticProfile.h>

@class NSString, FTUserAcousticProfile;

@interface FTMutableUpdatedAcousticProfile : FTUpdatedAcousticProfile

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) FTUserAcousticProfile * updated_acoustic_profile; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)speech_id;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(FTUserAcousticProfile *)updated_acoustic_profile;
-(void)setUpdated_acoustic_profile:(FTUserAcousticProfile *)arg1 ;
@end
