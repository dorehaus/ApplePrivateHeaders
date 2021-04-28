/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/Versions/A/RemoteXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_xpc_remote_listener : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	int type;
	/*^block*/id accept_handler;
	/*^block*/id cancel_handler;
	BOOL canceled;

}
-(void)dealloc;
@end

