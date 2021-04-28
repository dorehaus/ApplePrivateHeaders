/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;
@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication {

	id<HMDRemoteLoginInitiatorAuthenticationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<HMDRemoteLoginInitiatorAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)logCategory;
-(id<HMDRemoteLoginInitiatorAuthenticationDelegate>)delegate;
-(void)authenticate;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 ;
-(void)_handleAuthenticationResponse:(id)arg1 error:(id)arg2 ;
-(int)loginType;
@end

