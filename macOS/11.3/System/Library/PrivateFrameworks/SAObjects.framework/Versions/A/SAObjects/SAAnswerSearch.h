/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString, NSArray;

@interface SAAnswerSearch : SADomainCommand

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * miscQuestion; 
@property (nonatomic,copy) NSString * placeAttribute; 
@property (nonatomic,copy) NSArray * product; 
@property (nonatomic,copy) NSString * timeQuestion; 
@property (nonatomic,copy) NSString * verbType; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)attribute;
-(SALocation *)address;
-(id)groupIdentifier;
-(void)setAddress:(SALocation *)arg1 ;
-(void)setAttribute:(NSString *)arg1 ;
-(NSArray *)product;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)miscQuestion;
-(void)setMiscQuestion:(NSString *)arg1 ;
-(NSString *)placeAttribute;
-(void)setPlaceAttribute:(NSString *)arg1 ;
-(void)setProduct:(NSArray *)arg1 ;
-(NSString *)timeQuestion;
-(void)setTimeQuestion:(NSString *)arg1 ;
-(NSString *)verbType;
-(void)setVerbType:(NSString *)arg1 ;
@end

