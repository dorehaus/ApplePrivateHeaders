/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView

@property (nonatomic,copy) NSArray * entities; 
@property (assign,nonatomic) long long numResults; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * searchTitle; 
+(id)fileSearchView;
+(id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)entities;
-(id)encodedClassName;
-(void)setEntities:(NSArray *)arg1 ;
-(long long)numResults;
-(void)setNumResults:(long long)arg1 ;
-(NSString *)searchTitle;
-(void)setSearchTitle:(NSString *)arg1 ;
@end

