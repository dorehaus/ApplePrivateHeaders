/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKInAppAuthenticationUIProvider <NSObject,AKAppleIDAuthenticationUIProvider>
@required
-(void)presentTooManyLoginAttemptsViewWithCompletion:(/*^block*/id)arg1;
-(void)presentIDPProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)presentCDPView:(id)arg1 withContext:(id)arg2 modalForWindow:(id)arg3 withController:(id)arg4;
-(void)dismissCDPUI;

@end
