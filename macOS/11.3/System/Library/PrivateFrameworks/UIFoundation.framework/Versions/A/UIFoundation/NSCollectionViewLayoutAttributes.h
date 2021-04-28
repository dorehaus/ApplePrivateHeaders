/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSIndexPath;

@interface NSCollectionViewLayoutAttributes : NSObject <NSCopying> {

	NSString* _elementKind;
	NSString* _reuseIdentifier;
	CGPoint _center;
	CGSize _size;
	CGRect _frame;
	double _alpha;
	CATransform3D _transform;
	NSIndexPath* _indexPath;
	NSString* _isCloneString;
	struct {
		unsigned isCellKind : 1;
		unsigned isDecorationView : 1;
		unsigned isHidden : 1;
		unsigned isClone : 1;
		unsigned isInterItemGap : 1;
		unsigned isInterSectionGap : 1;
		unsigned isHorizontalGap : 1;
	}  _layoutFlags;
	long long _zIndex;

}

@property (assign) CGRect frame; 
@property (assign) CGSize size; 
@property (assign) double alpha;                                        //@synthesize alpha=_alpha - In the implementation block
@property (assign) long long zIndex;                                    //@synthesize zIndex=_zIndex - In the implementation block
@property (getter=isHidden) char hidden; 
@property (retain) NSIndexPath * indexPath; 
@property (readonly) long long representedElementCategory; 
@property (readonly) NSString * representedElementKind; 
+(id)layoutAttributesForItemWithIndexPath:(id)arg1 ;
+(id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1 ;
+(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForInterSectionGapBeforeIndexPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGAffineTransform)transform;
-(NSIndexPath *)indexPath;
-(CGRect)frame;
-(CGRect)bounds;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setZIndex:(long long)arg1 ;
-(long long)representedElementCategory;
-(NSString *)representedElementKind;
-(char)_isHorizontalGap;
-(void)_setReuseIdentifier:(id)arg1 ;
-(id)_reuseIdentifier;
-(CATransform3D)transform3D;
-(double)fractionIntoEndZone;
-(void)setFloating:(char)arg1 ;
-(char)isFloating;
-(void)setCenter:(CGPoint)arg1 ;
-(char)_isClone;
-(char)_isCell;
-(char)_isSupplementaryView;
-(char)_isDecorationView;
-(id)_elementKind;
-(long long)zIndex;
-(void)setFractionIntoEndZone:(double)arg1 ;
-(double)distanceIntoEndZone;
-(void)setDistanceIntoEndZone:(double)arg1 ;
-(void)setTransform3D:(CATransform3D)arg1 ;
-(char)_isEquivalentTo:(id)arg1 ;
-(id)__elementKind;
-(id)__indexPath;
-(void)_setIsHorizontalGap:(char)arg1 ;
-(void)_setIsClone:(char)arg1 ;
-(void)_setElementKind:(id)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(char)_isTransitionVisibleTo:(id)arg1 ;
@end

