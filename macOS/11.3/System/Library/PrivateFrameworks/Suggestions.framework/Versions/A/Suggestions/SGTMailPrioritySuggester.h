/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Suggestions/SGTSuggester.h>

@class NSArray;

@interface SGTMailPrioritySuggester : SGTSuggester {

	NSArray* mailPriorities;

}

@property (copy) NSArray * mailPriorities; 
+(id)menuPriorityImageForSuggestion:(id)arg1 ;
+(char)isMailPriorityRepresentedObject:(id)arg1 ;
+(id)mailPriorityRepresentedObjectForRepresentedObject:(id)arg1 ;
+(id)priorityImageForSuggestion:(id)arg1 ;
+(id)prioritiesCategory;
+(id)representedObjectForMailPriorityRepresentedObject:(id)arg1 ;
+(id)tokenPriorityImageForSuggestion:(id)arg1 ;
-(void)setInput:(id)arg1 ;
-(void)setMailPriorities:(NSArray *)arg1 ;
-(NSArray *)mailPriorities;
@end
