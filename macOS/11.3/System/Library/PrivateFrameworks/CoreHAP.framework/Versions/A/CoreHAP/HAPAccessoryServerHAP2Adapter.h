/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServer.h>
#import <libobjc.A.dylib/HAP2AccessoryDelegate.h>
#import <libobjc.A.dylib/HAP2PairedAccessoryServerDelegate.h>
#import <libobjc.A.dylib/HAP2UnpairedAccessoryServerDelegate.h>
#import <libobjc.A.dylib/HAP2UnpairedAccessoryServerPairDelegate.h>
#import <libobjc.A.dylib/HAP2AccessoryServerDelegate.h>

@protocol HAP2UnpairedAccessoryServer, HAP2PairedAccessoryServer, HAP2Cancelable;
@class HAPAccessory, NSArray, HAP2SerializedOperationQueue, NSString;

@interface HAPAccessoryServerHAP2Adapter : HAPAccessoryServer <HAP2AccessoryDelegate, HAP2PairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerPairDelegate, HAP2AccessoryServerDelegate> {

	char _internallyPaired;
	char _skipUserConsent;
	char _discoverAccessoriesOncePaired;
	id<HAP2UnpairedAccessoryServer> _unpairedServer;
	id<HAP2PairedAccessoryServer> _pairedServer;
	id<HAP2Cancelable> _pairingSessionCancelable;
	/*^block*/id _setupCodeCompletion;
	/*^block*/id _userConsentCompletion;
	/*^block*/id _authValidationCompletion;
	/*^block*/id _softwareAuthFinishedCompletion;
	/*^block*/id _authenticateUUIDCompletion;
	HAPAccessory* _primaryAccessory;
	NSArray* _accessories;
	HAP2SerializedOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue;                                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) id<HAP2UnpairedAccessoryServer> unpairedServer;                                             //@synthesize unpairedServer=_unpairedServer - In the implementation block
@property (nonatomic,retain) id<HAP2PairedAccessoryServer> pairedServer;                                                 //@synthesize pairedServer=_pairedServer - In the implementation block
@property (assign,getter=isInternallyPaired,nonatomic) char internallyPaired;                                            //@synthesize internallyPaired=_internallyPaired - In the implementation block
@property (nonatomic,retain) id<HAP2Cancelable> pairingSessionCancelable;                                                //@synthesize pairingSessionCancelable=_pairingSessionCancelable - In the implementation block
@property (nonatomic,copy) id setupCodeCompletion;                                                                       //@synthesize setupCodeCompletion=_setupCodeCompletion - In the implementation block
@property (nonatomic,copy) id userConsentCompletion;                                                                     //@synthesize userConsentCompletion=_userConsentCompletion - In the implementation block
@property (assign,getter=shouldSkipUserConsent,nonatomic) char skipUserConsent;                                          //@synthesize skipUserConsent=_skipUserConsent - In the implementation block
@property (nonatomic,copy) id authValidationCompletion;                                                                  //@synthesize authValidationCompletion=_authValidationCompletion - In the implementation block
@property (nonatomic,copy) id softwareAuthFinishedCompletion;                                                            //@synthesize softwareAuthFinishedCompletion=_softwareAuthFinishedCompletion - In the implementation block
@property (nonatomic,copy) id authenticateUUIDCompletion;                                                                //@synthesize authenticateUUIDCompletion=_authenticateUUIDCompletion - In the implementation block
@property (assign,getter=shouldDiscoverAccessoriesOncePaired,nonatomic) char discoverAccessoriesOncePaired;              //@synthesize discoverAccessoriesOncePaired=_discoverAccessoriesOncePaired - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)version;
-(id)category;
-(HAP2SerializedOperationQueue *)operationQueue;
-(id)accessories;
-(long long)linkType;
-(id)clientQueue;
-(char)isPaired;
-(char)isReachable;
-(void)setAccessories:(id)arg1 ;
-(id)productData;
-(void)continueAuthAfterValidation:(char)arg1 ;
-(unsigned long long)configNumber;
-(id)setupHash;
-(void)provisionToken:(id)arg1 ;
-(void)continuePairingAfterAuthPrompt;
-(void)setSecuritySessionOpen:(char)arg1 ;
-(char)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tearDownSessionOnAuthCompletion;
-(void)startPairingWithConsentRequired:(char)arg1 config:(id)arg2 ownershipToken:(id)arg3 ;
-(void)_enableEvents:(char)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)enableEvents:(char)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)authenticateAccessory;
-(id)primaryAccessory;
-(void)stopPing;
-(char)isSecuritySessionOpen;
-(void)continuePairingUsingWAC;
-(void)discoverAccessories;
-(char)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(char)stopPairingWithError:(id*)arg1 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)startPing;
-(void)accessoryServerDidUpdateConnectionState:(id)arg1 ;
-(void)accessoryServerDidUpdateHasPairings:(id)arg1 ;
-(void)accessoryServerDidUpdateName:(id)arg1 ;
-(void)accessoryServerDidUpdateCategory:(id)arg1 ;
-(void)setPrimaryAccessory:(id)arg1 ;
-(void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithOperationQueue:(id)arg1 accessoryServer:(id)arg2 ;
-(char)shouldDiscoverAccessoriesOncePaired;
-(void)setDiscoverAccessoriesOncePaired:(char)arg1 ;
-(char)isInternallyPaired;
-(id)activeServer;
-(id<HAP2PairedAccessoryServer>)pairedServer;
-(char)_hap2CharacteristicTuplesForHAPCharacteristics:(id)arg1 tuples:(id*)arg2 error:(id*)arg3 ;
-(id<HAP2UnpairedAccessoryServer>)unpairedServer;
-(id)authValidationCompletion;
-(void)_continuePairingAfterAuthPromptWithError:(id)arg1 ;
-(void)setAuthValidationCompletion:(id)arg1 ;
-(id)authenticateUUIDCompletion;
-(void)setAuthenticateUUIDCompletion:(id)arg1 ;
-(id<HAP2Cancelable>)pairingSessionCancelable;
-(void)_notifyDelegatePairingStoppedWithError:(id)arg1 ;
-(void)setPairingSessionCancelable:(id<HAP2Cancelable>)arg1 ;
-(id)userConsentCompletion;
-(void)_handleIncorrectStartPairingCall;
-(void)setUserConsentCompletion:(id)arg1 ;
-(id)softwareAuthFinishedCompletion;
-(void)setSoftwareAuthFinishedCompletion:(id)arg1 ;
-(void)setSkipUserConsent:(char)arg1 ;
-(id)setupCodeCompletion;
-(void)setSetupCodeCompletion:(id)arg1 ;
-(void)_printMissingValues:(id)arg1 ;
-(char)_isActiveServer:(id)arg1 ;
-(id)_accessoryFromHAP2Accessory:(id)arg1 ;
-(void)_informDelegateOfUpdatedAccessories:(id)arg1 error:(id)arg2 ;
-(void)_resetPairingState;
-(char)shouldSkipUserConsent;
-(void)accessory:(id)arg1 didNotifyForUpdatedValuesOnCharacteristic:(id)arg2 ;
-(void)accessoryServerDidBecomeUnpaired:(id)arg1 ;
-(void)accessoryServerDidUpdateAccessories:(id)arg1 ;
-(void)accessoryServer:(id)arg1 didFailToUpdateAccessoriesWithError:(id)arg2 ;
-(void)accessoryServer:(id)arg1 doesRequirePermission:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessoryServer:(id)arg1 doesRequireSetupCodeWithCompletion:(/*^block*/id)arg2 ;
-(void)accessoryServer:(id)arg1 didRejectSetupCodeWithBackoffInterval:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessoryServer:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)accessoryServer:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)accessoryServer:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)accessoryServer:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)accessoryServer:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)accessoryServer:(id)arg1 didFinishAuthWithError:(id)arg2 ;
-(id)initWithUnpairedServer:(id)arg1 ;
-(id)initWithPairedServer:(id)arg1 ;
-(void)setUnpairedServer:(id<HAP2UnpairedAccessoryServer>)arg1 ;
-(void)setPairedServer:(id<HAP2PairedAccessoryServer>)arg1 ;
-(void)setShouldBePaired:(char)arg1 ;
-(char)supportsTimedWrite;
-(id)_hapIdentifierForAccessory:(id)arg1 ;
-(void)setInternallyPaired:(char)arg1 ;
@end

