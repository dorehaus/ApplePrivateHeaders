/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_queue;
@class NSProtocolChecker, NSObject;

@interface IDSDaemonControllerForwarder : NSProxy {

	NSProtocolChecker* _protocol;
	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	int _priority;

}

@property (assign,nonatomic) int priority;                                                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSProtocolChecker * protocol;                                 //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ivarQueue;                       //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> remoteMessageQueue;              //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSProtocolChecker *)protocol;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(id)completion;
-(id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 ;
-(id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)ivarQueue;
-(NSObject*<OS_dispatch_queue>)remoteMessageQueue;
@end

