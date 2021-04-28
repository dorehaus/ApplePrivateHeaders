/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary;

@interface ICSearchResultSection : NSObject {

	NSMutableOrderedSet* _searchResults;
	NSMutableDictionary* _identifierToSearchResult;
	NSMutableDictionary* _hiddenSearchResults;
	NSMutableDictionary* _unhiddenSearchResults;

}

@property (nonatomic,retain) NSMutableOrderedSet * searchResults;                         //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToSearchResult;              //@synthesize identifierToSearchResult=_identifierToSearchResult - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenSearchResults;                   //@synthesize hiddenSearchResults=_hiddenSearchResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unhiddenSearchResults;                 //@synthesize unhiddenSearchResults=_unhiddenSearchResults - In the implementation block
-(id)description;
-(id)init;
-(id)identifiers;
-(NSMutableOrderedSet *)searchResults;
-(void)setSearchResults:(NSMutableOrderedSet *)arg1 ;
-(void)addSearchResults:(id)arg1 ;
-(void)setIdentifierToSearchResult:(NSMutableDictionary *)arg1 ;
-(void)setHiddenSearchResults:(NSMutableDictionary *)arg1 ;
-(void)setUnhiddenSearchResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToSearchResult;
-(NSMutableDictionary *)hiddenSearchResults;
-(NSMutableDictionary *)unhiddenSearchResults;
-(id)hiddenIdentifiers;
-(char)removeSearchResultForIdentifier:(id)arg1 forHiding:(char)arg2 ;
-(void)resetToSearchResults:(id)arg1 ;
@end

