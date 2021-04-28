/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SearchUITableModel : NSObject {

	unsigned long long _queryId;
	NSArray* _tableRowModel;
	NSArray* _sections;

}

@property (nonatomic,retain) NSArray * tableRowModel;              //@synthesize tableRowModel=_tableRowModel - In the implementation block
@property (nonatomic,retain) NSArray * sections;                   //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long queryId;                   //@synthesize queryId=_queryId - In the implementation block
+(id)tableModelWithCardSections:(id)arg1 isInline:(char)arg2 queryId:(unsigned long long)arg3 ;
+(id)resultsForMultiResultRowInSection:(id)arg1 startingAtIndex:(unsigned long long)arg2 ;
+(id)rowModelsForCardSections:(id)arg1 result:(id)arg2 isInline:(char)arg3 queryId:(unsigned long long)arg4 ;
+(id)rowModelsForResult:(id)arg1 ;
+(id)combinedRowModelsForRowModels:(id)arg1 result:(id)arg2 ;
+(id)tableModelWithCardSections:(id)arg1 isInline:(char)arg2 queryId:(unsigned long long)arg3 shouldCombine:(char)arg4 ;
+(id)tableModelWithResults:(id)arg1 ;
+(id)tableModelWithSections:(id)arg1 expandedSections:(id)arg2 ;
+(id)gridLayoutsForCardSections:(id)arg1 ;
+(char)resultHasHorizontallyScrollingCardSections:(id)arg1 ;
+(id)tableModelWithResult:(id)arg1 ;
+(id)rowModelForCardSection:(id)arg1 result:(id)arg2 ;
-(id)description;
-(unsigned long long)numberOfSections;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(unsigned long long)queryId;
-(int)separatorStyleForIndexPath:(id)arg1 ;
-(id)initWithQueryId:(unsigned long long)arg1 ;
-(void)setTableRowModel:(NSArray *)arg1 ;
-(NSArray *)tableRowModel;
-(id)indexPathForRowModel:(id)arg1 ;
-(char)indexPathExists:(id)arg1 ;
-(id)rowModelForIndexPath:(id)arg1 ;
-(char)shouldDisplayChevronForIndexPath:(id)arg1 nextCardsEnabled:(char)arg2 ;
-(id)updatedTableModelWithExpandedSections:(id)arg1 hiddenSections:(id)arg2 atSectionIndex:(unsigned long long)arg3 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)removeRowModel:(id)arg1 ;
-(long long)numberOfRowsForSection:(long long)arg1 ;
-(id)resultForIndexPath:(id)arg1 ;
-(id)sectionForIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSection:(id)arg1 ;
-(id)cardSectionForIndexPath:(id)arg1 ;
-(char)shouldLeaveSpaceForChevronForIndexPath:(id)arg1 ;
-(char)rowWillFillBackgroundWithContentAtIndexPath:(id)arg1 ;
-(id)indexPathForResultInFirstTwoSections:(id)arg1 ;
@end
