/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Versions/A/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSSet, NSString, SFCard;


@protocol CRCard <NSObject,NSSecureCoding,NSCopying,CRContent>
@property (nonatomic,readonly) NSArray * cardSections; 
@property (nonatomic,readonly) NSSet * interactions; 
@property (nonatomic,readonly) NSArray * dismissalCommands; 
@property (nonatomic,copy,readonly) NSString * cardIdentifier; 
@property (nonatomic,readonly) unsigned long long cardFormat; 
@property (nonatomic,readonly) char asynchronous; 
@property (nonatomic,readonly) char flexibleSectionOrder; 
@property (nonatomic,readonly) SFCard * backingCard; 
@optional
-(char)asynchronous;
-(char)flexibleSectionOrder;
-(SFCard *)backingCard;
-(void)loadCardWithCompletion:(/*^block*/id)arg1;

@required
-(NSSet *)interactions;
-(NSArray *)cardSections;
-(NSString *)cardIdentifier;
-(NSArray *)dismissalCommands;
-(unsigned long long)cardFormat;

@end
