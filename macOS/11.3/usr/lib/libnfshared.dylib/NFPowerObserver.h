/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFPowerObserverDelegate, OS_dispatch_queue;
#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NSObject;

@interface NFPowerObserver : NSObject {

	id<NFPowerObserverDelegate> _delegate;
	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	void* _sleepMessageArgument;
	char _willSleep;

}

@property (readonly) char willSleep;              //@synthesize willSleep=_willSleep - In the implementation block
-(void)_powerNotificationMessage:(unsigned)arg1 argument:(void*)arg2 ;
-(BOOL)isPluggedIntoPower;
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(char)willSleep;
-(char)registerForEvents;
-(void)unregisterForEvents;
-(void)allowSleep;
@end

