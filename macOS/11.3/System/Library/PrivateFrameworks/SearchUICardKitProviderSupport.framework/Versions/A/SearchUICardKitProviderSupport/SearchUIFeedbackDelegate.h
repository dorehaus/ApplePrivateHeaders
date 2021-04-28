/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/Versions/A/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SearchUIFeedbackDelegate <SFFeedbackListener>
@optional
-(void)presentViewController:(id)arg1;
-(void)willDismissViewController:(id)arg1;
-(void)presentViewControllerForCard:(id)arg1 animate:(char)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(char)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
-(void)updateViewControllerTitle:(id)arg1;
-(char)shouldHandleCardSectionEngagement:(id)arg1;

@end

