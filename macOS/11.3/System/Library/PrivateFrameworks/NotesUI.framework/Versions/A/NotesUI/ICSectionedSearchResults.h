/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface ICSectionedSearchResults : NSObject {

	char _disableAutomaticUpdates;
	NSMutableDictionary* _searchResultsBySection;

}

@property (nonatomic,retain) NSMutableDictionary * searchResultsBySection;              //@synthesize searchResultsBySection=_searchResultsBySection - In the implementation block
@property (nonatomic,readonly) NSArray * allSearchResults; 
@property (assign,nonatomic) char disableAutomaticUpdates;                              //@synthesize disableAutomaticUpdates=_disableAutomaticUpdates - In the implementation block
+(id)newSearchResultsBySection;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)clear;
-(char)hasSearchResults;
-(void)setSearchResultsBySection:(NSMutableDictionary *)arg1 ;
-(void)objectsDidChange:(id)arg1 ;
-(void)noteWillBeUndeletedOrUntrashed:(id)arg1 ;
-(void)noteWillBeDeletedOrTrashed:(id)arg1 ;
-(NSMutableDictionary *)searchResultsBySection;
-(char)disableAutomaticUpdates;
-(unsigned long long)removeSearchResultsWithIdentifiers:(id)arg1 forHiding:(char)arg2 ;
-(id)searchResultSectionForSectionIndex:(unsigned long long)arg1 ;
-(void)addSearchResults:(id)arg1 toSection:(unsigned long long)arg2 ;
-(char)removeSearchResultWithIdentifier:(id)arg1 forHiding:(char)arg2 ;
-(id)searchResultsInSection:(unsigned long long)arg1 ;
-(NSArray *)allSearchResults;
-(void)setSearchResults:(id)arg1 forSection:(unsigned long long)arg2 ;
-(id)searchResultAtRow:(long long)arg1 section:(unsigned long long)arg2 ;
-(char)removeSearchResultWithIdentifier:(id)arg1 fromSection:(unsigned long long)arg2 forHiding:(char)arg3 ;
-(char)passesVisibilityTesting:(id)arg1 forSearchResult:(id)arg2 ;
-(unsigned long long)sectionForSearchResult:(id)arg1 ;
-(id)searchResultsBySectionForSearchResults:(id)arg1 passingVisibilityTesting:(id)arg2 ;
-(unsigned long long)addSearchResultsBySection:(id)arg1 ;
-(char)hideSearchResultsForIdentifier:(id)arg1 ;
-(id)searchResultWithObject:(id)arg1 ;
-(id)indexPathOfSearchResult:(id)arg1 ;
-(void)addSearchResult:(id)arg1 toSection:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)countForSection:(unsigned long long)arg1 ;
-(id)searchResultObjectsInSection:(unsigned long long)arg1 ;
-(id)removeSearchResultAtRow:(long long)arg1 section:(unsigned long long)arg2 ;
-(unsigned long long)addSearchResults:(id)arg1 removingFoundIdentifiers:(id)arg2 passingVisibilityTesting:(id)arg3 ;
-(void)filterSearchResultsUsingVisiblityTesting:(id)arg1 ;
-(char)hideSearchResultsForObjects:(id)arg1 ;
-(id)indexPathOfObject:(id)arg1 ;
-(char)replaceSearchResultObject:(id)arg1 withObject:(id)arg2 ;
-(void)updateForSortTypeChange;
-(void)setDisableAutomaticUpdates:(char)arg1 ;
@end

