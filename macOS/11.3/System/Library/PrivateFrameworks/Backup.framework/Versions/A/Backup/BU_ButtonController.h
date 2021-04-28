/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <Backup/BU_TViewController.h>

@class BU_TBackupView, NSVisualEffectView, NSLayoutConstraint, BU_Button, BU_DateText;

@interface BU_ButtonController : BU_TViewController {

	BU_TBackupView* _backupView;
	NSVisualEffectView* _bottomButtonsVisualEffectView;
	NSVisualEffectView* _sideButtonsVisualEffectView;
	NSLayoutConstraint* _previousXConstraint;
	NSLayoutConstraint* _previousYConstraint;
	NSLayoutConstraint* _restoreXConstraint;
	NSLayoutConstraint* _restoreYConstraint;
	NSLayoutConstraint* _dateYConstraint;
	NSLayoutConstraint* _dateWidthConstraint;
	BU_Button* _cancelButton;
	BU_Button* _restoreButton;
	BU_Button* _previousButton;
	BU_Button* _nextButton;
	BU_DateText* _dateText;

}

@property (assign,nonatomic,__weak) BU_Button * cancelButton;                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) BU_Button * restoreButton;               //@synthesize restoreButton=_restoreButton - In the implementation block
@property (assign,nonatomic,__weak) BU_Button * previousButton;              //@synthesize previousButton=_previousButton - In the implementation block
@property (assign,nonatomic,__weak) BU_Button * nextButton;                  //@synthesize nextButton=_nextButton - In the implementation block
@property (assign,nonatomic,__weak) BU_DateText * dateText;                  //@synthesize dateText=_dateText - In the implementation block
+(id)arrowImageUpOrDown:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andBackupView:(id)arg2 ;
-(void)setPreviousOrigin:(CGPoint)arg1 ;
-(void)setRestoreOrigin:(CGPoint)arg1 ;
-(void)setDateY:(double)arg1 width:(double)arg2 ;
-(void)setDateText:(BU_DateText *)arg1 ;
-(void)loadView;
-(id)nibName;
-(BU_Button *)cancelButton;
-(void)setCancelButton:(BU_Button *)arg1 ;
-(BU_Button *)nextButton;
-(void)setNextButton:(BU_Button *)arg1 ;
-(BU_DateText *)dateText;
-(BU_Button *)previousButton;
-(void)setPreviousButton:(BU_Button *)arg1 ;
-(BU_Button *)restoreButton;
-(void)setRestoreButton:(BU_Button *)arg1 ;
@end

