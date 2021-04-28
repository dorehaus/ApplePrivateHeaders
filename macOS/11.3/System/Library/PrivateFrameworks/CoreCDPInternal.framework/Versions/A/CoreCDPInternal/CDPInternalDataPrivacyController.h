/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDAuthProviderInternal, CDPAppleAccountProxy, CDPDSecureBackupProxy;
@interface CDPInternalDataPrivacyController : NSObject {

	id<CDPDAuthProviderInternal> _authKitInterface;
	id<CDPAppleAccountProxy> _appleAccountInterface;
	id<CDPDSecureBackupProxy> _securityInterface;

}

@property (nonatomic,retain) id<CDPDAuthProviderInternal> authKitInterface;               //@synthesize authKitInterface=_authKitInterface - In the implementation block
@property (nonatomic,retain) id<CDPAppleAccountProxy> appleAccountInterface;              //@synthesize appleAccountInterface=_appleAccountInterface - In the implementation block
@property (nonatomic,retain) id<CDPDSecureBackupProxy> securityInterface;                 //@synthesize securityInterface=_securityInterface - In the implementation block
-(void)statusForDataPrivacyWithCompletion:(/*^block*/id)arg1 ;
-(void)updateDataPrivacyWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enableDataPrivacyWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableDataPrivacyWithCompletion:(/*^block*/id)arg1 ;
-(char)_shouldContinueAfterPrimaryAccountCheckWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_shouldContinueAfterRecoveryOptionsCheckWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didFinishCheckingForRecoveryOptionsWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deviceCheckForDataPrivacyDidCompleteWithContext:(id)arg1 devicesLosingAccountAccess:(id)arg2 deviceListFetchError:(id)arg3 finalCompletion:(/*^block*/id)arg4 ;
-(void)_didEnableDataPrivacyOnAuthKitWithContext:(id)arg1 enableError:(id)arg2 finalCompletion:(/*^block*/id)arg3 ;
-(void)_didEnableDataPrivacyOnSecurityWithContext:(id)arg1 enableError:(id)arg2 finalCompletion:(/*^block*/id)arg3 ;
-(id)initWithAuthKitInterface:(id)arg1 appleAccountInterface:(id)arg2 securityInterface:(id)arg3 ;
-(id<CDPDAuthProviderInternal>)authKitInterface;
-(void)setAuthKitInterface:(id<CDPDAuthProviderInternal>)arg1 ;
-(id<CDPAppleAccountProxy>)appleAccountInterface;
-(void)setAppleAccountInterface:(id<CDPAppleAccountProxy>)arg1 ;
-(id<CDPDSecureBackupProxy>)securityInterface;
-(void)setSecurityInterface:(id<CDPDSecureBackupProxy>)arg1 ;
@end

