/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSParsecGlobalFeedbackDispatcher <NSObject>
@optional
-(void)sendAppLaunchFeedback;
-(void)sendAppLostFocusFeedback;
-(void)sendAppQuitFeedback;
-(void)sendNewTabFeedback;
-(void)sendNewWindowFeedback;
-(void)sendWindowMiniaturizeByKeyboardFeedback;
-(void)sendWindowMiniaturizeByMouseFeedback;
-(void)sendWindowCloseByKeyboardFeedback;
-(void)sendWindowCloseByMouseFeedback;
-(void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(char)arg1;
-(void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2;

@required
-(void)sendCrowdsourcedAutoFillFeedback:(id)arg1 forQueryID:(long long)arg2;

@end

