/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@interface NSTableHeaderCell : NSTextFieldCell
-(id)init;
-(char)isOpaque;
-(id)accessibilityAttributeNames;
-(id)_currentFont;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilitySubroleAttribute;
-(char)accessibilityIsSubroleAttributeSettable;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityElementWithParent:(id)arg1 ;
-(char)_needRedrawOnWindowChangedKeyState;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)accessibilityTitleAttribute;
-(char)accessibilityIsTitleAttributeSettable;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)highlight:(char)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(void)_convertToText:(id)arg1 ;
-(id)_controlContentStyleInView:(id)arg1 ;
-(int)_vibrancyBlendModeForControlView:(id)arg1 ;
-(char)_textDimsWhenDisabled;
-(CFStringRef)_coreUIState;
-(id)_indicatorImage;
-(void)_adjustFontSize;
-(void)_setSortable:(char)arg1 ;
-(char)_canSupportTallerHeight;
-(void)_updateFont;
-(char)_shouldDrawRightSeparatorInView:(id)arg1 ;
-(CFDictionaryRef)_coreUIBezelDrawOptionsWithView:(id)arg1 highlighted:(char)arg2 nextColumnAfterOneBeingDrawnIsSelected:(char)arg3 ;
-(void)_drawGroupViewBackgroundWithFrame:(CGRect)arg1 highlighted:(char)arg2 inView:(id)arg3 ;
-(void)_drawBezelWithFrame:(CGRect)arg1 highlighted:(char)arg2 inView:(id)arg3 ;
-(char)_shouldShowHighlightForSort;
-(void)drawSortIndicatorWithFrame:(CGRect)arg1 inView:(id)arg2 ascending:(char)arg3 priority:(long long)arg4 ;
-(CGRect)sortIndicatorRectForBounds:(CGRect)arg1 ;
-(CFDictionaryRef)_coreUISortIndicatorDrawOptionsWithView:(id)arg1 ascending:(char)arg2 ;
-(id)_currentSortIndicatorImage;
-(char)_useRTL;
-(void)_drawThemeContents:(CGRect)arg1 highlighted:(char)arg2 inView:(id)arg3 ;
-(char)_shouldLeaveSpaceForSortIndicator;
-(char)_alignFrame:(CGRect*)arg1 withDataCellForView:(id)arg2 ;
-(void)_drawSortIndicatorIfNecessaryWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_setSortable:(char)arg1 showSortIndicator:(char)arg2 ascending:(char)arg3 priority:(long long)arg4 highlightForSort:(char)arg5 ;
-(void)_setIndicatorImage:(id)arg1 ;
-(char)accessibilityIsSortButton;
-(id)accessibilitySortDirectionAttribute;
-(char)accessibilityIsSortDirectionAttributeSettable;
@end

