/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>

@class NSColor;

@interface NSColorWell : NSControl {

	NSColor* _color;
	struct {
		unsigned isActive : 1;
		unsigned isBordered : 1;
		unsigned cantDraw : 1;
		unsigned isNotContinuous : 1;
		unsigned refusesFR : 1;
		unsigned reservedColorWell : 27;
	}  _cwFlags;

}

@property (getter=isActive,readonly) char active; 
@property (getter=isBordered) char bordered; 
@property (copy) NSColor * color; 
+(void)initialize;
+(char)accessibilityIsSingleCelled;
+(id)_exclusiveColorPanelOwner;
+(void)colorPanelColorChanged:(id)arg1 ;
+(char)automaticallyNotifiesObserversOfObjectValue;
+(void)_deactivateAllColorWells;
+(void)_delayedDeactiveWindowlessWell:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isActive;
-(id)objectValue;
-(void)setObjectValue:(id)arg1 ;
-(void)setNeedsDisplay:(char)arg1 ;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(id)accessibilityAttributeNames;
-(void)setContinuous:(char)arg1 ;
-(char)isContinuous;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(char)isBordered;
-(void)setBordered:(char)arg1 ;
-(void)performClick:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)deactivate;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(void)windowWillClose:(id)arg1 ;
-(char)_hasKeyboardFocus;
-(void)_windowChangedKeyState;
-(char)resignFirstResponder;
-(void)setRefusesFirstResponder:(char)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)refusesFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(CGPoint)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(double)baselineOffsetFromBottom;
-(void)shiftModifySelection:(id)arg1 ;
-(void)altModifySelection:(id)arg1 ;
-(void)drawWellInside:(CGRect)arg1 ;
-(char)drawColor;
-(void)_drawBorderInRect:(CGRect)arg1 ;
-(char)_shouldOrderFront;
-(id)_takeColorFrom:(id)arg1 andSendAction:(char)arg2 ;
-(void)_colorWellCommonAwake;
-(id)_takeColorFromAndSendActionIfContinuous:(id)arg1 ;
-(id)_takeColorFromDoAction:(id)arg1 ;
-(double)_wellBorderThinkness;
-(CFDictionaryRef)_coreUIBorderDrawOptions;
-(char)_ownsColorPanelExclusively;
-(void)takeColorFrom:(id)arg1 ;
-(void)activate:(char)arg1 ;
-(void)_performActivationClickWithShiftDown:(char)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)acceptColor:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)_old_initWithCoder_NSColorWell:(id)arg1 ;
-(double)_swatchBorderThickness;
@end

