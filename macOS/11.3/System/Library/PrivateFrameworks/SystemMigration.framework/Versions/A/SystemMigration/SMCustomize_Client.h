/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MigrationCustomizeEventsListener.h>
#import <libobjc.A.dylib/SMSizingDelegate.h>

@protocol SMCustomize_Client_Delegate, SMDPCustomizeProtocol;
@class NSString, NSXPCInterface, NSXPCConnection, SMSystem_Client;

@interface SMCustomize_Client : NSObject <MigrationCustomizeEventsListener, SMSizingDelegate> {

	id<SMCustomize_Client_Delegate> _delegate;
	NSString* _pathingProgressMessage;
	NSXPCInterface* _daemonInterface;
	NSXPCInterface* _exportedInterface;
	NSXPCConnection* _daemonConnection;
	SMSystem_Client* _customizeSystem;
	id<SMDPCustomizeProtocol> _daemonProxy;

}

@property (retain) NSXPCInterface * daemonInterface;                      //@synthesize daemonInterface=_daemonInterface - In the implementation block
@property (retain) NSXPCInterface * exportedInterface;                    //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (retain) NSXPCConnection * daemonConnection;                    //@synthesize daemonConnection=_daemonConnection - In the implementation block
@property (retain) SMSystem_Client * customizeSystem;                     //@synthesize customizeSystem=_customizeSystem - In the implementation block
@property (retain) id<SMDPCustomizeProtocol> daemonProxy;                 //@synthesize daemonProxy=_daemonProxy - In the implementation block
@property (retain) NSString * pathingProgressMessage;                     //@synthesize pathingProgressMessage=_pathingProgressMessage - In the implementation block
@property (__weak) id<SMCustomize_Client_Delegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)customizeEventsListenerInterface;
-(void)dealloc;
-(id<SMCustomize_Client_Delegate>)delegate;
-(void)setDelegate:(id<SMCustomize_Client_Delegate>)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSXPCInterface *)exportedInterface;
-(NSXPCConnection *)daemonConnection;
-(void)setDaemonConnection:(NSXPCConnection *)arg1 ;
-(void)submitRequest:(id)arg1 ;
-(id)initWithSystem:(id)arg1 ;
-(id<SMDPCustomizeProtocol>)daemonProxy;
-(void)setDaemonProxy:(id<SMDPCustomizeProtocol>)arg1 ;
-(void)pathingProgressFormatKey:(id)arg1 arguments:(id)arg2 ;
-(void)cancelSizingForSystem:(id)arg1 ;
-(void)sizeAllUsersForSystem:(id)arg1 includingVaultUsers:(char)arg2 ;
-(NSString *)pathingProgressMessage;
-(void)informationForBundlesAtPaths:(id)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)sizingCompletedForUserWithUUID:(id)arg1 excludablePaths:(id)arg2 onSystem:(id)arg3 ;
-(void)preliminarySize:(unsigned long long)arg1 forUserWithUUID:(id)arg2 onSystem:(id)arg3 ;
-(void)preliminarySize:(unsigned long long)arg1 andCount:(unsigned long long)arg2 forPathGroup:(unsigned long long)arg3 onSystem:(id)arg4 ;
-(void)sizingCompletedForPathGroup:(unsigned long long)arg1 onSystem:(id)arg2 withSize:(unsigned long long)arg3 ;
-(void)preliminarySize:(unsigned long long)arg1 forComponent:(id)arg2 onSystem:(id)arg3 ;
-(void)sizingCompletedForComponent:(id)arg1 onSystem:(id)arg2 withSize:(unsigned long long)arg3 ;
-(void)preliminarySizeForCustomPaths:(unsigned long long)arg1 type:(unsigned long long)arg2 user:(id)arg3 onSystem:(id)arg4 ;
-(void)sizingCompletedForCustomPathType:(unsigned long long)arg1 user:(id)arg2 onSystem:(id)arg3 withSize:(unsigned long long)arg4 ;
-(void)setDaemonInterface:(NSXPCInterface *)arg1 ;
-(NSXPCInterface *)daemonInterface;
-(id)sizeForPathGroup:(unsigned long long)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3 ;
-(void)beginSizeCalculationForForCustomPathType:(unsigned long long)arg1 user:(id)arg2 onSourceSystem:(id)arg3 andDestinationSystem:(id)arg4 ;
-(char)hasCustomPathsForSystem:(id)arg1 destinationSystem:(id)arg2 ;
-(id)sizeForComponent:(id)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3 ;
-(void)setCustomizeSystem:(SMSystem_Client *)arg1 ;
-(SMSystem_Client *)customizeSystem;
-(void)startCustomizer;
-(void)connectionErrorOccurred:(id)arg1 ;
-(void)setPathingProgressMessage:(NSString *)arg1 ;
-(void)beginSizeCalculationForComponent:(id)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3 ;
@end

