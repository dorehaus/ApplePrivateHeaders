/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>

@class TLKGridRowView;

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (nonatomic,retain) TLKGridRowView * contentView; 
+(NSEdgeInsets)defaultLayoutMargins;
+(char)supportsRecyclingForCardSection:(id)arg1 ;
+(double)largestImageSizeForSection:(id)arg1 ;
+(char)hasOnlyImages:(id)arg1 ;
+(char)isAHeader:(id)arg1 ;
-(id)setupContentView;
-(id)leadingTextView;
-(void)updateWithRowModel:(id)arg1 ;
-(NSEdgeInsets)verticalBaselineInsetsForHeader:(char)arg1 isCompactTable:(char)arg2 ;
-(NSEdgeInsets)verticalBaselineInsetsForRowsWithCompactTable:(char)arg1 ;
@end

