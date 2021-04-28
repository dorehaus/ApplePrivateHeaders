/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SafariNotificationAgent
@required
-(void)grantRemoteNotificationPermissionForWebsite:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startVerificationForRemoteNotificationProviderWithApiURL:(id)arg1 websiteIdentifier:(id)arg2 queryParameters:(id)arg3 referrerURL:(id)arg4 requestID:(unsigned long long)arg5;
-(void)grantRemoteNotificationPermissionForRequestID:(unsigned long long)arg1;
-(void)denyRemoteNotificationPermissionForRequestID:(unsigned long long)arg1;
-(void)denyRemoteNotificationPermissionForWebsite:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forgetNotificationPermissionForWebsite:(id)arg1;
-(void)fetchIdentifiersAddedAfterDate:(id)arg1 beforeDate:(id)arg2 withAllowedPermissions:(char)arg3 withDeniedPermissions:(char)arg4 completionHandler:(/*^block*/id)arg5;

@end

