/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKICAWebKitViewControllerDelegate <NSObject>
@optional
-(void)icaWebKitViewControllerDidFinishLoading:(id)arg1;
-(void)icaWebKitViewControllerDidFail:(id)arg1 error:(id)arg2;
-(void)icaWebKitViewControllerSignRequest:(id)arg1;
-(void)icaWebKitViewControllerDidReceiveResponse:(id)arg1;
-(void)didChangePassword:(id)arg1 toNewPassword:(id)arg2 accountID:(id)arg3;

@required
-(void)icaWebKitViewControllerSheetDidEnd:(id)arg1 withData:(id)arg2;
-(void)icaWebKitViewControllerDidCancel:(id)arg1;
-(void)icaWebKitViewControllerDidSucceed:(id)arg1;

@end

