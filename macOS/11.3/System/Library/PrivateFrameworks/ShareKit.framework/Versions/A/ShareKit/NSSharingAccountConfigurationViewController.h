/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSSharingPlugInViewControllerProtocol.h>

@class NSImage, NSImageView, NSTextField, NSButton, NSTouchBar, NSString;

@interface NSSharingAccountConfigurationViewController : NSViewController <NSSharingPlugInViewControllerProtocol> {

	NSImageView* logoImageView;
	NSImageView* iconImageView;
	NSTextField* setupTextField;
	NSButton* cancelButton;
	NSButton* configureButton;
	NSTouchBar* configurationTouchBar;

}

@property (readonly) NSImageView * logoImageView; 
@property (readonly) NSImageView * iconImageView; 
@property (readonly) NSTextField * setupTextField; 
@property (readonly) NSButton * cancelButton; 
@property (readonly) NSButton * configureButton; 
@property (retain) NSImage * previewImage; 
@property (getter=isPreviewImageVisible) char previewImageVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close:(id)arg1 ;
-(void)loadView;
-(char)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(id)nibName;
-(id)nibBundle;
-(id)makeTouchBar;
-(void)viewDidAppear;
-(NSButton *)cancelButton;
-(NSImageView *)iconImageView;
-(void)setNoConfiguredAccountImage;
-(NSImageView *)logoImageView;
-(id)serviceNotConfiguredError;
-(void)closeAndConfigure:(id)arg1 ;
-(NSTextField *)setupTextField;
-(NSButton *)configureButton;
@end
