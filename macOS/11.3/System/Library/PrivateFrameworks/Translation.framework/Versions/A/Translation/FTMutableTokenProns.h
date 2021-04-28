/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTokenProns.h>

@class NSString, NSArray;

@interface FTMutableTokenProns : FTTokenProns

@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSArray * sanitized_sequences; 
@property (nonatomic,copy) NSArray * prons; 
@property (nonatomic,copy) NSArray * normalized_prons; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)orthography;
-(void)setOrthography:(NSString *)arg1 ;
-(NSArray *)prons;
-(NSArray *)sanitized_sequences;
-(void)setSanitized_sequences:(NSArray *)arg1 ;
-(void)setProns:(NSArray *)arg1 ;
-(NSArray *)normalized_prons;
-(void)setNormalized_prons:(NSArray *)arg1 ;
@end

