/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageTransportDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSXPCInterface, HMDXPCMessageCountTracker, NSMutableDictionary, HMDProcessMonitor, NSXPCListener, HMDApplicationRegistry, NSArray, NSString;

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate, HMFTimerDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _connections;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteObjectInterface;
	HMDXPCMessageCountTracker* _xpcCounterTracker;
	NSMutableDictionary* _cachedResponses;
	HMDProcessMonitor* _processMonitor;
	NSXPCListener* _listener;

}

@property (readonly) NSXPCListener * listener;                                  //@synthesize listener=_listener - In the implementation block
@property (readonly) HMDProcessMonitor * processMonitor;                        //@synthesize processMonitor=_processMonitor - In the implementation block
@property (readonly) HMDApplicationRegistry * applicationRegistry; 
@property (copy,readonly) NSArray * connections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)defaultTransport;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)start;
-(NSXPCListener *)listener;
-(char)stop;
-(NSArray *)connections;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDProcessMonitor *)processMonitor;
-(void)timerDidFire:(id)arg1 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(id)dumpState;
-(void)cacheResponseMessage:(id)arg1 ;
-(void)cacheResponsesForMessageWithIdentifier:(id)arg1 referenceIdentifier:(id)arg2 ;
-(id)retrieveAndClearMessagesForReferenceIdentifier:(id)arg1 ;
-(id)activeRequests;
-(void)submitCounters;
-(HMDApplicationRegistry *)applicationRegistry;
@end
