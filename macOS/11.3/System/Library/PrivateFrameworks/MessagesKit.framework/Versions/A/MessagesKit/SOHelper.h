/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessagesKit.framework/Versions/A/MessagesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SOHelperReceiverProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, SOHelperReceiver, NSMutableArray, NSMutableDictionary, NSObject;

@interface SOHelper : NSObject <SOHelperReceiverProtocol> {

	char _isSuspended;
	char _defaultsInitalSyncComplete;
	NSXPCConnection* _connection;
	NSString* _name;
	SOHelperReceiver* _receiver;
	NSMutableArray* _blocksToRunOnConnection;
	NSMutableArray* _blocksToRunOnFirstDefaultsSync;
	NSMutableDictionary* _keyToBlocks;
	NSObject*<OS_dispatch_queue> _helperDispatchQueue;
	NSMutableDictionary* _controllerProperties;
	NSMutableDictionary* _controllerDefaults;

}

@property (retain) NSMutableArray * blocksToRunOnConnection;                      //@synthesize blocksToRunOnConnection=_blocksToRunOnConnection - In the implementation block
@property (retain) NSMutableArray * blocksToRunOnFirstDefaultsSync;               //@synthesize blocksToRunOnFirstDefaultsSync=_blocksToRunOnFirstDefaultsSync - In the implementation block
@property (assign) char defaultsInitalSyncComplete;                               //@synthesize defaultsInitalSyncComplete=_defaultsInitalSyncComplete - In the implementation block
@property (retain) NSMutableDictionary * keyToBlocks;                             //@synthesize keyToBlocks=_keyToBlocks - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> helperDispatchQueue;              //@synthesize helperDispatchQueue=_helperDispatchQueue - In the implementation block
@property (retain) NSMutableDictionary * controllerProperties;                    //@synthesize controllerProperties=_controllerProperties - In the implementation block
@property (retain) NSMutableDictionary * controllerDefaults;                      //@synthesize controllerDefaults=_controllerDefaults - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (retain) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (retain) SOHelperReceiver * receiver;                                   //@synthesize receiver=_receiver - In the implementation block
@property (assign) char isSuspended;                                              //@synthesize isSuspended=_isSuspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)bundleName;
+(id)receiverProtocol;
+(id)remoteReceiverProtocol;
+(id)helperDispatchQueue;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(NSXPCConnection *)connection;
-(void)setName:(NSString *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(char)isSuspended;
-(SOHelperReceiver *)receiver;
-(void)setReceiver:(SOHelperReceiver *)arg1 ;
-(void)updateProperties:(id)arg1 ;
-(void)setIsSuspended:(char)arg1 ;
-(void)setupConnection:(id)arg1 ;
-(void)postNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setValue:(id)arg1 forControllerKey:(id)arg2 ;
-(void)updateDefaultsObject:(id)arg1 forKey:(id)arg2 ;
-(void)updateDefaults:(id)arg1 ;
-(void)suspendConnectionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setupInterfaceForConnection:(id)arg1 ;
-(void)runBlockOnConnection:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)controllerDefaults;
-(id)defaultsObjectForKey:(id)arg1 blocking:(char)arg2 ;
-(void)runBlockWhenDefaultsSynced:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)setControllerDefaults:(NSMutableDictionary *)arg1 ;
-(id)controllerPropertyForKey:(id)arg1 ;
-(void)runBlock:(/*^block*/id)arg1 onKeyChange:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)helperDispatchQueue;
-(void)addDefaultsObject:(id)arg1 toCollection:(id)arg2 ;
-(void)removeDefaultsObject:(id)arg1 fromCollection:(id)arg2 ;
-(id)defaultsObjectForKey:(id)arg1 ;
-(void)setDefaultsObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyControllerPropertyForKey:(id)arg1 ;
-(void)_setControllerProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_controllerProperties;
-(id)_helperDispatchQueue;
-(char)blockUntilKeyValueKnown:(id)arg1 ;
-(char)defaultsInitalSyncComplete;
-(void)setDefaultsInitalSyncComplete:(char)arg1 ;
-(NSMutableArray *)blocksToRunOnConnection;
-(void)setBlocksToRunOnConnection:(NSMutableArray *)arg1 ;
-(NSMutableArray *)blocksToRunOnFirstDefaultsSync;
-(void)setBlocksToRunOnFirstDefaultsSync:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)keyToBlocks;
-(void)setKeyToBlocks:(NSMutableDictionary *)arg1 ;
-(void)setHelperDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)controllerProperties;
-(void)setControllerProperties:(NSMutableDictionary *)arg1 ;
@end
