/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PSITokenizer;


@protocol PSIQueryDelegate <PSIGroupResultDelegate,PSITopAssetsResultDelegate>
@property (readonly) PSITokenizer * tokenizer; 
@property (readonly) NSObject*<OS_dispatch_queue> groupResultsQueue; 
@required
-(PSITokenizer *)tokenizer;
-(id)suggestionWhitelistedScenes;
-(id)meNodeIdentifier;
-(id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
-(const CFSetRef)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(char)arg3;
-(NSObject*<OS_dispatch_queue>)groupResultsQueue;
-(id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3;
-(id)groupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;
-(id)wordEmbeddingMatchesForToken:(id)arg1;
-(void)executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2;

@end
