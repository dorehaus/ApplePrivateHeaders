/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationResponse.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationResponse : FTBatchTranslationResponse

@property (nonatomic,copy) NSString * request_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_string; 
@property (nonatomic,copy) NSString * paragraph_id; 
@property (nonatomic,copy) NSString * translated_text; 
@property (nonatomic,copy) NSArray * span; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)span;
-(void)setSpan:(NSArray *)arg1 ;
-(NSString *)request_id;
-(NSString *)paragraph_id;
-(int)return_code;
-(NSString *)return_string;
-(NSString *)translated_text;
-(void)setParagraph_id:(NSString *)arg1 ;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_string:(NSString *)arg1 ;
-(void)setTranslated_text:(NSString *)arg1 ;
@end
