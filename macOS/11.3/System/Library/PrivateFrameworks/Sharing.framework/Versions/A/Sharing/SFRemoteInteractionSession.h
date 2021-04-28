/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_queue;
@class SFSession, NSXPCConnection, NSObject, SFDevice, SDRemoteInteractionAgent;

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface> {

	char _activateCalled;
	char _invalidateCalled;
	char _invalidateDone;
	SFSession* _remoteSession;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	SFDevice* _peerDevice;
	/*^block*/id _remoteTextEventHandler;
	/*^block*/id _textSessionDidBegin;
	/*^block*/id _textSessionDidEnd;
	/*^block*/id _textSessionDidChange;
	SDRemoteInteractionAgent* _agent;

}

@property (nonatomic,retain) SDRemoteInteractionAgent * agent;                        //@synthesize agent=_agent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id remoteTextEventHandler;                                 //@synthesize remoteTextEventHandler=_remoteTextEventHandler - In the implementation block
@property (nonatomic,copy) id textSessionDidBegin;                                    //@synthesize textSessionDidBegin=_textSessionDidBegin - In the implementation block
@property (nonatomic,copy) id textSessionDidEnd;                                      //@synthesize textSessionDidEnd=_textSessionDidEnd - In the implementation block
@property (nonatomic,copy) id textSessionDidChange;                                   //@synthesize textSessionDidChange=_textSessionDidChange - In the implementation block
+(char)supportsSecureCoding;
-(void)_sessionHandleEvent:(id)arg1 ;
-(void)_sessionSendPayload:(id)arg1 ;
-(id)textSessionDidBegin;
-(id)textSessionDidEnd;
-(id)textSessionDidChange;
-(id)description;
-(id)init;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)_invalidated;
-(void)_interrupted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_ensureXPCStarted;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(SDRemoteInteractionAgent *)agent;
-(void)setAgent:(SDRemoteInteractionAgent *)arg1 ;
-(void)_sessionStart;
-(void)sendPayload:(id)arg1 ;
-(id)remoteTextEventHandler;
-(void)setRemoteTextEventHandler:(id)arg1 ;
-(void)remoteInteractionSessionRemoteTextEvent:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidBegin:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidEnd:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidChange:(id)arg1 ;
-(void)setTextSessionDidBegin:(id)arg1 ;
-(void)setTextSessionDidEnd:(id)arg1 ;
-(void)setTextSessionDidChange:(id)arg1 ;
@end

