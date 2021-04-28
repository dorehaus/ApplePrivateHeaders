/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKStackView.h>

@protocol MKPlaceSectionViewDelegate;
@class MKViewWithHairline, MKPlaceSectionItemView, NSArray;

@interface MKPlaceSectionView : _MKStackView {

	unsigned long long _trackingSelectForRow;
	MKViewWithHairline* _hairLineView;
	char _highlightsTouches;
	char _showsBottomHairline;
	id<MKPlaceSectionViewDelegate> _delegate;
	MKPlaceSectionItemView* _headerView;
	NSArray* _rowViews;
	MKPlaceSectionItemView* _footerView;

}

@property (assign,nonatomic,__weak) id<MKPlaceSectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKPlaceSectionItemView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * rowViews;                                            //@synthesize rowViews=_rowViews - In the implementation block
@property (nonatomic,retain) MKPlaceSectionItemView * footerView;                         //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) char highlightsTouches;                                      //@synthesize highlightsTouches=_highlightsTouches - In the implementation block
@property (assign,nonatomic) char showsBottomHairline;                                    //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
-(id<MKPlaceSectionViewDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceSectionViewDelegate>)arg1 ;
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setHeaderView:(MKPlaceSectionItemView *)arg1 ;
-(MKPlaceSectionItemView *)headerView;
-(void)mouseUp:(id)arg1 ;
-(NSArray *)rowViews;
-(void)setRowViews:(id)arg1 animated:(char)arg2 isNeedLayout:(char)arg3 ;
-(void)infoCardThemeChanged;
-(void)setShowsBottomHairline:(char)arg1 ;
-(void)setRowViews:(NSArray *)arg1 ;
-(void)_mapkit_layoutMarginsDidChange;
-(void)_updateViewsAnimated:(char)arg1 ;
-(void)setRowViews:(id)arg1 animated:(char)arg2 ;
-(void)_updateHairlineInsets;
-(unsigned long long)indexOfRowAt:(CGPoint)arg1 ;
-(char)highlightsTouches;
-(void)_tappedRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)setHeaderView:(id)arg1 animated:(char)arg2 ;
-(void)_updateViewsAnimated:(char)arg1 isNeedLayout:(char)arg2 ;
-(void)setFooterView:(id)arg1 animated:(char)arg2 ;
-(id)rowAt:(CGPoint)arg1 ;
-(void)_touchesBeganForRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)_touchesCancelledForRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)setFooterView:(MKPlaceSectionItemView *)arg1 ;
-(void)setHighlightsTouches:(char)arg1 ;
-(MKPlaceSectionItemView *)footerView;
-(char)showsBottomHairline;
@end

