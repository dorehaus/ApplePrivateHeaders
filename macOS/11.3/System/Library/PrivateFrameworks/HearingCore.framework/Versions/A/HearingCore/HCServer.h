/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/Versions/A/HearingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXHeardServerDelegate, AXHeardServerMessageDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface HCServer : NSObject {

	char _deadConnection;
	id<AXHeardServerDelegate> _delegate;
	id<AXHeardServerMessageDelegate> _messageDelegate;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                         //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (assign,nonatomic) char deadConnection;                                                  //@synthesize deadConnection=_deadConnection - In the implementation block
@property (assign,nonatomic,__weak) id<AXHeardServerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AXHeardServerMessageDelegate> messageDelegate;              //@synthesize messageDelegate=_messageDelegate - In the implementation block
@property (nonatomic,readonly) char isConnected; 
-(void)dealloc;
-(id)init;
-(id<AXHeardServerDelegate>)delegate;
-(void)setDelegate:(id<AXHeardServerDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(char)isConnected;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)handleReply:(id)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resetConnection;
-(void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2 ;
-(void)terminateConnectionAndNotify:(char)arg1 ;
-(void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)handleMessageError:(id)arg1 destructive:(char)arg2 ;
-(char)shouldRestartOnInterruption;
-(void)setDeadConnection:(char)arg1 ;
-(char)deadConnection;
-(id)setupServerIfNecessary;
-(id<AXHeardServerMessageDelegate>)messageDelegate;
-(void)startServerWithDelegate:(id)arg1 ;
-(void)sendSynchronousMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2 ;
-(void)setMessageDelegate:(id<AXHeardServerMessageDelegate>)arg1 ;
@end
