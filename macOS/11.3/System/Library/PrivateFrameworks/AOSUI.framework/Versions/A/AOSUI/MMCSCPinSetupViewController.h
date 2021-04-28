/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>
#import <libobjc.A.dylib/MMPinFieldViewDelegate.h>

@protocol MMCSCPinSetupViewControllerDelegate;
@class MMPinFieldView, NSString, NSImageView, NSTextField, NSView, NSLayoutConstraint, NSButton, iCloudTouchBarController, NSTouchBar;

@interface MMCSCPinSetupViewController : NSViewController <NSTouchBarProvider, MMPinFieldViewDelegate> {

	MMPinFieldView* _pinViewPinFieldView;
	NSString* _initialPassPhrase;
	NSString* _passPhrase;
	long long _currentState;
	char _usingNumericPassphrase;
	int _numericPassphraseLength;
	id<MMCSCPinSetupViewControllerDelegate> _delegate;
	NSImageView* _pinViewImageView;
	NSTextField* _pinViewTitle;
	NSTextField* _pinViewMessage;
	NSView* _pinViewPinFieldPlaceholder;
	NSLayoutConstraint* _pinViewPinFieldWidthConstraint;
	NSTextField* _pinViewEnterLabelText;
	NSButton* _pinViewHelpButton;
	NSButton* _pinViewCancelButton;
	NSButton* _pinViewAdvancedButton;
	NSButton* _pinViewConfirmButton;
	iCloudTouchBarController* _touchBarController;

}

@property (retain) MMPinFieldView * pinViewPinFieldView;                             //@synthesize pinViewPinFieldView=_pinViewPinFieldView - In the implementation block
@property (copy) NSString * initialPassPhrase;                                       //@synthesize initialPassPhrase=_initialPassPhrase - In the implementation block
@property (copy) NSString * passPhrase;                                              //@synthesize passPhrase=_passPhrase - In the implementation block
@property (assign) char usingNumericPassphrase;                                      //@synthesize usingNumericPassphrase=_usingNumericPassphrase - In the implementation block
@property (assign) int numericPassphraseLength;                                      //@synthesize numericPassphraseLength=_numericPassphraseLength - In the implementation block
@property (retain) iCloudTouchBarController * touchBarController;                    //@synthesize touchBarController=_touchBarController - In the implementation block
@property (assign) id<MMCSCPinSetupViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSImageView * pinViewImageView;                                   //@synthesize pinViewImageView=_pinViewImageView - In the implementation block
@property (__weak) NSTextField * pinViewTitle;                                       //@synthesize pinViewTitle=_pinViewTitle - In the implementation block
@property (__weak) NSTextField * pinViewMessage;                                     //@synthesize pinViewMessage=_pinViewMessage - In the implementation block
@property (__weak) NSView * pinViewPinFieldPlaceholder;                              //@synthesize pinViewPinFieldPlaceholder=_pinViewPinFieldPlaceholder - In the implementation block
@property (__weak) NSLayoutConstraint * pinViewPinFieldWidthConstraint;              //@synthesize pinViewPinFieldWidthConstraint=_pinViewPinFieldWidthConstraint - In the implementation block
@property (__weak) NSTextField * pinViewEnterLabelText;                              //@synthesize pinViewEnterLabelText=_pinViewEnterLabelText - In the implementation block
@property (__weak) NSButton * pinViewHelpButton;                                     //@synthesize pinViewHelpButton=_pinViewHelpButton - In the implementation block
@property (__weak) NSButton * pinViewConfirmButton;                                  //@synthesize pinViewConfirmButton=_pinViewConfirmButton - In the implementation block
@property (__weak) NSButton * pinViewCancelButton;                                   //@synthesize pinViewCancelButton=_pinViewCancelButton - In the implementation block
@property (__weak) NSButton * pinViewAdvancedButton;                                 //@synthesize pinViewAdvancedButton=_pinViewAdvancedButton - In the implementation block
@property (readonly) NSTouchBar * touchBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MMCSCPinSetupViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MMCSCPinSetupViewControllerDelegate>)arg1 ;
-(NSTouchBar *)touchBar;
-(iCloudTouchBarController *)touchBarController;
-(void)setTouchBarController:(iCloudTouchBarController *)arg1 ;
-(void)pinFieldViewTextDidChange:(id)arg1 ;
-(void)setup:(char)arg1 ;
-(NSString *)passPhrase;
-(void)confirmButtonClicked:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(int)numericPassphraseLength;
-(char)usingNumericPassphrase;
-(void)setPassPhrase:(NSString *)arg1 ;
-(void)setUsingNumericPassphrase:(char)arg1 ;
-(void)setNumericPassphraseLength:(int)arg1 ;
-(NSButton *)pinViewConfirmButton;
-(NSButton *)pinViewCancelButton;
-(NSImageView *)pinViewImageView;
-(NSTextField *)pinViewTitle;
-(void)_showErrorMessage:(id)arg1 ;
-(MMPinFieldView *)pinViewPinFieldView;
-(void)setPinViewPinFieldView:(MMPinFieldView *)arg1 ;
-(NSView *)pinViewPinFieldPlaceholder;
-(NSLayoutConstraint *)pinViewPinFieldWidthConstraint;
-(void)clearSecureEntryView;
-(id)_passphraseFromSecureEntryView;
-(void)setPinViewImageView:(NSImageView *)arg1 ;
-(void)setPinViewTitle:(NSTextField *)arg1 ;
-(void)setPinViewPinFieldPlaceholder:(NSView *)arg1 ;
-(void)setPinViewPinFieldWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSButton *)pinViewHelpButton;
-(void)setPinViewHelpButton:(NSButton *)arg1 ;
-(void)setPinViewConfirmButton:(NSButton *)arg1 ;
-(void)setPinViewCancelButton:(NSButton *)arg1 ;
-(void)setInitialPassPhrase:(NSString *)arg1 ;
-(NSString *)initialPassPhrase;
-(char)_isSimplePassphrase;
-(char)_isPasswordWeak:(id)arg1 isSimple:(char)arg2 ;
-(void)_showNormalMessage:(id)arg1 ;
-(NSButton *)pinViewAdvancedButton;
-(NSTextField *)pinViewMessage;
-(NSTextField *)pinViewEnterLabelText;
-(void)advancedButtonClicked:(id)arg1 ;
-(void)setPinViewMessage:(NSTextField *)arg1 ;
-(void)setPinViewEnterLabelText:(NSTextField *)arg1 ;
-(void)setPinViewAdvancedButton:(NSButton *)arg1 ;
@end

