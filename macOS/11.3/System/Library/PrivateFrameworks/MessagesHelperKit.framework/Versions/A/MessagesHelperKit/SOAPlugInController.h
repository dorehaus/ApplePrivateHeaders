/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessagesHelperKit.framework/Versions/A/MessagesHelperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SOAPlugInControllerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSString;

@interface SOAPlugInController : NSObject <SOAPlugInControllerProtocol, NSXPCListenerDelegate> {

	char _isSuspended;
	NSMutableDictionary* _plugInNameToBundle;
	NSMutableDictionary* _plugInNameToController;
	NSMutableArray* _loadedConnections;
	NSObject*<OS_dispatch_queue> _pluginControllerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pluginControllerQueue;              //@synthesize pluginControllerQueue=_pluginControllerQueue - In the implementation block
@property (retain) NSMutableDictionary * plugInNameToBundle;                                  //@synthesize plugInNameToBundle=_plugInNameToBundle - In the implementation block
@property (retain) NSMutableDictionary * plugInNameToController;                              //@synthesize plugInNameToController=_plugInNameToController - In the implementation block
@property (retain) NSMutableArray * loadedConnections;                                        //@synthesize loadedConnections=_loadedConnections - In the implementation block
@property (assign) char isSuspended;                                                          //@synthesize isSuspended=_isSuspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)isSuspended;
-(void)reconnect;
-(void)removeConnection:(id)arg1 ;
-(void)setIsSuspended:(char)arg1 ;
-(oneway void)connectPlugIn:(id)arg1 withConnectionHandler:(/*^block*/id)arg2 ;
-(void)suspendConnections;
-(NSMutableDictionary *)plugInNameToBundle;
-(NSMutableDictionary *)plugInNameToController;
-(void)_lastConnectionDied:(id)arg1 ;
-(char)_isAppRunning;
-(NSMutableArray *)loadedConnections;
-(void)_exitCleanly;
-(void)setPlugInNameToBundle:(NSMutableDictionary *)arg1 ;
-(void)setPlugInNameToController:(NSMutableDictionary *)arg1 ;
-(void)setLoadedConnections:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pluginControllerQueue;
-(void)setPluginControllerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

