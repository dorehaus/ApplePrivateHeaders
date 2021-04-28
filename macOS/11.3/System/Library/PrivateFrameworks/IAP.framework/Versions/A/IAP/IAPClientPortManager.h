/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Versions/A/IAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSMutableDictionary, NSObject;

@interface IAPClientPortManager : NSObject {

	NSMutableDictionary* _portList;
	NSObject*<OS_dispatch_queue> _portListQueue;
	char _iaptransportdIsRunning;
	NSObject*<OS_xpc_object> _iaptransportdXPCConnection;

}

@property (assign,nonatomic) char iaptransportdIsRunning; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)sendData:(id)arg1 data:(char*)arg2 length:(unsigned short)arg3 ;
-(int)unregisterSendDataHandler:(id)arg1 ;
-(char)iaptransportdIsRunning;
-(void)setIaptransportdIsRunning:(char)arg1 ;
-(int)registerSendDataHandler:(id)arg1 queue:(id)arg2 sendBlock:(/*^block*/id)arg3 ;
-(int)forwardAccessoryDataToIAP:(id)arg1 data:(const char*)arg2 length:(unsigned short)arg3 ;
-(void)reRegisterHandlers;
@end

