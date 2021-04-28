/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Suggestions/Suggestions-Structs.h>
#import <Suggestions/SGTSuggester.h>

@class SGTSpotlightSuggesterReserved, NSArray, NSString;

@interface SGTSpotlightSuggester : SGTSuggester {

	SGTSpotlightSuggesterReserved* _reserved2;

}

@property (copy) NSArray * searchScope; 
@property (readonly) NSArray * attributeNames; 
@property (copy) NSArray * additionalAttributeNames; 
@property (copy) NSArray * sortingAttributeNames; 
@property (assign) char matchesFinderFilesOnly; 
@property (assign) char matchesSupportFiles; 
@property (copy) NSString * baseQuery; 
+(id)suggesterForMails;
+(id)suggesterForFiles;
+(id)defaultSortingAttributeNames;
-(void)dealloc;
-(NSArray *)attributeNames;
-(unsigned long long)_queryID;
-(char)matchesSupportFiles;
-(void)setMatchesSupportFiles:(char)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)setInput:(id)arg1 ;
-(id)initWithAttributeNames:(id)arg1 ;
-(void)setSearchScope:(NSArray *)arg1 ;
-(NSArray *)additionalAttributeNames;
-(void)_setCurrentQuery:(MDQueryRef)arg1 ;
-(NSString *)baseQuery;
-(NSArray *)searchScope;
-(NSArray *)sortingAttributeNames;
-(char)matchesFinderFilesOnly;
-(void)_forceQueryResults:(MDQueryRef)arg1 ;
-(void)_queryDidFinish:(id)arg1 ;
-(void)_discardWarmingQuery;
-(void)_warmingQueryDidFinish:(id)arg1 ;
-(void)_launchWarmingQuery;
-(void)_reallyScheduleWarmingQuery;
-(void)willStartProcessingResultsForInput:(id)arg1 ;
-(id)additionalSuggestionsForInput:(id)arg1 ;
-(id)filterSuggestion:(id)arg1 fromItem:(id)arg2 forInput:(id)arg3 ;
-(id)_findBestDidYouMeanSuggestionFromSuggestions:(id)arg1 rawInput:(id)arg2 ;
-(id)filterSuggestions:(id)arg1 forInput:(id)arg2 ;
-(void)didFinishProcessingResultsForInput:(id)arg1 ;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)becomesIdle;
-(void)setImagesForTags:(id)arg1 ;
-(void)_incrementQueryID;
-(void)willStartSearchingSuggestionsForInput:(id)arg1 ;
-(void)setSortingAttributeNames:(NSArray *)arg1 ;
-(void)setAdditionalAttributeNames:(NSArray *)arg1 ;
-(void)setMatchesFinderFilesOnly:(char)arg1 ;
-(void)setRunWarmingQuery:(char)arg1 ;
-(void)setBaseQuery:(NSString *)arg1 ;
-(void)_processQueryResults:(MDQueryRef)arg1 intermediateResults:(char)arg2 suggestionsCount:(long long*)arg3 ;
-(void)scheduleWarmingQuery;
-(void)_getCurrentQueryAttributeNames:(id*)arg1 inputString:(id*)arg2 ;
@end

