/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsStrategy.h>

@class MapsSuggestionsManager, NSMutableSet, NSMutableArray, NSString;

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy> {

	NSMutableSet* _preFilters;
	NSMutableArray* _improvers;
	NSMutableArray* _dedupers;
	NSMutableSet* _postFilters;
	NSMutableArray* _previousResults;
	MapsSuggestionsManager* _manager;

}

@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(MapsSuggestionsManager *)arg1 ;
-(NSString *)uniqueName;
-(void)clearData;
-(id)topSuggestionsWithSourceEntries:(id)arg1 error:(id*)arg2 ;
-(char)preFiltersKept:(id)arg1 ;
-(char)postFiltersKept:(id)arg1 ;
-(void)addPreFilter:(id)arg1 ;
-(void)addPostFilter:(id)arg1 ;
-(void)removeFilter:(id)arg1 ;
-(void)removeAllFilters;
-(void)addImprover:(id)arg1 ;
-(void)removeAllImprovers;
-(void)addDeduper:(id)arg1 ;
-(void)removeAllDedupers;
@end

