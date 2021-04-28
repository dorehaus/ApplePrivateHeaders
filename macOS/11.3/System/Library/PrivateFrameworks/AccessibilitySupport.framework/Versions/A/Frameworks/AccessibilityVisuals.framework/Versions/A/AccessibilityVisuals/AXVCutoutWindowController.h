/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXFUIElement, NSArray, AXVCutoutWindow, NSMutableArray, AXKElementController, NSColor;

@interface AXVCutoutWindowController : NSObject {

	AXFUIElement* _backdropUIElement;
	NSArray* _uiElements;
	AXVCutoutWindow* __cutoutWindow;
	NSMutableArray* __elementControllers;
	NSMutableArray* __windowElementControllers;
	AXKElementController* __backdropUIElementWindowElementController;

}

@property (nonatomic,retain) AXVCutoutWindow * _cutoutWindow;                                               //@synthesize _cutoutWindow=__cutoutWindow - In the implementation block
@property (nonatomic,retain) NSMutableArray * _elementControllers;                                          //@synthesize _elementControllers=__elementControllers - In the implementation block
@property (nonatomic,retain) NSMutableArray * _windowElementControllers;                                    //@synthesize _windowElementControllers=__windowElementControllers - In the implementation block
@property (nonatomic,retain) AXKElementController * _backdropUIElementWindowElementController;              //@synthesize _backdropUIElementWindowElementController=__backdropUIElementWindowElementController - In the implementation block
@property (nonatomic,retain) AXFUIElement * backdropUIElement;                                              //@synthesize backdropUIElement=_backdropUIElement - In the implementation block
@property (nonatomic,copy) NSArray * uiElements;                                                            //@synthesize uiElements=_uiElements - In the implementation block
@property (nonatomic,retain) NSColor * cutoutColor; 
@property (nonatomic,retain) NSColor * backdropColor; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double padding; 
-(id)init;
-(double)padding;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)hide;
-(void)show;
-(void)setPadding:(double)arg1 ;
-(NSColor *)cutoutColor;
-(void)setCutoutColor:(NSColor *)arg1 ;
-(NSColor *)backdropColor;
-(void)setBackdropColor:(NSColor *)arg1 ;
-(void)_handleElementMoved:(id)arg1 ;
-(void)_handleElementResized:(id)arg1 ;
-(void)_handleElementDestroyed:(id)arg1 ;
-(void)set_backdropUIElementWindowElementController:(AXKElementController *)arg1 ;
-(AXKElementController *)_backdropUIElementWindowElementController;
-(void)_handleBackdropUIElementWindowMoved:(id)arg1 ;
-(void)_handleBackdropUIElementWindowResized:(id)arg1 ;
-(AXVCutoutWindow *)_cutoutWindow;
-(void)_updateCutouts;
-(NSMutableArray *)_elementControllers;
-(void)_handleElementValueChanged:(id)arg1 ;
-(NSMutableArray *)_windowElementControllers;
-(NSArray *)uiElements;
-(void)setUiElements:(NSArray *)arg1 ;
-(void)setBackdropUIElement:(AXFUIElement *)arg1 ;
-(AXFUIElement *)backdropUIElement;
-(void)set_cutoutWindow:(AXVCutoutWindow *)arg1 ;
-(void)set_elementControllers:(NSMutableArray *)arg1 ;
-(void)set_windowElementControllers:(NSMutableArray *)arg1 ;
@end

