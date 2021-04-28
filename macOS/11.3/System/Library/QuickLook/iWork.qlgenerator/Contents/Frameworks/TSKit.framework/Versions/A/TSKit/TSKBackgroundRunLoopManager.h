/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
#import <TSKit/TSKit-Structs.h>
@class NSObject, NSHashTable, TSKRunLoopTicket;

@interface TSKBackgroundRunLoopManager : NSObject {

	NSObject*<OS_dispatch_group> _startingRunLoopGroup;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _requestSerializationQueue;
	NSHashTable* _activeTickets;
	TSKRunLoopTicket* _mainRunLoopTicket;
	TSKRunLoopTicket* _startingTicket;

}
+(id)sharedManager;
-(id)initSingleton;
-(void)startRunLoop;
-(char)isManagedRunLoop:(CFRunLoopRef)arg1 ;
-(id)runLoopTicketForManagedRunLoop:(CFRunLoopRef)arg1 ;
-(opaque_pthread_t*)threadIdForTicket:(id)arg1 ;
-(CFRunLoopRef)runLoopForTicket:(id)arg1 ;
-(id)runLoopTicketWithQualityOfService:(long long)arg1 ;
@end
