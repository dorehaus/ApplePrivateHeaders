/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/TKTonePickerControllerDelegate.h>
#import <libobjc.A.dylib/NSMenuItemValidation.h>
#import <libobjc.A.dylib/TKTonePickerContentViewController.h>

@protocol TKTonePickerContentViewControllerDelegate;
@class TKPickerPopUpButton, TKTonePickerController, NSString, NSView, NSResponder;

@interface TKTonePickerPopUpButtonViewController : NSViewController <TKTonePickerControllerDelegate, NSMenuItemValidation, TKTonePickerContentViewController> {

	TKPickerPopUpButton* _popUpButton;
	TKTonePickerController* _tonePickerController;
	id<TKTonePickerContentViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TKTonePickerContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSView * tonePickerContentView; 
@property (nonatomic,readonly) NSResponder * tonePickerResponder; 
-(void)dealloc;
-(id<TKTonePickerContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TKTonePickerContentViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)loadView;
-(NSResponder *)tonePickerResponder;
-(id)initWithTonePickerController:(id)arg1 ;
-(NSView *)tonePickerContentView;
-(void)tonePickerControllerDidReloadTones:(id)arg1 ;
-(void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)_invalidatePopUpButtonMenu;
-(void)_reloadPopUpButtonMenu;
-(void)_tonePickerSectionMenuItemWasSelected:(id)arg1 ;
-(void)_tonePickerMenuItemWasSelected:(id)arg1 ;
@end

