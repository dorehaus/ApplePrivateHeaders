/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSDocumentRevisionsController, NSMutableArray, NSView, NSMapTable, NSArray, NSTextField, NSButton, NSDocumentRevisionsAuxiliaryWindow;

@interface NSDocumentRevisionsView : NSView {

	NSDocumentRevisionsController* _controller;
	NSMutableArray* _stackItems;
	unsigned long long _currentStackItemIndex;
	unsigned long long _requestedStackItemIndex;
	long long _animating;
	CGRect* _visibleStackItemBounds;
	NSMutableArray* _revisionUpdates;
	CGRect _originalFrame;
	CGRect _baseRevisionFrame;
	char _fullTwoUpLayout;
	CGRect _focusedRevisionFrame;
	CGRect _focusedOriginalFrame;
	double _windowScaleFactor;
	char _topLayerHidden;
	NSView* _stackView;
	NSMapTable* _transitionAnimations;
	char _isStartTransition;
	NSArray* _layerStackAnimations;
	NSArray* _backdropLayerStackAnimations;
	NSTextField* _originalDocumentLabel;
	NSTextField* _revisionDocumentLabel;
	NSView* _buttonAndLabelContainer;
	NSView* _sideButtonAndLabelContainer;
	NSButton* _doneButton;
	NSButton* _replaceButton;
	NSButton* _previousButton;
	NSButton* _nextButton;
	id _flagsChangedObserver;
	NSDocumentRevisionsAuxiliaryWindow* _timelineWindow;
	char _timelineHidden;
	/*^block*/id _goToAnimationContinuer;

}

@property (assign) unsigned long long currentStackItemIndex; 
@property (readonly) CGRect originalFrame;                                             //@synthesize originalFrame=_originalFrame - In the implementation block
@property (readonly) CGRect revisionFrame;                                             //@synthesize baseRevisionFrame=_baseRevisionFrame - In the implementation block
@property (readonly) char fullTwoUpLayout;                                             //@synthesize fullTwoUpLayout=_fullTwoUpLayout - In the implementation block
@property (readonly) CGRect focusedOriginalFrame;                                      //@synthesize focusedOriginalFrame=_focusedOriginalFrame - In the implementation block
@property (readonly) CGRect focusedRevisionFrame;                                      //@synthesize focusedRevisionFrame=_focusedRevisionFrame - In the implementation block
@property (retain) NSView * stackView;                                                 //@synthesize stackView=_stackView - In the implementation block
@property (readonly) NSDocumentRevisionsAuxiliaryWindow * timelineWindow;              //@synthesize timelineWindow=_timelineWindow - In the implementation block
+(Class)_remoteViewClass;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(CGRect)focusedOriginalFrame;
-(CGRect)revisionFrame;
-(void)spreadSnapshotOfStackItem:(id)arg1 ;
-(CGRect)focusedRevisionFrame;
-(char)fullTwoUpLayout;
-(CGRect)_unfocusedFrameForOriginalDocumentWindow:(char)arg1 state:(int)arg2 ;
-(void)ensureSnapshotForStackItem:(id)arg1 forceNew:(char)arg2 wait:(char)arg3 ;
-(void)_animateControlsForWindowFocusState:(int)arg1 ;
-(void)updateControls;
-(void)_createUI;
-(void)layoutWithOriginalDocumentWindow:(id)arg1 originalVisibleFrame:(CGRect)arg2 ;
-(CGRect)originalFrame;
-(void)prepareForStartAnimation;
-(void)performTransitionAnimation;
-(NSDocumentRevisionsAuxiliaryWindow *)timelineWindow;
-(void)transitionAnimationCompleted;
-(void)_replaceLiveWindowWithLayer;
-(void)prepareForFinishAnimationWithOutcome:(long long)arg1 ;
-(void)goToStackItemAtIndex:(unsigned long long)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)setCurrentStackItemIndex:(unsigned long long)arg1 ;
-(void)_switchPlaceholderToSnapshotForItem:(id)arg1 ;
-(void)refreshSnapshotForStackItem:(id)arg1 ;
-(unsigned long long)currentStackItemIndex;
-(void)_setTimelineSelectedItemWithVersionID:(id)arg1 ;
-(CGRect)_layerBoundsAtPosition:(long long)arg1 ;
-(double)_alphaValueAtIndex:(long long)arg1 ;
-(double)_backgroundOpacityForLayerAtIndex:(long long)arg1 ;
-(id)_shadingFilterColorForLayerAtIndex:(long long)arg1 ;
-(id)_animationParametersAtIndex:(long long)arg1 ;
-(double)_stackOffsetAtZ:(unsigned long long)arg1 ;
-(CGRect)_calculateLayerBoundsAtZ:(unsigned long long)arg1 withBaseBounds:(CGRect)arg2 ;
-(void)_calculateLayerBoundsWithBaseBounds:(CGRect)arg1 ;
-(void)_commitAnimation:(id)arg1 toLayer:(id)arg2 ;
-(id)_animationParametersFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)_replaceTopLayerWithLiveWindow;
-(void)_displayWindowForCurrentStackItem;
-(id)_validSnapshotClosestToIndex:(unsigned long long)arg1 ;
-(void)_setTimelineEventsEnabled:(char)arg1 ;
-(void)_createTimelineWindow;
-(void)_updateTimeline;
-(id)_makeLabelField;
-(id)_makeVibrantButton;
-(void)_updateReplaceButtonWithAlternate:(char)arg1 ;
-(void)_updateLabelsForStackItem:(id)arg1 ;
-(void)_setTimelineHidden:(char)arg1 ;
-(void)_layoutUI;
-(void)_animationWillStart;
-(void)_setupDesktopPictureFade;
-(void)_computeRevisionLayerFrames;
-(void)_prepareRevisionLayers;
-(void)_resetTransitoryState;
-(void)_commitTransitoryAnimations;
-(void)_scheduleTimelineTransitionAnimationForEntering:(char)arg1 ;
-(void)_animationDidEnd;
-(void)_takeDownTimelineWindow;
-(double)_perStepAnimationDurationForDistance:(unsigned long long)arg1 ;
-(void)_animationToIndexCompleted:(unsigned long long)arg1 ;
-(void)_animateLayerAtIndex:(unsigned long long)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_goToStackItemAtIndex:(unsigned long long)arg1 continuingPreviousAnimation:(char)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)_whenRevisionUpdatesAreAllowedDo:(/*^block*/id)arg1 ;
-(void)_handleRemovalOfStackItemsAtIndexes:(id)arg1 ;
-(void)_handleInsertionOfStackItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)_goToRevisionWithIdentifier:(id)arg1 ;
-(char)_controlsEnabled;
-(char)_isTimelineHidden;
-(void)cancelRevertAnimation;
-(char)shouldUnfocusWindowWithMouseDownAtWindowPoint:(CGPoint)arg1 ;
-(NSView *)stackView;
-(void)setStackView:(NSView *)arg1 ;
@end

