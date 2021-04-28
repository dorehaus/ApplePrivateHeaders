/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAP2AccessoryServerPairingDriverDelegate <NSObject>
@required
-(void)pairingDriver:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 didCompleteWithError:(id)arg2;
-(void)pairingDriver:(id)arg1 doesRequirePermission:(unsigned long long)arg2 accessory:(id)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 didRejectSetupCodeForAccessory:(id)arg2 backoffInterval:(double)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 didRequestLocalPairingIdentityWithCompletion:(/*^block*/id)arg2;
-(void)pairingDriver:(id)arg1 didSaveRemotePairingIdentity:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pairingDriver:(id)arg1 doesRequireSetupCodeForAccessory:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pairingDriver:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4;
-(void)pairingDriver:(id)arg1 didFinishAuthWithError:(id)arg2;
-(void)pairingDriver:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(/*^block*/id)arg5;

@end

