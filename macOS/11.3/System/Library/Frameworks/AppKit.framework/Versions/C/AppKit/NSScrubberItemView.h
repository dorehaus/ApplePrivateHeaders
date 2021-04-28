/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSScrubberArrangedView.h>

@class NSScrubberSelectionView, CALayer;

@interface NSScrubberItemView : NSScrubberArrangedView {

	id _background;
	id _foreground;
	id _maskOne;
	id _maskTwo;
	unsigned _edge : 2;

}

@property (retain) NSScrubberSelectionView * selectionBackgroundView;              //@synthesize background=_background - In the implementation block
@property (retain) NSScrubberSelectionView * selectionOverlayView;                 //@synthesize foreground=_foreground - In the implementation block
@property (retain) CALayer * leftMaskLayer;                                        //@synthesize maskOne=_maskOne - In the implementation block
@property (retain) CALayer * rightMaskLayer;                                       //@synthesize maskTwo=_maskTwo - In the implementation block
+(id)keyPathsForValuesInvalidatingDisplay;
+(id)createTouchBarColorListPickerSelectionOverlayView;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(void)viewDidChangeEffectiveAppearance;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)_setSelected:(char)arg1 highlighted:(char)arg2 ;
-(void)_setIsLeftmost:(char)arg1 isRightmost:(char)arg2 ;
-(void)_updateCornersWithSelectionRadius:(double)arg1 defaultEndcapRadius:(double)arg2 ;
-(char)_hasCustomSelectionViews;
-(NSScrubberSelectionView *)selectionBackgroundView;
-(NSScrubberSelectionView *)selectionOverlayView;
-(long long)accessibilityRawIndex;
-(id)_accessibilityScrubber;
-(id)accessibilitySelectedAttribute;
-(id)accessibilityIndexAttribute;
-(void)setSelectionOverlayView:(NSScrubberSelectionView *)arg1 ;
-(void)_layoutMaskLayers;
-(void)setAccessibilityRawIndex:(long long)arg1 ;
-(void)setSelectionBackgroundView:(NSScrubberSelectionView *)arg1 ;
-(void)_isLeftmost:(char*)arg1 isRightmost:(char*)arg2 ;
-(void)_createMaskLayersIfNeeded;
-(CALayer *)leftMaskLayer;
-(CALayer *)rightMaskLayer;
-(void)setLeftMaskLayer:(CALayer *)arg1 ;
-(void)setRightMaskLayer:(CALayer *)arg1 ;
-(void)_clearMaskLayers;
@end

