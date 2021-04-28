/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableArray;

@interface SFCompanionXPCManager : NSObject {

	char _invalid;
	char _interrupted;
	int _listenerResumedToken;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _xpcSetupQueue;
	NSMutableArray* _observers;

}

@property (retain) NSObject*<OS_dispatch_queue> xpcSetupQueue;              //@synthesize xpcSetupQueue=_xpcSetupQueue - In the implementation block
@property (assign) int listenerResumedToken;                                //@synthesize listenerResumedToken=_listenerResumedToken - In the implementation block
@property (assign) char interrupted;                                        //@synthesize interrupted=_interrupted - In the implementation block
@property (retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableArray * observers;                              //@synthesize observers=_observers - In the implementation block
@property (getter=isInvalid) char invalid;                                  //@synthesize invalid=_invalid - In the implementation block
+(id)serviceManagerClientInterface;
+(id)serviceManagerInterface;
+(id)unlockInterface;
+(id)hotspotClientInterface;
+(id)hotspotInterface;
+(void)initialize;
+(id)sharedManager;
+(id)xpcManagerInterface;
-(void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)streamsForMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)notifyOfInterruption;
-(void)notifyOfInvalidation;
-(void)notifyOfResume;
-(void)unlockManagerWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcSetupQueue;
-(void)setXpcSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSMutableArray *)observers;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(char)interrupted;
-(char)isInvalid;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)setInterrupted:(char)arg1 ;
-(void)setupConnection;
-(void)setInvalid:(char)arg1 ;
-(int)listenerResumedToken;
-(void)setListenerResumedToken:(int)arg1 ;
-(void)appleAccountSignedIn;
-(void)appleAccountSignedOut;
@end

