/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIAddContentToView.h>

@class NSString, NSArray;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (nonatomic,copy) NSString * contentShelfViewId; 
@property (nonatomic,copy) NSArray * fetchMoreResultsCommands; 
@property (assign,nonatomic) long long pageNumber; 
@property (nonatomic,copy) NSArray * results; 
+(id)addResultsToContentShelf;
+(id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSArray *)fetchMoreResultsCommands;
-(void)setFetchMoreResultsCommands:(NSArray *)arg1 ;
-(long long)pageNumber;
-(void)setPageNumber:(long long)arg1 ;
-(NSString *)contentShelfViewId;
-(void)setContentShelfViewId:(NSString *)arg1 ;
@end
