/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessagesHelperKit.framework/Versions/A/MessagesHelperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SOAReceiverProtocol.h>

@protocol OS_dispatch_queue;
@class SOAReceiver, NSXPCListener, NSMutableArray, NSString, NSMutableDictionary, NSObject;

@interface SOAController : NSObject <NSXPCListenerDelegate, SOAReceiverProtocol> {

	char _markedForDestruction;
	SOAReceiver* _receiver;
	NSXPCListener* _listener;
	NSMutableArray* _connections;
	NSString* _name;
	NSMutableDictionary* _controllerProperties;
	NSObject*<OS_dispatch_queue> _controllerQueue;

}

@property (retain) SOAReceiver * receiver;                                              //@synthesize receiver=_receiver - In the implementation block
@property (retain) NSXPCListener * listener;                                            //@synthesize listener=_listener - In the implementation block
@property (retain) NSMutableArray * connections;                                        //@synthesize connections=_connections - In the implementation block
@property (retain) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (retain) NSMutableDictionary * controllerProperties;                          //@synthesize controllerProperties=_controllerProperties - In the implementation block
@property (assign) char markedForDestruction;                                           //@synthesize markedForDestruction=_markedForDestruction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> controllerQueue;              //@synthesize controllerQueue=_controllerQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)receiverProtocol;
+(id)remoteReceiverProtocol;
+(Class)receiverClass;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(id)bundleIdentifier;
-(id)initWithXPCListener:(id)arg1 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSMutableArray *)connections;
-(void)setConnections:(NSMutableArray *)arg1 ;
-(SOAReceiver *)receiver;
-(void)setReceiver:(SOAReceiver *)arg1 ;
-(char)isPersistent;
-(void)setupComplete;
-(void)setValue:(id)arg1 forControllerKey:(id)arg2 ;
-(void)setDefaultsObject:(id)arg1 forKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addDefaultsObject:(id)arg1 toCollection:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeDefaultsObject:(id)arg1 fromCollection:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setDefaultsObject:(id)arg1 forKey:(id)arg2 inCollection:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeDefaultsObjectForKey:(id)arg1 inCollection:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)defaultsObjectForKey:(id)arg1 ;
-(NSMutableDictionary *)controllerProperties;
-(void)setControllerProperties:(NSMutableDictionary *)arg1 ;
-(void)connectionDied:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)controllerQueue;
-(void)setControllerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connectionAdded:(id)arg1 ;
-(id)userDefaultsDictionary;
-(void)mainInvalidate;
-(char)persistsWithoutAccounts;
-(void)suspendConnections;
-(char)markedForDestruction;
-(void)setMarkedForDestruction:(char)arg1 ;
@end

