/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTItnAlignment.h>

@interface FTMutableItnAlignment : FTItnAlignment

@property (assign,nonatomic) int first_pre_itn_token_index; 
@property (assign,nonatomic) int last_pre_itn_token_index; 
@property (assign,nonatomic) int first_post_itn_char_pos; 
@property (assign,nonatomic) int last_post_itn_char_pos; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(int)first_pre_itn_token_index;
-(void)setFirst_pre_itn_token_index:(int)arg1 ;
-(int)last_pre_itn_token_index;
-(void)setLast_pre_itn_token_index:(int)arg1 ;
-(int)first_post_itn_char_pos;
-(void)setFirst_post_itn_char_pos:(int)arg1 ;
-(int)last_post_itn_char_pos;
-(void)setLast_post_itn_char_pos:(int)arg1 ;
@end
