/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachMacUI.framework/Versions/A/NewDeviceOutreachMacUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSTextField, NSStackView, NSButton;

@interface NewDeviceOutreachMacUI.NDOACAMSUIContainerViewController : NSViewController {

	 warranty;
	 serialNumber;
	 presentationType;
	 source;
	 presenter;
	 detailsTextView;
	 buttonStackView;
	 continueButton;
	 notNowButton;

}

@property (assign,__weak,nonatomic) NSTextField * detailsTextView; 
@property (assign,__weak,nonatomic) NSStackView * buttonStackView; 
@property (assign,__weak,nonatomic) NSButton * continueButton; 
@property (assign,__weak,nonatomic) NSButton * notNowButton; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(NSButton *)notNowButton;
-(void)setNotNowButton:(NSButton *)arg1 ;
-(NSButton *)continueButton;
-(void)setContinueButton:(NSButton *)arg1 ;
-(void)setDetailsTextView:(NSTextField *)arg1 ;
-(NSTextField *)detailsTextView;
-(NSStackView *)buttonStackView;
-(void)setButtonStackView:(NSStackView *)arg1 ;
-(void)notNowPressed:(id)arg1 ;
-(void)getAppleCarePressed:(id)arg1 ;
@end
