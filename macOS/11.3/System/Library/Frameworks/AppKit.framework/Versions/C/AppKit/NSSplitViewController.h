/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSSplitViewDelegate.h>
#import <libobjc.A.dylib/NSUserInterfaceValidations.h>

@class NSSplitView, NSArray, NSString;

@interface NSSplitViewController : NSViewController <NSSplitViewDelegate, NSUserInterfaceValidations> {

	NSSplitView* _splitView;
	id _splitViewControllerPrivateData;

}

@property (retain) NSSplitView * splitView; 
@property (copy) NSArray * splitViewItems; 
@property (assign) double minimumThicknessForInlineSidebars; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setSplitView:(NSSplitView *)arg1 ;
-(NSSplitView *)splitView;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)loadView;
-(char)_viewControllerSupports10_10Features;
-(void)toggleSidebar:(id)arg1 ;
-(void)viewDidLoad;
-(void)removeChildViewControllerAtIndex:(long long)arg1 ;
-(void)insertChildViewController:(id)arg1 atIndex:(long long)arg2 ;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2 ;
-(void)setSplitViewItems:(NSArray *)arg1 ;
-(double)minimumThicknessForInlineSidebars;
-(NSArray *)splitViewItems;
-(void)_updateSplitView:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_stopObservingEdgeHover;
-(CGRect)_defaultFrame;
-(id)_makeSplitViewWithFrame:(CGRect)arg1 ;
-(void)_tearDownSplitView;
-(void)_setupSplitView;
-(CGRect)_splitViewFrame;
-(void)_updateSplitViewPositioningConstraints;
-(char)_hasItemToRevealOnEdgeHover;
-(void)_startObservingFullscreenForWindow:(id)arg1 ;
-(void)_startObservingEdgeHover;
-(void)_stopObservingFullscreenForWindow:(id)arg1 ;
-(void)insertSplitViewItem:(id)arg1 atIndex:(long long)arg2 ;
-(id)_splitViewItemForViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)removeSplitViewItem:(id)arg1 ;
-(void)setMinimumThicknessForInlineSidebars:(double)arg1 ;
-(void)addSplitViewItem:(id)arg1 ;
-(void)_updateHasItemToRevealOnEdgeHover;
-(void)_insertWrapperViewIntoSplitViewForSplitViewItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)_insertArrangedView:(id)arg1 atIndex:(long long)arg2 ;
-(long long)_indexOfSplitViewItem:(id)arg1 ;
-(id)_arrangedViewForSplitViewItem:(id)arg1 ;
-(id)_splitViewItemForViewAtIndex:(long long)arg1 ;
-(id)_splitViewItemForArrangedView:(id)arg1 ;
-(char)hidesFirstDivider;
-(char)hidesLastDivider;
-(char)_canOverlaySplitViewItem:(id)arg1 ;
-(char)_shouldGrowWindowToShowItem:(id)arg1 withSize:(CGSize)arg2 ;
-(char)_shouldShrinkWindowToShowItem:(id)arg1 withSize:(CGSize)arg2 ;
-(void)splitViewItem:(id)arg1 willChangeCollapsed:(char)arg2 animated:(char)arg3 ;
-(long long)_shrinkingWindowAnchorEdgeToShowItem:(id)arg1 withSize:(CGSize)arg2 atIndex:(long long)arg3 ;
-(long long)_growingWindowAnchorEdgeToShowItem:(id)arg1 withSize:(CGSize)arg2 atIndex:(long long)arg3 ;
-(void)splitViewItem:(id)arg1 isChangingCollapsed:(char)arg2 animated:(char)arg3 ;
-(void)splitViewItem:(id)arg1 didChangeCollapsed:(char)arg2 animated:(char)arg3 ;
-(char)_shouldUseConstraintAnimationToCollapseItem:(id)arg1 withWindowResize:(char)arg2 ;
-(id)_sidebarItemForToggling;
-(char)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3 ;
-(char)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2 ;
-(CGRect)splitView:(id)arg1 effectiveRect:(CGRect)arg2 forDrawnRect:(CGRect)arg3 ofDividerAtIndex:(long long)arg4 ;
-(CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2 ;
-(void)splitViewDidResizeSubviews:(id)arg1 ;
-(id)_splitView;
-(double)minimumSizeForInlineSidebars;
-(void)setMinimumSizeForInlineSidebars:(double)arg1 ;
-(long long)_viewInsertionIndexForSplitViewItem:(id)arg1 ;
-(id)splitViewItemForViewController:(id)arg1 ;
-(char)_splitView:(id)arg1 canLiveCollapseArrangedSubview:(id)arg2 ;
-(char)splitView:(id)arg1 doubleClickedOnDividerAtIndex:(long long)arg2 ;
-(char)_splitView:(id)arg1 canSpringLoadRevealArrangedSubview:(id)arg2 ;
-(char)_splitView:(id)arg1 shouldHaveVibrantDividerAtIndex:(long long)arg2 ;
-(long long)_splitView:(id)arg1 blendingModeForDividerAtIndex:(long long)arg2 ;
-(id)_splitView:(id)arg1 appearanceForDividerAtIndex:(long long)arg2 ;
-(char)_splitViewContainsFullHeightSidebar:(id)arg1 ;
-(char)_splitViewContainsTrailingFullHeightSidebar:(id)arg1 ;
-(void)_collapse:(char)arg1 splitViewItem:(id)arg2 forceOverlay:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_splitViewItemSizesAfterSplitViewItem:(id)arg1 isCollapsed:(char)arg2 ;
-(float)_splitView:(id)arg1 holdingPriorityForViewAtIndex:(long long)arg2 ;
-(void)_setHoldingPriority:(float)arg1 forSplitViewItem:(id)arg2 ;
-(void)setHidesLastDivider:(char)arg1 ;
-(void)setHidesFirstDivider:(char)arg1 ;
-(void)_splitView:(id)arg1 didStartOverlayingView:(id)arg2 ;
-(void)_splitView:(id)arg1 didStopOverlayingView:(id)arg2 ;
-(char)validateToolbarItem:(id)arg1 ;
-(void)_didEnterFullscreen:(id)arg1 ;
-(void)_didExitFullscreen:(id)arg1 ;
-(void)_setHasItemToRevealOnEdgeHover:(char)arg1 ;
-(void)_uncollapseEdgeRevealItem:(id)arg1 ;
@end

