/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSCollectionLayoutAuxiliaryOffsets;
#import <UIFoundation/UIFoundation-Structs.h>
@class _NSCollectionLayoutItemSolver;

@interface _NSCollectionEstimatedSolutionBookmark : NSObject {

	_NSCollectionLayoutItemSolver* _solution;
	id<_NSCollectionLayoutAuxiliaryOffsets> _supplementaryOffsets;
	NSRange _itemRange;
	CGRect _solutionFrame;

}

@property (nonatomic,readonly) _NSCollectionLayoutItemSolver * solution;                                  //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) CGRect solutionFrame;                                                      //@synthesize solutionFrame=_solutionFrame - In the implementation block
@property (nonatomic,readonly) NSRange itemRange;                                                         //@synthesize itemRange=_itemRange - In the implementation block
@property (nonatomic,readonly) id<_NSCollectionLayoutAuxiliaryOffsets> supplementaryOffsets;              //@synthesize supplementaryOffsets=_supplementaryOffsets - In the implementation block
-(id)description;
-(_NSCollectionLayoutItemSolver *)solution;
-(id<_NSCollectionLayoutAuxiliaryOffsets>)supplementaryOffsets;
-(NSRange)itemRange;
-(CGRect)solutionFrame;
-(id)initWithSolution:(id)arg1 frame:(CGRect)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 maxItemFrameCount:(long long)arg5 ;
-(id)_supplementaryOffsetsForItemRange:(NSRange)arg1 solution:(id)arg2 supplementaryOffsets:(id)arg3 ;
@end
