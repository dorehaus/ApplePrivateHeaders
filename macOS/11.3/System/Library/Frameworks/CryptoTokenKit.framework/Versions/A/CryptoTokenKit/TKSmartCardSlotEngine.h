/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSlot.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source, OS_os_log, TKSmartCardSlotEngineDelegate, OS_dispatch_queue;
@class TKSmartCardATR, NSObject, NSXPCConnection, NSXPCListener, NSHashTable, NSMutableArray, NSMapTable, TKPowerMonitor, NSXPCListenerEndpoint, NSString, TKSmartCardSessionEngine;

@interface TKSmartCardSlotEngine : NSObject <TKProtocolSmartCardSlot, NSXPCListenerDelegate> {

	unsigned long long _lastId;
	long long _state;
	long long _powerState;
	long long _previousState;
	TKSmartCardATR* _atr;
	unsigned long long _protocol;
	NSObject*<OS_dispatch_source> _idlePowerDownSource;
	NSXPCConnection* _registrationConnection;
	NSXPCListener* _listener;
	NSHashTable* _clients;
	NSMutableArray* _sessionRequests;
	NSMapTable* _reservations;
	TKPowerMonitor* _powerMonitor;
	NSObject*<OS_os_log> _log;
	char _securePINVerificationSupported;
	char _securePINChangeSupported;
	char _apduSentSinceLastReset;
	long long _maxInputLength;
	long long _maxOutputLength;
	NSXPCListenerEndpoint* _serverEndpoint;
	id<TKSmartCardSlotEngineDelegate> _delegate;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _powerRequestsQueue;
	TKSmartCardSessionEngine* _session;

}

@property (__weak) id<TKSmartCardSlotEngineDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> powerRequestsQueue;              //@synthesize powerRequestsQueue=_powerRequestsQueue - In the implementation block
@property (assign) char apduSentSinceLastReset;                                  //@synthesize apduSentSinceLastReset=_apduSentSinceLastReset - In the implementation block
@property (__weak) TKSmartCardSessionEngine * session;                           //@synthesize session=_session - In the implementation block
@property (assign) long long maxInputLength;                                     //@synthesize maxInputLength=_maxInputLength - In the implementation block
@property (assign) long long maxOutputLength;                                    //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
@property (assign) char securePINVerificationSupported;                          //@synthesize securePINVerificationSupported=_securePINVerificationSupported - In the implementation block
@property (assign) char securePINChangeSupported;                                //@synthesize securePINChangeSupported=_securePINChangeSupported - In the implementation block
@property (retain) NSXPCListenerEndpoint * serverEndpoint;                       //@synthesize serverEndpoint=_serverEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupSlotWithReply:(/*^block*/id)arg1 ;
-(void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)sessionWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(void)runUserInteraction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(long long)maxOutputLength;
-(char)securePINVerificationSupported;
-(char)securePINChangeSupported;
-(char)_setupWithName:(id)arg1 delegate:(id)arg2 ;
-(id)slotRegistryWithErrorHandler:(/*^block*/id)arg1 ;
-(void)logWithBytes:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)dictionaryForState:(long long)arg1 ;
-(void)changeStateTo:(long long)arg1 powerState:(long long)arg2 ;
-(void)powerDownWithEject:(char)arg1 ;
-(void)scheduleIdlePowerDown;
-(char)connectCardSessionWithParameters:(id)arg1 ;
-(void)leaveSession:(id)arg1 ;
-(id)_findReservation:(id)arg1 connection:(id)arg2 ;
-(id)_getReservationId;
-(NSObject*<OS_dispatch_queue>)powerRequestsQueue;
-(void)setPowerRequestsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)apduSentSinceLastReset;
-(void)setApduSentSinceLastReset:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(id<TKSmartCardSlotEngineDelegate>)delegate;
-(void)setDelegate:(id<TKSmartCardSlotEngineDelegate>)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)terminate;
-(char)setProtocol:(unsigned long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(TKSmartCardSessionEngine *)session;
-(void)setSession:(TKSmartCardSessionEngine *)arg1 ;
-(NSXPCListenerEndpoint *)serverEndpoint;
-(void)setServerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setMaxInputLength:(long long)arg1 ;
-(long long)maxInputLength;
-(void)setMaxOutputLength:(long long)arg1 ;
-(void)setSecurePINVerificationSupported:(char)arg1 ;
-(void)setSecurePINChangeSupported:(char)arg1 ;
-(char)setupWithName:(id)arg1 delegate:(id)arg2 ;
-(void)cardPresent:(char)arg1 ;
-(void)getAttrib:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)setAttrib:(unsigned)arg1 data:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

