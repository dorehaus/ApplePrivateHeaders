/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AuthWebViewDelegate <NSObject>
@optional
-(id)clientInfo;
-(void)endWebView:(id)arg1;
-(void)sizeChangedFrom:(CGSize)arg1 toSize:(CGSize)arg2 webViewName:(id)arg3 callback:(id)arg4;
-(void)icaSetButtonBar:(id)arg1 webViewName:(id)arg2;
-(char)shouldHideCancelButton;
-(void)loadFailed:(id)arg1 withError:(id)arg2;
-(void)skipAndContinueSignIn;

@end

