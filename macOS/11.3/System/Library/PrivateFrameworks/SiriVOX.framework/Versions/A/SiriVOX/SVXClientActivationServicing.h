/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVXClientActivationServicing <NSObject>
@property (assign,nonatomic,__weak) id<SVXClientActivationServiceDelegate> delegate; 
@required
-(id<SVXClientActivationServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)handleButtonEvent:(id)arg1;
-(void)enqueueButtonEvent:(id)arg1;
-(void)activateWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)activateWithButtonEvent:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prewarmForSystemEvent:(id)arg1 completion:(/*^block*/id)arg2;
-(void)activateWithSystemEvent:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)deactivateWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2;

@end

