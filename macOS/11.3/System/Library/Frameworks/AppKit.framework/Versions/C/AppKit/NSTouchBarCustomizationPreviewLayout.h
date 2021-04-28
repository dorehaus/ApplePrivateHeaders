/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <UIFoundation/NSCollectionViewLayout.h>

@class NSArray;

@interface NSTouchBarCustomizationPreviewLayout : NSCollectionViewLayout {

	CGRect _escapeKeyRect;
	CGRect _closeButtonRect;
	NSArray* _sectionLayouts;

}
+(Class)layoutAttributesClass;
-(void)dealloc;
-(id)delegate;
-(void)prepareLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)_workaround_layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 canReturnNil:(char)arg3 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(char)canMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(char)canInsertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(id)canMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 byRemovingItems:(id)arg3 ;
-(id)overlappedIndexPathsForMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 withFrame:(CGRect)arg3 primaryLocation:(CGPoint)arg4 ;
@end

