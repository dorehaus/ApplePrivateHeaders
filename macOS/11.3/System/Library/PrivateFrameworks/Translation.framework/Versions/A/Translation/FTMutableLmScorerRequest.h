/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLmScorerRequest.h>

@class NSString;

@interface FTMutableLmScorerRequest : FTLmScorerRequest

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * task_name; 
@property (nonatomic,copy) NSString * transcript; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)task_name;
-(void)setTask_name:(NSString *)arg1 ;
-(NSString *)transcript;
-(void)setTranscript:(NSString *)arg1 ;
@end

