/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSCollectionViewUpdateTranslating <NSObject>
@required
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
-(id)finalIndexPathForInitialIndexPath:(id)arg1;
-(id)initialIndexPathForFinalIndexPath:(id)arg1;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;
-(NSRange*)initalSectionGlobalItemRangeForSection:(long long)arg1;
-(NSRange*)finalSectionGlobalItemRangeForSection:(long long)arg1;
-(long long)initialSectionCount;
-(long long)finalSectionCount;

@end

