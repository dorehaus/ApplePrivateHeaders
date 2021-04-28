/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol SiriUINavigationControllerDelegate;
@class NSMutableArray, NSViewController, SiriUINavigationBarView, NSString;

@interface SiriUINavigationController : NSViewController <CAAnimationDelegate> {

	id<SiriUINavigationControllerDelegate> _delegate;
	NSMutableArray* _mutableViewControllers;
	NSViewController* _selectedVC;
	SiriUINavigationBarView* _navigationBarView;
	NSMutableArray* _vcsNeedingUpdateConstraints;

}

@property (retain) NSMutableArray * mutableViewControllers;                      //@synthesize mutableViewControllers=_mutableViewControllers - In the implementation block
@property (retain) NSViewController * selectedVC;                                //@synthesize selectedVC=_selectedVC - In the implementation block
@property (retain) SiriUINavigationBarView * navigationBarView;                  //@synthesize navigationBarView=_navigationBarView - In the implementation block
@property (retain) NSMutableArray * vcsNeedingUpdateConstraints;                 //@synthesize vcsNeedingUpdateConstraints=_vcsNeedingUpdateConstraints - In the implementation block
@property (__weak) id<SiriUINavigationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SiriUINavigationControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUINavigationControllerDelegate>)arg1 ;
-(void)loadView;
-(void)updateViewConstraints;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setViewControllers:(id)arg1 ;
-(id)viewControllers;
-(id)topViewController;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(SiriUINavigationBarView *)navigationBarView;
-(void)setNavigationBarView:(SiriUINavigationBarView *)arg1 ;
-(void)popToViewController:(id)arg1 animated:(char)arg2 ;
-(void)setMutableViewControllers:(NSMutableArray *)arg1 ;
-(void)setVcsNeedingUpdateConstraints:(NSMutableArray *)arg1 ;
-(void)_updateNavigationBarViewWithViewController:(id)arg1 animated:(char)arg2 ;
-(void)_popViewController;
-(void)_addNavigationBarConstriants;
-(NSMutableArray *)vcsNeedingUpdateConstraints;
-(NSMutableArray *)mutableViewControllers;
-(void)_addChildVCToSelf:(id)arg1 ;
-(void)_moveToTopViewController:(char)arg1 ;
-(void)_moveToViewControllerAtIndex:(unsigned long long)arg1 animated:(char)arg2 ;
-(NSViewController *)selectedVC;
-(void)_removeChildVCFromSelf:(id)arg1 ;
-(void)setSelectedVC:(NSViewController *)arg1 ;
-(void)_willShowViewController:(id)arg1 animated:(char)arg2 ;
-(void)_animateToSelectedVCFromVC:(id)arg1 ;
-(void)_replacePreviousVCWithNewVCInViewHierarchy:(id)arg1 ;
-(void)_sendDelegateDidLayoutViewController:(id)arg1 ;
-(void)_didShowViewController:(id)arg1 animated:(char)arg2 ;
-(void)_popMutableViewControllersToSelectedVC;
-(double)navigationBarHeight;
-(void)updateNavigationBarTitle:(id)arg1 ;
@end
