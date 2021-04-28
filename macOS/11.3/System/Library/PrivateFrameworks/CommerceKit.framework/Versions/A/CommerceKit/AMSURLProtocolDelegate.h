/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSURLProtocolDelegate <NSObject>
@optional
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(char)AMSURLSession:(id)arg1 task:(id)arg2 shouldFailWithServerError:(id)arg3;
-(void)AMSURLSession:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(void)AMSURLSession:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(char)AMSURLSession:(id)arg1 shouldFailWithServerError:(id)arg2;
-(char)AMSURLSession:(id)arg1 shouldHandleAuthenticationForAccount:(id)arg2 dialogDictionary:(id)arg3;
-(char)AMSURLSession:(id)arg1 shouldHandleDialogDictionary:(id)arg2;

@end
