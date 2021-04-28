/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SMDDebugProtocol;
@class NSXPCInterface, NSXPCConnection;

@interface SMDebug_Client : NSObject {

	NSXPCInterface* _daemonInterface;
	NSXPCConnection* _daemonConnection;
	id<SMDDebugProtocol> _daemonProxy;

}

@property (retain) NSXPCInterface * daemonInterface;                //@synthesize daemonInterface=_daemonInterface - In the implementation block
@property (retain) NSXPCConnection * daemonConnection;              //@synthesize daemonConnection=_daemonConnection - In the implementation block
@property (retain) id<SMDDebugProtocol> daemonProxy;                //@synthesize daemonProxy=_daemonProxy - In the implementation block
-(id)init;
-(NSXPCConnection *)daemonConnection;
-(void)setDaemonConnection:(NSXPCConnection *)arg1 ;
-(void)connectToDaemon;
-(id<SMDDebugProtocol>)daemonProxy;
-(void)setDaemonProxy:(id<SMDDebugProtocol>)arg1 ;
-(void)disableIdleExit;
-(void)allowLocalNetworkServer;
-(void)delaySpotlightIndexing;
-(void)forceSlowEnumeration;
-(void)preferBackgroundMigrations;
-(void)setDaemonInterface:(NSXPCInterface *)arg1 ;
-(NSXPCInterface *)daemonInterface;
@end
