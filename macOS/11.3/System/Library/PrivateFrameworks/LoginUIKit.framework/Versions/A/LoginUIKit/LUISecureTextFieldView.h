/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@class CALayer, NSStackView, LUISecureTextField, NSButton, NSImageView, NSProgressIndicator, LUIEffectsButton, NSString;

@interface LUISecureTextFieldView : NSView <NSTextFieldDelegate> {

	CALayer* _backgroundLayer;
	NSStackView* _stackView;
	LUISecureTextField* _secureTextField;
	NSButton* _hintButton;
	NSImageView* _errorImageView;
	NSProgressIndicator* _securityFieldProgressIndicator;
	LUIEffectsButton* _securityFieldGoButton;
	id _delegate;
	id _target;
	SEL _action;
	char _usesHint;
	int _currentMode;
	long long _previousLength;

}

@property (assign) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)_backgroundLayerOpacity;
-(id)_passwordHintImage;
-(id)_passwordErrorImage;
-(id)_goButtonImage;
-(void)_resetButtonUIToMode:(int)arg1 ;
-(void)_refreshButtonsAfterKeyInput;
-(CGRect)progressRect;
-(CGPoint)pointForPopover:(int)arg1 ;
-(char)usesHint;
-(void)setUsesHint:(char)arg1 ;
-(void)resetPassword;
-(void)forceClearFocusRing;
-(void)forceDrawFocusRing;
-(void)dealloc;
-(NSString *)description;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setMode:(int)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(int)mode;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(id)accessibilityPlaceholderValue;
-(void)controlTextDidChange:(id)arg1 ;
-(void)setPlaceholderString:(id)arg1 ;
-(CGRect)focusRingMaskBounds;
-(id)placeholderString;
-(void)actionButtonPressed:(id)arg1 ;
-(id)secureTextField;
-(void)setUIEnabled:(char)arg1 ;
-(void)_setupSubviews;
@end

