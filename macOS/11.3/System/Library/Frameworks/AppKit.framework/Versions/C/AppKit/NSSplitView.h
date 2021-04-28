/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/_NSTransientUIElement.h>
#import <libobjc.A.dylib/NSUserInterfaceValidations.h>
#import <libobjc.A.dylib/NSToolbarItemValidation.h>

@class NSArray, NSString, NSColor;

@interface NSSplitView : NSView <_NSTransientUIElement, NSUserInterfaceValidations, NSToolbarItemValidation> {

	id _variables;

}

@property (assign) char arrangesAllSubviews; 
@property (copy,readonly) NSArray * arrangedSubviews; 
@property (readonly) char _canOverlayArrangedViews; 
@property (getter=isSpringLoaded) char springLoaded; 
@property (setter=_setAnimatesAutocollapses:) char _animatesAutocollapses; 
@property (setter=_setRegisteredTransientBehavior:) long long _registeredTransientBehavior; 
@property (readonly) long long _transientBehavior; 
@property (getter=isDetached,readonly) char detached; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isVertical) char vertical; 
@property (assign) long long dividerStyle; 
@property (copy) NSString * autosaveName; 
@property (__weak) id<NSSplitViewDelegate> delegate; 
@property (copy,readonly) NSColor * dividerColor; 
@property (readonly) double dividerThickness; 
+(void)initialize;
+(Class)_classToCheckForRequiresConstraintBasedLayout;
+(id)defaultAnimationForKey:(id)arg1 ;
+(char)requiresConstraintBasedLayout;
+(id)_autosaveDefaultsKeyForName:(id)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSSplitViewDelegate>)delegate;
-(void)setDelegate:(id<NSSplitViewDelegate>)arg1 ;
-(void)layout;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)resetCursorRects;
-(char)isFlipped;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)hitTest:(CGPoint)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(NSArray *)arrangedSubviews;
-(void)_removeSubview:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(void)setLayer:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(long long)orientation;
-(void)drawRect:(CGRect)arg1 ;
-(char)mouseDownCanMoveWindow;
-(char)isVertical;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(void)setSubviews:(id)arg1 ;
-(void)replaceSubview:(id)arg1 with:(id)arg2 ;
-(void)viewWillDraw;
-(void)_windowChangedKeyState;
-(char)preservesContentDuringLiveResize;
-(char)acceptsFirstMouse:(id)arg1 ;
-(id)_hitTestToBlockWindowResizing:(CGPoint)arg1 forResizeDirection:(long long)arg2 ;
-(void)_finishedMakingConnections;
-(char)isSpringLoaded;
-(void)setSpringLoaded:(char)arg1 ;
-(CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(void)addArrangedSubview:(id)arg1 ;
-(void)viewDidChangeBackingProperties;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)toggleSidebar:(id)arg1 ;
-(void)setAutoresizesSubviews:(char)arg1 ;
-(char)shouldBeTreatedAsInkEvent:(id)arg1 ;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
-(void)setVertical:(char)arg1 ;
-(void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2 ;
-(void)_setArrangedView:(id)arg1 isCollapsed:(char)arg2 ;
-(void)_invalidateSizeConstraints;
-(void)_setMinimumSizeForInlineSidebars:(double)arg1 ;
-(void)_setSplitViewControllerAllowsPropertyChange:(char)arg1 ;
-(void)setArrangesAllSubviews:(char)arg1 ;
-(void)setDividerStyle:(long long)arg1 ;
-(void)removeArrangedSubview:(id)arg1 ;
-(void)insertArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(double)dividerThickness;
-(void)_resetUserPreferredThicknessFromLayoutAlignmentFrameForArrangedSubview:(id)arg1 ;
-(char)_testingForOverlays;
-(void)_setInTransientSpringLoad:(char)arg1 ;
-(void)_uncollapseAndOverlayArrangedView:(id)arg1 ;
-(char)_uncollapseArrangedView:(id)arg1 overlayIfNecessary:(char)arg2 ;
-(void)_updateDividerViews;
-(void)_resetUserPreferredThicknessFromSetAlignmentFrameForAllArrangedSubviews;
-(void)_setExplicitAutocollapseThicknessDisabled:(char)arg1 ;
-(void)_fakeCollapse:(char)arg1 arrangedView:(id)arg2 canOverlay:(char)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_invalidateStackAndSizeConstraints;
-(char)validateToolbarItem:(id)arg1 ;
-(void)_autoCollapseArrangedView:(id)arg1 animated:(char)arg2 ;
-(char)_isArrangedViewAutoCollapsed:(id)arg1 ;
-(void)instantiateWithObjectInstantiator:(id)arg1 ;
-(char)_needsLayoutEngine;
-(long long)_effectiveUserInterfaceLayoutDirection;
-(long long)dividerStyle;
-(char)isPaneSplitter;
-(long long)_registeredTransientBehavior;
-(void)_initVariables;
-(void)_stopObservingViews:(id)arg1 ;
-(char)_canUseDividerViewsAsSubviews;
-(char)_canUseLayersForDividers;
-(void)_invalidateStackConstraints;
-(void)_setArrangedView:(id)arg1 isAutocollapsed:(char)arg2 ;
-(void)_setFrameOrAlignmentRect:(CGRect)arg1 ofArrangedView:(id)arg2 ;
-(char)_walkLayoutDescriptionArray:(id)arg1 withFrameHandler:(/*^block*/id)arg2 ;
-(char)_canMakePropertyChange;
-(char)_isInTexturedWindow;
-(CFStringRef)_currentDividerDimpleVariant;
-(CFStringRef)_currentVerticalKey;
-(CFStringRef)_currentStateKey;
-(NSColor *)dividerColor;
-(void)_drawDividerDimpleInRect:(CGRect)arg1 indicatorOnly:(char)arg2 ;
-(char)isArrangedViewCollapsed:(id)arg1 ;
-(char)_hasHidableDividerAtLogicalIndex:(long long)arg1 ;
-(char)_shouldMirrorForRTL;
-(double)_scaledDividerThickness;
-(CGRect)_frameOrAlignmentRectOfArrangedView:(id)arg1 ;
-(char)_isArrangedViewOverlaid:(id)arg1 ;
-(char)_splitViewUseConstraintBasedLayout;
-(void)_scheduleAutosaveArrangedViewLayoutIfNecessary;
-(void)_autosaveArrangedViewLayoutIfNecessary;
-(id)_dividerFrames;
-(char)_shouldAdjustSizeOfArrangedView:(id)arg1 ;
-(char)_arrangedViewsOrDividersHaveChangedSinceAdjustment;
-(void)_setArrangedViewsAreAdjusted:(char)arg1 ;
-(void)_invalidateCursorRectsAndDragRegion;
-(id)_leadingViewForLogicalSeparatorIndex:(long long)arg1 ;
-(long long)_visualDividerIndexForLogicalIndex:(long long)arg1 ;
-(id)_trailingViewForLogicalSeparatorIndex:(long long)arg1 ;
-(double)minPossiblePositionOfDividerAtIndex:(long long)arg1 ;
-(double)maxPossiblePositionOfDividerAtIndex:(long long)arg1 ;
-(char)_usesAlternateDrag;
-(double)_unscaledDividerThickness;
-(char)_canCollapseArrangedView:(id)arg1 ;
-(long long)_logicalDividerIndexForVisualIndex:(long long)arg1 ;
-(id)_dividerDraggingAnchor;
-(double)_distanceFromTrailingEdgeOfView:(id)arg1 toAnchor:(id)arg2 ;
-(double)_trailingDistanceFromSelf:(CGRect)arg1 ;
-(double)_leadingDistanceFromSelf:(CGRect)arg1 ;
-(SCD_Struct_NS95)_dragLimitsOfDividerAtLogicalIndex:(unsigned long long)arg1 ;
-(double)_constantFromDividerPosition:(double)arg1 toAnchorView:(id)arg2 ;
-(void)_uncollapseArrangedView:(id)arg1 animated:(char)arg2 ;
-(void)_collapseArrangedView:(id)arg1 animated:(char)arg2 ;
-(double)_doConstraintBasedPresentDividerDragResult:(SCD_Struct_NS96)arg1 withParams:(id)arg2 ;
-(void)_updateLayerDividersIfNeeded;
-(id)_dragParamsOfDividerAtVisualIndex:(unsigned long long)arg1 ;
-(SCD_Struct_NS96)_resultOfDividerDragToLeadingPosition:(double)arg1 withParams:(id)arg2 ;
-(double)_presentDividerDragResult:(SCD_Struct_NS96)arg1 withParams:(id)arg2 ;
-(char)arrangesAllSubviews;
-(void)_sortSubviews;
-(void)_willAddArrangedSubview:(id)arg1 ;
-(void)_addSubview:(id)arg1 ;
-(void)_didAddArrangedSubview:(id)arg1 ;
-(void)sortSubviewsUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)_removeWindowSidebarTrackingIfApplicable;
-(void)_unregisterSplitViewItemTrackingForArrangedSubviews;
-(void)_cancelResetUserPreferredThicknessAfterUserResizeWithDelay;
-(void)_windowDidEndLiveResize:(id)arg1 ;
-(void)_windowWillExitFullScreen:(id)arg1 ;
-(void)_noteNeedsSidebarProviderUpdate;
-(void)_registerSplitViewItemTrackingForArrangedSubviews;
-(char)_isSubclassThatOverridesDrawingMethods;
-(void)drawDividerInRect:(CGRect)arg1 ;
-(id)_dividerLayers;
-(void)_setDividerLayers:(id)arg1 ;
-(void)_updateDividerLayer:(id)arg1 ;
-(char)_shouldDrawDivider;
-(long long)_visualIndexOfDividerForLocation:(CGPoint)arg1 andReturnFrame:(CGRect*)arg2 ;
-(CGRect)_effectiveFrameForDrawnFrame:(CGRect)arg1 ofDividerAtIndex:(long long)arg2 ;
-(CGRect)_additionalEffectiveFrameOfDividerAtIndex:(long long)arg1 ;
-(char)_isArrangedViewAnimating:(id)arg1 ;
-(id)_cursorOfDividerAtIndex:(unsigned long long)arg1 position:(double)arg2 dragLimits:(SCD_Struct_NS95)arg3 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(float)holdingPriorityForSubviewAtIndex:(long long)arg1 ;
-(id)_makeDividerLayerWithFrame:(CGRect)arg1 ;
-(void)_removeDividerLayers;
-(void)_adjustArrangedViewsIfNecessary;
-(char)_usesExplicitSizeForAutoCollapse;
-(char)_explicitAutocollapseThicknessDisabled;
-(double)_minimumSizeForInlineSidebars;
-(char)_canAutocollapseArrangedView:(id)arg1 ;
-(void)_willAddOverlayView:(id)arg1 ;
-(char)_animatesAutocollapses;
-(void)_autoCollapseArrangedView:(id)arg1 ;
-(char)_canLiveCollapseArrangedViews;
-(char)_liveCollapseIsCanned;
-(char)_inWindowLiveResize;
-(char)_canLiveCollapseArrangedView:(id)arg1 ;
-(void)_uncollapseArrangedView:(id)arg1 ;
-(void)_didRemoveOverlay:(id)arg1 ;
-(void)_updateStackConstraints;
-(void)_updateSizeConstraints;
-(void)_doLayerBackedLayout;
-(char)_checkForAutoUncollapsedViews;
-(char)_checkForEarlyCollapseArrangedViews;
-(void)_noteWillResizeDividerPosition:(long long)arg1 ;
-(void)_sendWillResizeNotificationsIfNecessary;
-(void)_sendDidResizeNotificationsIfNecessary;
-(void)_updateWindowSidebarTrackingIfApplicable;
-(void)_resetUserPreferredThicknessAfterUserResizeWithDelay;
-(char)_validateArrangedViewFrames;
-(void)adjustSubviews;
-(void)_removeStackConstraints;
-(void)_willMeasureMinSizeForFullscreen;
-(void)_updateConstraintsForMinMaxMeasure;
-(void)_didMeasureMinSizeForFullscreen;
-(void)_willRemoveArrangedSubview:(id)arg1 ;
-(void)_didRemoveArrangedSubview:(id)arg1 ;
-(char)_splitViewOwnedBySplitViewController;
-(char)_delegateImplementsAutolayoutIncompatibleMethods;
-(void)setHoldingPriority:(float)arg1 forSubviewAtIndex:(long long)arg2 ;
-(char)_dividerIsHiddenAtLogicalIndex:(long long)arg1 ;
-(id)_constraintsForStacking:(id)arg1 toView:(id)arg2 previousIndex:(long long)arg3 identifierIndex:(long long)arg4 spacing:(double)arg5 canLiveCollapse:(char)arg6 forDivider:(char)arg7 ;
-(id)_constraintsForLeadingView:(id)arg1 identifierIndex:(long long)arg2 spacing:(double)arg3 canLiveCollapse:(char)arg4 forOverlay:(char)arg5 ;
-(id)_constraintsForPerpendicularAxisForView:(id)arg1 identifierIndex:(long long)arg2 divider:(char)arg3 ;
-(id)_constraintsForTrailingView:(id)arg1 identifierIndex:(long long)arg2 spacing:(double)arg3 canLiveCollapse:(char)arg4 forOverlay:(char)arg5 ;
-(id)_constraintsFreezingFrameForView:(id)arg1 identifierIndex:(long long)arg2 ;
-(double)_userPreferredThicknessForArrangedSubview:(id)arg1 ;
-(char)_needsUpdateConstraintsForProportionalResizing;
-(void)_updateConstraintsForProportionalResizing;
-(id)_priorityGroups;
-(double)_automaticMaximumSizeForArrangedView:(id)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)_setLayoutEngine:(id)arg1 ;
-(id)_arrangedViewLayoutDescriptions;
-(void)setIsPaneSplitter:(char)arg1 ;
-(char)_compatibility_seemsToBeVertical;
-(void)_startObservingViews:(id)arg1 ;
-(void)_startObservingView:(id)arg1 ;
-(void)_stopObservingView:(id)arg1 ;
-(char)_splitViewControllerAllowsPropertyChange;
-(void)_unregisterSplitViewItemTrackingIfNecessaryForView:(id)arg1 ;
-(void)_registerSplitViewItemTrackingIfNecessaryForView:(id)arg1 ;
-(void)setDividerColor:(NSColor *)arg1 ;
-(char)isSubviewCollapsed:(id)arg1 ;
-(double)positionOfDividerAtIndex:(long long)arg1 ;
-(long long)_indexOfDividerForLocation:(CGPoint)arg1 andReturnFrame:(CGRect*)arg2 ;
-(id)_makeShadowView;
-(char)_inDividerLiveResize;
-(void)_nsib_setSplitViewAlwaysLaysOutAccordingToAlignmentRects:(char)arg1 ;
-(char)_nsib_splitViewAlwaysLaysOutAccordingToAlignmentRects;
-(void)_nsib_setSplitViewIntegralizesInUserSpace:(char)arg1 ;
-(char)_nsib_splitViewIntegralizesInUserSpace;
-(float)stayPutPriorityForSubviewAtIndex:(long long)arg1 ;
-(void)setStayPutPriority:(float)arg1 forSubviewAtIndex:(long long)arg2 ;
-(CGRect)_resizeViewsForOffset:(long long)arg1 coordinate:(double)arg2 ;
-(void)_uncollapseWithOverlayArrangedView:(id)arg1 animated:(char)arg2 ;
-(void)_resetUserPreferredThicknessFromSetAlignmentFrameForArrangedSubview:(id)arg1 ;
-(void)accessibilityResetChildrenAttribute;
-(void)_removeUserPreferredThicknessForArrangedSubview:(id)arg1 ;
-(char)_canOverlayArrangedViews;
-(void)_overlayArrangedView:(id)arg1 ;
-(char)_inTransientSpringLoad;
-(id)_customDividerColor;
-(id)_customThickness;
-(char)_dividerShouldBeVibrantAtIndex:(unsigned long long)arg1 ;
-(long long)_blendingModeForDividerAtIndex:(unsigned long long)arg1 ;
-(id)_appearanceForDividerAtIndex:(unsigned long long)arg1 ;
-(void)_noteDividerViewChangedSize:(id)arg1 ;
-(void)_autosaveSubviewLayoutIfNecessary;
-(void)_setAnimatesAutocollapses:(char)arg1 ;
-(void)_animatedAutoCollapseArrangedView:(id)arg1 ;
-(id)_debugLayoutType;
-(id)_debugDividerType;
-(id)debugReasonForLayoutMode;
-(void)_setUserPreferredThickness:(double)arg1 forArrangedSubview:(id)arg2 ;
-(void)_setRegisteredTransientBehavior:(long long)arg1 ;
-(long long)_transientBehavior;
-(char)_isAffectedByEventsInWindow:(id)arg1 ;
-(void)_closeForNonDragOrResizeClickWithEvent:(id)arg1 ;
-(void)_closeForKeyDownEvent:(id)arg1 ;
-(void)_closeForSheetPresentingOnWindow:(id)arg1 ;
-(void)_closeForToolbarPresentingOnWindow:(id)arg1 ;
-(id)_accessibilitySplitterRects;
-(id)_accessibilitySplitterAtIndex:(unsigned long long)arg1 ;
-(id)accessibilitySplittersAttribute;
-(char)accessibilityIsSplittersAttributeSettable;
@end

