/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIAddViews;

@interface SAARAlternativeResultsView : SAAceView

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,retain) SAUIAddViews * resultView; 
@property (assign,nonatomic) char suggestedResult; 
@property (nonatomic,copy) NSString * utterance; 
+(id)alternativeResultsView;
+(id)alternativeResultsViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(id)encodedClassName;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(SAUIAddViews *)resultView;
-(void)setResultView:(SAUIAddViews *)arg1 ;
-(char)suggestedResult;
-(void)setSuggestedResult:(char)arg1 ;
@end

