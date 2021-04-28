/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue, OS_xpc_object, RBDaemonContextProviding, OS_os_transaction;
@class NSObject, NSMapTable, NSMutableArray, NSString;

@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;
	NSMapTable* _lock_connectionToClientMap;
	NSMapTable* _lock_identifierToClientMap;
	NSMutableArray* _lock_readyClients;
	id<RBDaemonContextProviding> _context;
	NSObject*<OS_os_transaction> _transaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)stateCaptureTitle;
-(NSString *)debugDescription;
-(id)init;
-(id)captureState;
@end

