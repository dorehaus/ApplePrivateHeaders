/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IOKService, IOKConnection, IOKNotificationPort, IOKInterestNotification, NSObject, AVBInterface;

@interface AVB1722MAAP : NSObject {

	IOKService* _service;
	IOKConnection* _connection;
	IOKNotificationPort* _notificationPort;
	IOKInterestNotification* _interestNotification;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _userClientSyncQueue;
	int _userClientAccessCount;
	AVBInterface* interface;

}

@property (__weak) AVBInterface * interface; 
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 ;
-(void)dealloc;
-(id)initWithInterface:(id)arg1 ;
-(AVBInterface *)interface;
-(void)setInterface:(AVBInterface *)arg1 ;
-(void)serviceTerminated;
-(void)beginProtectedUserClientCall;
-(void)endProtectedUserClientCall;
-(void)callbackWithArgs:(unsigned long long*)arg1 argCount:(unsigned)arg2 ;
-(char)allocateMulticastMAC:(id)arg1 error:(id*)arg2 ;
-(char)deallocateMulticastMAC:(id)arg1 error:(id*)arg2 ;
@end
