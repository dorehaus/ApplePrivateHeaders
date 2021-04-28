/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WFUserInterfaceHost <NSObject>
@property (nonatomic,readonly) NSString * userInterfaceType; 
@optional
-(char)openURL:(id)arg1 withBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(char)arg3 completionHandler:(/*^block*/id)arg4;
-(char)requestedFromAnotherDevice;
-(void)showPreviewForContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg1 classNamesByType:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(char)shouldNotHandoff;
-(id)dialogTransformer;

@required
-(NSString *)userInterfaceType;
-(void)presentAlert:(id)arg1;

@end

