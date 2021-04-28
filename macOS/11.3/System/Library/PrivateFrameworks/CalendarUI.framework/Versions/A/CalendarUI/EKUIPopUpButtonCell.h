/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSPopUpButtonCell.h>

@class EKUIPopUpButton, NSDictionary, EKViewController;

@interface EKUIPopUpButtonCell : NSPopUpButtonCell {

	char _useAlternateTitle;
	char _mouseOver;
	EKUIPopUpButton* _uiPopUpbutton;
	NSDictionary* _enabledTitleAttributes;
	NSDictionary* _disabledTitleAttributes;
	EKViewController* _viewController;

}

@property (assign) char useAlternateTitle;                              //@synthesize useAlternateTitle=_useAlternateTitle - In the implementation block
@property (assign) char mouseOver;                                      //@synthesize mouseOver=_mouseOver - In the implementation block
@property (retain) NSDictionary * enabledTitleAttributes;               //@synthesize enabledTitleAttributes=_enabledTitleAttributes - In the implementation block
@property (retain) NSDictionary * disabledTitleAttributes;              //@synthesize disabledTitleAttributes=_disabledTitleAttributes - In the implementation block
@property (__weak) EKViewController * viewController;                   //@synthesize viewController=_viewController - In the implementation block
@property (__weak) EKUIPopUpButton * uiPopUpbutton;                     //@synthesize uiPopUpbutton=_uiPopUpbutton - In the implementation block
-(id)attributedTitle;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)textColor;
-(id)titleFont;
-(void)_setMouseTrackingInRect:(CGRect)arg1 ofView:(id)arg2 ;
-(void)setViewController:(EKViewController *)arg1 ;
-(EKViewController *)viewController;
-(void)drawImageWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawTitleWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)usesItemFromMenu;
-(id)lightTextColor;
-(id)currentTitleAttributesWithColor;
-(EKUIPopUpButton *)uiPopUpbutton;
-(void)setMouseOver:(char)arg1 ;
-(NSDictionary *)enabledTitleAttributes;
-(id)titleAttributes;
-(void)setEnabledTitleAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)disabledTitleAttributes;
-(void)setDisabledTitleAttributes:(NSDictionary *)arg1 ;
-(char)useAlternateTitle;
-(void)setUiPopUpbutton:(EKUIPopUpButton *)arg1 ;
-(void)setUseAlternateTitle:(char)arg1 ;
-(char)mouseOver;
@end

