/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>
#import <AVKit/AVKeyViewLoopParticipant.h>

@protocol AVAuxiliaryControlsViewDelegate;
@class AVObservationController, NSArray, NSMutableArray;

@interface AVAuxiliaryControlsView : NSView <AVKeyViewLoopParticipant> {

	AVObservationController* _observationController;
	double _minSpacing;
	double _maxSpacing;
	unsigned long long _gravity;
	id<AVAuxiliaryControlsViewDelegate> _delegate;
	NSArray* _auxiliaryControlViews;
	double _animationDuration;
	NSMutableArray* _controls;
	NSArray* _layoutControlsList;
	double _currentSpacing;
	NSEdgeInsets _controlsInsets;

}

@property (nonatomic,retain) NSArray * auxiliaryControlViews;                                  //@synthesize auxiliaryControlViews=_auxiliaryControlViews - In the implementation block
@property (nonatomic,readonly) NSMutableArray * controls;                                      //@synthesize controls=_controls - In the implementation block
@property (nonatomic,readonly) NSArray * layoutControlsList;                                   //@synthesize layoutControlsList=_layoutControlsList - In the implementation block
@property (nonatomic,readonly) double currentSpacing;                                          //@synthesize currentSpacing=_currentSpacing - In the implementation block
@property (nonatomic,readonly) NSEdgeInsets controlsInsets;                                    //@synthesize controlsInsets=_controlsInsets - In the implementation block
@property (assign,nonatomic,__weak) id<AVAuxiliaryControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double minSpacing; 
@property (assign,nonatomic) double maxSpacing; 
@property (assign,nonatomic) double animationDuration;                                         //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) unsigned long long gravity; 
-(void)dealloc;
-(id)init;
-(id<AVAuxiliaryControlsViewDelegate>)delegate;
-(void)setDelegate:(id<AVAuxiliaryControlsViewDelegate>)arg1 ;
-(void)layout;
-(unsigned long long)gravity;
-(CGSize)intrinsicContentSize;
-(void)setAnimationDuration:(double)arg1 ;
-(double)firstBaselineOffsetFromTop;
-(double)lastBaselineOffsetFromBottom;
-(double)animationDuration;
-(id)firstKeyView;
-(NSMutableArray *)controls;
-(void)setGravity:(unsigned long long)arg1 ;
-(double)currentSpacing;
-(void)setUpKeyViewLoopWithNextKeyView:(id)arg1 ;
-(void)addAuxiliaryControlView:(id)arg1 withDisplayPriority:(float)arg2 ;
-(double)minSpacing;
-(void)setMinSpacing:(double)arg1 ;
-(double)maxSpacing;
-(void)setMaxSpacing:(double)arg1 ;
-(void)_addAuxiliaryControl:(id)arg1 withDisplayPriority:(float)arg2 ;
-(void)_addControlToControlsListInDisplayOrder:(id)arg1 ;
-(char)_controlsArray:(id)arg1 isEqualTo:(id)arg2 ;
-(void)_controlDidChangeInclusionState:(id)arg1 ;
-(void)_layoutControls:(id)arg1 withAnimation:(char)arg2 ;
-(void)_updateControlsLayoutState;
-(void)_updateControlsVisibilityStateIfNeeded;
-(void)_animateControl:(id)arg1 toHiddenState:(char)arg2 ;
-(void)_animateLayoutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_animateIntrinsicContentSizeChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_hideControl:(id)arg1 withAnimation:(char)arg2 ;
-(void)_showControl:(id)arg1 withAnimation:(char)arg2 ;
-(char)_shouldAnimateTransition;
-(NSArray *)auxiliaryControlViews;
-(void)setAuxiliaryControlViews:(NSArray *)arg1 ;
-(NSArray *)layoutControlsList;
-(NSEdgeInsets)controlsInsets;
@end
