/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MRTelevisionControllerBlockCallback : NSObject {

	/*^block*/id _callbackBlock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id callbackBlock;                                //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithCallbackBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)callbackBlock;
@end

