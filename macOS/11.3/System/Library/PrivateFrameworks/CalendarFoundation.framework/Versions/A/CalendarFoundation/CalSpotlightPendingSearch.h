/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDSearchQueryDelegate.h>
#import <CalendarFoundation/CalSpotlightQueryPendingSearchProtocol.h>

@class NSMutableOrderedSet, MDSearchQuery, NSString;

@interface CalSpotlightPendingSearch : NSObject <MDSearchQueryDelegate, CalSpotlightQueryPendingSearchProtocol> {

	/*^block*/id _completionHandler;
	NSMutableOrderedSet* _searchableItemIdentifiers;
	NSMutableOrderedSet* _searchableItems;
	MDSearchQuery* _query;
	NSString* _clientBundleID;

}

@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSMutableOrderedSet * searchableItemIdentifiers;              //@synthesize searchableItemIdentifiers=_searchableItemIdentifiers - In the implementation block
@property (retain) NSMutableOrderedSet * searchableItems;                        //@synthesize searchableItems=_searchableItems - In the implementation block
@property (retain) MDSearchQuery * query;                                        //@synthesize query=_query - In the implementation block
@property (copy) NSString * clientBundleID;                                      //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_queue;
+(id)_pendingSearches;
+(id)_createSearchQueryWithPredicate:(id)arg1 options:(id)arg2 ;
+(id)_resultForSearchableItem:(id)arg1 ;
+(id)_resultsForSearchableItems:(id)arg1 ;
-(MDSearchQuery *)query;
-(void)setQuery:(MDSearchQuery *)arg1 ;
-(void)cancel;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)clientBundleID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)setSearchableItemIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(void)setSearchableItems:(NSMutableOrderedSet *)arg1 ;
-(void)searchWithString:(id)arg1 ;
-(void)_startSearchWithQuery:(id)arg1 ;
-(void)_searchEnded;
-(NSMutableOrderedSet *)searchableItemIdentifiers;
-(NSMutableOrderedSet *)searchableItems;
-(id)initWithString:(id)arg1 clientBundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

