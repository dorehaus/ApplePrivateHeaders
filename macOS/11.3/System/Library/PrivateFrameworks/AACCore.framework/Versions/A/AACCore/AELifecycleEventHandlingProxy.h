/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/Versions/A/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AELifecycleEventHandling.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, AEXPCProxy, NSObject;

@interface AELifecycleEventHandlingProxy : NSObject <AELifecycleEventHandling> {

	NSXPCConnection* _connection;
	AEXPCProxy* _xpcProxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)proxyWithEndpoint:(id)arg1 queue:(id)arg2 ;
-(NSXPCConnection *)connection;
-(void)handleEventDidBeginWithCompletion:(/*^block*/id)arg1 ;
-(void)handleEventDidInvalidateWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

