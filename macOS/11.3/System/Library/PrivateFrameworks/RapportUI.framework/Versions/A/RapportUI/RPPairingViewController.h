/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/Versions/A/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol OS_dispatch_source;
@class NSTextField, RPPINEntryView, NSProgressIndicator, NSButton, NSObject, RPPairingUIController;

@interface RPPairingViewController : NSViewController {

	NSTextField* _messageTextField;
	RPPINEntryView* _pinEntryView;
	NSTextField* _pinLabel1;
	NSTextField* _pinLabel2;
	NSTextField* _pinLabel3;
	NSTextField* _pinLabel4;
	NSTextField* _pinLabel5;
	NSTextField* _pinLabel6;
	NSProgressIndicator* _progressView;
	NSTextField* _progressTextField;
	NSButton* _cancelButton;
	NSButton* _okButton;
	NSObject*<OS_dispatch_source> _promptTimer;
	unsigned long long _retryDeadlineTicks;
	char _retryPending;
	NSObject*<OS_dispatch_source> _retryTimer;
	char _tryingPIN;
	char _prompted;
	RPPairingUIController* _mainController;

}

@property (nonatomic,retain) RPPairingUIController * mainController;              //@synthesize mainController=_mainController - In the implementation block
@property (assign,nonatomic) char prompted;                                       //@synthesize prompted=_prompted - In the implementation block
-(void)viewWillAppear;
-(void)viewDidDisappear;
-(void)_retryTimer;
-(void)handleCancelButton:(id)arg1 ;
-(void)setMainController:(RPPairingUIController *)arg1 ;
-(void)promptWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(void)pairingError:(id)arg1 ;
-(RPPairingUIController *)mainController;
-(void)_handlePINEntered:(id)arg1 ;
-(void)handleOKButton:(id)arg1 ;
-(char)prompted;
-(void)setPrompted:(char)arg1 ;
@end

