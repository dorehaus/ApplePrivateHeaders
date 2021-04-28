/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/QLPreviewTextOverlayHostDelegate.h>
#import <libobjc.A.dylib/QLSeamlessOpenerDelegate.h>
#import <libobjc.A.dylib/NSDraggingDestination.h>
#import <libobjc.A.dylib/QLScrollable.h>
#import <libobjc.A.dylib/QLScrollControllerDelegate.h>
#import <libobjc.A.dylib/CALayerDelegate.h>
#import <libobjc.A.dylib/NSGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/QLPreviewDragDelegate.h>

@class QLPreviewViewReserved, NSMutableSet, QLPreviewDragController, NSPanGestureRecognizer, NSClickGestureRecognizer, QLPreviewDocument, NSView, NSSet, CALayer, NSImage, NSString;

@interface QLPreviewView : NSView <QLPreviewTextOverlayHostDelegate, QLSeamlessOpenerDelegate, NSDraggingDestination, QLScrollable, QLScrollControllerDelegate, CALayerDelegate, NSGestureRecognizerDelegate, QLPreviewDragDelegate> {

	QLPreviewViewReserved* _reserved;
	NSMutableSet* _savingDocuments;
	long long _draggingFormation;

}

@property (retain) QLPreviewDragController * dragController; 
@property (retain) NSPanGestureRecognizer * dragGestureRecognizer; 
@property (getter=isDragging) char dragging; 
@property (retain) NSMutableSet * savingDocuments;                                //@synthesize savingDocuments=_savingDocuments - In the implementation block
@property (assign) char inHitTest; 
@property (retain) NSClickGestureRecognizer * doubleClickRecognizer; 
@property (retain) QLPreviewDocument * document; 
@property (readonly) char canBeResized; 
@property (readonly) char isLoaded; 
@property (readonly) char isGeneric; 
@property (assign) char sizesPreviewToFit; 
@property (readonly) CGSize naturalPreviewSize; 
@property (assign) int mode; 
@property (assign) char enableRemotePreviews; 
@property (retain) NSView * loadingView; 
@property (assign) double loadingTimeout; 
@property (retain) NSView * emptyView; 
@property (retain) NSView*<QLPreviewCustomView> genericView; 
@property (assign) id<QLPreviewViewDelegate> delegate; 
@property (readonly) char hasControls; 
@property (assign) char showControls; 
@property (readonly) char needsVolumeControl; 
@property (assign) char muted; 
@property (assign) float volume; 
@property (readonly) char needsPlayControl; 
@property (assign) char playing; 
@property (readonly) char trimmingSupported; 
@property (readonly) char needsTimeControl; 
@property (readonly) double duration; 
@property (assign) double currentTime; 
@property (readonly) char playedToTheEnd; 
@property (assign) char showRemainingTime; 
@property (readonly) char needsPageControl; 
@property (readonly) unsigned long long numberOfPages; 
@property (assign) unsigned long long currentPage; 
@property (readonly) char needsScrollControl; 
@property (readonly) double totalScroll; 
@property (assign) double currentScroll; 
@property (readonly) double totalHorizontalScroll; 
@property (assign) double currentHorizontalScroll; 
@property (readonly) char needsZoomControl; 
@property (readonly) double maxZoomFactor; 
@property (readonly) double zoomFactorToFitWidth; 
@property (assign) CGPoint focusPoint; 
@property (assign) double zoomFactor; 
@property (assign) char autoZooms; 
@property (assign) long long draggingFormation;                                   //@synthesize draggingFormation=_draggingFormation - In the implementation block
@property (assign) char automaticallyMakePreviewFirstResponder; 
@property (readonly) CGRect previewDocumentFrame; 
@property (readonly) CGRect previewContentFrame; 
@property (readonly) CGRect previewUsefulFrame; 
@property (readonly) char scalable; 
@property (readonly) char prefersSizeToFit; 
@property (assign) unsigned long long cacheSize; 
@property (retain) NSSet * supportedDisplayBundleIDs; 
@property (readonly) id<QLPreviewItem> displayedPreviewItem; 
@property (readonly) CALayer * contentLayer; 
@property (readonly) NSImage * contentImage; 
@property (assign) char allowsAlerts; 
@property (assign) char visible; 
@property (retain) id<QLPreviewItem> previewItem; 
@property (retain) id displayState; 
@property (assign) char shouldCloseWithWindow; 
@property (assign) char autostarts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double verticalScrollValue; 
@property (readonly) double verticalKnobProportion; 
@property (assign) double horizontalScrollValue; 
+(void)_registerVNodeSchemeHandler;
+(Class)_dragGestureRecognizerClass;
+(char)isVNodeURL:(id)arg1 ;
+(id)keyPathsForValuesAffectingNeedsVolumeControl;
+(id)keyPathsForValuesAffectingTrimmingSupported;
+(void)_setupDiskWatch;
+(id)defaultSupportedDisplayBundleIDsForMode:(int)arg1 ;
+(id)supportedContentTypesForMode:(int)arg1 ;
+(id)keyPathsForValuesAffectingDisplayedPreviewItem;
+(id)keyPathsForValuesAffectingDisplayBundleID;
+(id)keyPathsForValuesAffectingDisplayedDisplayBundle;
+(id)keyPathsForValuesAffectingHasHorizontalScroller;
+(id)keyPathsForValuesAffectingNeedsPlayControl;
+(id)keyPathsForValuesAffectingNeedsTimeControl;
+(id)keyPathsForValuesAffectingSeekTolerance;
+(id)keyPathsForValuesAffectingPlayedToTheEnd;
+(id)keyPathsForValuesAffectingNeedsPageControl;
+(id)keyPathsForValuesAffectingNumberOfPages;
+(id)keyPathsForValuesAffectingCurrentPage;
+(id)keyPathsForValuesAffectingNeedsScrollControl;
+(id)keyPathsForValuesAffectingTotalScroll;
+(id)keyPathsForValuesAffectingCurrentScroll;
+(id)keyPathsForValuesAffectingTotalHorizontalScroll;
+(id)keyPathsForValuesAffectingCurrentHorizontalScroll;
+(id)keyPathsForValuesAffectingNeedsZoomControl;
+(id)keyPathsForValuesAffectingMaxZoomFactor;
+(id)keyPathsForValuesAffectingZoomFactorToFitWidth;
+(id)keyPathsForValuesAffectingFocusPoint;
+(id)keyPathsForValuesAffectingAutoZooms;
+(id)keyPathsForValuesAffectingVerticalScrollValue;
+(id)keyPathsForValuesAffectingVerticalKnobProportion;
+(id)keyPathsForValuesAffectingHorizontalScrollValue;
+(id)keyPathsForValuesAffectingHorizontalKnobProportion;
+(id)keyPathsForValuesAffectingPreviewDocumentFrame;
+(id)keyPathsForValuesAffectingPreviewContentFrame;
+(id)keyPathsForValuesAffectingPreviewOpaqueFrame;
+(id)keyPathsForValuesAffectingPreviewContentFrameForSeamlessOpening;
+(id)keyPathsForValuesAffectingPreviewUsefulFrame;
+(id)_descriptionOfDisplayable:(id)arg1 ;
+(id)vNodeURLWithPath:(id)arg1 ;
+(void)setVNodeDelegate:(id)arg1 ;
+(id)keyPathsForValuesAffectingZoomFactor;
+(void)prewarmUIService;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(char)requiresConstraintBasedLayout;
+(id)keyPathsForValuesAffectingTouchBar;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingDisplayState;
+(id)keyPathsForValuesAffectingProgress;
-(char)loadingForForceTouch;
-(CGRect)previewDocumentFrame;
-(void)setLoadingForForceTouch:(char)arg1 ;
-(void)performOpenTransitionWithUpdatedProperties:(/*^block*/id)arg1 ;
-(id)appURLForNextOpening;
-(void)updateLoadingViewWithTransitionImage:(id)arg1 transitionFrame:(CGRect)arg2 ;
-(id)mandatoryServer;
-(char)autostarts;
-(char)inHitTest;
-(void)setInHitTest:(char)arg1 ;
-(void)receivedDragGesture:(id)arg1 ;
-(void)receivedDoubleClickGesture:(id)arg1 ;
-(void)setDoubleClickRecognizer:(NSClickGestureRecognizer *)arg1 ;
-(id)draggingSourceView;
-(char)useLegacyDragging;
-(char)setupDragPasteboard:(id)arg1 ;
-(id)draggingItems;
-(char)_shouldAdaptSizeToScreen;
-(void)startDragFromGesture:(id)arg1 beganOrFailedHandler:(/*^block*/id)arg2 ;
-(void)setEmptyDisplayable:(id)arg1 ;
-(void)setUpdatePreviewSize:(char)arg1 ;
-(id)sizingDisplayBundle;
-(CGSize)minimumSizeOfContentWithDefault:(CGSize)arg1 ;
-(id)displayedDocument;
-(char)shouldPreserveDisplayStateWhenNavigating;
-(void)setPreviewItem:(id)arg1 blockingUntilLoading:(char)arg2 timeoutDate:(id)arg3 transition:(int)arg4 ;
-(id)_currentPreviewedURL;
-(char)canStealDocumentFromPreviewView:(id)arg1 ;
-(char)canRestoreDocument:(id)arg1 ;
-(id)timeoutDateFromNow;
-(void)previewStatusDidChange;
-(char)isNativeFileType;
-(double)seekTolerance;
-(void)setSeekTolerance:(double)arg1 ;
-(char)prefersSizeToFit;
-(char)sizesPreviewToFit;
-(void)debugPreview:(id)arg1 ;
-(int)inputFocusType;
-(char)needsPageControl;
-(void)giveInputFocus;
-(char)showRemainingTime;
-(void)setShowRemainingTime:(char)arg1 ;
-(char)needsVolumeControl;
-(id)launchURLForPreviewItem:(id)arg1 ;
-(id)stealDocument;
-(void)restoreStolenDocument:(id)arg1 ;
-(void)_updateOpaqueShape;
-(id)emptyDisplayable;
-(void)setAppURLForNextOpening:(id)arg1 ;
-(void)pathWatcher:(id)arg1 fileAtURLWasMoved:(id)arg2 ;
-(void)pathWatcher:(id)arg1 fileAtURLWasModified:(id)arg2 onlyAttributes:(char)arg3 ;
-(void)pathWatcher:(id)arg1 fileAtURLWasDeleted:(id)arg2 ;
-(char)hidePlayControl;
-(char)needsTimeControl;
-(void)setMode:(int)arg1 reloadItemIfNeeded:(char)arg2 ;
-(double)verticalScrollValue;
-(void)setVerticalScrollValue:(double)arg1 ;
-(double)scrollController:(id)arg1 pageScrollPercentageForScroller:(id)arg2 ;
-(void)scrollController:(id)arg1 scrollerDidEndTracking:(id)arg2 ;
-(double)verticalKnobProportion;
-(double)horizontalScrollValue;
-(void)setHorizontalScrollValue:(double)arg1 ;
-(NSSet *)supportedDisplayBundleIDs;
-(char)allowLoadingOfUnsupportedDisplayBundleIDs;
-(unsigned long long)doubleClickModifierFlags;
-(id)loadingDisplayable;
-(id)genericDisplayable;
-(char)automaticallyMakePreviewFirstResponder;
-(char)enableRemotePreviews;
-(char)hideLoadingSpinner;
-(id)initialDisplayBundleID;
-(CGSize)initialThumbnailSize;
-(double)loadingTimeout;
-(char)_accessibilityIsLoading;
-(char)_accessibilityIsEmpty;
-(id)dragContentView;
-(id)viewForLocation:(CGPoint)arg1 ;
-(void)setPreviewItem:(id)arg1 blockingUntilLoading:(char)arg2 ;
-(void)_setPreviewItem:(id)arg1 ;
-(void)_startLoadingPreviewItem:(id)arg1 timeoutDate:(id)arg2 ;
-(void)_startLoadingDocumentWithTimeoutDate:(id)arg1 ;
-(id)_actualDisplayBundleID;
-(char)shouldAcceptDisplayBundleID:(id)arg1 ;
-(id)_displayedBundleID;
-(id)_filteredDisplayBundleID;
-(id)_displayable;
-(char)canAcceptDocument:(id)arg1 ;
-(void)_setDocument:(id)arg1 canDelayDisplay:(char)arg2 ;
-(id)_defaultLoadingHints;
-(char)shouldUseAsyncLoading;
-(void)_startTimeOut;
-(void)_updateDisplayedDocumentWithDelayedDisplay:(char)arg1 ;
-(char)_shouldShowDisplayable:(id)arg1 forDisplayBundle:(id)arg2 ;
-(void)_setDisplayedDocument:(id)arg1 transition:(int)arg2 ;
-(void)_updateFrameOfDisplayable:(id)arg1 ;
-(void)_endLoadingDocument:(id)arg1 ;
-(char)_updateDisplayableWithTransition:(int)arg1 ;
-(void)_willShowDisplayable:(id)arg1 ;
-(void)_willHideDisplayable:(id)arg1 ;
-(void)_didShowDisplayable:(id)arg1 ;
-(void)_didHideDisplayable:(id)arg1 ;
-(id)_previewFirstResponder;
-(CGRect)previewOpaqueFrame;
-(void)setAppearanceOfDisplayable:(id)arg1 ;
-(void)updateLoadingViewAppearance:(id)arg1 forPreview:(id)arg2 displayBundle:(id)arg3 ;
-(char)_hasPathOverlay;
-(id)_pathString;
-(char)_prepareToRecycleDocument:(id)arg1 willRestore:(char*)arg2 ;
-(void)_recycleDocument:(id)arg1 restore:(char)arg2 ;
-(NSMutableSet *)savingDocuments;
-(char)_canChangeDisplayedDocument;
-(id)loadingViewForPreview:(id)arg1 displayBundle:(id)arg2 ;
-(void)_setDisplayable:(id)arg1 transition:(int)arg2 ;
-(char)_hasSetupPageNumberOverlay;
-(char)_shouldManageVisibilityOnlyIfVisible:(char)arg1 ;
-(char)_contentIsSharedBetweenOldDisplayable:(id)arg1 andNewDisplayable:(id)arg2 ;
-(void)_setupLayerIfNeeded;
-(void)_updateBackingScaleFactor;
-(char)shouldShowInlinePreviewControls;
-(char)shouldShowInlinePreviewContent;
-(void)setInitialThumbnailSize:(CGSize)arg1 ;
-(void)_deactivateOverlayControls;
-(void)_deactivatePageNumberDisplay;
-(char)_canChangeVisibilityTo:(int)arg1 ;
-(void)setLoadingDisplayable:(id)arg1 ;
-(void)setSupportedDisplayBundleIDs:(NSSet *)arg1 ;
-(char)_needsPlayControlForDisplayBundle:(id)arg1 ;
-(char)_needsTimeControlForDisplayBundle:(id)arg1 ;
-(char)playedToTheEnd;
-(char)_needsPageControlForDisplayBundle:(id)arg1 ;
-(char)_needsScrollControlForDisplayBundle:(id)arg1 ;
-(double)totalHorizontalScroll;
-(double)currentHorizontalScroll;
-(void)setCurrentHorizontalScroll:(double)arg1 ;
-(char)_needsZoomControlForDisplayBundle:(id)arg1 ;
-(double)zoomFactorToFitWidth;
-(void)_shouldShowViewControls:(char*)arg1 overlayControls:(char*)arg2 forDisplayBundle:(id)arg3 ;
-(void)_activateOverlayControls;
-(void)_activateViewControls;
-(void)_deactivateViewControls;
-(void)_activatePathOverlay;
-(void)_deactivatePathOverlay;
-(void)_activatePageNumberDisplay;
-(id)_previewContainerViewConstraintsFromContainerViewFrame:(CGRect)arg1 ;
-(void)_setPreviewContainerViewFrame:(CGRect)arg1 ;
-(CGPoint)_displayBundlePointForWindowPoint:(CGPoint)arg1 ;
-(CGRect)_convertRectFromDisplayedDisplayable:(CGRect)arg1 ;
-(void)backingScaleDidChange:(id)arg1 ;
-(void)windowKeyDidChange:(id)arg1 ;
-(void)_invalidateCachedDocumentForURL:(id)arg1 ;
-(CGRect)_convertRectToDisplayedDisplayable:(CGRect)arg1 ;
-(id)_descriptionForView:(id)arg1 ;
-(id)_hierarchicalDescriptionForView:(id)arg1 level:(int)arg2 ;
-(char)debugHighlighted;
-(void)willShowOverlay:(id)arg1 ;
-(void)didHideOverlay:(id)arg1 ;
-(void)setGenericDisplayable:(id)arg1 ;
-(void)setAllowLoadingOfUnsupportedDisplayBundleIDs:(char)arg1 ;
-(void)receivedPinchGestureWithMagnification:(double)arg1 ;
-(char)shouldRemoteDisplayBundleID:(id)arg1 ;
-(id)customDisplayName;
-(void)forceTimeoutForDocument:(id)arg1 ;
-(void)refreshDisplayableForDocument:(id)arg1 ;
-(void)previewDocument:(id)arg1 gotDisplayBundle:(id)arg2 ;
-(void)previewDocumentDidLoad:(id)arg1 ;
-(void)previewDocumentDidChangeDisplayable:(id)arg1 ;
-(id)displayBundleWithID:(id)arg1 forPreviewItem:(id)arg2 ;
-(void)previewDocument:(id)arg1 didSaveEdit:(char)arg2 toURL:(id)arg3 ;
-(void)addHiddenContentViewForLoading:(id)arg1 ;
-(char)hasValidPreview;
-(id)displayableContentView;
-(void)setInitialDisplayBundleID:(id)arg1 ;
-(void)setLoadingTimeout:(double)arg1 ;
-(double)horizontalKnobProportion;
-(void)_adjustDeltaPosition:(CGRect*)arg1 forDisplayBundle:(id)arg2 ;
-(char)_adaptPreviewFrameForStaticPreviewSizeHint:(CGRect*)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3 ;
-(CGRect)previewUsefulFrame;
-(char)fastDrawing;
-(CGSize)optimalSizeForBoundingSize:(CGSize)arg1 ;
-(id)viewsDescription;
-(void)setDebugHighlighted:(char)arg1 ;
-(void)setSavingDocuments:(NSMutableSet *)arg1 ;
-(void)set_emptyView:(id)arg1 ;
-(void)set_genericView:(id)arg1 ;
-(void)set_loadingView:(id)arg1 ;
-(void)refreshPreviewItem;
-(char)canBeResized;
-(void)setSizesPreviewToFit:(char)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(id<QLPreviewViewDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<QLPreviewViewDelegate>)arg1 ;
-(void)setMode:(int)arg1 ;
-(float)volume;
-(char)isLoaded;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(double)duration;
-(QLPreviewDocument *)document;
-(int)mode;
-(void)activate;
-(NSImage *)contentImage;
-(char)isRemote;
-(CGRect)sourceFrame;
-(id)screen;
-(char)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(id)hitTest:(CGPoint)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(double)backingScaleFactor;
-(id)touchBar;
-(char)mouseDownCanMoveWindow;
-(void)doCommandBySelector:(SEL)arg1 ;
-(void)deactivate;
-(void)stop:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(char)hasHorizontalScroller;
-(void)keyDown:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)setVisible:(char)arg1 ;
-(id)_bottomConstraint;
-(void)viewDidEndLiveResize;
-(unsigned long long)currentPage;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)_windowWillClose:(id)arg1 ;
-(char)visible;
-(void)setDocument:(QLPreviewDocument *)arg1 ;
-(long long)draggingFormation;
-(void)setDraggingFormation:(long long)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
-(char)_isVisible;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1 ;
-(char)isDragging;
-(id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)setVolume:(float)arg1 ;
-(char)playing;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(unsigned long long)numberOfPages;
-(unsigned)_CAViewFlags;
-(CALayer *)contentLayer;
-(char)_allowAutoresizingMaskFixupDueToSuperOverridingResizeSubviews;
-(unsigned long long)cacheSize;
-(void)setMuted:(char)arg1 ;
-(char)muted;
-(void)_timedOut;
-(void)flushCache;
-(void)setDragging:(char)arg1 ;
-(void)openExternalURL:(id)arg1 ;
-(NSView *)loadingView;
-(void)setLoadingView:(NSView *)arg1 ;
-(void)setShouldCloseWithWindow:(char)arg1 ;
-(int)flavor;
-(void)start:(id)arg1 ;
-(char)shouldCloseWithWindow;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(CGRect)borderFrame;
-(double)maxZoomFactor;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(void)setPlaying:(char)arg1 ;
-(id)displayBundleID;
-(void)setForcedContentTypeUTI:(id)arg1 ;
-(id)forcedContentTypeUTI;
-(void)willShow;
-(void)didHide;
-(id)cacheManager;
-(void)setCacheManager:(id)arg1 ;
-(id)displayState;
-(void)setDisplayState:(id)arg1 ;
-(id)currentURL;
-(void)willOpen;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(void)didShow;
-(QLPreviewDragController *)dragController;
-(void)didOpen;
-(void)willHide;
-(void)_stopTimeOut;
-(char)isGeneric;
-(void)_updateControls;
-(void)setFocusPoint:(CGPoint)arg1 ;
-(void)setDragGestureRecognizer:(NSPanGestureRecognizer *)arg1 ;
-(NSPanGestureRecognizer *)dragGestureRecognizer;
-(void)diskWillEject:(id)arg1 ;
-(id<QLPreviewItem>)previewItem;
-(void)setPreviewItem:(id<QLPreviewItem>)arg1 ;
-(char)hasControls;
-(void)setEmptyView:(NSView *)arg1 ;
-(NSView *)emptyView;
-(void)setDragController:(QLPreviewDragController *)arg1 ;
-(void)setShowControls:(char)arg1 ;
-(char)showControls;
-(void)setMandatoryServer:(id)arg1 ;
-(void)_commonInitWithStyle:(unsigned long long)arg1 ;
-(int)previewStatus;
-(char)needsPlayControl;
-(void)setEnableRemotePreviews:(char)arg1 ;
-(void)setGenericView:(NSView*<QLPreviewCustomView>)arg1 ;
-(void)setAutomaticallyMakePreviewFirstResponder:(char)arg1 ;
-(NSView*<QLPreviewCustomView>)genericView;
-(NSClickGestureRecognizer *)doubleClickRecognizer;
-(void)getImageRepresentationWithFrame:(CGRect)arg1 completion:(/*^block*/id)arg2 ;
-(char)generateThumbnailForPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)trimmingSupported;
-(void)startWatchingURL:(id)arg1 ;
-(void)stopWatchingURL:(id)arg1 ;
-(char)shouldOpenURL:(id)arg1 ;
-(id)viewForEvent:(id)arg1 ;
-(CGPoint)locationForEvent:(id)arg1 ;
-(NSEdgeInsets)visualMargins;
-(char)shouldUseHardwareCodec;
-(char)isWindowKey;
-(char)windowSupportsRemoteViews;
-(char)allowsAlerts;
-(char)tracksMouseMovements;
-(void)setTracksMouseMovements:(char)arg1 ;
-(id)draggedURL;
-(id)pasteboardWriter;
-(char)scalable;
-(CGSize)naturalPreviewSize;
-(void)setAllowsAlerts:(char)arg1 ;
-(char)needsZoomControl;
-(CGPoint)focusPoint;
-(char)autoZooms;
-(void)setAutoZooms:(char)arg1 ;
-(CGRect)previewContentFrame;
-(CGImageRef)copyImageRepresentationWithFrame:(CGRect*)arg1 ;
-(CGRect)previewContentFrameForSeamlessOpening;
-(char)openExternalURLNoChecks:(id)arg1 ;
-(char)needsScrollControl;
-(void)setFullLayers:(char)arg1 ;
-(char)fullLayers;
-(void)setAutostarts:(char)arg1 ;
-(void)setDoubleClickModifierFlags:(unsigned long long)arg1 ;
-(void)setHideLoadingSpinner:(char)arg1 ;
-(void)setPreviewItem:(id)arg1 blockingUntilLoading:(char)arg2 timeoutDate:(id)arg3 ;
-(void)refreshPreviewItemWithTimeoutDate:(id)arg1 ;
-(char)hasCachedDocumentForItem:(id)arg1 ;
-(CGSize)optimalSizeFromCurrentSize:(CGSize)arg1 minSize:(CGSize)arg2 maxSize:(CGSize)arg3 defaultSize:(CGSize)arg4 maxArea:(double)arg5 screen:(id)arg6 ;
-(id)displayedDisplayBundle;
-(void)updateDisplayedDocumentWithTransition:(int)arg1 ;
-(void)setVisualMargins:(NSEdgeInsets)arg1 ;
-(void)discardAccessoryControllers;
-(id<QLPreviewItem>)displayedPreviewItem;
-(id)titleForPreviewItem:(id)arg1 options:(int)arg2 ;
-(char)isDisplayingError;
-(void)setCurrentScroll:(double)arg1 ;
-(double)totalScroll;
-(double)currentScroll;
@end

