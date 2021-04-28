/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSUserNotificationCenterDelegatePrivate <NSUserNotificationCenterDelegate>
@optional
-(char)userNotificationCenter:(id)arg1 shouldActivateForNotification:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didSnoozeAlert:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didRemoveDeliveredNotifications:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didExpireNotifications:(id)arg2;
-(void)userNotificationCenter:(id)arg1 responseChanged:(unsigned long long)arg2 forNotification:(id)arg3;
-(void)userNotificationCenter:(id)arg1 summaryShown:(char)arg2;
-(void)userNotificationCenter:(id)arg1 notificationsDisabled:(char)arg2;
-(void)userNotificationCenter:(id)arg1 notificationPreferencesChanged:(unsigned long long)arg2;
-(void)userNotificationCenterConnectionInvalidated:(id)arg1;

@end
