/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/Versions/A/CoreRE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_listener;
#import <CoreRE/CoreRE-Structs.h>
@class NSObject;

@interface NWListener : NSObject {

	NSObject*<OS_dispatch_queue> listenerQueue;
	NSObject*<OS_dispatch_queue> transportQueue;
	NSObject*<OS_dispatch_semaphore> readySemaphore;
	NSObject*<OS_nw_listener> listener;
	int listenerState;
	os_unfair_lock_s layerLock;
	NWProtocolLayer* layer;

}
-(void)setListener:(id)arg1 ;
-(id)initWithLayer:(NWProtocolLayer*)arg1 ;
-(void)stopListening;
-(void)waitForReady;
@end

