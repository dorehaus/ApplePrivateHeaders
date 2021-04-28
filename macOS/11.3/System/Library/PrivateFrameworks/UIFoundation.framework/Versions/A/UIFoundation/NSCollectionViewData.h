/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class _NSCollectionViewCore, NSCollectionViewLayout, NSMapTable, NSMutableIndexSet, NSMutableDictionary, NSMutableArray, NSArray;

@interface NSCollectionViewData : NSObject {

	_NSCollectionViewCore* _collectionView;
	NSCollectionViewLayout* _layout;
	NSMapTable* _screenPageMap;
	NSMutableIndexSet* _globalIndexesOfItemsAwaitingValidation;
	id* _globalItems;
	NSMutableDictionary* _supplementaryLayoutAttributes;
	NSMutableDictionary* _decorationLayoutAttributes;
	NSMutableDictionary* _invalidatedSupplementaryIndexPaths;
	NSMutableDictionary* _invalidatedDecorationIndexPaths;
	CGRect _validLayoutRect;
	long long _numItems;
	long long _numSections;
	long long* _sectionItemCounts;
	long long _lastSectionTestedForNumberOfItemsBeforeSection;
	long long _lastResultForNumberOfItemsBeforeSection;
	CGSize _contentSize;
	NSMutableArray* _clonedCellAttributes;
	NSMutableArray* _clonedSupplementaryAttributes;
	NSMutableArray* _clonedDecorationAttributes;
	struct {
		unsigned contentSizeIsValid : 1;
		unsigned itemCountsAreValid : 1;
		unsigned layoutIsPrepared : 1;
		unsigned layoutLocked : 1;
	}  _collectionViewDataFlags;

}

@property (nonatomic,readonly) char layoutIsPrepared; 
@property (assign,getter=isLayoutLocked,nonatomic) char layoutLocked; 
@property (assign,nonatomic) CGSize contentSize;                                     //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) NSArray * clonedCellAttributes;                       //@synthesize clonedCellAttributes=_clonedCellAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * clonedSupplementaryAttributes;              //@synthesize clonedSupplementaryAttributes=_clonedSupplementaryAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * clonedDecorationAttributes;                 //@synthesize clonedDecorationAttributes=_clonedDecorationAttributes - In the implementation block
+(void)initialize;
-(void)dealloc;
-(long long)numberOfItems;
-(void)_prepareLayoutIfNeeded;
-(long long)numberOfSections;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)globalIndexForItemAtIndexPath:(id)arg1 ;
-(void)_updateItemCounts;
-(void)_validateItemCounts;
-(void)_validateContentSize;
-(id)_screenPageForPoint:(CGPoint)arg1 ;
-(void)_prepareToLoadData;
-(id)indexPathForItemAtGlobalIndex:(long long)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2 ;
-(CGRect)collectionViewContentRect;
-(void)validateSupplementaryViews;
-(void)validateDecorationViews;
-(char)isIndexPathValid:(id)arg1 ;
-(char)isGlobalIndexValid:(long long)arg1 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(CGRect)rectForItemAtIndexPath:(id)arg1 ;
-(id)_layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)validateLayoutInRect:(CGRect)arg1 ;
-(id)initWithCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)invalidateItemsAtIndexPaths:(id)arg1 ;
-(void)invalidateSupplementaryIndexPaths:(id)arg1 ;
-(void)invalidateDecorationIndexPaths:(id)arg1 ;
-(void)invalidate:(char)arg1 ;
-(void)_loadEverything;
-(char)hasValidItemCounts;
-(long long*)_sectionItemCounts;
-(long long)validatedGlobalIndexForItemAtIndexPath:(id)arg1 ;
-(id)validatedIndexPathForItemAtGlobalIndex:(long long)arg1 ;
-(char)dataSourceMatchesCurrentCounts;
-(CGRect)rectForGlobalItemIndex:(long long)arg1 ;
-(CGRect)rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForGlobalItemIndex:(long long)arg1 ;
-(id)layoutAttributesForElementsInSection:(long long)arg1 ;
-(id)layoutAttributesForCellsInRect:(CGRect)arg1 validateLayout:(char)arg2 ;
-(id)existingSupplementaryLayoutAttributesInSection:(long long)arg1 ;
-(id)existingSupplementaryLayoutAttributes;
-(id)knownSupplementaryElementKinds;
-(id)knownDecorationElementKinds;
-(char)layoutIsPrepared;
-(void)setLayoutLocked:(char)arg1 ;
-(char)isLayoutLocked;
-(NSArray *)clonedCellAttributes;
-(NSArray *)clonedSupplementaryAttributes;
-(NSArray *)clonedDecorationAttributes;
@end

