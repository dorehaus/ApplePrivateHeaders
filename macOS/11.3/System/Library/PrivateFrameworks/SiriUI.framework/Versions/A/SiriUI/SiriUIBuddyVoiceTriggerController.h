/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/VTUITrainingViewControllerDelegate.h>
#import <SiriUI/SiriUIBuddySubviewController.h>

@class SiriUIBuddyController, NSString, NSArray, VTUITrainingViewController;

@interface SiriUIBuddyVoiceTriggerController : NSViewController <VTUITrainingViewControllerDelegate, SiriUIBuddySubviewController> {

	VTUITrainingViewController* _trainingViewController;
	char _trainingStarted;
	SiriUIBuddyController* _parentController;

}

@property (__weak) SiriUIBuddyController * parentController;               //@synthesize parentController=_parentController - In the implementation block
@property (assign) char trainingStarted;                                   //@synthesize trainingStarted=_trainingStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long layoutStyle; 
@property (readonly) NSString * templateTitle; 
@property (readonly) NSString * templateBodyText; 
@property (readonly) NSArray * privacyBundleIdentifiers; 
@property (readonly) NSString * templateAlternateButtonTitle; 
@property (readonly) id templateAlternateActionBlock; 
-(void)loadView;
-(void)viewWillLayout;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(long long)layoutStyle;
-(void)setParentController:(SiriUIBuddyController *)arg1 ;
-(SiriUIBuddyController *)parentController;
-(void)trainingViewController:(id)arg1 discardSiriEnrollmentForProfileId:(id)arg2 forLanguageCode:(id)arg3 ;
-(void)trainingViewController:(id)arg1 finishedTraining:(char)arg2 ;
-(void)trainingViewController:(id)arg1 markSATEnrollmentSuccessForVoiceProfile:(id)arg2 ;
-(void)trainingViewController:(id)arg1 setVoiceTriggerUserEnabled:(char)arg2 ;
-(void)trainingViewController:(id)arg1 addUtterance:(id)arg2 toProfile:(id)arg3 ;
-(void)trainingViewControllerIsDisplayingTimeoutString:(id)arg1 ;
-(void)cancelTraining;
-(char)hasCompletedTraining;
-(NSString *)templateTitle;
-(NSString *)templateBodyText;
-(id)templateAlternateActionBlock;
-(NSString *)templateAlternateButtonTitle;
-(id)initWithParentController:(id)arg1 ;
-(void)didCloseLid;
-(char)trainingStarted;
-(void)setTrainingStarted:(char)arg1 ;
-(void)skipVoiceTrigger:(id)arg1 ;
@end
