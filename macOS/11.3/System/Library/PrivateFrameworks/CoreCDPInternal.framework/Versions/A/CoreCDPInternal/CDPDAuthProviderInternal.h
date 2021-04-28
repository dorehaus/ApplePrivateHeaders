/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDAuthProviderInternal <NSObject>
@required
-(void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(/*^block*/id)arg3;
-(char)isPrimaryAppleIDLoggedIn;
-(void)getDevicesLosingAccountAccessWithCompletion:(/*^block*/id)arg1;
-(void)setDataPrivacyStatusEnabled:(char)arg1 completion:(/*^block*/id)arg2;

@end
