/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/Versions/A/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STProtectedControlAuthenticator;
@interface STControlProtection : NSObject {

	id<STProtectedControlAuthenticator> _authenticator;

}

@property (retain) id<STProtectedControlAuthenticator> authenticator;              //@synthesize authenticator=_authenticator - In the implementation block
+(id)sharedInstance;
+(id)refreshBoundProperty:(id)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAuthenticator:(id<STProtectedControlAuthenticator>)arg1 ;
-(id<STProtectedControlAuthenticator>)authenticator;
@end

