/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXVoicemailObserverDataSource.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableDictionary, NSHashTable, NSXPCConnection, NSString;

@interface CXVoicemailObserverXPCClient : NSObject <CXVoicemailObserverDataSource> {

	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _mutableVoicemailUUIDToVoicemailMap;
	NSHashTable* _delegates;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableVoicemailUUIDToVoicemailMap;              //@synthesize mutableVoicemailUUIDToVoicemailMap=_mutableVoicemailUUIDToVoicemailMap - In the implementation block
@property (nonatomic,readonly) NSHashTable * delegates;                                               //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                                       //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * voicemailUUIDToVoicemailMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedXPCClientSemaphore;
+(id)sharedXPCClient;
+(void)releaseSharedXPCClient;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(id)_init;
-(void)_invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(int)notifyToken;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)_requestVoicemails;
-(NSMutableDictionary *)mutableVoicemailUUIDToVoicemailMap;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 isSynchronous:(char)arg2 ;
-(NSDictionary *)voicemailUUIDToVoicemailMap;
-(void)_addOrUpdateVoicemails:(id)arg1 ;
-(void)_removeVoicemails:(id)arg1 ;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)addOrUpdateVoicemails:(id)arg1 ;
-(oneway void)removeVoicemails:(id)arg1 ;
@end

