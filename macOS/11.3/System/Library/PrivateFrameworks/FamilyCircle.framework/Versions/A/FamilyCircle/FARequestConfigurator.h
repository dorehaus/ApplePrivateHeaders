/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/Versions/A/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, AAGrandSlamSigner, AIDAServiceOwnersManager, AKAppleIDSigningController, AKAppleIDServerResourceLoadDelegate, NSData, AKAppleIDAuthenticationContext;

@interface FARequestConfigurator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	AAGrandSlamSigner* _familyGrandSlamSigner;
	AIDAServiceOwnersManager* _serviceOwnersManager;
	AKAppleIDSigningController* _akSigningController;
	AKAppleIDServerResourceLoadDelegate* _resourceLoadDelegate;
	NSData* _pushToken;
	char _attachSetupHeader;
	AKAppleIDAuthenticationContext* _authContext;

}

@property (assign,nonatomic) char attachSetupHeader;                                    //@synthesize attachSetupHeader=_attachSetupHeader - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authContext;              //@synthesize authContext=_authContext - In the implementation block
-(id)_account;
-(id)_accountStore;
-(id)initWithAccount:(id)arg1 ;
-(id)_grandSlamSigner;
-(id)_familyGrandSlamSigner;
-(void)pushTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)_resourceLoadDelegate:(/*^block*/id)arg1 ;
-(void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_fresnoPayloadWithAdditionalPayload:(id)arg1 ;
-(id)_grandSlamAccount;
-(id)_authContext;
-(void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3 ;
-(id)_serviceOwnersManager;
-(id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2 ;
-(void)addFresnoHeadersToRequest:(id)arg1 ;
-(void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2 ;
-(void)addPayload:(id)arg1 toRequest:(id)arg2 ;
-(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(id)_akSigningController;
-(char)attachSetupHeader;
-(void)setAttachSetupHeader:(char)arg1 ;
-(AKAppleIDAuthenticationContext *)authContext;
-(void)setAuthContext:(AKAppleIDAuthenticationContext *)arg1 ;
@end

