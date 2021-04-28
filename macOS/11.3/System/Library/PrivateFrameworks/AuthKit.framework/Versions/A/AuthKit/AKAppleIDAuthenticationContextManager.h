/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationClientProtocol.h>

@protocol OS_dispatch_queue, AKAppleIDAuthenticationDelegate;
@class NSMutableDictionary, AKAppleIDAuthenticationController, NSObject, NSString;

@interface AKAppleIDAuthenticationContextManager : NSObject <AKAppleIDAuthenticationClientProtocol> {

	NSMutableDictionary* _authContextsByUUID;
	AKAppleIDAuthenticationController* _authController;
	NSObject*<OS_dispatch_queue> _authContextsQueue;
	id<AKAppleIDAuthenticationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAuthenticationController:(id)arg1 ;
-(id)registerContext:(id)arg1 ;
-(void)unregisterContext:(id)arg1 ;
-(id)_clientSideContextForServerContext:(id)arg1 ;
-(id<AKAppleIDAuthenticationDelegate>)delegate;
-(void)setDelegate:(id<AKAppleIDAuthenticationDelegate>)arg1 ;
-(void)launchOutOfProcessAuthentication:(id)arg1 surrogateID:(id)arg2 withErrorHandler:(/*^block*/id)arg3 ;
-(void)shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContextID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentKeepUsingUIForContext:(id)arg1 appleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissKeepUsingUIForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)presentBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissBasicLoginUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentLoginAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissSecondFactorUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentSecondFactorAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentServerProvidedUIForContext:(id)arg1 withConfiguration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissServerProvidedUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissNativeRecoveryUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentBiometricOrPasscodeValidationForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)eraseAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)provisionAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

