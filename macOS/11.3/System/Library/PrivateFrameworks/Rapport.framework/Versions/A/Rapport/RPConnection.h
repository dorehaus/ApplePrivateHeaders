/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>

@protocol OS_dispatch_source, CUReadWriteRequestable, OS_dispatch_queue;
@class NSString, NSObject, NSError, CUPairingStream, NSData, CUPairingSession, NSMutableDictionary, NSMutableArray, NSArray, NSDictionary, CUBLEConnection, NSUUID, CUBonjourDevice, CUBluetoothScalablePipe, RPIdentity, CUHomeKitManager, RPIdentityDaemon, RPCompanionLinkDevice, CUNetLinkManager, CUTCPConnection;

@interface RPConnection : NSObject <RPAuthenticatable> {

	char _activateCalled;
	NSString* _peerAddrString;
	NSString* _selfAddrString;
	char _invalidateCalled;
	char _invalidateDone;
	NSObject*<OS_dispatch_source> _idleTimer;
	NSObject*<OS_dispatch_source> _probeTimer;
	char _retryFired;
	unsigned long long _retryTicks;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSObject*<OS_dispatch_source> _startTimer;
	int _internalState;
	char _stepDone;
	NSError* _stepError;
	unsigned long long _highPriorityAuthTagLength;
	CUPairingStream* _highPriorityStream;
	NSString* _homeKitIdentityIdentifier;
	NSData* _homeKitIdentitySignature;
	unsigned long long _mainAuthTagLength;
	CUPairingStream* _mainStream;
	int _pairSetupAuthType;
	CUPairingSession* _pairSetupSession;
	int _pairVerifyAuthType;
	char _pairVerifyCompleted;
	char _pairVerifyFailed;
	int _pairVerifyIdentityType;
	CUPairingSession* _pairVerifySession;
	char _pairVerifyUsedIdentity;
	SCD_Struct_RP1 _readFrame;
	SCD_Struct_RP1 _readFrameBTPipeHighPriority;
	id<CUReadWriteRequestable> _requestable;
	NSMutableDictionary* _requests;
	int _retryCount;
	NSMutableArray* _sendArray;
	char _showPasswordCalled;
	LogCategory* _ucat;
	unsigned _xidLast;
	unsigned long long _receivedFrameCountCurrent;
	unsigned long long _receivedFrameCountLast;
	char _clientMode;
	char _flowControlReadEnabled;
	char _invalidationHandled;
	char _preAuthEnabled;
	char _present;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	int _passwordType;
	int _passwordTypeActual;
	unsigned _flags;
	int _keepAliveSeconds;
	int _linkType;
	int _preferredIdentityType;
	int _state;
	unsigned _trafficFlags;
	NSArray* _pairSetupACL;
	NSString* _password;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _showPasswordHandler;
	/*^block*/id _hidePasswordHandler;
	/*^block*/id _promptForPasswordHandler;
	NSString* _appID;
	NSDictionary* _appInfoPeer;
	NSDictionary* _appInfoSelf;
	long long _bleClientUseCase;
	CUBLEConnection* _bleConnection;
	NSUUID* _blePeerIdentifier;
	CUBonjourDevice* _bonjourPeerDevice;
	CUBluetoothScalablePipe* _btPipe;
	id _client;
	unsigned long long _controlFlags;
	NSString* _destinationString;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _flowControlWriteChangedHandler;
	RPIdentity* _forcedPeerIdentity;
	RPIdentity* _forcedSelfIdentity;
	CUHomeKitManager* _homeKitManager;
	/*^block*/id _homeKitUserIdentifierHandler;
	NSString* _identifierOverride;
	RPIdentityDaemon* _identityDaemon;
	RPIdentity* _identityResolved;
	RPIdentity* _identityVerified;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	RPCompanionLinkDevice* _localDeviceInfo;
	CUNetLinkManager* _netLinkManager;
	/*^block*/id _pairVerifyCompletion;
	RPCompanionLinkDevice* _peerDeviceInfo;
	NSString* _peerIdentifier;
	/*^block*/id _peerUpdatedHandler;
	NSData* _pskData;
	/*^block*/id _receivedEventHandler;
	/*^block*/id _receivedRequestHandler;
	/*^block*/id _sessionStartHandler;
	/*^block*/id _stateChangedHandler;
	unsigned long long _statusFlags;
	CUTCPConnection* _tcpConnection;
	CUBluetoothScalablePipe* _btPipeHighPriority;

}

@property (nonatomic,retain) CUBluetoothScalablePipe * btPipeHighPriority;              //@synthesize btPipeHighPriority=_btPipeHighPriority - In the implementation block
@property (nonatomic,copy) NSString * appID;                                            //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * appInfoPeer;                         //@synthesize appInfoPeer=_appInfoPeer - In the implementation block
@property (nonatomic,copy) NSDictionary * appInfoSelf;                                  //@synthesize appInfoSelf=_appInfoSelf - In the implementation block
@property (assign,nonatomic) long long bleClientUseCase;                                //@synthesize bleClientUseCase=_bleClientUseCase - In the implementation block
@property (nonatomic,retain) CUBLEConnection * bleConnection;                           //@synthesize bleConnection=_bleConnection - In the implementation block
@property (nonatomic,copy) NSUUID * blePeerIdentifier;                                  //@synthesize blePeerIdentifier=_blePeerIdentifier - In the implementation block
@property (nonatomic,retain) CUBonjourDevice * bonjourPeerDevice;                       //@synthesize bonjourPeerDevice=_bonjourPeerDevice - In the implementation block
@property (nonatomic,retain) CUBluetoothScalablePipe * btPipe;                          //@synthesize btPipe=_btPipe - In the implementation block
@property (nonatomic,retain) id client;                                                 //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) char clientMode;                                           //@synthesize clientMode=_clientMode - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                           //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,copy) NSString * destinationString;                                //@synthesize destinationString=_destinationString - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                            //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) char flowControlReadEnabled;                               //@synthesize flowControlReadEnabled=_flowControlReadEnabled - In the implementation block
@property (nonatomic,copy) id flowControlWriteChangedHandler;                           //@synthesize flowControlWriteChangedHandler=_flowControlWriteChangedHandler - In the implementation block
@property (nonatomic,readonly) int flowControlWriteState; 
@property (nonatomic,retain) RPIdentity * forcedPeerIdentity;                           //@synthesize forcedPeerIdentity=_forcedPeerIdentity - In the implementation block
@property (nonatomic,retain) RPIdentity * forcedSelfIdentity;                           //@synthesize forcedSelfIdentity=_forcedSelfIdentity - In the implementation block
@property (nonatomic,retain) CUHomeKitManager * homeKitManager;                         //@synthesize homeKitManager=_homeKitManager - In the implementation block
@property (nonatomic,copy) id homeKitUserIdentifierHandler;                             //@synthesize homeKitUserIdentifierHandler=_homeKitUserIdentifierHandler - In the implementation block
@property (nonatomic,copy) NSString * identifierOverride;                               //@synthesize identifierOverride=_identifierOverride - In the implementation block
@property (nonatomic,retain) RPIdentityDaemon * identityDaemon;                         //@synthesize identityDaemon=_identityDaemon - In the implementation block
@property (nonatomic,retain) RPIdentity * identityResolved;                             //@synthesize identityResolved=_identityResolved - In the implementation block
@property (nonatomic,readonly) RPIdentity * identityVerified;                           //@synthesize identityVerified=_identityVerified - In the implementation block
@property (assign,nonatomic) char invalidationHandled;                                  //@synthesize invalidationHandled=_invalidationHandled - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) int keepAliveSeconds;                                      //@synthesize keepAliveSeconds=_keepAliveSeconds - In the implementation block
@property (nonatomic,copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) int linkType;                                            //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,retain) RPCompanionLinkDevice * localDeviceInfo;                   //@synthesize localDeviceInfo=_localDeviceInfo - In the implementation block
@property (nonatomic,retain) CUNetLinkManager * netLinkManager;                         //@synthesize netLinkManager=_netLinkManager - In the implementation block
@property (nonatomic,copy) id pairVerifyCompletion;                                     //@synthesize pairVerifyCompletion=_pairVerifyCompletion - In the implementation block
@property (nonatomic,readonly) RPCompanionLinkDevice * peerDeviceInfo;                  //@synthesize peerDeviceInfo=_peerDeviceInfo - In the implementation block
@property (nonatomic,copy) NSString * peerIdentifier;                                   //@synthesize peerIdentifier=_peerIdentifier - In the implementation block
@property (nonatomic,copy) id peerUpdatedHandler;                                       //@synthesize peerUpdatedHandler=_peerUpdatedHandler - In the implementation block
@property (assign,nonatomic) char preAuthEnabled;                                       //@synthesize preAuthEnabled=_preAuthEnabled - In the implementation block
@property (assign,nonatomic) int preferredIdentityType;                                 //@synthesize preferredIdentityType=_preferredIdentityType - In the implementation block
@property (assign,nonatomic) char present;                                              //@synthesize present=_present - In the implementation block
@property (nonatomic,copy) NSData * pskData;                                            //@synthesize pskData=_pskData - In the implementation block
@property (nonatomic,copy) id receivedEventHandler;                                     //@synthesize receivedEventHandler=_receivedEventHandler - In the implementation block
@property (nonatomic,copy) id receivedRequestHandler;                                   //@synthesize receivedRequestHandler=_receivedRequestHandler - In the implementation block
@property (nonatomic,copy) id sessionStartHandler;                                      //@synthesize sessionStartHandler=_sessionStartHandler - In the implementation block
@property (assign,nonatomic) int state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedHandler;                                      //@synthesize stateChangedHandler=_stateChangedHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long statusFlags;                          //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,retain) CUTCPConnection * tcpConnection;                           //@synthesize tcpConnection=_tcpConnection - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                                     //@synthesize trafficFlags=_trafficFlags - In the implementation block
@property (nonatomic,retain) NSArray * pairSetupACL;                                    //@synthesize pairSetupACL=_pairSetupACL - In the implementation block
@property (assign,nonatomic) unsigned pairSetupFlags;                                   //@synthesize pairSetupFlags=_pairSetupFlags - In the implementation block
@property (assign,nonatomic) unsigned pairVerifyFlags;                                  //@synthesize pairVerifyFlags=_pairVerifyFlags - In the implementation block
@property (nonatomic,copy) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) int passwordType;                                          //@synthesize passwordType=_passwordType - In the implementation block
@property (nonatomic,readonly) int passwordTypeActual;                                  //@synthesize passwordTypeActual=_passwordTypeActual - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                    //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id showPasswordHandler;                                      //@synthesize showPasswordHandler=_showPasswordHandler - In the implementation block
@property (nonatomic,copy) id hidePasswordHandler;                                      //@synthesize hidePasswordHandler=_hidePasswordHandler - In the implementation block
@property (nonatomic,copy) id promptForPasswordHandler;                                 //@synthesize promptForPasswordHandler=_promptForPasswordHandler - In the implementation block
-(unsigned)flags;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)invalidate;
-(int)state;
-(NSString *)password;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setState:(int)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)client;
-(void)setClient:(id)arg1 ;
-(void)activate;
-(id)invalidationHandler;
-(void)_invalidated;
-(void)setFlags:(unsigned)arg1 ;
-(char)present;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)controlFlags;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(unsigned long long)statusFlags;
-(void)invalidateWithError:(id)arg1 ;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(void)_abortRequestsWithError:(id)arg1 ;
-(void)_run;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setPresent:(char)arg1 ;
-(NSString *)peerIdentifier;
-(id)stateChangedHandler;
-(void)setPeerIdentifier:(NSString *)arg1 ;
-(void)setStateChangedHandler:(id)arg1 ;
-(unsigned)trafficFlags;
-(void)_invalidateWithError:(id)arg1 ;
-(NSDictionary *)appInfoPeer;
-(NSDictionary *)appInfoSelf;
-(void)setAppInfoSelf:(NSDictionary *)arg1 ;
-(NSString *)destinationString;
-(int)keepAliveSeconds;
-(CUNetLinkManager *)netLinkManager;
-(void)setDestinationString:(NSString *)arg1 ;
-(void)setKeepAliveSeconds:(int)arg1 ;
-(void)setNetLinkManager:(CUNetLinkManager *)arg1 ;
-(int)linkType;
-(void)tryPassword:(id)arg1 ;
-(NSArray *)pairSetupACL;
-(void)setPairSetupACL:(NSArray *)arg1 ;
-(unsigned)pairSetupFlags;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(unsigned)pairVerifyFlags;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(int)passwordType;
-(void)setPasswordType:(int)arg1 ;
-(int)passwordTypeActual;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(id)showPasswordHandler;
-(void)setShowPasswordHandler:(id)arg1 ;
-(id)hidePasswordHandler;
-(void)setHidePasswordHandler:(id)arg1 ;
-(id)promptForPasswordHandler;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(NSString *)appID;
-(void)setAppID:(NSString *)arg1 ;
-(long long)bleClientUseCase;
-(void)setBleClientUseCase:(long long)arg1 ;
-(void)_receiveStart:(id)arg1 readFrame:(SCD_Struct_RP2*)arg2 requestable:(id)arg3 ;
-(void)sendReachabilityProbe:(const char*)arg1 ;
-(void)_invalidateCore:(id)arg1 ;
-(void)_pairSetupInvalidate;
-(void)_pairVerifyInvalidate;
-(void)_identityProofsAdd:(id)arg1 update:(char)arg2 ;
-(void)sendEncryptedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_identityProofsVerifyHomeKitSignature:(id)arg1 identifier:(id)arg2 ;
-(void)_clientRun;
-(void)_serverRun;
-(void)_clientConnectStart;
-(void)_clientPreAuthStart;
-(void)_clientPairSetupStart;
-(void)_clientPairVerifyStart;
-(void)_pskPrepare:(char)arg1 ;
-(void)_clientStartSession;
-(void)_clientStarted;
-(void)_processSends;
-(char)_clientError:(id)arg1 ;
-(void)_clientRetryStart;
-(void)_updateExternalState;
-(void)_clientConnectStartBLE;
-(void)_clientConnectStartBTPipe;
-(void)_clientConnectStartTCP;
-(void)_clientNetworkError:(id)arg1 label:(const char*)arg2 ;
-(void)_clientConnectCompleted:(id)arg1 ;
-(void)_updateLinkInfo;
-(void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2 ;
-(void)_clientPairSetupPromptWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 handler:(/*^block*/id)arg3 ;
-(void)_clientPairSetupCompleted:(id)arg1 ;
-(id)_pairVerifySignData:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(char)_pairVerifyVerifySignature:(id)arg1 data:(id)arg2 flags:(unsigned)arg3 error:(id*)arg4 ;
-(void)_clientPairVerifyCompleted:(id)arg1 ;
-(id)_systeminfo;
-(void)_receivedSystemInfo:(id)arg1 xid:(id)arg2 ;
-(void)_sendEncryptedRequestID:(id)arg1 request:(id)arg2 xpcID:(unsigned)arg3 options:(id)arg4 sendEntry:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)_clientRetryFired;
-(void)_serverAccept;
-(void)_serverStarted;
-(void)_serverError:(id)arg1 ;
-(void)_serverAcceptBLE;
-(void)_serverAcceptBTPipe;
-(void)_serverAcceptTCP;
-(void)_serverNetworkError:(id)arg1 label:(const char*)arg2 ;
-(char)_serverPairingAllowed;
-(id)_serverAllowMACAddresses;
-(void)_serverPairSetupCompleted:(id)arg1 ;
-(void)_serverPairVerifyCompleted:(id)arg1 ;
-(void)_sendEncryptedEventID:(id)arg1 data:(id)arg2 xid:(unsigned)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendEncryptedEventID:(id)arg1 data:(id)arg2 xid:(unsigned)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_timeoutForSendEntry:(id)arg1 ;
-(void)_timeoutForXID:(id)arg1 ;
-(void)_sendFrameType:(unsigned char)arg1 body:(id)arg2 ;
-(void)_receiveCompletion:(id)arg1 readFrame:(SCD_Struct_RP2*)arg2 requestable:(id)arg3 ;
-(void)_receivedHeader:(const SCD_Struct_RP0*)arg1 body:(id)arg2 ctx:(SCD_Struct_RP3*)arg3 ;
-(void)_receivedHeader:(const SCD_Struct_RP0*)arg1 encryptedObjectData:(id)arg2 ctx:(SCD_Struct_RP3*)arg3 ;
-(void)_serverPairSetupWithData:(id)arg1 start:(char)arg2 ;
-(void)_clientPairSetupWithData:(id)arg1 ;
-(void)_serverPairVerifyWithData:(id)arg1 start:(char)arg2 ;
-(void)_clientPairVerifyWithData:(id)arg1 ;
-(void)_serverPreAuthRequestWithData:(id)arg1 ;
-(void)_clientPreAuthResponseWithData:(id)arg1 ;
-(void)_receivedObject:(id)arg1 ctx:(SCD_Struct_RP3*)arg2 ;
-(void)_receivedEvent:(id)arg1 ctx:(SCD_Struct_RP3*)arg2 ;
-(void)_receivedRequest:(id)arg1 ctx:(SCD_Struct_RP3*)arg2 ;
-(void)_receivedResponse:(id)arg1 ctx:(SCD_Struct_RP3*)arg2 ;
-(void)_sendEncryptedResponse:(id)arg1 error:(id)arg2 xid:(id)arg3 requestID:(id)arg4 highPriority:(char)arg5 ;
-(id)_identityProofDataClient;
-(id)_identityProofDataServer;
-(void)_idleTimerFired;
-(void)_identityProofsVerify:(id)arg1 ;
-(void)setFlowControlReadEnabled:(char)arg1 ;
-(int)flowControlWriteState;
-(void)homeKitIdentityUpdated;
-(void)sessionStopped:(id)arg1 ;
-(void)sendEncryptedRequestID:(id)arg1 request:(id)arg2 xpcID:(unsigned)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)_idleTimerStart:(unsigned)arg1 repeat:(unsigned)arg2 ;
-(CUBLEConnection *)bleConnection;
-(void)setBleConnection:(CUBLEConnection *)arg1 ;
-(NSUUID *)blePeerIdentifier;
-(void)setBlePeerIdentifier:(NSUUID *)arg1 ;
-(CUBonjourDevice *)bonjourPeerDevice;
-(void)setBonjourPeerDevice:(CUBonjourDevice *)arg1 ;
-(CUBluetoothScalablePipe *)btPipe;
-(void)setBtPipe:(CUBluetoothScalablePipe *)arg1 ;
-(char)clientMode;
-(void)setClientMode:(char)arg1 ;
-(char)flowControlReadEnabled;
-(id)flowControlWriteChangedHandler;
-(void)setFlowControlWriteChangedHandler:(id)arg1 ;
-(RPIdentity *)forcedPeerIdentity;
-(void)setForcedPeerIdentity:(RPIdentity *)arg1 ;
-(RPIdentity *)forcedSelfIdentity;
-(void)setForcedSelfIdentity:(RPIdentity *)arg1 ;
-(CUHomeKitManager *)homeKitManager;
-(void)setHomeKitManager:(CUHomeKitManager *)arg1 ;
-(id)homeKitUserIdentifierHandler;
-(void)setHomeKitUserIdentifierHandler:(id)arg1 ;
-(NSString *)identifierOverride;
-(void)setIdentifierOverride:(NSString *)arg1 ;
-(RPIdentityDaemon *)identityDaemon;
-(void)setIdentityDaemon:(RPIdentityDaemon *)arg1 ;
-(RPIdentity *)identityResolved;
-(void)setIdentityResolved:(RPIdentity *)arg1 ;
-(RPIdentity *)identityVerified;
-(char)invalidationHandled;
-(void)setInvalidationHandled:(char)arg1 ;
-(RPCompanionLinkDevice *)localDeviceInfo;
-(void)setLocalDeviceInfo:(RPCompanionLinkDevice *)arg1 ;
-(id)pairVerifyCompletion;
-(void)setPairVerifyCompletion:(id)arg1 ;
-(RPCompanionLinkDevice *)peerDeviceInfo;
-(id)peerUpdatedHandler;
-(void)setPeerUpdatedHandler:(id)arg1 ;
-(char)preAuthEnabled;
-(void)setPreAuthEnabled:(char)arg1 ;
-(int)preferredIdentityType;
-(void)setPreferredIdentityType:(int)arg1 ;
-(NSData *)pskData;
-(void)setPskData:(NSData *)arg1 ;
-(id)receivedEventHandler;
-(void)setReceivedEventHandler:(id)arg1 ;
-(id)receivedRequestHandler;
-(void)setReceivedRequestHandler:(id)arg1 ;
-(id)sessionStartHandler;
-(void)setSessionStartHandler:(id)arg1 ;
-(CUTCPConnection *)tcpConnection;
-(void)setTcpConnection:(CUTCPConnection *)arg1 ;
-(CUBluetoothScalablePipe *)btPipeHighPriority;
-(void)setBtPipeHighPriority:(CUBluetoothScalablePipe *)arg1 ;
@end

