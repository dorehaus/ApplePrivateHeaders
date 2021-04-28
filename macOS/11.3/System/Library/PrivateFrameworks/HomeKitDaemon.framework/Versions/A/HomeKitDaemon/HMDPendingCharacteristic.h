/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HMDCharacteristicWriteRequest, NSObject;

@interface HMDPendingCharacteristic : NSObject {

	HMDCharacteristicWriteRequest* _writeRequest;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;

}

@property (readonly) HMDCharacteristicWriteRequest * writeRequest;              //@synthesize writeRequest=_writeRequest - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (readonly) id handler;                                                //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithCharacteristic:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(HMDCharacteristicWriteRequest *)writeRequest;
@end
