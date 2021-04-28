/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAP2CoAPIOConsumer;
@class HMFActivity;

@interface HAP2CoAPIOThreadQueueEntry : NSObject {

	char _shouldRegister;
	char _shouldUnregister;
	id<HAP2CoAPIOConsumer> _consumer;
	/*^block*/id _sessionBlock;
	HMFActivity* _activity;

}
@end

