/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AccessibilityVisuals/AXVView.h>

@class NSArray, AXVStyledMenuTargetView;

@interface AXVStyledMenuView : AXVView {

	NSArray* _menuItems;
	double _menuItemSpacing;
	long long _displayStyle;
	AXVStyledMenuTargetView* __targetView;
	CGSize _menuItemSize;
	CGPoint _menuTargetOrigin;

}

@property (nonatomic,retain) AXVStyledMenuTargetView * _targetView;              //@synthesize _targetView=__targetView - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                                //@synthesize menuItems=_menuItems - In the implementation block
@property (assign,nonatomic) double menuItemSpacing;                             //@synthesize menuItemSpacing=_menuItemSpacing - In the implementation block
@property (assign,nonatomic) CGSize menuItemSize;                                //@synthesize menuItemSize=_menuItemSize - In the implementation block
@property (assign,nonatomic) long long displayStyle;                             //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign,nonatomic) CGPoint menuTargetOrigin;                           //@synthesize menuTargetOrigin=_menuTargetOrigin - In the implementation block
-(long long)displayStyle;
-(void)setDisplayStyle:(long long)arg1 ;
-(NSArray *)menuItems;
-(void)setMenuItems:(NSArray *)arg1 ;
-(AXVStyledMenuTargetView *)_targetView;
-(void)_updateLayout;
-(void)_setupTargetViewIfNeeded;
-(CGPoint)menuTargetOrigin;
-(void)set_targetView:(AXVStyledMenuTargetView *)arg1 ;
-(void)_updateCircularLayout;
-(void)_updateListLayout;
-(CGSize)menuItemSize;
-(void)_updateMenuItem:(id)arg1 withOrigin:(CGPoint)arg2 ;
-(double)menuItemSpacing;
-(void)setMenuTargetOrigin:(CGPoint)arg1 ;
-(void)setMenuItemSpacing:(double)arg1 ;
-(void)setMenuItemSize:(CGSize)arg1 ;
@end

