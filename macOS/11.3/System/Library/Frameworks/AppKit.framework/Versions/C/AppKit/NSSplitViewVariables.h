/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSString, NSValue, NSMutableArray, NSArray, NSMutableDictionary, NSMapTable, NSView, _NSSplitViewShadowView, _NSSplitViewSpringLoadingView;

@interface NSSplitViewVariables : NSObject {

	char isVertical;
	long long dividerStyle;
	NSString* autosaveName;
	NSValue* delegateValue;
	char isPaneSplitter;
	NSMutableArray* lastAdjustmentArrangedViewFrames;
	double lastAdjustmentDividerThickness;
	char lastAdjustDividerOrientation;
	NSMutableArray* originalArrangedViewProportionsDuringResizing;
	NSMutableArray* arrangedViewIsResizable;
	NSArray* stackConstraints;
	NSArray* preferredSizeConstraints;
	NSArray* fallbackSizeConstraints;
	NSMutableDictionary* holdingPrioritiesByViewIndex;
	NSMapTable* preferredArrangedSubviewThicknesses;
	NSMutableArray* arrangedSubviews;
	NSView* leadingOverlayView;
	NSView* trailingOverlayView;
	NSView* liveResizeAutoUncollapsedLeadingOverlayView;
	NSView* liveResizeAutoUncollapsedTrailingOverlayView;
	_NSSplitViewShadowView* leadingOverlayShadowView;
	_NSSplitViewShadowView* trailingOverlayShadowView;
	NSView* _transientDraggingOperationUncollapsedView;
	NSMutableArray* autocollapsedViews;
	NSMutableArray* dividerViews;
	double minimumSizeForInlineSidebars;
	long long _registeredTransientBehavior;
	NSMutableArray* dividersNeedingResizeNotifications;
	_NSSplitViewSpringLoadingView* leadingSpringLoadingView;
	_NSSplitViewSpringLoadingView* trailingSpringLoadingView;
	unsigned long long willResizeDelegateNotificationToken;
	unsigned long long didResizeDelegateNotificationToken;
	struct {
		unsigned resizeSubviewsWithOldSizeIsBeingInvokedByViewWillDraw : 1;
		unsigned resizeSubviewsWithOldSizeInvokedDelegate : 1;
		unsigned warnedAboutInvalidArrangedViewFrames : 1;
		unsigned warnedAboutInvalidArrangedViewOrder : 1;
		unsigned delegateCursorOfDividerAtIndex : 1;
		unsigned unarchiving : 1;
		unsigned delayArrangedViewAdjustment : 1;
		unsigned autosaveDelayed : 1;
		unsigned shouldDelayAutosave : 1;
		unsigned firstLogicalDividerIsHidden : 1;
		unsigned lastLogicalDividerIsHidden : 1;
		unsigned dividerColorSet : 1;
		unsigned performingConstraintBasedPresentDividerDragResult : 1;
		unsigned alwaysUseAlignmentRects : 1;
		unsigned integralizeInUserSpace : 1;
		unsigned splitViewControllerAllowsPropertyChange : 1;
		unsigned splitViewOwnedBySplitViewController : 1;
		unsigned doesNotArrangeAllSubviews : 1;
		unsigned testingForOverlays : 1;
		unsigned isSpringLoaded : 1;
		unsigned showsOverlayMetrics : 1;
		unsigned draggingDivider : 1;
		unsigned finishedFirstUpdateConstraintsPass : 1;
		unsigned animatesAutocollapses : 1;
		unsigned currentlySpringLoading : 1;
		unsigned explicitAutocollapseThicknessDisabled : 1;
		unsigned needsSidebarProviderUpdate : 1;
		unsigned hasProvidedSidebarToWindow : 1;
		unsigned hasProvidedTrailingSidebarToWindow : 1;
		unsigned unused : 6;
	}  svFlags;

}
@end

