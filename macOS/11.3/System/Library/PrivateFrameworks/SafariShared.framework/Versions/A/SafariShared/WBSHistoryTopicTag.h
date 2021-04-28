/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSHistoryTag.h>

@class NSMutableOrderedSet, NSArray;

@interface WBSHistoryTopicTag : WBSHistoryTag {

	NSMutableOrderedSet* _taggedItems;

}

@property (nonatomic,copy,readonly) NSArray * historyItems; 
+(void)initialize;
-(void)dealloc;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5 ;
-(void)tagHistoryItem:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)removeHistoryItems:(id)arg1 ;
-(id)initWithTag:(id)arg1 historyItems:(id)arg2 ;
-(NSArray *)historyItems;
-(void)groupHistoryItemsBySessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)containsHistoryItem:(id)arg1 ;
@end

