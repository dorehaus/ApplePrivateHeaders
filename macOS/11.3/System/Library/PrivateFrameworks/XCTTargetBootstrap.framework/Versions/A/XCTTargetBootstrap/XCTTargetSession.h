/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/Versions/A/XCTTargetBootstrap
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <XCTTargetBootstrap/XCTMessagingChannel_DaemonToUIProcess.h>

@protocol OS_dispatch_queue, XCTConnectionAccepting;
@class NSObject, NSXPCConnection, NSXPCListener, NSString;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTMessagingChannel_DaemonToUIProcess> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _daemonConnection;
	NSXPCListener* _clientListener;
	id<XCTConnectionAccepting> _connectionHandler;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (retain) NSXPCConnection * daemonConnection;                        //@synthesize daemonConnection=_daemonConnection - In the implementation block
@property (retain) NSXPCListener * clientListener;                            //@synthesize clientListener=_clientListener - In the implementation block
@property (retain) id<XCTConnectionAccepting> connectionHandler;              //@synthesize connectionHandler=_connectionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithServiceName:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connect;
-(id)initWithDaemonConnection:(id)arg1 ;
-(void)_on_queue_connect;
-(NSXPCConnection *)daemonConnection;
-(void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(id<XCTConnectionAccepting>)connectionHandler;
-(void)setConnectionHandler:(id<XCTConnectionAccepting>)arg1 ;
-(void)setClientListener:(NSXPCListener *)arg1 ;
-(void)_on_queue_startListeningForClientConnections;
-(char)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id*)arg2 ;
-(id)_on_queue_getListenerEndpoint;
-(void)setDaemonConnection:(NSXPCConnection *)arg1 ;
-(NSXPCListener *)clientListener;
@end

