/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSData, NSObject, SFSession, SFDevice, SFService;

@interface SFPINPairSession : NSObject {

	char _activateCalled;
	char _clientStarted;
	NSData* _clientSessionUUID;
	char _invalidateCalled;
	unsigned long long _heartbeatLastTicks;
	NSObject*<OS_dispatch_source> _heartbeatTimer;
	char _heartbeatSending;
	char _pairSetupDone;
	PairingSessionPrivateRef _pairSetupSession;
	char _pairSetupWaitingForUser;
	char _pairVerifyDone;
	PairingSessionPrivateRef _pairVerifySession;
	SFSession* _sfSession;
	char _sfSessionActivated;
	unsigned long long _startTicks;
	NSObject*<OS_os_transaction> _transaction;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	SFService* _sfService;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) SFService * sfService;                                   //@synthesize sfService=_sfService - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                         //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                         //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
-(void)_hearbeatTimer;
-(void)_clientHeartbeatSend;
-(void)_clientSFSessionStart;
-(void)_clientPairVerify:(id)arg1 start:(char)arg2 ;
-(void)_clientPairSetup:(id)arg1 start:(char)arg2 ;
-(void)_clientTryPIN:(id)arg1 ;
-(void)_handleServerRequest:(id)arg1 ;
-(void)handleServerHeartbeat:(id)arg1 ;
-(void)handleServerPairVerify:(id)arg1 reset:(char)arg2 ;
-(void)handleServerPairSetup:(id)arg1 reset:(char)arg2 ;
-(void)clientTryPIN:(id)arg1 ;
-(SFService *)sfService;
-(void)dealloc;
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_cleanup;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SFDevice *)peerDevice;
-(id)promptForPINHandler;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)setPromptForPINHandler:(id)arg1 ;
-(id)showPINHandler;
-(id)hidePINHandler;
-(void)_completed:(int)arg1 ;
-(void)setShowPINHandler:(id)arg1 ;
-(void)setHidePINHandler:(id)arg1 ;
-(void)_clientRun;
-(void)setSfService:(SFService *)arg1 ;
-(void)handleServerRequest:(id)arg1 ;
@end

