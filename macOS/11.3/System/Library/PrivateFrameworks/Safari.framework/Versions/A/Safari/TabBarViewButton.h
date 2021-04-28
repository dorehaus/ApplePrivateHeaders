/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/KeyLoopSplicingContainerView.h>

@class ViewActionForwardingLayerDelegate, NSView, CABackdropLayer, NSString;

@interface TabBarViewButton : KeyLoopSplicingContainerView {

	ViewActionForwardingLayerDelegate* _layerDelegate;
	NSView* _backgroundView;
	NSView* _topBorderView;
	NSView* _leadingTopBorderView;
	NSView* _trailingTopBorderView;
	NSView* _leftBorderView;
	NSView* _rightBorderView;
	CABackdropLayer* _backdropLayer;
	char _active;
	char _usesOffscreenRendering;
	char _forcesActiveWindowState;
	unsigned long long _tabButtonState;

}

@property (assign,getter=isActive,nonatomic) char active;                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) char usesOffscreenRendering;                    //@synthesize usesOffscreenRendering=_usesOffscreenRendering - In the implementation block
@property (assign,nonatomic) char forcesActiveWindowState;                   //@synthesize forcesActiveWindowState=_forcesActiveWindowState - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (assign,nonatomic) unsigned long long tabButtonState;              //@synthesize tabButtonState=_tabButtonState - In the implementation block
-(char)isActive;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActive:(char)arg1 ;
-(void)_windowChangedKeyState;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setForcesActiveWindowState:(char)arg1 ;
-(char)forcesActiveWindowState;
-(void)_setUpBackgroundViews;
-(id)_makeTopBorderView;
-(NSString *)backdropGroupName;
-(void)setUsesOffscreenRendering:(char)arg1 ;
-(void)setTabButtonState:(unsigned long long)arg1 animated:(char)arg2 ;
-(unsigned long long)tabButtonState;
-(char)usesOffscreenRendering;
-(void)_setUpTabBarViewButtonConstraints;
-(id)_makeBackgroundComponentView;
-(void)_updateBackgroundLayerImagesForActiveTab:(char)arg1 inActiveWindow:(char)arg2 ;
-(void)_updateBackgroundColorWithOldTabButtonState:(unsigned long long)arg1 animated:(char)arg2 ;
-(void)_reconfigureFullScreenViewsIfNeeded;
-(void)setTabButtonState:(unsigned long long)arg1 ;
@end

