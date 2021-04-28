/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object, CBXpcConnectionDelegate;
@class NSObject, NSMutableDictionary;

@interface CBXpcConnection : NSObject {

	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableDictionary* _options;
	int _sessionType;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSObject*<OS_xpc_object> _xpcConnection;
	char _uiAppIsBackgrounded;
	id<CBXpcConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CBXpcConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)_applicationDidEnterBackgroundNotification;
-(void)_applicationWillEnterForegroundNotification;
-(id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)_nameForMessage:(unsigned short)arg1 ;
-(void)_sendBarrier;
-(void)_checkOut;
-(void)_handleFinalized;
-(void)_handleMsg:(id)arg1 ;
-(void)_handleReset;
-(void)_handleInvalid;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4 ;
-(id<CBXpcConnectionDelegate>)delegate;
-(void)setDelegate:(id<CBXpcConnectionDelegate>)arg1 ;
-(void)disconnect;
-(void)setTargetQueue:(id)arg1 ;
-(void)_checkIn;
-(void)_handleConnectionEvent:(id)arg1 ;
-(void)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
@end

