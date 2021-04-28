/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButtonCell.h>

@interface _NSThemeWidgetCell : NSButtonCell {

	long long _buttonID;
	char _hasRollover;
	char _isObscured;
	char _temporarilyDisabled;
	char _canBeEnabled;

}

@property (assign,nonatomic) char temporarilyDisabled; 
@property (assign,nonatomic) char canBeEnabled;                     //@synthesize canBeEnabled=_canBeEnabled - In the implementation block
@property (getter=isObscured) char obscured; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEnabled;
-(void)update;
-(id)accessibilityAttributeNames;
-(id)accessibilitySubroleAttribute;
-(char)accessibilityIsSubroleAttributeSettable;
-(char)accessibilityIsFocusedAttributeSettable;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityDescriptionAttribute;
-(char)accessibilityIsDescriptionAttributeSettable;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)accessibilityHelp;
-(id)accessibilityTitleAttribute;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(char)wantsUpdateLayerInView:(id)arg1 ;
-(void)updateLayerWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)layoutLayerWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(int)_vibrancyBlendModeForControlView:(id)arg1 ;
-(void)setCanBeEnabled:(char)arg1 ;
-(char)isObscured;
-(void)setObscured:(char)arg1 ;
-(char)_accessibilityZoomButtonHasFullscreenBehavior;
-(char)_accessibilityIsZoomButtonID;
-(id)_accessibilityWindowDelegate;
-(id)_realWindow;
-(id)_containingThemeFrameFromView:(id)arg1 ;
-(char)temporarilyDisabled;
-(char)canBeEnabled;
-(id)coreUIWidgetType;
-(id)coreUIWindowType;
-(id)coreUIPresentationState;
-(id)coreUIState;
-(id)coreUIValue;
-(id)coreUIDrawOptionsInView:(id)arg1 isFlipped:(char)arg2 ;
-(int)getState:(id)arg1 ;
-(char)isEdited;
-(unsigned long long)_currentWindowButton;
-(id)_currentCustomImageForWindowButton:(unsigned long long)arg1 view:(id)arg2 ;
-(void)coreUIDrawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_drawCustomImage:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)setTemporarilyDisabled:(char)arg1 ;
-(long long)buttonID;
-(void)setButtonID:(long long)arg1 ;
@end

