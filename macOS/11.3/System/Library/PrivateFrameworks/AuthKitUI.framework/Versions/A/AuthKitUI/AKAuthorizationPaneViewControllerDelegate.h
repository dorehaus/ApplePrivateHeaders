/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAuthorizationPaneViewControllerDelegate <NSObject,AKAuthorizationPaneAutomaticResizeDelegate>
@optional
-(void)authorizationPaneViewController:(id)arg1 didRequestIconWithCompletion:(/*^block*/id)arg2;
-(void)authorizationPaneViewController:(id)arg1 pushEditScope:(id)arg2 presentationContext:(id)arg3 options:(id)arg4;
-(void)performPasswordAuthenticationForPaneViewController:(id)arg1;
-(void)performAppleIDAuthorizationForPaneViewController:(id)arg1;

@required
-(void)authorizationPaneViewController:(id)arg1 dismissWithAuthorization:(id)arg2 error:(id)arg3;
-(void)authorizationPaneViewController:(id)arg1 didRequestAuthorizationWithUserProvidedInformation:(id)arg2 completion:(/*^block*/id)arg3;

@end

