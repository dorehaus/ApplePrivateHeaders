/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/Versions/A/SoftwareUpdateCoreConnect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUCoreConnectClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, SUCoreConnectClientPolicy, SUCoreLog, NSObject;

@interface SUCoreConnectClient : NSObject <SUCoreConnectClientProtocol> {

	char _connected;
	NSXPCConnection* _serverConnection;
	SUCoreConnectClientPolicy* _policy;
	SUCoreLog* _logger;
	NSObject*<OS_dispatch_queue> _clientConnectionStateAccessQueue;
	NSObject*<OS_dispatch_queue> _clientDelegateCallbackQueue;
	NSObject*<OS_dispatch_queue> _clientCompletionQueue;
	NSObject*<OS_dispatch_queue> _clientMessageQueue;
	NSObject*<OS_dispatch_queue> _clientReplyCompletionQueue;

}

@property (nonatomic,retain) NSXPCConnection * serverConnection;                                                  //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) SUCoreConnectClientPolicy * policy;                                                  //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic) char connected;                                                                      //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) SUCoreLog * logger;                                                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientConnectionStateAccessQueue;              //@synthesize clientConnectionStateAccessQueue=_clientConnectionStateAccessQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientDelegateCallbackQueue;                   //@synthesize clientDelegateCallbackQueue=_clientDelegateCallbackQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientCompletionQueue;                         //@synthesize clientCompletionQueue=_clientCompletionQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientMessageQueue;                            //@synthesize clientMessageQueue=_clientMessageQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> clientReplyCompletionQueue;                    //@synthesize clientReplyCompletionQueue=_clientReplyCompletionQueue - In the implementation block
-(id)initWithClientPolicy:(id)arg1 ;
-(void)connectToServerWithCompletion:(/*^block*/id)arg1 ;
-(void)connectClientSendServerMessage:(id)arg1 proxyObject:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)clientCompletionQueue;
-(NSObject*<OS_dispatch_queue>)clientDelegateCallbackQueue;
-(void)connectProtocolFromServerRequestClientID:(/*^block*/id)arg1 ;
-(void)connectProtocolFromServerSendClientMessage:(id)arg1 ;
-(void)connectProtocolFromServerSendClientMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientConnectionStateAccessQueue;
-(void)_connectionDropped;
-(void)_handleConnectionError:(id)arg1 method:(const char*)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientReplyCompletionQueue;
-(NSObject*<OS_dispatch_queue>)clientMessageQueue;
-(void)connectClientSendServerMessage:(id)arg1 ;
-(void)forceCloseConnection;
-(void)dealloc;
-(SUCoreLog *)logger;
-(SUCoreConnectClientPolicy *)policy;
-(void)setPolicy:(SUCoreConnectClientPolicy *)arg1 ;
-(char)connected;
-(void)setConnected:(char)arg1 ;
-(void)setLogger:(SUCoreLog *)arg1 ;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)_invalidateConnection;
@end

