/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSColor, CALayer, NSString, NSAttributedString, NSArray;

@interface NSTextFieldCell : NSActionCell {

	NSColor* _backgroundColor;
	NSColor* _textColor;
	struct {
		unsigned drawsBackground : 1;
		unsigned bezelStyle : 3;
		unsigned thcSortDirection : 2;
		unsigned thcSortPriority : 4;
		unsigned mini : 1;
		unsigned textColorIgnoresNormalDisableFlag : 1;
		unsigned textColorDisableFlag : 1;
		unsigned thcForceHighlightForSort : 1;
		unsigned invalidTextColor : 1;
		unsigned notificationForMarkedText : 1;
		unsigned inToolbar : 1;
		unsigned hasTextLayer : 1;
		unsigned isButtonTitle : 1;
		unsigned allowTightening : 1;
		unsigned thcHighlighted : 1;
		unsigned shouldNotClipToBounds : 1;
		unsigned allowsDefaultTightening : 1;
		unsigned enableCP : 1;
		unsigned automaticCompletionDisabled : 1;
		unsigned determiningMenuItemTextColor : 1;
		unsigned reservedTextFieldCell : 6;
	}  _tfFlags;
	CALayer* _bezelLayer;

}

@property (copy) NSColor * backgroundColor; 
@property (assign) char drawsBackground; 
@property (copy) NSColor * textColor; 
@property (assign) unsigned long long bezelStyle; 
@property (copy) NSString * placeholderString; 
@property (copy) NSAttributedString * placeholderAttributedString; 
@property (copy) NSArray * allowedInputSourceLocales; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(char)isOpaque;
-(char)acceptsFirstResponder;
-(id)accessibilityAttributeNames;
-(NSColor *)backgroundColor;
-(void)setDrawsBackground:(char)arg1 ;
-(void)setBezelStyle:(unsigned long long)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(CFStringRef)_coreUIWidgetName;
-(long long)interiorBackgroundStyle;
-(unsigned long long)textAlignmentPolicy;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(char)_needRedrawOnWindowChangedKeyState;
-(void)setFont:(id)arg1 ;
-(unsigned long long)bezelStyle;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(NSColor *)textColor;
-(id)accessibilityChildrenInNavigationOrderAttribute;
-(char)accessibilityIsChildrenAttributeSettable;
-(id)initTextCell:(id)arg1 ;
-(void)setTextColor:(NSColor *)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(char)drawsBackground;
-(void)setBezeled:(char)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawWithExpansionFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)_shouldDrawHighlightRect;
-(id)_textAttributes;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(double)_coreUIBaselineOffsetFromFrameInRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)_setButtonTitleCell:(char)arg1 ;
-(id)_controlContentStyleInView:(id)arg1 ;
-(long long)_contentBacking;
-(char)_allowsStyledTextForColor:(id)arg1 ;
-(char)_shouldUseStyledTextInView:(id)arg1 ;
-(long long)_interiorContentValueInView:(id)arg1 ;
-(long long)_interiorContentStateInView:(id)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(NSEdgeInsets)_coreUIContentRectInsetsForRect:(CGRect)arg1 inView:(id)arg2 ;
-(char)wantsUpdateLayerInView:(id)arg1 ;
-(void)updateLayerWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(int)_vibrancyBlendModeForControlView:(id)arg1 ;
-(CGRect)focusRingMaskBoundsForFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawFocusRingMaskWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_setContents:(id)arg1 ;
-(id)_stringDrawingContext;
-(char)_textDimsWhenDisabled;
-(char)_canCacheAttributedStringValue;
-(long long)_typesetterBehavior;
-(void)setAllowsCharacterPickerTouchBarItem:(char)arg1 ;
-(void)setAutomaticTextCompletionEnabled:(char)arg1 ;
-(char)_isButtonTitleCell;
-(char)cachesLineRef;
-(id)_cachedLineRef;
-(void)_setCachedLineRef:(id)arg1 ;
-(id)_selectOrEdit:(const CGRect*)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7 ;
-(char)allowsDefaultTighteningForTruncation;
-(void)setAllowsDefaultTighteningForTruncation:(char)arg1 ;
-(id)setUpFieldEditorAttributes:(id)arg1 ;
-(void)_drawFocusRingWithFrame:(CGRect)arg1 ;
-(CGRect)_focusRingFrameForFrame:(CGRect)arg1 cellFrame:(CGRect)arg2 ;
-(char)wantsNotificationForMarkedText;
-(void)setWantsNotificationForMarkedText:(char)arg1 ;
-(void)accessibilityDrawFocusRing;
-(id)accessibilityAuditContrast;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(void)setPlaceholderString:(NSString *)arg1 ;
-(char)isAutomaticTextCompletionEnabled;
-(void)_drawKeyboardFocusRingWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)_fillsWithBackgroundColor;
-(void)_drawThemeBezelWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(NSString *)placeholderString;
-(void)setPlaceholderAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)placeholderAttributedString;
-(id)accessibilityPlaceholderValueAttribute;
-(char)accessibilityIsPlaceholderValueAttributeSettable;
-(char)_isToolbarMode;
-(void)_getTextColor:(id*)arg1 backgroundColor:(id*)arg2 ;
-(char)_isEditingInView:(id)arg1 ;
-(const CFStringRef)_coreUIVariantKeyValue;
-(CGRect)_textLayerDrawingRectForCellFrame:(CGRect)arg1 ;
-(void)setAllowedInputSourceLocales:(NSArray *)arg1 ;
-(void)_drawForegroundOfTextLayer;
-(id)accessibilityTextLinkAtIndex:(unsigned long long)arg1 ;
-(id)accessibilityElementForAttachment:(id)arg1 ;
-(id)accessibilityAttachmentAtIndex:(unsigned long long)arg1 ;
-(id)accessibilityTextLinks;
-(void)_invalidateTextColor;
-(CGRect)_editingBoundsForBounds:(CGRect)arg1 ;
-(char)allowsCharacterPickerTouchBarItem;
-(void)_invalidateCachedLineRef;
-(unsigned long long)lineBreakStrategy;
-(NSArray *)allowedInputSourceLocales;
-(char)_shouldUseCoreUIContentInsets;
-(CGSize)_coreUISize;
-(CGRect)_adjustedFrameUsingSquareBezelHacks:(CGRect)arg1 ;
-(char)_shouldAdjustDrawingRectUsingSquareBezelHacks;
-(CFDictionaryRef)_coreUIDrawOptionsWithFrame:(CGRect)arg1 inView:(id)arg2 includeFocus:(char)arg3 maskOnly:(char)arg4 ;
-(CFStringRef)_coreUISizeKeyValueForCellFrame:(CGRect)arg1 ;
-(CFStringRef)_coreUIEnabledStateKeyValue;
-(void)_drawBezeledBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 includeFocus:(char)arg3 ;
-(id)_bezelLayer;
-(void)_updateBezelInLayer:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(char)_maybeCheckTitleClippingForFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)_textColorForMenuItemView;
-(char)_shouldStyleUneditableTextInView:(id)arg1 ;
-(char)_okayToHitTest;
-(void)_setShouldNotClipToBounds:(char)arg1 ;
-(void)_setToolbarMode:(char)arg1 ;
-(CGRect)_accessibilityBoundsOfChild:(id)arg1 ;
@end
