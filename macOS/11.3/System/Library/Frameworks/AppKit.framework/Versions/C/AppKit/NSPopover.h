/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSResponder.h>
#import <libobjc.A.dylib/_NSTransientUIElement.h>
#import <libobjc.A.dylib/NSAppearanceCustomization.h>
#import <libobjc.A.dylib/NSAccessibilityElement.h>
#import <libobjc.A.dylib/NSAccessibility.h>

@class NSView, NSViewController, NSWindow, NSAppearance, NSString, NSURL, NSArray;

@interface NSPopover : NSResponder <_NSTransientUIElement, NSAppearanceCustomization, NSAccessibilityElement, NSAccessibility> {

	id _bindingAdaptor;
	id _delegate;
	id _visualRepresentation;
	NSView* _positioningView;
	NSViewController* _contentViewController;
	NSWindow* _positioningWindow;
	NSAppearance* _appearance;
	long long _behavior;
	id _popoverPrivateData;
	unsigned long long _preferredEdge;
	CGSize _contentSize;
	CGRect _positioningRect;
	id _postCloseBlock;
	struct {
		unsigned animates : 1;
		unsigned positioningRectIsBounds : 1;
		unsigned registeredAsTransient : 1;
		unsigned registeredAsSemitransient : 1;
		unsigned shown : 1;
		unsigned toolbarHidesAnchor : 1;
		unsigned closing : 1;
		unsigned registeredForGeometryInWindowDidChange : 1;
		unsigned registeredForEffectiveAppearanceDidChange : 1;
		unsigned keepTopStable : 1;
		unsigned implicitlyDetached : 1;
		unsigned hidesDetachedWindowOnDeactivate : 1;
		unsigned requiresCorrectContentAppearance : 1;
		unsigned reserved : 19;
	}  _flags;

}

@property (setter=_setRegisteredTransientBehavior:) long long _registeredTransientBehavior; 
@property (readonly) long long _transientBehavior; 
@property (getter=isDetached,readonly) char detached; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isShown) char shown; 
@property (retain) NSView * positioningView;                                                             //@synthesize positioningView=_positioningView - In the implementation block
@property (retain) NSWindow * positioningWindow;                                                         //@synthesize positioningWindow=_positioningWindow - In the implementation block
@property (__weak) id<NSPopoverDelegate> delegate; 
@property (retain) NSAppearance * appearance; 
@property (readonly) NSAppearance * effectiveAppearance; 
@property (assign) long long behavior; 
@property (assign) char animates; 
@property (retain) NSViewController * contentViewController; 
@property (assign) CGSize contentSize; 
@property (assign) CGRect positioningRect; 
@property (getter=isAccessibilityElement) char accessibilityElement; 
@property (assign) CGRect accessibilityFrame; 
@property (getter=isAccessibilityFocused) char accessibilityFocused; 
@property (assign) CGPoint accessibilityActivationPoint; 
@property (__weak) id accessibilityTopLevelUIElement; 
@property (copy) NSURL * accessibilityURL; 
@property (retain) id accessibilityValue; 
@property (copy) NSString * accessibilityValueDescription; 
@property (copy) NSArray * accessibilityVisibleChildren; 
@property (copy) NSString * accessibilitySubrole; 
@property (copy) NSString * accessibilityTitle; 
@property (__weak) id accessibilityTitleUIElement; 
@property (copy) NSArray * accessibilityNextContents; 
@property (assign) long long accessibilityOrientation; 
@property (retain) id accessibilityOverflowButton; 
@property (__weak) id accessibilityParent; 
@property (copy) NSString * accessibilityPlaceholderValue; 
@property (copy) NSArray * accessibilityPreviousContents; 
@property (copy) NSString * accessibilityRole; 
@property (copy) NSString * accessibilityRoleDescription; 
@property (retain) id accessibilitySearchButton; 
@property (retain) id accessibilitySearchMenu; 
@property (getter=isAccessibilitySelected) char accessibilitySelected; 
@property (copy) NSArray * accessibilitySelectedChildren; 
@property (copy) NSArray * accessibilityServesAsTitleForUIElements; 
@property (retain) id accessibilityShownMenu; 
@property (retain) id accessibilityMinValue; 
@property (retain) id accessibilityMaxValue; 
@property (copy) NSArray * accessibilityLinkedUIElements; 
@property (__weak) id accessibilityWindow; 
@property (copy) NSString * accessibilityIdentifier; 
@property (copy) NSString * accessibilityHelp; 
@property (copy) NSString * accessibilityFilename; 
@property (getter=isAccessibilityExpanded) char accessibilityExpanded; 
@property (getter=isAccessibilityEdited) char accessibilityEdited; 
@property (getter=isAccessibilityEnabled) char accessibilityEnabled; 
@property (copy) NSArray * accessibilityChildren; 
@property (copy) NSArray * accessibilityChildrenInNavigationOrder; 
@property (retain) id accessibilityClearButton; 
@property (retain) id accessibilityCancelButton; 
@property (getter=isAccessibilityProtectedContent) char accessibilityProtectedContent; 
@property (copy) NSArray * accessibilityContents; 
@property (copy) NSString * accessibilityLabel; 
@property (getter=isAccessibilityAlternateUIVisible) char accessibilityAlternateUIVisible; 
@property (copy) NSArray * accessibilitySharedFocusElements; 
@property (getter=isAccessibilityRequired) char accessibilityRequired; 
@property (copy) NSArray * accessibilityCustomRotors; 
@property (retain) id accessibilityApplicationFocusedUIElement; 
@property (retain) id accessibilityMainWindow; 
@property (getter=isAccessibilityHidden) char accessibilityHidden; 
@property (getter=isAccessibilityFrontmost) char accessibilityFrontmost; 
@property (retain) id accessibilityFocusedWindow; 
@property (copy) NSArray * accessibilityWindows; 
@property (__weak) id accessibilityExtrasMenuBar; 
@property (__weak) id accessibilityMenuBar; 
@property (copy) NSArray * accessibilityColumnTitles; 
@property (getter=isAccessibilityOrderedByRow) char accessibilityOrderedByRow; 
@property (assign) long long accessibilityHorizontalUnits; 
@property (assign) long long accessibilityVerticalUnits; 
@property (copy) NSString * accessibilityHorizontalUnitDescription; 
@property (copy) NSString * accessibilityVerticalUnitDescription; 
@property (copy) NSArray * accessibilityHandles; 
@property (retain) id accessibilityWarningValue; 
@property (retain) id accessibilityCriticalValue; 
@property (getter=isAccessibilityDisclosed) char accessibilityDisclosed; 
@property (__weak) id accessibilityDisclosedByRow; 
@property (retain) id accessibilityDisclosedRows; 
@property (assign) long long accessibilityDisclosureLevel; 
@property (copy) NSArray * accessibilityMarkerUIElements; 
@property (retain) id accessibilityMarkerValues; 
@property (retain) id accessibilityMarkerGroupUIElement; 
@property (assign) long long accessibilityUnits; 
@property (copy) NSString * accessibilityUnitDescription; 
@property (assign) long long accessibilityRulerMarkerType; 
@property (copy) NSString * accessibilityMarkerTypeDescription; 
@property (retain) id accessibilityHorizontalScrollBar; 
@property (retain) id accessibilityVerticalScrollBar; 
@property (copy) NSArray * accessibilityAllowedValues; 
@property (copy) NSArray * accessibilityLabelUIElements; 
@property (assign) float accessibilityLabelValue; 
@property (copy) NSArray * accessibilitySplitters; 
@property (retain) id accessibilityDecrementButton; 
@property (retain) id accessibilityIncrementButton; 
@property (copy) NSArray * accessibilityTabs; 
@property (retain) id accessibilityHeader; 
@property (assign) long long accessibilityColumnCount; 
@property (assign) long long accessibilityRowCount; 
@property (assign) long long accessibilityIndex; 
@property (copy) NSArray * accessibilityColumns; 
@property (copy) NSArray * accessibilityRows; 
@property (copy) NSArray * accessibilityVisibleRows; 
@property (copy) NSArray * accessibilitySelectedRows; 
@property (copy) NSArray * accessibilityVisibleColumns; 
@property (copy) NSArray * accessibilitySelectedColumns; 
@property (assign) long long accessibilitySortDirection; 
@property (copy) NSArray * accessibilityRowHeaderUIElements; 
@property (copy) NSArray * accessibilitySelectedCells; 
@property (copy) NSArray * accessibilityVisibleCells; 
@property (copy) NSArray * accessibilityColumnHeaderUIElements; 
@property (assign) NSRange accessibilityRowIndexRange; 
@property (assign) NSRange accessibilityColumnIndexRange; 
@property (assign) long long accessibilityInsertionPointLineNumber; 
@property (assign) NSRange accessibilitySharedCharacterRange; 
@property (copy) NSArray * accessibilitySharedTextUIElements; 
@property (assign) NSRange accessibilityVisibleCharacterRange; 
@property (assign) long long accessibilityNumberOfCharacters; 
@property (copy) NSString * accessibilitySelectedText; 
@property (assign) NSRange accessibilitySelectedTextRange; 
@property (copy) NSArray * accessibilitySelectedTextRanges; 
@property (retain) id accessibilityToolbarButton; 
@property (getter=isAccessibilityModal) char accessibilityModal; 
@property (retain) id accessibilityProxy; 
@property (getter=isAccessibilityMain) char accessibilityMain; 
@property (retain) id accessibilityFullScreenButton; 
@property (retain) id accessibilityGrowArea; 
@property (copy) NSString * accessibilityDocument; 
@property (retain) id accessibilityDefaultButton; 
@property (retain) id accessibilityCloseButton; 
@property (retain) id accessibilityZoomButton; 
@property (retain) id accessibilityMinimizeButton; 
@property (getter=isAccessibilityMinimized) char accessibilityMinimized; 
@property (copy) NSArray * accessibilityCustomActions; 
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSPopoverDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<NSPopoverDelegate>)arg1 ;
-(id)_delegate;
-(void)detach;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSAppearance *)effectiveAppearance;
-(id)accessibilityAttributeNames;
-(NSAppearance *)appearance;
-(id)accessibilityParent;
-(CGRect)accessibilityFrame;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)performClose:(id)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(char)accessibilitySupportsOverriddenAttributes;
-(char)accessibilityAllowsOverriddenAttributesWhenIgnored;
-(void)setContentSize:(CGSize)arg1 ;
-(id)accessibilityAuditIssuesAttribute;
-(id)_bindingAdaptor;
-(void)setContentViewController:(NSViewController *)arg1 ;
-(void)setAppearance:(NSAppearance *)arg1 ;
-(void)_setBindingAdaptor:(id)arg1 ;
-(CGSize)contentSize;
-(void)_commonInit;
-(void)cancelOperation:(id)arg1 ;
-(NSViewController *)contentViewController;
-(id)accessibilitySectionsAttribute;
-(NSEdgeInsets)contentInset;
-(void)cancel:(id)arg1 ;
-(char)isShown;
-(void)showRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(long long)behavior;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(SEL)_reactiveAction;
-(void)_beginPredeepAnimationAgainstPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_doPredeepAnimationWithProgress:(double)arg1 ;
-(void)_cancelPredeepAnimation;
-(void)_completeDeepAnimation;
-(void)_releaseDeepAnimation;
-(void)recognizerWillBeginAnimation:(id)arg1 ;
-(void)recognizerDidUpdateAnimation:(id)arg1 ;
-(void)recognizerDidCancelAnimation:(id)arg1 ;
-(void)recognizerDidCompleteAnimation:(id)arg1 ;
-(void)recognizerDidDismissAnimation:(id)arg1 ;
-(void)setBehavior:(long long)arg1 ;
-(char)popoverShouldClose:(id)arg1 ;
-(char)popoverShouldDetach:(id)arg1 ;
-(void)popoverDidDetach:(id)arg1 ;
-(id)detachableWindowForPopover:(id)arg1 ;
-(void)popoverWillShow:(id)arg1 ;
-(void)popoverDidShow:(id)arg1 ;
-(void)popoverWillClose:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
-(long long)_registeredTransientBehavior;
-(void)_setRegisteredTransientBehavior:(long long)arg1 ;
-(long long)_transientBehavior;
-(char)_isAffectedByEventsInWindow:(id)arg1 ;
-(void)_closeForNonDragOrResizeClickWithEvent:(id)arg1 ;
-(void)_closeForKeyDownEvent:(id)arg1 ;
-(void)_closeForSheetPresentingOnWindow:(id)arg1 ;
-(void)_closeForToolbarPresentingOnWindow:(id)arg1 ;
-(char)isDetached;
-(id)_positioningView;
-(void)setPositioningRect:(CGRect)arg1 ;
-(void)_setRequiresCorrectContentAppearance:(char)arg1 ;
-(void)_geometryInWindowDidChangeForView:(id)arg1 ;
-(id)_popoverFrame;
-(void)setPositioningView:(NSView *)arg1 ;
-(void)setPositioningWindow:(NSWindow *)arg1 ;
-(void)_updateWindowProperties;
-(char)_requiresCorrectContentAppearance;
-(char)_shouldUseNonVibrantAppearanceForContentView:(id)arg1 ;
-(id)_popoverWindow;
-(unsigned long long)anchorEdge;
-(void)setAnchorEdge:(unsigned long long)arg1 ;
-(void)_setContentSize:(CGSize)arg1 ;
-(CGRect)_currentFrameOnScreenWithContentSize:(CGSize)arg1 outAnchorEdge:(unsigned long long*)arg2 ;
-(void)_updateAnchorPoint;
-(void)_setContentView:(id)arg1 size:(CGSize)arg2 canAnimate:(char)arg3 ;
-(void)_updateContentViewAndSizeFromViewController;
-(void)_updateWindow:(id)arg1 withContentViewController:(id)arg2 ;
-(CGPoint)_computeAnchorPointForFrame:(CGRect)arg1 ;
-(void)_updateAnchorPointForFrame:(CGRect)arg1 reshape:(char)arg2 ;
-(char)_shouldStillBeVisibleRelativeToView:(id)arg1 ;
-(void)_setCloseReason:(long long)arg1 ;
-(NSView *)positioningView;
-(void)positioningViewGeometryInWindowDidChange:(id)arg1 ;
-(void)_setListenToViewGeometryInWindowDidChange:(char)arg1 ;
-(void)_setListenToEffectiveAppearanceDidChange:(char)arg1 ;
-(id)_makePopoverWindowIfNeeded;
-(NSWindow *)positioningWindow;
-(void)_updatePopoverWindowLevels;
-(unsigned long long)_externalRectEdgeToInternalAnchorEdge:(unsigned long long)arg1 ofView:(id)arg2 ;
-(char)_validatePopoverFirstResponder:(id)arg1 ;
-(void)_repositionRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)_queueClosingBlock:(/*^block*/id)arg1 ;
-(void)setShown:(char)arg1 ;
-(char)_validatePopoverWindowFirstResponder;
-(void)_observeFullscreenChanges:(char)arg1 ;
-(void)_popoverDidExitFullscreen:(id)arg1 ;
-(void)_popoverDidEnterFullscreen:(id)arg1 ;
-(long long)_popoverWindowLevel;
-(char)hidesDetachedWindowOnDeactivate;
-(void)_resetImplicitWindowDetach;
-(long long)_closeReason;
-(void)_executeClosingBlock;
-(void)_resetClosingBlock;
-(void)_finishClosingAndShouldNotify:(char)arg1 ;
-(void)_finalizeImplicitWindowDetach;
-(void)_applicationDidResignActive_detachedWindow:(id)arg1 ;
-(void)_applicationDidBecomeActive_detachedWindow:(id)arg1 ;
-(void)_dragFromScreenLocation:(CGPoint)arg1 ;
-(CGSize)anchorSize;
-(char)shouldHideAnchor;
-(void)setShouldHideAnchor:(char)arg1 ;
-(id)customAppearance;
-(void)setCustomAppearance:(id)arg1 ;
-(long long)_legacyAppearance;
-(void)_setLegacyAppearance:(long long)arg1 ;
-(void)_setPopoverWindow:(id)arg1 ;
-(unsigned long long)positioningOptions;
-(void)setPositioningOptions:(unsigned long long)arg1 ;
-(char)_popoverWindow:(id)arg1 fromConstraintsSetWindowFrame:(CGRect)arg2 ;
-(CGRect)positioningRect;
-(void)_prepareToShowRelativeToRect:(CGRect)arg1 inView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)_completeShow;
-(void)setHidesDetachedWindowOnDeactivate:(char)arg1 ;
-(void)_dragWithEvent:(id)arg1 ;
-(void)_addForbiddenRectForBoundsOfView:(id)arg1 ;
-(void)_removeAllForbiddenRects;
-(void)_beginPredeepAnimationRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(char)_accessibilityShouldReportCancelAction;
@end
