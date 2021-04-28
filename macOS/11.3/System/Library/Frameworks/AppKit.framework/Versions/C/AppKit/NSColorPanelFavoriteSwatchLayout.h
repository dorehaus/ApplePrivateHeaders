/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <UIFoundation/NSCollectionViewLayout.h>

@interface NSColorPanelFavoriteSwatchLayout : NSCollectionViewLayout {

	CGSize _itemSize;
	double _itemSpacing;
	NSEdgeInsets _sectionInset;

}

@property (assign) CGSize itemSize;                        //@synthesize itemSize=_itemSize - In the implementation block
@property (assign) double itemSpacing;                     //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign) NSEdgeInsets sectionInset;              //@synthesize sectionInset=_sectionInset - In the implementation block
-(id)init;
-(id)layoutAttributesForDropTargetAtPoint:(CGPoint)arg1 ;
-(id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)setSectionInset:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)sectionInset;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)enclosingBounds;
-(long long)numberOfItemsFittingInBoundsWidth:(double)arg1 ;
-(CGSize)itemSize;
-(double)itemSpacing;
-(void)setItemSpacing:(double)arg1 ;
@end

