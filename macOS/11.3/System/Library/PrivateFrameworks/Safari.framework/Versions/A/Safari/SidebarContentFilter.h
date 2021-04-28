/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SidebarContentFilterDelegate;
@class NSString, NSMutableArray;

@interface SidebarContentFilter : NSObject {

	id<SidebarContentFilterDelegate> _delegate;
	NSString* _searchString;
	NSMutableArray* _matches;
	char _resultsReady;

}

@property (nonatomic,retain) NSMutableArray * matches;                                      //@synthesize matches=_matches - In the implementation block
@property (assign,nonatomic,__weak) id<SidebarContentFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                       //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) char resultsReady;                                             //@synthesize resultsReady=_resultsReady - In the implementation block
+(id)searchTermsFromString:(id)arg1 ;
+(char)string:(id)arg1 matchesSearchTerms:(id)arg2 ;
-(id)init;
-(id<SidebarContentFilterDelegate>)delegate;
-(void)setDelegate:(id<SidebarContentFilterDelegate>)arg1 ;
-(void)reset;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(NSMutableArray *)matches;
-(void)setMatches:(NSMutableArray *)arg1 ;
-(char)resultsReady;
-(void)filterItems:(id)arg1 withSearchString:(id)arg2 itemsDidChange:(char)arg3 ;
-(void)removeObjectsFromResults:(id)arg1 ;
-(void)setResultsReady:(char)arg1 ;
@end

