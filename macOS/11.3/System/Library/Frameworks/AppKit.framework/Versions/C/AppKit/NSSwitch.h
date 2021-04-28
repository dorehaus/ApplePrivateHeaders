/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>
#import <libobjc.A.dylib/NSAccessibilitySwitch.h>

@class NSWidgetView, NSTouch, NSString;

@interface NSSwitch : NSControl <NSAccessibilitySwitch> {

	NSWidgetView* _trackView;
	NSWidgetView* _shadowView;
	NSWidgetView* _knobView;
	NSWidgetView* _axIndicatorView;
	NSWidgetView* _knobMaskView;
	long long _presentationStateOverride;
	SCD_Struct_NS119 _lastDrawnState;
	SCD_Struct_NS120 _currentTrackingState;
	NSTouch* _trackingTouch;

}

@property (readonly) NSWidgetView * _trackView; 
@property (readonly) NSWidgetView * _shadowView; 
@property (readonly) NSWidgetView * _knobView; 
@property (readonly) NSWidgetView * _axIndicatorView; 
@property (readonly) NSWidgetView * _knobMaskView; 
@property (setter=_setPresentationStateOverride:) long long _presentationStateOverride;              //@synthesize presentationStateOverride=_presentationStateOverride - In the implementation block
@property (readonly) long long _presentationState; 
@property (readonly) SCD_Struct_NS119 _currentDrawingState; 
@property (retain) NSTouch * _trackingTouch;                                                         //@synthesize trackingTouch=_trackingTouch - In the implementation block
@property (assign) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
+(char)accessibilityIsSingleCelled;
+(Class)_controlClassSupportingNoCell;
+(Class)_defaultCellClass;
+(char)_controlClassSupportsNoCell;
+(id)keyPathsForValuesInvalidatingLayout;
+(id)keyPathsForValuesAffectingState;
-(void)dealloc;
-(long long)state;
-(void)setEnabled:(char)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)layout;
-(void)setControlSize:(unsigned long long)arg1 ;
-(char)wantsUpdateLayer;
-(id)accessibilityAttributeNames;
-(CGSize)intrinsicContentSize;
-(NSEdgeInsets)alignmentRectInsets;
-(void)setHighlighted:(char)arg1 ;
-(id)accessibilitySubrole;
-(Class)_animatorClass;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(id)accessibilityLabel;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)performClick:(id)arg1 ;
-(void)sizeToFit;
-(char)accessibilityPerformDecrement;
-(char)accessibilityPerformIncrement;
-(char)accessibilityPerformPress;
-(id)accessibilityValue;
-(id)designatedFocusRingView;
-(id)accessibilityValueAttribute;
-(void)setCell:(id)arg1 ;
-(void)_windowChangedKeyState;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(CGPoint)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(double)firstBaselineOffsetFromTop;
-(double)baselineOffsetFromBottom;
-(void)_commonAwake;
-(unsigned long long)sendActionOnMask;
-(NSTouch *)_trackingTouch;
-(char)_hitTestForTrackMouseEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(SCD_Struct_NS119)_currentDrawingState;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)touchesCancelledWithEvent:(id)arg1 ;
-(char)_startTrackingAt:(CGPoint)arg1 ;
-(char)_continueTrackingFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)_stopTrackingFromPoint:(CGPoint)arg1 endingAtPoint:(CGPoint)arg2 ;
-(long long)_presentationState;
-(char)_isRTL;
-(NSWidgetView *)_knobView;
-(NSWidgetView *)_trackView;
-(NSWidgetView *)_knobMaskView;
-(void)_axDifferentiateWithoutColorDidChange:(id)arg1 ;
-(char)_drawAsOn;
-(void)_updateSubviewsForStateChange;
-(void)set_trackingTouch:(NSTouch *)arg1 ;
-(NSWidgetView *)_shadowView;
-(NSWidgetView *)_axIndicatorView;
-(void)_layoutSubviews;
-(CGRect)_trackFrameInRect:(CGRect)arg1 ;
-(CGRect)_knobFrameInTrackFrame:(CGRect)arg1 thumbIsOnRight:(char)arg2 ;
-(void)_toggle;
-(void)_initializeTrackingStateForInitialPoint:(CGPoint)arg1 ;
-(void)_updateStateForDragAtPoint:(CGPoint)arg1 isFinished:(char)arg2 isDirectTouch:(char)arg3 ;
-(char)_hitTestForTouch:(id)arg1 ;
-(void)_setPresentationStateOverride:(long long)arg1 ;
-(long long)_stateForDragAtPoint:(CGPoint)arg1 ;
-(void)_performHapticFeedbackIfEligible;
-(char)_shouldToggleForEndTrackingAtPoint:(CGPoint)arg1 ;
-(long long)_presentationStateOverride;
@end

