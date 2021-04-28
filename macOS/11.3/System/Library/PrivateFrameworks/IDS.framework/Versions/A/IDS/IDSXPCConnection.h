/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, NSXPCProxyCreating;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSString;

@interface IDSXPCConnection : NSObject <NSXPCConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSMutableDictionary* _pendingTransactions;
	IDSXPCConnection* _rootConnection;
	id<NSXPCProxyCreating> _remoteObject;
	/*^block*/id _invalidationHandler;
	char _forSyncMessaging;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingTransactions;              //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,retain) IDSXPCConnection * rootConnection;                      //@synthesize rootConnection=_rootConnection - In the implementation block
@property (nonatomic,retain) id<NSXPCProxyCreating> remoteObject;                    //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                   //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) char forSyncMessaging;                                  //@synthesize forSyncMessaging=_forSyncMessaging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorForMissingEntitlement:(id)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(char)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)valueForEntitlement:(id)arg1 ;
-(id)invalidationHandler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)hasEntitlement:(id)arg1 ;
-(id<NSXPCProxyCreating>)remoteObject;
-(void)setRemoteObject:(id<NSXPCProxyCreating>)arg1 ;
-(id)_initWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2 forSyncMessaging:(char)arg3 ;
-(void)_cleanupAllPendingTransactions;
-(id)initWithQueue:(id)arg1 remoteObject:(id)arg2 ;
-(void)setRootConnection:(IDSXPCConnection *)arg1 ;
-(IDSXPCConnection *)rootConnection;
-(NSMutableDictionary *)pendingTransactions;
-(id)initForSyncMessagingWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2 ;
-(id)initWithRemoteObject:(id)arg1 rootConnection:(id)arg2 ;
-(id)remoteObjectProxyWithTimeoutInSeconds:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setPendingTransactions:(NSMutableDictionary *)arg1 ;
-(char)forSyncMessaging;
-(void)setForSyncMessaging:(char)arg1 ;
@end
