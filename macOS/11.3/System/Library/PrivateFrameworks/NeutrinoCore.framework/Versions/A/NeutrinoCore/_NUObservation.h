/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _NUObservation : NSObject {

	id _observer;
	long long _key;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (nonatomic,__weak,readonly) id observer;                              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) long long key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id block;                                        //@synthesize block=_block - In the implementation block
-(id)init;
-(id)block;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)key;
-(id)observer;
-(id)initWithObserver:(id)arg1 key:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)notifyWithBlock:(/*^block*/id)arg1 ;
@end

