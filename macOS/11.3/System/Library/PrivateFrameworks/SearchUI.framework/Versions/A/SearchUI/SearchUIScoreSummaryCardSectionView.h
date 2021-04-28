/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKSplitHeaderView, NSString;

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {

	TLKSplitHeaderView* _splitHeaderView;

}

@property (nonatomic,retain) TLKSplitHeaderView * splitHeaderView;              //@synthesize splitHeaderView=_splitHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
+(id)titleForScoreBoard:(id)arg1 forDisplay:(char)arg2 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(void)updateChevronVisible:(char)arg1 leaveSpaceForChevron:(char)arg2 ;
-(void)setSplitHeaderView:(TLKSplitHeaderView *)arg1 ;
-(TLKSplitHeaderView *)splitHeaderView;
@end

