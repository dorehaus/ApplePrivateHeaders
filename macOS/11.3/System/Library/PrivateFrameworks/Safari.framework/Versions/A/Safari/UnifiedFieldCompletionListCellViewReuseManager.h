/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ParsecTableCellView;
@class NSMutableDictionary, NSCountedSet, UnifiedFieldCompletionStyledTableCellView;

@interface UnifiedFieldCompletionListCellViewReuseManager : NSObject {

	NSMutableDictionary* _viewArraysByClass;
	NSCountedSet* _viewIndicesByClass;
	NSMutableDictionary* _parsecCellReuseManagersByIdentifier;
	UnifiedFieldCompletionStyledTableCellView*<ParsecTableCellView> _mostRecentlyUsedParsecCellView;

}

@property (nonatomic,readonly) UnifiedFieldCompletionStyledTableCellView*<ParsecTableCellView> mostRecentlyUsedParsecCellView;              //@synthesize mostRecentlyUsedParsecCellView=_mostRecentlyUsedParsecCellView - In the implementation block
+(id)sharedManager;
+(int)cellViewTypeForResult:(id)arg1 ;
-(id)init;
-(id)_init;
-(void)prepareForReload;
-(id)parsecCellViewOfType:(int)arg1 forSearchResult:(id)arg2 ;
-(id)nextTableCellView;
-(id)nextHeaderCellView;
-(UnifiedFieldCompletionStyledTableCellView*<ParsecTableCellView>)mostRecentlyUsedParsecCellView;
-(id)_nextCellViewOfClass:(Class)arg1 ;
-(id)_parsecCellViewOfType:(int)arg1 forSearchResult:(id)arg2 ;
-(id)_identifierForParsecCellViewType:(int)arg1 ;
-(id)_createParsecCellViewWithIdentifier:(id)arg1 ;
-(char)_shouldProgramaticallyCreateParsecCellViewWithIdentifier:(id)arg1 ;
-(Class)_parsecCellViewClassFromIdentifier:(id)arg1 ;
-(id)_createCellViewWithIdentifier:(id)arg1 fromNib:(id)arg2 ;
@end
