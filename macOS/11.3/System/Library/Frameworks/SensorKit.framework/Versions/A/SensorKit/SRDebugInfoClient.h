/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SensorKit.framework/Versions/A/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject {

	char _connectionDidInterrupt;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) char connectionDidInterrupt;               //@synthesize connectionDidInterrupt=_connectionDidInterrupt - In the implementation block
+(void)initialize;
+(id)clientInterface;
+(id)remoteInterface;
+(id)connectionToDaemon;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setupConnection;
-(void)setConnectionDidInterrupt:(char)arg1 ;
-(char)connectionDidInterrupt;
-(void)dumpClientsWithReply:(/*^block*/id)arg1 ;
-(void)dumpStateCacheWithReply:(/*^block*/id)arg1 ;
-(void)dumpConfigurationsWithReply:(/*^block*/id)arg1 ;
-(void)listClientsWithReply:(/*^block*/id)arg1 ;
-(void)datastoreListingWithReply:(/*^block*/id)arg1 ;
@end

