/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSNumber, NSString;

@interface SAGKLinkedAnswerGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * linkedAnswers; 
@property (nonatomic,copy) NSNumber * numberOfResults; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)linkedAnswerGroup;
+(id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setNumberOfResults:(NSNumber *)arg1 ;
-(NSNumber *)numberOfResults;
-(id)encodedClassName;
-(NSArray *)linkedAnswers;
-(void)setLinkedAnswers:(NSArray *)arg1 ;
@end

