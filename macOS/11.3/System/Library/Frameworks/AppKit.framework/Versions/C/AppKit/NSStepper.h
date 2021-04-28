/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>
#import <libobjc.A.dylib/_NSStepperTrackable.h>
#import <libobjc.A.dylib/NSAccessibilityStepper.h>

@class NSTrackingArea, _NSStepperModel, NSString;

@interface NSStepper : NSControl <_NSStepperTrackable, NSAccessibilityStepper> {

	NSTrackingArea* _pressureTrackingArea;
	double _increment;
	char _valueWraps;
	char _autorepeat;
	SCD_Struct_NS97 _trackingState;

}

@property (setter=_setPressureTrackingArea:,retain) NSTrackingArea * _pressureTrackingArea;              //@synthesize pressureTrackingArea=_pressureTrackingArea - In the implementation block
@property (readonly) _NSStepperModel * _controlModel; 
@property (assign) double minValue; 
@property (assign) double maxValue; 
@property (assign) double increment; 
@property (assign) char valueWraps; 
@property (assign) char autorepeat; 
@property (getter=isHighlighted) char highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(Class)_controlClassSupportingNoCell;
+(Class)_defaultCellClass;
+(char)_controlClassSupportsNoCell;
+(Class)_controlModelClass;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layout;
-(double)increment;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSEdgeInsets)alignmentRectInsets;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityLabel;
-(char)_sendActionFrom:(id)arg1 ;
-(void)performClick:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(char)accessibilityPerformDecrement;
-(char)accessibilityPerformIncrement;
-(id)accessibilityValue;
-(Class)_classToCheckForWantsUpdateLayer;
-(char)acceptsFirstMouse:(id)arg1 ;
-(CGPoint)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(double)firstBaselineOffsetFromTop;
-(double)baselineOffsetFromBottom;
-(void)drawFocusRingMask;
-(void)updateTrackingAreas;
-(void)moveDown:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)_transferStateToCell:(id)arg1 ;
-(_NSStepperModel *)_controlModel;
-(char)_startTrackingAt:(CGPoint)arg1 ;
-(char)_continueTrackingFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)_stopTrackingFromPoint:(CGPoint)arg1 endingAtPoint:(CGPoint)arg2 ;
-(void)_continueTrackingWithPeriodicEvent:(id)arg1 ;
-(char)_continueTrackingWithPressureEvent:(id)arg1 ;
-(CGRect)focusRingMaskBounds;
-(void)setIncrement:(double)arg1 ;
-(char)autorepeat;
-(void)setAutorepeat:(char)arg1 ;
-(char)valueWraps;
-(void)setValueWraps:(char)arg1 ;
-(void)_setPressureTrackingArea:(id)arg1 ;
-(void)_doSingleStep:(char)arg1 ;
-(NSTrackingArea *)_pressureTrackingArea;
-(id)ns_widgetType;
@end
