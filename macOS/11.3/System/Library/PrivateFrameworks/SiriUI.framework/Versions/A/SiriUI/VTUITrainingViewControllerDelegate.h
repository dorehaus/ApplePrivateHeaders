/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTUITrainingViewControllerDelegate <NSObject>
@optional
-(void)trainingViewController:(id)arg1 discardSiriEnrollmentForProfileId:(id)arg2 forLanguageCode:(id)arg3;
-(void)trainingViewController:(id)arg1 markSATEnrollmentSuccessForVoiceProfile:(id)arg2;
-(void)trainingViewController:(id)arg1 setVoiceTriggerUserEnabled:(char)arg2;
-(void)trainingViewController:(id)arg1 addUtterance:(id)arg2 toProfile:(id)arg3;
-(void)trainingViewControllerIsDisplayingTimeoutString:(id)arg1;

@required
-(void)trainingViewController:(id)arg1 finishedTraining:(char)arg2;

@end

