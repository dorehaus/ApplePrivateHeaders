/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOUSBHost.framework/Versions/A/IOUSBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IOUSBHost/IOUSBHost-Structs.h>
@class NSObject, NSRecursiveLock;

@interface IOUSBHostInterestNotifier : NSObject {

	char _destroyed;
	unsigned _service;
	unsigned _notifier;
	unsigned _matchingIterator;
	NSObject* _owner;
	NSRecursiveLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	IONotificationPortRef _notificationPortRef;
	/*function pointer*/void* _callback;

}

@property (assign,nonatomic,__weak) NSObject * owner;                                //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) char destroyed;                                         //@synthesize destroyed=_destroyed - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) IONotificationPortRef notificationPortRef;              //@synthesize notificationPortRef=_notificationPortRef - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* callback;                     //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) unsigned service;                                       //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned notifier;                                      //@synthesize notifier=_notifier - In the implementation block
@property (assign,nonatomic) unsigned matchingIterator;                              //@synthesize matchingIterator=_matchingIterator - In the implementation block
-(void)dealloc;
-(NSRecursiveLock *)lock;
-(void)setOwner:(NSObject *)arg1 ;
-(NSObject *)owner;
-(NSObject*<OS_dispatch_queue>)queue;
-(/*function pointer*/void*)callback;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)destroy;
-(unsigned)service;
-(void)setService:(unsigned)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(id)initWithOwner:(id)arg1 matchingDictionary:(id)arg2 callback:(/*function pointer*/void*)arg3 ;
-(void)setNotificationPortRef:(IONotificationPortRef)arg1 ;
-(IONotificationPortRef)notificationPortRef;
-(void)setDestroyed:(char)arg1 ;
-(id)initWithOwner:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(unsigned)notifier;
-(unsigned)matchingIterator;
-(void)setMatchingIterator:(unsigned)arg1 ;
-(char)destroyed;
-(void)setNotifier:(unsigned)arg1 ;
-(id)initWithOwner:(id)arg1 service:(unsigned)arg2 callback:(/*function pointer*/void*)arg3 ;
@end
