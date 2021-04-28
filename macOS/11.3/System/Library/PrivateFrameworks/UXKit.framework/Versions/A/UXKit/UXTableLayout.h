/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXCollectionViewFlowLayout.h>

@class NSMutableArray, NSMutableDictionary;

@interface UXTableLayout : UXCollectionViewFlowLayout {

	struct {
		unsigned delegateSupplementaryViewDidBeginFloating : 1;
		unsigned delegateSupplementaryViewDidEndFloating : 1;
		unsigned delegateRreferenceSizeForHeaderInSection : 1;
		unsigned delegateLayoutInsetForSectionAtIndex : 1;
		unsigned needsDelegateFlagsUpdate : 1;
		unsigned floatingHeadersDisabled : 1;
		unsigned preparingForUpdates : 1;
		unsigned showsSectionHeaderForSingleSection : 1;
		unsigned showsSectionFooterForSingleSection : 1;
	}  _tableLayoutFlags;
	NSMutableArray* _layoutAttributesArray;
	NSMutableDictionary* _headerAttributesByIndexPath;

}

@property (nonatomic,readonly) NSMutableArray * layoutAttributesArray;                                 //@synthesize layoutAttributesArray=_layoutAttributesArray - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headerAttributesByIndexPath;                      //@synthesize headerAttributesByIndexPath=_headerAttributesByIndexPath - In the implementation block
@property (nonatomic,readonly) id<UXCollectionViewDelegateFlowLayout> delegateFlowLayout; 
@property (assign,nonatomic) char showsSectionHeaderForSingleSection; 
@property (assign,nonatomic) char showsSectionFooterForSingleSection; 
@property (assign,nonatomic) char floatingHeadersDisabled; 
-(id)init;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_setCollectionView:(id)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id<UXCollectionViewDelegateFlowLayout>)delegateFlowLayout;
-(void)setFloatingHeadersDisabled:(char)arg1 ;
-(char)floatingHeadersDisabled;
-(void)setShowsSectionHeaderForSingleSection:(char)arg1 ;
-(char)showsSectionHeaderForSingleSection;
-(void)setShowsSectionFooterForSingleSection:(char)arg1 ;
-(char)showsSectionFooterForSingleSection;
-(NSEdgeInsets)insetForSection:(long long)arg1 ;
-(char)_wantsHeaderForSection:(unsigned long long)arg1 ;
-(NSMutableArray *)layoutAttributesArray;
-(NSMutableDictionary *)headerAttributesByIndexPath;
@end

