/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@class _NSFullScreenModalStackController, NSTabBar, NSBox, NSTimer;

@interface _NSFullScreenModalCollapsedTabWindow : NSPanel {

	_NSFullScreenModalStackController* _stackController;
	/*^block*/id _additionalMoveBlock;
	NSTabBar* _borrowedTabBar;
	NSBox* _tabCenteringBox;
	NSBox* _windowTopBorderBox;
	char _revealed;
	NSTimer* _beginModalPollTimer;

}
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(char)isAnimating;
-(id)initWithStackController:(id)arg1 ;
-(char)_shouldSnapWindowsClientSide;
-(char)_allowsSnapping;
-(char)_canBeSnappingTarget;
-(char)_allowsExteriorResizing;
-(char)isMovable;
-(char)_canMiniaturize;
-(char)canBecomeKeyWindow;
-(char)canBecomeMainWindow;
-(char)_ignoreForFullScreenTransition;
-(void)_setWindowTag;
-(void)moveToSpace;
-(void)reshapeContents;
-(void)forgetTabBar;
-(void)animateHideWithAdditionalMoveBlock:(/*^block*/id)arg1 ;
-(char)hasTabBar;
-(void)takeTabBar:(id)arg1 ;
-(void)animateRevealWithAdditionalMoveBlock:(/*^block*/id)arg1 ;
-(void)revealWithoutAnimating;
-(CGRect)_targetTabFrame;
-(void)_monitorModalPollDrags;
-(id)tabBarSnapshot:(CGRect*)arg1 ;
@end

