/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/Versions/A/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FindMyDevice/FindMyDevice-Structs.h>
@class FMNSXPCConnection, FMDFMMAccountInfo, LAContext;

@interface FMDFMMManager : NSObject {

	AuthorizationOpaqueRefRef _authRef;
	FMNSXPCConnection* _disableFMMConnection;
	FMDFMMAccountInfo* _cachedAccountInfo;
	LAContext* _laContext;

}

@property (assign,nonatomic) AuthorizationOpaqueRefRef authRef;                     //@synthesize authRef=_authRef - In the implementation block
@property (nonatomic,retain) FMNSXPCConnection * disableFMMConnection;              //@synthesize disableFMMConnection=_disableFMMConnection - In the implementation block
@property (retain) FMDFMMAccountInfo * cachedAccountInfo;                           //@synthesize cachedAccountInfo=_cachedAccountInfo - In the implementation block
@property (retain) LAContext * laContext;                                           //@synthesize laContext=_laContext - In the implementation block
+(id)sharedInstance;
-(void)unregisterObservers;
-(void)_invalidateDisableFMMConnection;
-(id)_adminAuthDataForRight:(const char*)arg1 ;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(void)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2 deviceOwnerCredentials:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addFMMAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeFMMAccountWithUsername:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableFMMUsingToken:(id)arg1 deviceOwnerCredentials:(id)arg2 inContext:(unsigned long long)arg3 usingCallback:(/*^block*/id)arg4 ;
-(void)_storeDisableFMMConnection:(id)arg1 ;
-(id)_genericErrorForDisableContext:(unsigned long long)arg1 ;
-(void)activationLockInfoForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)performActivationLockOperationWithContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(FMNSXPCConnection *)disableFMMConnection;
-(void)setDisableFMMConnection:(FMNSXPCConnection *)arg1 ;
-(void)_createAuthRight;
-(id)removeFMMAccountWithUsername:(id)arg1 ;
-(void)didChangeFMMAccountInfo:(id)arg1 ;
-(void)signatureHeadersWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activationLockInfoForUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)activationLockInfoForValidationWithCompletion:(/*^block*/id)arg1 ;
-(void)removeActivationLockForiCloudUser:(id)arg1 authenticationPET:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeActivationLockForMacOSUserWithPassword:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeManagedActivationLockWithCode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)validateActivationLockForiCloudUser:(id)arg1 authenticationPET:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)isActivationLockCapableWithCompletion:(/*^block*/id)arg1 ;
-(void)enableActivationLockWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)needsLostModeExitAuth;
-(void)didReceiveLostModeExitAuthToken:(id)arg1 ;
-(id)retrieveFMMAccount:(id*)arg1 ;
-(void)disableFMMUsingToken:(id)arg1 inContext:(unsigned long long)arg2 usingCallback:(/*^block*/id)arg3 ;
-(void)isActivationLockedWithCompletion:(/*^block*/id)arg1 ;
-(FMDFMMAccountInfo *)cachedAccountInfo;
-(void)setCachedAccountInfo:(FMDFMMAccountInfo *)arg1 ;
-(LAContext *)laContext;
-(void)setLaContext:(LAContext *)arg1 ;
-(void)initiateLostModeExitAuthWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDeviceOwnerAuthContext:(/*^block*/id)arg1 ;
-(void)clearFMMAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)needsDeviceOwnerCredentials:(/*^block*/id)arg1 ;
-(void)shouldPromptForCredentialsForDeviceActivation:(/*^block*/id)arg1 ;
-(void)eraseAllContentAndSettingsUsingCallback:(/*^block*/id)arg1 ;
-(void)fetchAPNSTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)locationPayloadWithCompletion:(/*^block*/id)arg1 ;
-(void)locationCommandWithCompletion:(/*^block*/id)arg1 ;
-(void)registerObservers;
-(char)isFMMEnabled;
-(void)retrieveFMMAccountWithCompletion:(/*^block*/id)arg1 ;
-(id)addFMMAccount:(id)arg1 ;
-(id)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2 ;
-(void)shouldResumeCardsForUser:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setAuthRef:(AuthorizationOpaqueRefRef)arg1 ;
-(AuthorizationOpaqueRefRef)authRef;
-(void)updateCredentialsContextForDeviceActivation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authenticateDeviceOwnerWithCallback:(/*^block*/id)arg1 ;
@end

